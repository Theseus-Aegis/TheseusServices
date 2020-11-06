#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            QCLASS(C130J_I_Theseus),
            QCLASS(C130J_B_Theseus)
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacs_units", "CUP_AirVehicles_C130J"};
        author = ECSTRING(main,Author);
        authors[] = {"GilleeDoo", "Tyrone"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
