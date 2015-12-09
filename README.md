# Theseus Services
Open-source PMC content mod for Arma 3

**TBA**

### Development Notes

[Release Build](tools/make.py) command line:
```
make.py force checkexternal release MAJOR.MINOR.PATCH
```

[GitHub Changelog Generator](https://github.com/skywinder/github-changelog-generator) command line:
```
github_changelog_generator --user jonpas --project theseus-services --token <insert_token> --date-format %Y-%m-%d --bugs-label "**Fixed Bugs:**" --enhancement-label "**Implemented Features & Enhancements:**" --header-label "# Changelog" --pr-label "**Merged Pull Requests**" --no-issues-wo-labels --no-pr-wo-labels --no-unreleased --exclude-labels duplicate,question,invalid,wontfix,tools --bug-labels bug,"critical bug" --enhancement-labels enhancement,"feature request"
```
