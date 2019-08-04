#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            QCLASS(Heli_I_MH6_Blue),
            QCLASS(Heli_B_MH6_Blue),
            QCLASS(Offroad_I_Black),
            QCLASS(Offroad_B_Black),
            QCLASS(Offroad_I_Armed_Black),
            QCLASS(Offroad_B_Armed_Black),
            QCLASS(Polaris_I_Black),
            QCLASS(Polaris_B_Black),
            QCLASS(Polaris_I_Armed_Black),
            QCLASS(Polaris_B_Armed_Black),
            QCLASS(Polaris_I_AT_Black),
            QCLASS(Polaris_B_AT_Black)
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacs_units"};
        author = ECSTRING(main,Author);
        authors[] = {"Pomigit", "BadHabitz", "Jonpas"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
