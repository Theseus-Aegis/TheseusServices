#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {
            QCLASS(Item_MX_BlackCamo),
            QCLASS(Item_MX_GL_BlackCamo),
            QCLASS(Box_Weapons)
        };
        weapons[] = {
            QCLASS(MX_BlackCamo),
            QCLASS(MX_GL_BlackCamo)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacs_main"};
        author = ECSTRING(main,Author);
        authors[] = {"Jonpas", "Pomigit", "BadHabitz"};
        PBO_URL;
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
