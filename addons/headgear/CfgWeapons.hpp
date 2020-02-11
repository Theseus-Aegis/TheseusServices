class CfgWeapons {
    class HelmetBase;
    class H_Cap_headphones: HelmetBase {
        class ItemInfo;
    };
    class CLASS(Cap_Headphones_BlackLogo): H_Cap_headphones {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "Pomigit, Jonpas, Rory";
        displayName = CSTRING(Cap_Headphones_BlackLogo);
        picture = QPATHTOF(UI\cap_headphones_blacklogo_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\cap_headphones_blacklogo_co.paa)};

        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo"};
        };
    };


    class H_Cap_red: HelmetBase {
        class ItemInfo;
    };
    class CLASS(Cap_BlackLogo): H_Cap_red {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "Pomigit, Jonpas, Rory";
        displayName = CSTRING(Cap_BlackLogo);
        picture = QPATHTOF(UI\cap_blacklogo_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\cap_blacklogo_co.paa)};
    };
    class CLASS(Cap_TanLogo): H_Cap_red {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "Pomigit, Jonpas, Rory";
        displayName = CSTRING(Cap_TanLogo);
        picture = QPATHTOF(UI\cap_tanlogo_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\cap_tanlogo_co.paa)};
    };


    #define MACRO_EARPIECE_COMMON \
        dlc = QUOTE(PREFIX); \
        scope = 2; \
        model = QPATHTOF(data\cap_earpiece.p3d); \
        class ItemInfo: ItemInfo { \
            mass = 5; \
            uniformModel = QPATHTOF(data\cap_earpiece.p3d); \
        };

    class CLASS(Cap_Earpiece_BlackLogo): H_Cap_red {
        MACRO_EARPIECE_COMMON
        author = "Pomigit, Jonpas, Rory";
        displayname = CSTRING(Cap_Earpiece_BlackLogo);
        picture = QPATHTOF(UI\cap_earpiece_blacklogo_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\cap_blacklogo_co.paa)};
    };
    class CLASS(Cap_Earpiece_TanLogo): H_Cap_red {
        MACRO_EARPIECE_COMMON
        author = "Pomigit, Jonpas, Rory";
        displayname = CSTRING(Cap_Earpiece_TanLogo);
        picture = QPATHTOF(UI\cap_earpiece_tanlogo_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\cap_tanlogo_co.paa)};
    };


    #define MACRO_BACKWARDS_COMMON \
        dlc = QUOTE(PREFIX); \
        scope = 2; \
        model = QPATHTOF(data\cap_backwards.p3d); \
        class ItemInfo: ItemInfo { \
            uniformModel = QPATHTOF(data\cap_backwards.p3d); \
        };

    class CLASS(Cap_Backwards_BlackLogo): H_Cap_red {
        MACRO_BACKWARDS_COMMON
        author = "Pomigit, Jonpas, Rory";
        displayName = CSTRING(Cap_Backwards_BlackLogo);
        picture = QPATHTOF(UI\cap_backwards_black_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\cap_blacklogo_co.paa)};
    };
    class CLASS(Cap_Backwards_TanLogo): H_Cap_red {
        MACRO_BACKWARDS_COMMON
        author = "Pomigit, Jonpas, Rory";
        displayName = CSTRING(Cap_Backwards_TanLogo);
        picture = QPATHTOF(UI\cap_backwards_tan_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\cap_tanlogo_co.paa)};
    };


    class ItemCore;
    class H_HelmetB: ItemCore {
        class ItemInfo;
    };
    class CLASS(Helmet_Ballistic_DarkBlack): H_HelmetB {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Helmet_Ballistic_DarkBlack);
        picture = QPATHTOF(UI\helmet_ballistic_darkblack_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\helmet_ballistic_darkblack_co.paa)};

        class ItemInfo: ItemInfo {
            modelSides[] = {6};
        };
    };
    class CLASS(Helmet_Ballistic_White): H_HelmetB {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "Pomigit, Kresky";
        displayName = CSTRING(Helmet_Ballistic_White);
        picture = QPATHTOF(UI\helmet_ballistic_white_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\helmet_ballistic_white_co.paa)};

        class ItemInfo: ItemInfo {
            modelSides[] = {6};
        };
    };

    class H_HelmetSpecB;
    class CLASS(Helmet_Enc_Ballistic_DarkBlack): H_HelmetSpecB {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "Kresky";
        displayName = CSTRING(Helmet_Enc_Ballistic_DarkBlack);
        picture = QPATHTOF(UI\helmet_enc_ballistic_darkblack_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\helmet_enc_ballistic_darkblack_co.paa)};
    };
    class CLASS(Helmet_Enc_Ballistic_White): H_HelmetSpecB {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "Kresky";
        displayName = CSTRING(Helmet_Enc_Ballistic_White);
        picture = QPATHTOF(UI\helmet_enc_ballistic_white_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\helmet_enc_ballistic_white_co.paa)};
    };

    class H_HelmetB_light_black;
    class CLASS(Helmet_Light_Ballistic_DarkBlack): H_HelmetB_light_black {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "Kresky";
        displayName = CSTRING(Helmet_Light_Ballistic_DarkBlack);
        picture = QPATHTOF(UI\helmet_light_ballistic_darkblack_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\helmet_light_ballistic_darkblack_co.paa)};
    };

    class H_PilotHelmetHeli_B: H_HelmetB {
        class ItemInfo;
    };
    class CLASS(Helmet_PilotHeli_Tan): H_PilotHelmetHeli_B {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Helmet_PilotHeli_Tan);
        picture = QPATHTOF(UI\helmet_pilotheli_tan_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\helmet_pilotheli_tan_co.paa)};

        class ItemInfo: ItemInfo {
            modelSides[] = {6};
        };
    };


    class H_Booniehat_khk;
    class CLASS(Hat_Boonie_RangerGreen): H_Booniehat_khk {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Hat_Boonie_RangerGreen);
        picture = QPATHTOF(UI\hat_boonie_rangergreen_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\hat_boonie_rangergreen_co.paa)};
    };
    class CLASS(Hat_Boonie_DesertMARPAT): H_Booniehat_khk {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Hat_Boonie_DesertMARPAT);
        picture = QPATHTOF(UI\hat_boonie_desertmarpat_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\hat_boonie_desertmarpat_co.paa)};
    };
    class CLASS(Hat_Boonie_Woodland): H_Booniehat_khk {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Hat_Boonie_Woodland);
        picture = QPATHTOF(UI\hat_boonie_woodland_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\hat_boonie_woodland_co.paa)};
    };
    class CLASS(Hat_Boonie_UCP): H_Booniehat_khk {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "Jonpas";
        displayName = CSTRING(Hat_Boonie_UCP);
        picture = QPATHTOF(UI\hat_boonie_ucp_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\hat_boonie_ucp_co.paa)};
    };


    class H_Beret_02;
    class CLASS(Hat_Beret_BlackLogo) : H_Beret_02 {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "Kresky";
        displayName = CSTRING(Hat_Beret_BlackLogo);
        picture = QPATHTOF(UI\hat_beret_blacklogo_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\hat_beret_blacklogo_co.paa)};
    };
};
