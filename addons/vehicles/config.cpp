#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {
            QCLASS(Heli_I_MH6_Blue),
            QCLASS(Heli_B_MH6_Blue),
            QCLASS(Offroad_I_Black),
            QCLASS(Offroad_B_Black),
            QCLASS(Offroad_I_Armed_Black),
            QCLASS(Offroad_B_Armed_Black)
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacs_units"};
        author = ECSTRING(main,Author);
        authors[] = {"Pomigit", "BadHabitz", "Jonpas"};
        authorUrl = "https://github.com/Theseus-Aegis/TheseusServices";
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
