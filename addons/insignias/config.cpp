#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacs_main"};
        author = ECSTRING(main,Author);
        authors[] = {"Jonpas", "BadHabitz", "System98","Mick Mathews"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgUnitInsignia.hpp"
