#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacs_main"};
        author = ECSTRING(main,Author);
        url = "https://github.com/Theseus-Aegis/TheseusServices";
        authors[] = {""};
        authorUrl = "";
        VERSION_CONFIG;
    };
};
