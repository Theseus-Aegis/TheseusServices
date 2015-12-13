#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {
            QGVAR(Black),
            QGVAR(Green),
            QGVAR(Sand)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacs_common"};
        author[]= {"Pomigit", "Jonpas"};
        authorUrl = "https://github.com/Theseus-Aegis/TheseusServices";
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp";
