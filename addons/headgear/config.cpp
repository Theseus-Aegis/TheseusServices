#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {
            QCLASS(Item_Cap_Headphones_BlackLogo),
            QCLASS(Item_Cap_BlackLogo),
            QCLASS(Item_Cap_TanLogo),
            QCLASS(Item_Cap_Earpiece_BlackLogo),
            QCLASS(Item_Cap_Earpiece_TanLogo),
            QCLASS(Item_Cap_Backwards_BlackLogo),
            QCLASS(Item_Cap_Backwards_TanLogo),
            QCLASS(Item_Helmet_Ballistic_DarkBlack),
            QCLASS(Item_Helmet_PilotHeli_Tan),
            QCLASS(Item_Hat_Boonie_RangerGreen),
            QCLASS(Item_Hat_Boonie_DesertMARPAT),
            QCLASS(Item_Hat_Boonie_Woodland),
            QCLASS(Item_Hat_Boonie_UCP)
        };
        weapons[] = {
            QCLASS(Cap_Headphones_BlackLogo),
            QCLASS(Cap_BlackLogo),
            QCLASS(Cap_TanLogo),
            QCLASS(Cap_Earpiece_BlackLogo),
            QCLASS(Cap_Earpiece_TanLogo),
            QCLASS(Cap_Backwards_BlackLogo),
            QCLASS(Cap_Backwards_TanLogo),
            QCLASS(Helmet_Ballistic_DarkBlack),
            QCLASS(Helmet_PilotHeli_Tan),
            QCLASS(Hat_Boonie_RangerGreen),
            QCLASS(Hat_Boonie_DesertMARPAT),
            QCLASS(Hat_Boonie_Woodland),
            QCLASS(Hat_Boonie_UCP)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacs_main"};
        author = ECSTRING(main,Author);
        url = "https://github.com/Theseus-Aegis/TheseusServices";
        authors[] = {"Pomigit", "Jonpas", "Rory"};
        authorUrl = "https://github.com/Theseus-Aegis/TheseusServices";
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
