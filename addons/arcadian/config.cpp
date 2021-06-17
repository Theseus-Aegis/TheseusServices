#include "script_component.hpp"
#include "base\config_crewanimation.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            QCLASS(Arcadian_I_Black),
            QCLASS(Arcadian_B_Black),
            QCLASS(Arcadian_Armed_I_Black),
            QCLASS(Arcadian_Armed_B_Black)
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
