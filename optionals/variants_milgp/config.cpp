#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "tacs_main",
            "milgp_uniforms_cfg"
        };
        author = ECSTRING(main,Author);
        authors[] = {"GilleeDoo", "JoramD"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

class CfgVehicles {
    #include "backpacks.hpp"
};

class CfgWeapons {
    #include "battlebelt.hpp"
    #include "jpc.hpp"
    #include "marciras.hpp"
    #include "mmac.hpp"
};
