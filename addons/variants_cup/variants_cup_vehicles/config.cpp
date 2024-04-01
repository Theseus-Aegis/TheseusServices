#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        name = COMPONENT_NAME;
        units[] = {
            QCLASS(C130J_I_Theseus),
            QCLASS(C130J_B_Theseus)
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacs_units", "CUP_AirVehicles_C130J"};
        skipWhenMissingDependencies = 1;
        author = ECSTRING(main,Author);
        authors[] = {"GilleeDoo", "Mike"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
        addonRootClass = QUOTE(ADDON);
    };
};

#include "CfgVehicles.hpp"
