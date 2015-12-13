#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {
            CLASS(Goggles_Black),
            CLASS(Goggles_Green),
            CLASS(Goggles_Sand)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacs_main"};
        author[]= {"Pomigit", "Jonpas"};
        authorUrl = "https://github.com/Theseus-Aegis/TheseusServices";
        VERSION_CONFIG;
    };
};

#include "CfgGlasses.hpp"
