#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {
            QCLASS(Rifle_MX_BlackCamo),
            QCLASS(Rifle_MX_GL_BlackCamo)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacs_main"};
        author[]= {"Jonpas", "Pomigit", "BadHabitz"};
        authorUrl = "https://github.com/Theseus-Aegis/TheseusServices";
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
