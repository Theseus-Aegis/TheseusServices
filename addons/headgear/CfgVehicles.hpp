class CfgVehicles {
    // Ground items
    #define MACRO_ITEM_COMMON \
        dlc = QUOTE(PREFIX); \
        scope = 2; \
        scopeCurator = 2; \
        vehicleClass = "ItemsHeadgear";

    class Headgear_Base_F;
    class CLASS(Item_Cap_Headphones_BlackLogo): Headgear_Base_F {
        MACRO_ITEM_COMMON
        author = "Jonpas";
        displayName = CSTRING(Cap_Headphones_BlackLogo);
        model = "\A3\Weapons_F\DummyCap.p3d";

        class TransportItems {
            MACRO_ADDITEM(CLASS(Cap_Headphones_BlackLogo),1);
        };
    };
    class CLASS(Item_Cap_BlackLogo): Headgear_Base_F {
        MACRO_ITEM_COMMON
        author = "Jonpas";
        displayName = CSTRING(Cap_BlackLogo);
        model = "\A3\Weapons_F\DummyCap.p3d";

        class TransportItems {
            MACRO_ADDITEM(CLASS(Cap_BlackLogo),1);
        };
    };
    class CLASS(Item_Cap_TanLogo): Headgear_Base_F {
        MACRO_ITEM_COMMON
        author = "Jonpas";
        displayName = CSTRING(Cap_TanLogo);
        model = "\A3\Weapons_F\DummyCap.p3d";

        class TransportItems {
            MACRO_ADDITEM(CLASS(Cap_TanLogo),1);
        };
    };
    class CLASS(Item_Cap_Earpiece_BlackLogo): Headgear_Base_F {
        MACRO_ITEM_COMMON
        author = "Jonpas";
        displayName = CSTRING(Cap_Earpiece_BlackLogo);
        model = "\A3\Weapons_F\DummyCap.p3d";

        class TransportItems {
            MACRO_ADDITEM(CLASS(Cap_Earpiece_BlackLogo),1);
        };
    };
    class CLASS(Item_Cap_Earpiece_TanLogo): Headgear_Base_F {
        MACRO_ITEM_COMMON
        author = "Jonpas";
        displayName = CSTRING(Cap_Earpiece_TanLogo);
        model = "\A3\Weapons_F\DummyCap.p3d";

        class TransportItems {
            MACRO_ADDITEM(CLASS(Cap_Earpiece_TanLogo),1);
        };
    };
    class CLASS(Item_Cap_Backwards_BlackLogo): Headgear_Base_F {
        MACRO_ITEM_COMMON
        author = "Jonpas";
        displayName = CSTRING(Cap_Backwards_BlackLogo);
        model = "\A3\Weapons_F\DummyCap.p3d";

        class TransportItems {
            MACRO_ADDITEM(CLASS(Cap_Backwards_BlackLogo),1);
        };
    };
    class CLASS(Item_Cap_Backwards_TanLogo): Headgear_Base_F {
        MACRO_ITEM_COMMON
        author = "Jonpas";
        displayName = CSTRING(Cap_Backwards_TanLogo);
        model = "\A3\Weapons_F\DummyCap.p3d";

        class TransportItems {
            MACRO_ADDITEM(CLASS(Cap_Backwards_TanLogo),1);
        };
    };
    class CLASS(Item_Helmet_Ballistic_DarkBlack): Headgear_Base_F {
        MACRO_ITEM_COMMON
        author = "Jonpas";
        displayName = CSTRING(Helmet_Ballistic_DarkBlack);

        class TransportItems {
            MACRO_ADDITEM(CLASS(Helmet_Ballistic_DarkBlack),1);
        };
    };
    class CLASS(Item_Helmet_Ballistic_White): Headgear_Base_F {
        MACRO_ITEM_COMMON
        author = "Kresky";
        displayName = CSTRING(Helmet_Ballistic_White);

        class TransportItems {
            MACRO_ADDITEM(CLASS(Helmet_Ballistic_White),1);
        };
    };
    class CLASS(Item_Helmet_Enc_Ballistic_DarkBlack): Headgear_Base_F {
        MACRO_ITEM_COMMON
        author = "Kresky";
        displayName = CSTRING(Helmet_Enc_Ballistic_DarkBlack);

        class TransportItems {
            MACRO_ADDITEM(CLASS(Helmet_Enc_Ballistic_DarkBlack),1);
        };
    };
    class CLASS(Item_Helmet_Enc_Ballistic_White): Headgear_Base_F {
        MACRO_ITEM_COMMON
        author = "Kresky";
        displayName = CSTRING(Helmet_Enc_Ballistic_White);

        class TransportItems {
            MACRO_ADDITEM(CLASS(Helmet_Enc_Ballistic_White),1);
        };
    };
    class CLASS(Item_Helmet_Light_Ballistic_DarkBlack): Headgear_Base_F {
        MACRO_ITEM_COMMON
        author = "Kresky";
        displayName = CSTRING(Helmet_Light_Ballistic_DarkBlack);

        class TransportItems {
            MACRO_ADDITEM(CLASS(Helmet_Light_Ballistic_DarkBlack),1);
        };
    };
    class CLASS(Item_Helmet_PilotHeli_Tan): Headgear_Base_F {
        MACRO_ITEM_COMMON
        author = "Jonpas";
        displayName = CSTRING(Helmet_PilotHeli_Tan);

        class TransportItems {
            MACRO_ADDITEM(CLASS(Helmet_PilotHeli_Tan),1);
        };
    };
    class CLASS(Item_Hat_Boonie_RangerGreen): Headgear_Base_F {
        MACRO_ITEM_COMMON
        author = "Jonpas";
        displayName = CSTRING(Hat_Boonie_RangerGreen);
        model = "\A3\Weapons_F\DummyCap.p3d";

        class TransportItems {
            MACRO_ADDITEM(CLASS(Hat_Boonie_RangerGreen),1);
        };
    };
    class CLASS(Item_Hat_Boonie_DesertMARPAT): Headgear_Base_F {
        MACRO_ITEM_COMMON
        author = "Jonpas";
        displayName = CSTRING(Hat_Boonie_DesertMARPAT);
        model = "\A3\Weapons_F\DummyCap.p3d";

        class TransportItems {
            MACRO_ADDITEM(CLASS(Hat_Boonie_DesertMARPAT),1);
        };
    };
    class CLASS(Item_Hat_Boonie_Woodland): Headgear_Base_F {
        MACRO_ITEM_COMMON
        author = "Jonpas";
        displayName = CSTRING(Hat_Boonie_Woodland);
        model = "\A3\Weapons_F\DummyCap.p3d";

        class TransportItems {
            MACRO_ADDITEM(CLASS(Hat_Boonie_Woodland),1);
        };
    };
    class CLASS(Item_Hat_Boonie_UCP): Headgear_Base_F {
        MACRO_ITEM_COMMON
        author = "Jonpas";
        displayName = CSTRING(Hat_Boonie_UCP);
        model = "\A3\Weapons_F\DummyCap.p3d";

        class TransportItems {
            MACRO_ADDITEM(CLASS(Hat_Boonie_UCP),1);
        };
    };
    class CLASS(Item_Hat_Beret_BlackLogo): Headgear_Base_F {
        MACRO_ITEM_COMMON
        author = "Kresky";
        displayName = CSTRING(Hat_Beret_BlackLogo);
        model = "\A3\Weapons_F\DummyCap.p3d";

        class TransportItems {
            MACRO_ADDITEM(CLASS(Hat_Beret_BlackLogo),1);
        };
    };

    class Headgear_H_HelmetHBK_F;
    class CLASS(Item_Helmet_Modular_Black): Headgear_H_HelmetHBK_F {
        MACRO_ITEM_COMMON
        author = "Trenchgun, Tyrone";
        displayName = CSTRING(Helmet_Modular_Black);

        class TransportItems {
            MACRO_ADDITEM(CLASS(Helmet_Modular_Black),1);
        };
    };

    class CLASS(Item_Helmet_Modular_Green): Headgear_H_HelmetHBK_F {
        MACRO_ITEM_COMMON
        author = "Trenchgun, Tyrone";
        displayName = CSTRING(Helmet_Modular_Green);

        class TransportItems {
            MACRO_ADDITEM(CLASS(Helmet_Modular_Green),1);
        };
    };

    class CLASS(Item_Helmet_Modular_Coyote): Headgear_H_HelmetHBK_F {
        MACRO_ITEM_COMMON
        author = "Trenchgun, Tyrone";
        displayName = CSTRING(Helmet_Modular_Coyote);

        class TransportItems {
            MACRO_ADDITEM(CLASS(Helmet_Modular_Coyote),1);
        };
    };

    class CLASS(Item_Helmet_Modular_AU): Headgear_H_HelmetHBK_F {
        MACRO_ITEM_COMMON
        author = "Trenchgun, Tyrone";
        displayName = CSTRING(Helmet_Modular_AU);

        class TransportItems {
            MACRO_ADDITEM(CLASS(Helmet_Modular_AU),1);
        };
    };

    class CLASS(Item_Helmet_Modular_FG): Headgear_H_HelmetHBK_F {
        MACRO_ITEM_COMMON
        author = "Trenchgun, Tyrone";
        displayName = CSTRING(Helmet_Modular_FG);

        class TransportItems {
            MACRO_ADDITEM(CLASS(Helmet_Modular_FG),1);
        };
    };

    class Headgear_H_HelmetHBK_headset_F;
    class CLASS(Item_Helmet_Modular_Headset_Black): Headgear_H_HelmetHBK_headset_F {
        MACRO_ITEM_COMMON
        author = "Trenchgun, Tyrone";
        displayName = CSTRING(Helmet_Modular_Headset_Black);

        class TransportItems {
            MACRO_ADDITEM(CLASS(Helmet_Modular_Headset_Black),1);
        };
    };

    class CLASS(Item_Helmet_Modular_Headset_Green): Headgear_H_HelmetHBK_headset_F {
        MACRO_ITEM_COMMON
        author = "Trenchgun, Tyrone";
        displayName = CSTRING(Helmet_Modular_Headset_Green);

        class TransportItems {
            MACRO_ADDITEM(CLASS(Helmet_Modular_Headset_Green),1);
        };
    };

    class CLASS(Item_Helmet_Modular_Headset_Coyote): Headgear_H_HelmetHBK_headset_F {
        MACRO_ITEM_COMMON
        author = "Trenchgun, Tyrone";
        displayName = CSTRING(Helmet_Modular_Headset_Coyote);

        class TransportItems {
            MACRO_ADDITEM(CLASS(Helmet_Modular_Headset_Coyote),1);
        };
    };

    class CLASS(Item_Helmet_Modular_Headset_AU): Headgear_H_HelmetHBK_headset_F {
        MACRO_ITEM_COMMON
        author = "Trenchgun, Tyrone";
        displayName = CSTRING(Helmet_Modular_Headset_AU);

        class TransportItems {
            MACRO_ADDITEM(CLASS(Helmet_Modular_Headset_AU),1);
        };
    };

    class CLASS(Item_Helmet_Modular_Headset_FG): Headgear_H_HelmetHBK_headset_F {
        MACRO_ITEM_COMMON
        author = "Trenchgun, Tyrone";
        displayName = CSTRING(Helmet_Modular_Headset_FG);

        class TransportItems {
            MACRO_ADDITEM(CLASS(Helmet_Modular_Headset_FG),1);
        };
    };

    class Headgear_H_HelmetHBK_chops_F;
    class CLASS(Item_Helmet_Modular_Chops_Black): Headgear_H_HelmetHBK_chops_F {
        MACRO_ITEM_COMMON
        author = "Trenchgun, Tyrone";
        displayName = CSTRING(Helmet_Modular_Chops_Black);

        class TransportItems {
            MACRO_ADDITEM(CLASS(Helmet_Modular_Chops_Black),1);
        };
    };

    class CLASS(Item_Helmet_Modular_Chops_Green): Headgear_H_HelmetHBK_chops_F {
        MACRO_ITEM_COMMON
        author = "Trenchgun, Tyrone";
        displayName = CSTRING(Helmet_Modular_Chops_Green);

        class TransportItems {
            MACRO_ADDITEM(CLASS(Helmet_Modular_Chops_Green),1);
        };
    };

    class CLASS(Item_Helmet_Modular_Chops_Coyote): Headgear_H_HelmetHBK_chops_F {
        MACRO_ITEM_COMMON
        author = "Trenchgun, Tyrone";
        displayName = CSTRING(Helmet_Modular_Chops_Coyote);

        class TransportItems {
            MACRO_ADDITEM(CLASS(Helmet_Modular_Chops_Coyote),1);
        };
    };

    class CLASS(Item_Helmet_Modular_Chops_AU): Headgear_H_HelmetHBK_chops_F {
        MACRO_ITEM_COMMON
        author = "Trenchgun, Tyrone";
        displayName = CSTRING(Helmet_Modular_Chops_AU);

        class TransportItems {
            MACRO_ADDITEM(CLASS(Helmet_Modular_Chops_AU),1);
        };
    };

    class CLASS(Item_Helmet_Modular_Chops_FG): Headgear_H_HelmetHBK_chops_F {
        MACRO_ITEM_COMMON
        author = "Trenchgun, Tyrone";
        displayName = CSTRING(Helmet_Modular_Chops_FG);

        class TransportItems {
            MACRO_ADDITEM(CLASS(Helmet_Modular_Chops_FG),1);
        };
    };

    class Headgear_H_HelmetHBK_ear_F;
    class CLASS(Item_Helmet_Modular_Ear_Black): Headgear_H_HelmetHBK_ear_F {
        MACRO_ITEM_COMMON
        author = "Trenchgun, Tyrone";
        displayName = CSTRING(Helmet_Modular_Ear_Black);

        class TransportItems {
            MACRO_ADDITEM(CLASS(Helmet_Modular_Ear_Black),1);
        };
    };

    class CLASS(Item_Helmet_Modular_Ear_Green): Headgear_H_HelmetHBK_ear_F {
        MACRO_ITEM_COMMON
        author = "Trenchgun, Tyrone";
        displayName = CSTRING(Helmet_Modular_Ear_Green);

        class TransportItems {
            MACRO_ADDITEM(CLASS(Helmet_Modular_Ear_Green),1);
        };
    };

    class CLASS(Item_Helmet_Modular_Ear_Coyote): Headgear_H_HelmetHBK_ear_F {
        MACRO_ITEM_COMMON
        author = "Trenchgun, Tyrone";
        displayName = CSTRING(Helmet_Modular_Ear_Coyote);

        class TransportItems {
            MACRO_ADDITEM(CLASS(Helmet_Modular_Ear_Coyote),1);
        };
    };

    class CLASS(Item_Helmet_Modular_Ear_AU): Headgear_H_HelmetHBK_ear_F {
        MACRO_ITEM_COMMON
        author = "Trenchgun, Tyrone";
        displayName = CSTRING(Helmet_Modular_Ear_AU);

        class TransportItems {
            MACRO_ADDITEM(CLASS(Helmet_Modular_Ear_AU),1);
        };
    };

    class CLASS(Item_Helmet_Modular_Ear_FG): Headgear_H_HelmetHBK_ear_F {
        MACRO_ITEM_COMMON
        author = "Trenchgun, Tyrone";
        displayName = CSTRING(Helmet_Modular_Ear_FG);

        class TransportItems {
            MACRO_ADDITEM(CLASS(Helmet_Modular_Ear_FG),1);
        };
    };

    // Box
    class B_supplyCrate_F;
    class CLASS(Box_Wearables): B_supplyCrate_F {
        class TransportItems {
            MACRO_ADDITEM(CLASS(Cap_Headphones_BlackLogo),10);
            MACRO_ADDITEM(CLASS(Cap_BlackLogo),10);
            MACRO_ADDITEM(CLASS(Cap_TanLogo),10);
            MACRO_ADDITEM(CLASS(Cap_Earpiece_BlackLogo),10);
            MACRO_ADDITEM(CLASS(Cap_Earpiece_TanLogo),10);
            MACRO_ADDITEM(CLASS(Cap_Backwards_BlackLogo),10);
            MACRO_ADDITEM(CLASS(Cap_Backwards_TanLogo),10);
            MACRO_ADDITEM(CLASS(Helmet_Ballistic_DarkBlack),10);
            MACRO_ADDITEM(CLASS(Helmet_Ballistic_White),10);
            MACRO_ADDITEM(CLASS(Helmet_Enc_Ballistic_DarkBlack),10);
            MACRO_ADDITEM(CLASS(Helmet_Enc_Ballistic_White),10);
            MACRO_ADDITEM(CLASS(Helmet_Light_Ballistic_Black),10);
            MACRO_ADDITEM(CLASS(Helmet_PilotHeli_Tan),10);
            MACRO_ADDITEM(CLASS(Hat_Boonie_RangerGreen),10);
            MACRO_ADDITEM(CLASS(Hat_Boonie_DesertMARPAT),10);
            MACRO_ADDITEM(CLASS(Hat_Boonie_Woodland),10);
            MACRO_ADDITEM(CLASS(Hat_Boonie_UCP),10);
            MACRO_ADDITEM(CLASS(Hat_Beret_BlackLogo),10);
            MACRO_ADDITEM(CLASS(Helmet_Modular_Black),10);
            MACRO_ADDITEM(CLASS(Helmet_Modular_Green),10);
            MACRO_ADDITEM(CLASS(Helmet_Modular_Coyote),10);
            MACRO_ADDITEM(CLASS(Helmet_Modular_AU),10);
            MACRO_ADDITEM(CLASS(Helmet_Modular_FG),10);
            MACRO_ADDITEM(CLASS(Helmet_Modular_Headset_Black),10);
            MACRO_ADDITEM(CLASS(Helmet_Modular_Headset_Green),10);
            MACRO_ADDITEM(CLASS(Helmet_Modular_Headset_Coyote),10);
            MACRO_ADDITEM(CLASS(Helmet_Modular_Headset_AU),10);
            MACRO_ADDITEM(CLASS(Helmet_Modular_Headset_FG),10);
            MACRO_ADDITEM(CLASS(Helmet_Modular_Chops_Black),10);
            MACRO_ADDITEM(CLASS(Helmet_Modular_Chops_Green),10);
            MACRO_ADDITEM(CLASS(Helmet_Modular_Chops_Coyote),10);
            MACRO_ADDITEM(CLASS(Helmet_Modular_Chops_AU),10);
            MACRO_ADDITEM(CLASS(Helmet_Modular_Chops_FG),10);
            MACRO_ADDITEM(CLASS(Helmet_Modular_Ear_Black),10);
            MACRO_ADDITEM(CLASS(Helmet_Modular_Ear_Green),10);
            MACRO_ADDITEM(CLASS(Helmet_Modular_Ear_Coyote),10);
            MACRO_ADDITEM(CLASS(Helmet_Modular_Ear_AU),10);
            MACRO_ADDITEM(CLASS(Helmet_Modular_Ear_FG),10);
        };
    };
};
