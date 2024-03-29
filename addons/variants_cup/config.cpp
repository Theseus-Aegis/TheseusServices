#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            QCLASS(unit_long_black),
            QCLASS(unit_long_earth),
            QCLASS(unit_long_pattern_foliage),
            QCLASS(unit_long_plaid_black1),
            QCLASS(unit_long_plaid_black2),
            QCLASS(unit_long_plaid_buffalo1),
            QCLASS(unit_long_plaid_buffalo2),
            QCLASS(unit_long_plaid_earth1),
            QCLASS(unit_long_plaid_earth2),
            QCLASS(unit_long_plaid_earth3),
            QCLASS(unit_long_plaid_foliage1),
            QCLASS(unit_long_plaid_foliage2),
            QCLASS(unit_long_plaid_foliage3),
            QCLASS(unit_long_plaid_mm1),
            QCLASS(unit_long_plaid_mm2),
            QCLASS(unit_long_plaid_mm3),
            QCLASS(unit_long_plaid_mm4),
            QCLASS(unit_long_plaid_mm5),
            QCLASS(unit_long_foliage_kneepads),
            QCLASS(unit_rolled_black),
            QCLASS(unit_rolled_earth),
            QCLASS(unit_rolled_pattern_foliage),
            QCLASS(unit_rolled_plaid_black1),
            QCLASS(unit_rolled_plaid_black2),
            QCLASS(unit_rolled_plaid_buffalo1),
            QCLASS(unit_rolled_plaid_buffalo2),
            QCLASS(unit_rolled_plaid_earth1),
            QCLASS(unit_rolled_plaid_earth2),
            QCLASS(unit_rolled_plaid_earth3),
            QCLASS(unit_rolled_plaid_foliage1),
            QCLASS(unit_rolled_plaid_foliage2),
            QCLASS(unit_rolled_plaid_foliage3),
            QCLASS(unit_rolled_plaid_mm1),
            QCLASS(unit_rolled_plaid_mm2),
            QCLASS(unit_rolled_plaid_mm3),
            QCLASS(unit_rolled_plaid_mm4),
            QCLASS(unit_rolled_plaid_mm5)
        };
        weapons[] = {
            QCLASS(uniform_long_black),
            QCLASS(uniform_long_earth),
            QCLASS(uniform_long_pattern_foliage),
            QCLASS(uniform_long_plaid_black1),
            QCLASS(uniform_long_plaid_black2),
            QCLASS(uniform_long_plaid_buffalo1),
            QCLASS(uniform_long_plaid_buffalo2),
            QCLASS(uniform_long_plaid_earth1),
            QCLASS(uniform_long_plaid_earth2),
            QCLASS(uniform_long_plaid_earth3),
            QCLASS(uniform_long_plaid_foliage1),
            QCLASS(uniform_long_plaid_foliage2),
            QCLASS(uniform_long_plaid_foliage3),
            QCLASS(uniform_long_plaid_mm1),
            QCLASS(uniform_long_plaid_mm2),
            QCLASS(uniform_long_plaid_mm3),
            QCLASS(uniform_long_plaid_mm4),
            QCLASS(uniform_long_plaid_mm5),
            QCLASS(uniform_long_foliage_kneepads),
            QCLASS(uniform_rolled_black),
            QCLASS(uniform_rolled_earth),
            QCLASS(uniform_rolled_pattern_foliage),
            QCLASS(uniform_rolled_plaid_black1),
            QCLASS(uniform_rolled_plaid_black2),
            QCLASS(uniform_rolled_plaid_buffalo1),
            QCLASS(uniform_rolled_plaid_buffalo2),
            QCLASS(uniform_rolled_plaid_earth1),
            QCLASS(uniform_rolled_plaid_earth2),
            QCLASS(uniform_rolled_plaid_earth3),
            QCLASS(uniform_rolled_plaid_foliage1),
            QCLASS(uniform_rolled_plaid_foliage2),
            QCLASS(uniform_rolled_plaid_foliage3),
            QCLASS(uniform_rolled_plaid_mm1),
            QCLASS(uniform_rolled_plaid_mm2),
            QCLASS(uniform_rolled_plaid_mm3),
            QCLASS(uniform_rolled_plaid_mm4),
            QCLASS(uniform_rolled_plaid_mm5)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacs_units"};
        skipWhenMissingDependencies = 1;
        author = ECSTRING(main,Author);
        authors[] = {"GilleeDoo", "Mike"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
