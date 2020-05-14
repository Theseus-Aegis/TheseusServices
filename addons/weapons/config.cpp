#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        magazines[] = {
            QCLASS(30Rnd_65x39_caseless_BlackCamo_mag)
        };
        units[] = {
            QCLASS(Item_EBR_Black_F),
            QCLASS(Item_MX_BlackCamo),
            QCLASS(Item_MX_GL_BlackCamo),
            QCLASS(Item_Walther_P99),
            QCLASS(Box_Weapons)
        };
        weapons[] = {
            QCLASS(EBR_Black_F),
            QCLASS(MX_BlackCamo),
            QCLASS(MX_GL_BlackCamo),
            QCLASS(Walther_P99),
            QCLASS(Walther_P99_Tan)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacs_main"};
        author = ECSTRING(main,Author);
        authors[] = {"Jonpas", "Pomigit", "BadHabitz", "JoramD", "Tyrone"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgMagazineWells.hpp"
