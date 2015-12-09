/*
    CBA Framework Extracts
    https://github.com/CBATeam/CBA_A3/blob/master/addons/main/script_macros_common.hpp
*/

// General
#define VERSION_CONFIG version = VERSION; versionStr = QUOTE(VERSION); versionAr[] = {VERSION_AR}
#define ADDON DOUBLES(PREFIX,COMPONENT)

// Internal Functions
#define DOUBLES(var1,var2) ##var1##_##var2
