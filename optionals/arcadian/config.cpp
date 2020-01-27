#include "script_component.hpp"

class CfgPatches {
    class Arcadian {
        name = COMPONENT_NAME;
        units[] = {
            QCLASS(Arcadian_B_SUV),
            QCLASS(Arcadian_B_SUV_Tan),
            QCLASS(Arcadian_B_SUV_Green),
            QCLASS(Arcadian_I_SUV_Black),
            QCLASS(Arcadian_I_SUV_Tan),
            QCLASS(Arcadian_I_SUV_Green)
        };
        weapons[] = { };
        requiredVersion = 0.1;
        requiredAddons[] = { "tacs_main", "CUP_WheeledVehicles_Core", "CUP_Wheeled_SUV" };
        author = ECSTRING(main,Author);
        authors[] = {"TyroneMF", "GilleeDoo"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
