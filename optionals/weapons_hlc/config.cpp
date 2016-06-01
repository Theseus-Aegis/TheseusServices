#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacs_units", "hlcweapons_ar15"};
        author = ECSTRING(main,Author);
        url = "https://github.com/Theseus-Aegis/TheseusServices";
        authors[] = {"Jonpas"};
        authorUrl = "https://github.com/jonpas";
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
