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
            QCLASS(Item_Helmet_Light_Ballistic_DarkBlack),
            QCLASS(Item_Helmet_PilotHeli_Tan),
            QCLASS(Item_Hat_Boonie_RangerGreen),
            QCLASS(Item_Hat_Boonie_DesertMARPAT),
            QCLASS(Item_Hat_Boonie_Woodland),
            QCLASS(Item_Hat_Boonie_UCP),
            QCLASS(Item_Hat_Beret_BlackLogo),
            QCLASS(Item_Helmet_Modular_Black),
            QCLASS(Item_Helmet_Modular_Green),
            QCLASS(Item_Helmet_Modular_Coyote),
            QCLASS(Item_Helmet_Modular_AU),
            QCLASS(Item_Helmet_Modular_FG),
            QCLASS(Item_Helmet_Modular_RGR),
            QCLASS(Item_Helmet_Modular_Grijs),
            QCLASS(Item_Helmet_Modular_Headset_Black),
            QCLASS(Item_Helmet_Modular_Headset_Green),
            QCLASS(Item_Helmet_Modular_Headset_Coyote),
            QCLASS(Item_Helmet_Modular_Headset_AU),
            QCLASS(Item_Helmet_Modular_Headset_FG),
            QCLASS(Item_Helmet_Modular_Headset_RGR),
            QCLASS(Item_Helmet_Modular_Headset_Grijs),
            QCLASS(Item_Helmet_Modular_Chops_Black),
            QCLASS(Item_Helmet_Modular_Chops_Green),
            QCLASS(Item_Helmet_Modular_Chops_Coyote),
            QCLASS(Item_Helmet_Modular_Chops_AU),
            QCLASS(Item_Helmet_Modular_Chops_FG),
            QCLASS(Item_Helmet_Modular_Chops_RGR),
            QCLASS(Item_Helmet_Modular_Chops_Grijs),
            QCLASS(Item_Helmet_Modular_Ear_Black),
            QCLASS(Item_Helmet_Modular_Ear_Green),
            QCLASS(Item_Helmet_Modular_Ear_Coyote),
            QCLASS(Item_Helmet_Modular_Ear_AU),
            QCLASS(Item_Helmet_Modular_Ear_FG),
            QCLASS(Item_Helmet_Modular_Ear_RGR),
            QCLASS(Item_Helmet_Modular_Ear_Grijs)
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
            QCLASS(Helmet_Light_Ballistic_DarkBlack),
            QCLASS(Helmet_PilotHeli_Tan),
            QCLASS(Hat_Boonie_RangerGreen),
            QCLASS(Hat_Boonie_DesertMARPAT),
            QCLASS(Hat_Boonie_Woodland),
            QCLASS(Hat_Boonie_UCP),
            QCLASS(Hat_Beret_BlackLogo),
            QCLASS(Helmet_Modular_Black),
            QCLASS(Helmet_Modular_Green),
            QCLASS(Helmet_Modular_Coyote),
            QCLASS(Helmet_Modular_AU),
            QCLASS(Helmet_Modular_FG),
            QCLASS(Helmet_Modular_RGR),
            QCLASS(Helmet_Modular_Grijs),
            QCLASS(Helmet_Modular_Chops_Black),
            QCLASS(Helmet_Modular_Chops_Green),
            QCLASS(Helmet_Modular_Chops_Coyote),
            QCLASS(Helmet_Modular_Chops_AU),
            QCLASS(Helmet_Modular_Chops_FG),
            QCLASS(Helmet_Modular_Chops_RGR),
            QCLASS(Helmet_Modular_Chops_Grijs),
            QCLASS(Helmet_Modular_Headset_Black),
            QCLASS(Helmet_Modular_Headset_Green),
            QCLASS(Helmet_Modular_Headset_Coyote),
            QCLASS(Helmet_Modular_Headset_AU),
            QCLASS(Helmet_Modular_Headset_FG),
            QCLASS(Helmet_Modular_Headset_RGR),
            QCLASS(Helmet_Modular_Headset_Grijs),
            QCLASS(Helmet_Modular_Ear_Black),
            QCLASS(Helmet_Modular_Ear_Green),
            QCLASS(Helmet_Modular_Ear_Coyote),
            QCLASS(Helmet_Modular_Ear_AU),
            QCLASS(Helmet_Modular_Ear_FG),
            QCLASS(Helmet_Modular_Ear_RGR),
            QCLASS(Helmet_Modular_Ear_Grijs)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacs_main"};
        author = ECSTRING(main,Author);
        authors[] = {"Pomigit", "Jonpas", "Rory", "Kresky", "Trenchgun", "Mike"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
