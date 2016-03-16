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


def update_translations(token):
    diag = sp.check_output(["python3", "tools/stringtablediag.py", "--markdown"])
    diag = str(diag, "utf-8")
    repo = Github(token).get_repo(REPOPATH)
    issue = repo.get_issue(TRANSLATIONISSUE)
    issue.edit(body=TRANSLATIONBODY.format(diag))

# def update_classnames(token):
#     diag = sp.check_output(["python3", "tools/export_classnames.py", "--print"])
#     diag = str(diag, "utf-8")
#     repo = Github(token).get_repo(REPOPATH_WIKI)
#     # @todo - requires https://github.com/PyGithub/PyGithub/pull/379


def main():
    print("Obtaining token ...")
    try:
        token = os.environ["GH_TOKEN"]
    except:
        print("Could not obtain token.")
        print(traceback.format_exc())
        return 1
    else:
        print("Done")

    print("\nUpdating translation issue ...")
    try:
        update_translations(token)
    except:
        print("Failed to update translation issue.")
        print(traceback.format_exc())
        return 1
    else:
        print("Done")

    # print("\nUpdating Class Names wiki page ...")
    # try:
    #     update_classnames(token)
    # except:
    #     print("Failed to update CLass Names wiki page.")
    #     print(traceback.format_exc())
    #     return 1
    # else:
    #     print("Done")

    return 0


if __name__ == "__main__":
    sys.exit(main())
