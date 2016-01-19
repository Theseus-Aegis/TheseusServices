#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacs_vests"};
        author[]= {"Pomigit", "BadHabitz", "Jonpas"};
        authorUrl = "https://github.com/Theseus-Aegis/TheseusServices";
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
