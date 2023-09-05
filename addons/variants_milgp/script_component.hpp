#define COMPONENT variants_milgp
#define COMPONENT_BEAUTIFIED MilGP Variants
#include "\x\tacs\addons\main\script_mod.hpp"

#ifdef DEBUG_ENABLED_VARIANTS_MILGP
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_VARIANTS_MILGP
    #define DEBUG_SETTINGS DEBUG_SETTINGS_VARIANTS_MILGP
#endif

#include "\x\tacs\addons\main\script_macros.hpp"

#define CCLASS(var1) TRIPLES(PREFIX,milgp,var1)
