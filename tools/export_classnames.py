#!/usr/bin/env python3

# Author: Jonpas

import sys
import os
import re
import time
import itertools

######## GLOBALS #########
TEMP_DUMP = "temp/classnames.md"
##########################

def main():
    scriptpath = os.path.realpath(__file__)
    projectpath = os.path.dirname(os.path.dirname(scriptpath))
    addonspath = os.path.join(projectpath, "addons")
    optionalspath = os.path.join(projectpath, "optionals")

    # Get all info
    classNames = []
    gameNames = []
    inheritNames = []

    # Class Names and Inherits From Names
    for root, dirs, files in itertools.chain(os.walk(addonspath), os.walk(optionalspath)):
        for name in files:
            if name.startswith("Cfg") and name.endswith(".hpp"):
                with open(os.path.join(root, name)) as cfgFile:
                    for line in cfgFile:
                        match = re.search(r"class CLASS\((.+?)\): (.+?) ", line)

                        if match:
                            className = "tacs_{}".format(match.group(1))

                            if className not in classNames:
                                classNames.append(className)

                                inheritName = match.group(2)
                                if inheritName.startswith("CLASS("):
                                    inheritName = "tacs_{}".format(inheritName[6:-1])
                                inheritNames.append(inheritName)

    # In-Game Names
    for className in classNames:
        stringFound = False
        for root, dirs, files in itertools.chain(os.walk(addonspath), os.walk(optionalspath)):
            if stringFound: break
            for name in files:
                if stringFound: break
                if name == "stringtable.xml":
                    with open(os.path.join(root, name)) as stringtableFile:
                        for line in stringtableFile:
                            if className.startswith("tacs_Item"):
                                className = "tacs_{}".format(className[10:])
                            if "_I_" in className:
                                className = className.replace("_I_", "_")
                            if "_B_" in className:
                                className = className.replace("_B_", "_")

                            matchStringLocation = re.search(r'"STR_TACS_(.+?)_(.+?)"', line)
                            if matchStringLocation and "tacs_{}".format(matchStringLocation.group(2)) == className:
                                matchString = re.search(r"<English>(.+?)</English>", next(stringtableFile))
                                gameName = matchString.group(1).replace("&amp;", "&")
                                gameNames.append(gameName)
                                stringFound = True
                                break

        if not stringFound:
            gameNames.append("/")
            stringFound = True


    # Print or write to file
    date = time.strftime("%Y/%m/%d")
    totalClassNames = len(classNames)

    if "--print" in sys.argv:
        print("_Generated on: {}_\n".format(date))
        print("Type | Class Name | In-Game Name | Inherits From")
        print("---- | ---------- | ------------ | -------------")
        for className, gameName, inheritName in zip(classNames, gameNames, inheritNames):
            classType = "Item" if className.startswith("tacs_Item") else "Object"
            print("{} | `{}` | {} | `{}`".format(classType, className, gameName, inheritName))
        print("\n_Total: {}_".format(totalClassNames))
        print("\n**Legend:**  ",)
        print("Object - Standard object  ")
        print("Item - Ground item, placeable in Editor/Zeus")
    else:
        if not os.path.exists("temp"):
            os.makedirs("temp")

        with open(TEMP_DUMP, "w") as dumpFile:
            dumpFile.writelines([
                "_Generated on: {}_\n\n".format(date),
                "Type | Class Name | In-Game Name | Inherits From\n",
                "---- | ---------- | ------------ | -------------\n"
            ])

            for className, gameName, inheritName in zip(classNames, gameNames, inheritNames):
                classType = "Item" if className.startswith("tacs_Item") else "Object"
                dumpFile.write("{} | `{}` | {} | `{}`\n".format(classType, className, gameName, inheritName))

            dumpFile.writelines([
                "\n_Total: {}_".format(totalClassNames),
                "\n\n**Legend:**  \n",
                "Object - Standard object  \n",
                "Item - Ground item, placeable in Editor/Zeus"
            ])


if __name__ == "__main__":
    main()
