/*
    CBA Framework Extracts
    https://github.com/CBATeam/CBA_A3/blob/master/addons/main/script_macros_common.hpp
*/

// General
#define VERSION_CONFIG version = VERSION; versionStr = QUOTE(VERSION); versionAr[] = {VERSION_AR}
#define ADDON DOUBLES(PREFIX,COMPONENT)

// Internal
#define DOUBLES(var1,var2) ##var1##_##var2
#define TRIPLES(var1,var2,var3) ##var1##_##var2##_##var3
#define QUOTE(var1) #var1

// Global Variable
#define GVAR(var1) DOUBLES(ADDON,var1)
#define EGVAR(var1,var2) TRIPLES(PREFIX,var1,var2)
#define QGVAR(var1) QUOTE(GVAR(var1))
#define QEGVAR(var1,var2) QUOTE(EGVAR(var1,var2))

// String
#define LSTRING(var1) QUOTE(TRIPLES(STR,ADDON,var1))
#define ELSTRING(var1,var2) QUOTE(TRIPLES(STR,DOUBLES(PREFIX,var1),var2))
#define CSTRING(var1) QUOTE(TRIPLES($STR,ADDON,var1))
#define ECSTRING(var1,var2) QUOTE(TRIPLES($STR,DOUBLES(PREFIX,var1),var2))

// Path
#define PATHTOF(var1) \MAINPREFIX\PREFIX\SUBPREFIX\COMPONENT\var1

// Debug Functions
#include "script_debug.hpp"
