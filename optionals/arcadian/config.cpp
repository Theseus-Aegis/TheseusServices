#include "script_component.hpp"

class CfgPatches {
    class Arcadian {
        name = COMPONENT_NAME;
        units[] = {
            QCLASS(Arcadian_I_Black),
            QCLASS(Arcadian_B_Black),
            QCLASS(Arcadian_I_Tan),
            QCLASS(Arcadian_B_Tan),
            QCLASS(Arcadian_I_Green),
            QCLASS(Arcadian_B_Green)
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacs_main", "CUP_Wheeled_SUV"};
        author = ECSTRING(main,Author);
        authors[] = {"TyroneMF", "GilleeDoo"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
