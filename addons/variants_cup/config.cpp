#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            QCLASS(unit_gd_black_kneeless),
            QCLASS(unit_gd_earth_kneeless),
            QCLASS(unit_gd_pattern_foliage_kneeless),
            QCLASS(unit_gd_plaid_black1_kneeless),
            QCLASS(unit_gd_plaid_black2_kneeless),
            QCLASS(unit_gd_plaid_buffalo1_kneeless),
            QCLASS(unit_gd_plaid_buffalo2_kneeless),
            QCLASS(unit_gd_plaid_earth1_kneeless),
            QCLASS(unit_gd_plaid_earth2_kneeless),
            QCLASS(unit_gd_plaid_earth3_kneeless),
            QCLASS(unit_gd_plaid_foliage1_kneeless),
            QCLASS(unit_gd_plaid_foliage2_kneeless),
            QCLASS(unit_gd_plaid_foliage3_kneeless),
            QCLASS(unit_gd_plaid_mm1_kneeless),
            QCLASS(unit_gd_plaid_mm2_kneeless),
            QCLASS(unit_gd_plaid_mm3_kneeless),
            QCLASS(unit_gd_plaid_mm4_kneeless),
            QCLASS(unit_gd_plaid_mm5_kneeless),
            QCLASS(unit_gd_white1_kneeless),
            QCLASS(unit_gd_white2_kneeless)
        };
        weapons[] = {
            QCLASS(uniform_gd_black_kneeless),
            QCLASS(uniform_gd_earth_kneeless),
            QCLASS(uniform_gd_pattern_foliage_kneeless),
            QCLASS(uniform_gd_plaid_black1_kneeless),
            QCLASS(uniform_gd_plaid_black2_kneeless),
            QCLASS(uniform_gd_plaid_buffalo1_kneeless),
            QCLASS(uniform_gd_plaid_buffalo2_kneeless),
            QCLASS(uniform_gd_plaid_earth1_kneeless),
            QCLASS(uniform_gd_plaid_earth2_kneeless),
            QCLASS(uniform_gd_plaid_earth3_kneeless),
            QCLASS(uniform_gd_plaid_foliage1_kneeless),
            QCLASS(uniform_gd_plaid_foliage2_kneeless),
            QCLASS(uniform_gd_plaid_foliage3_kneeless),
            QCLASS(uniform_gd_plaid_mm1_kneeless),
            QCLASS(uniform_gd_plaid_mm2_kneeless),
            QCLASS(uniform_gd_plaid_mm3_kneeless),
            QCLASS(uniform_gd_plaid_mm4_kneeless),
            QCLASS(uniform_gd_plaid_mm5_kneeless),
            QCLASS(uniform_gd_white1_kneeless),
            QCLASS(uniform_gd_white2_kneeless)
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
