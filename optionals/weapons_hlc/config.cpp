#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacs_units", "hlcweapons_ar15"};
        author = ECSTRING(main,Author);
        authors[] = {"Jonpas"};
        PBO_URL
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
