#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            QCLASS(Item_Cap_Headphones_BlackLogo),
            QCLASS(Item_Cap_BlackLogo),
            QCLASS(Item_Cap_TanLogo),
            QCLASS(Item_Cap_Earpiece_BlackLogo),
            QCLASS(Item_Cap_Earpiece_TanLogo),
            QCLASS(Item_Cap_Backwards_BlackLogo),
            QCLASS(Item_Cap_Backwards_TanLogo),
            QCLASS(Item_Helmet_Ballistic_DarkBlack),
            QCLASS(Item_Helmet_Ballistic_White),
            QCLASS(Item_Helmet_Enc_Ballistic_DarkBlack),
            QCLASS(Item_Helmet_Enc_Ballistic_White),
            QCLASS(Item_Helmet_PilotHeli_Tan),
            QCLASS(Item_Hat_Boonie_RangerGreen),
            QCLASS(Item_Hat_Boonie_DesertMARPAT),
            QCLASS(Item_Hat_Boonie_Woodland),
            QCLASS(Item_Hat_Boonie_UCP),
            QCLASS(Item_Hat_Beret_BlackLogo)
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
            QCLASS(Helmet_Ballistic_White),
            QCLASS(Helmet_Enc_Ballistic_DarkBlack),
            QCLASS(Helmet_Enc_Ballistic_White),
            QCLASS(Helmet_PilotHeli_Tan),
            QCLASS(Hat_Boonie_RangerGreen),
            QCLASS(Hat_Boonie_DesertMARPAT),
            QCLASS(Hat_Boonie_Woodland),
            QCLASS(Hat_Boonie_UCP),
            QCLASS(Hat_Beret_BlackLogo)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacs_main"};
        author = ECSTRING(main,Author);
        authors[] = {"Pomigit", "Jonpas", "Rory", "Kresky"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
