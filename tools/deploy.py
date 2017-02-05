#!/usr/bin/env python3

#################################################
# Theseus Services automatic deployment script  #
#              (~ ACE3 8e9c275)                 #
# ============================================= #
# This is not meant to be run directly!         #
#################################################

import os
import sys
import shutil
import traceback
import subprocess as sp
from pygithub3 import Github


TRANSLATIONISSUE = 1
TRANSLATIONBODY = """**[Translation Guide](https://github.com/Theseus-Aegis/TheseusServices/wiki/Translation-Guide)**

{}
"""

REPOUSER = "Theseus-Aegis"
REPONAME = "TheseusServices"
REPOPATH = "{}/{}".format(REPOUSER,REPONAME)
REPONAME_WIKI = "TheseusServices.wiki"
REPOPATH_WIKI = "{}/{}".format(REPOUSER,REPONAME_WIKI)

WIKI_CLASSNAMES_FILE = "Class-Names.md"


def update_translations(repo):
    diag = sp.check_output(["python3", "tools/stringtablediag.py", "--markdown"])
    diag = str(diag, "utf-8")
    issue = repo.get_issue(TRANSLATIONISSUE)
    issue.edit(body=TRANSLATIONBODY.format(diag))

def update_classnames(token):
    classnames_new = sp.check_output(["python3", "tools/export_classnames.py", "--print"])
    classnames_new = str(classnames_new, "utf-8")

    os.chdir("../{}".format(REPONAME_WIKI))

    with open(WIKI_CLASSNAMES_FILE, "w", newline="\n") as file:
        file.write(classnames_new)

    diff = sp.check_output(["git", "diff", "--name-only", WIKI_CLASSNAMES_FILE])
    diff = str(diff, "utf-8")

    if diff != "":
        # GitHub API does not expose wiki repos
        sp.call(["git", "config", "user.name", "Theseus-Bot"])
        sp.call(["git", "config", "user.email", "info@theseus-aegis.com"])
        sp.call(["git", "commit", "-am", "Update Class Names - Automatically committed through Travis CI."])
        sp.call(["git", "push", "--quiet"]) # quiet to make sure token is not displayed in Travis log
        print("Class Names wiki page successfully updated.")
    else:
        print("Class Names wiki page update skipped - no change.")

    os.chdir("../{}".format(REPONAME))


def main():
    print("Obtaining token ...")
    try:
        token = os.environ["GH_TOKEN"]
        repo = Github(token).get_repo(REPOPATH)
    except:
        print("Could not obtain token.")
        print(traceback.format_exc())
        return 1
    else:
        print("Token successfully obtained.")

    print("\nUpdating translation issue ...")
    try:
        update_translations(repo)
    except:
        print("Failed to update translation issue.")
        print(traceback.format_exc())
        return 2
    else:
        print("Translation issue successfully updated.")

    print("\nUpdating Class Names wiki page ...")
    try:
        sp.call(["git", "clone", "https://jonpas:{}@github.com/{}.git".format(token, REPOPATH_WIKI), "../{}".format(REPONAME_WIKI)])
        if os.path.isdir("../{}".format(REPONAME_WIKI)):
            update_classnames(token)
    except:
        print("Failed to update Class Names wiki page.")
        print(traceback.format_exc())
        return 3

    return 0


if __name__ == "__main__":
    sys.exit(main())
