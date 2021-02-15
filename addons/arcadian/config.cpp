#include "script_component.hpp"
#include "CfgVehicles\config_crewanimation.hpp"

class CfgPatches {
    class Arcadian {
        name = COMPONENT_NAME;
        units[] = {
            QCLASS(Arcadian_I_Armed_Black),
            QCLASS(Arcadian_I_Armed_Tan),
            QCLASS(Arcadian_I_Armed_Green),
            QCLASS(Arcadian_I_Armed_Grey),
            QCLASS(Arcadian_B_Armed_Black),
            QCLASS(Arcadian_B_Armed_Tan),
            QCLASS(Arcadian_B_Armed_Green),
            QCLASS(Arcadian_B_Armed_Grey),
            QCLASS(Arcadian_I_Black),
            QCLASS(Arcadian_I_Tan),
            QCLASS(Arcadian_I_Green),
            QCLASS(Arcadian_I_Grey),
            QCLASS(Arcadian_B_Black),
            QCLASS(Arcadian_B_Tan),
            QCLASS(Arcadian_B_Green),
            QCLASS(Arcadian_B_Grey)
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacs_main"};
        author = ECSTRING(main,Author);
        authors[] = {"TyroneMF", "GilleeDoo"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgFunctions.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
