<p align="center">
    <img src="https://github.com/Theseus-Aegis/TheseusServices/blob/master/extras/assets/logo/logo_tacs_ca.png">
</p>
<p align="center">
    <a href="https://github.com/Theseus-Aegis/TheseusServices/releases">
        <img src="https://img.shields.io/badge/Version-0.0.1-blue.svg?style=flat-square" alt="Theseus Services Version">
    </a>
    <a href="https://github.com/Theseus-Aegis/TheseusServices/releases/download/v0.0.1/TheseusServices_0.0.1.zip">
        <img src="https://img.shields.io/badge/Download-xy.z_MB-green.svg?style=flat-square" alt="Theseus Services Download">
    </a>
    <a href="https://github.com/Theseus-Aegis/TheseusServices/issues">
        <img src="https://img.shields.io/github/issues-raw/Theseus-Aegis/TheseusServices.svg?style=flat-square&label=Issues" alt="Theseus Services Issues">
    </a>
    <a href="https://github.com/Theseus-Aegis/TheseusServices/blob/master/LICENSE">
        <img src="https://img.shields.io/badge/License-GPLv2-red.svg?style=flat-square" alt="Theseus Services License">
    </a>
    <a href="https://travis-ci.org/Theseus-Aegis/TheseusServices">
        <img src="https://img.shields.io/travis/Theseus-Aegis/TheseusServices.svg?style=flat-square" alt="Theseus Services Build Status">
    </a>
</p>
<p align="center"><sup><strong>Requires the latest version of <a href="https://github.com/CBATeam/CBA_A3/releases">CBA A3</a>.</strong></sup></p>

**Theseus Services** is a content mod providing a number of assets for Arma 3, aimed at Private Military Company game style, developed around the needs of [Theseus Incorporated](http://www.theseus-aegis.com) community. Starting out as a mod by *Pomigit*, then maintained by *BadHabitz* with a number of other community developers contributing, it is a re-brand of a highly successful **PG Services** mod.

The project is entirely **open-source** and all contributions are welcome. Feel free to maintain your own custom version, so long as the changes you make are open to the public in accordance with the GNU General Public License ([GPLv2](https://github.com/Theseus-Aegis/TheseusServices/blob/master/LICENSE)).


### Development Notes

[Release Build](tools/make.py) command line:
```
make.py force checkexternal release MAJOR.MINOR.PATCH
```

[GitHub Changelog Generator](https://github.com/skywinder/github-changelog-generator) command line:
```
github_changelog_generator --user Theseus-Aegis --project theseus-services --token <insert_token> --date-format %Y-%m-%d --bugs-label "**Fixed Bugs:**" --enhancement-label "**Implemented Features & Enhancements:**" --header-label "# Changelog" --pr-label "**Merged Pull Requests**" --no-issues-wo-labels --no-pr-wo-labels --no-unreleased --exclude-labels duplicate,question,invalid,wontfix,tools --bug-labels bug,"critical bug" --enhancement-labels enhancement,"feature request"
```
