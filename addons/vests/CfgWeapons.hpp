class CfgWeapons {
    class Vest_NoCamo_Base;

    #define MACRO_HEAVYPLATECARRIER_COMMON \
        dlc = QUOTE(PREFIX); \
        scope = 2; \

    class V_PlateCarrierGL_rgr;
    class CLASS(Vest_HeavyPlateCarrier_Black): V_PlateCarrierGL_rgr {
        MACRO_HEAVYPLATECARRIER_COMMON
        author = "Kresky";
        displayName = CSTRING(Vest_HeavyPlateCarrier_Black);
        //picture = QPATHTOF(UI\vest_platecarrierfull_black_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_heavyplatecarrier_black_co.paa)};
    };
    class CLASS(Vest_HeavyPlateCarrier_Coyote): V_PlateCarrierGL_rgr {
        MACRO_HEAVYPLATECARRIER_COMMON
        author = "Kresky";
        displayName = CSTRING(Vest_HeavyPlateCarrier_Coyote);
        //picture = QPATHTOF(UI\vest_platecarrierfull_coyote_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_heavyplatecarrier_coyote_co.paa)};
    };
    class CLASS(Vest_HeavyPlateCarrier_Green): V_PlateCarrierGL_rgr {
        MACRO_HEAVYPLATECARRIER_COMMON
        author = "Kresky";
        displayName = CSTRING(Vest_HeavyPlateCarrier_Green);
        //picture = QPATHTOF(UI\vest_platecarrierfull_green_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_heavyplatecarrier_green_co.paa)};
    };

    #define MACRO_PLATECARRIERFULL_COMMON \
        dlc = QUOTE(PREFIX); \
        scope = 2; \
        hiddenSelections[] = {"camo"}; \
        class ItemInfo: ItemInfo { \
            containerClass = "Supply140"; \
            mass = 110; \
            hiddenSelections[] = {"camo"}; \
            class HitpointsProtectionInfo { \
                class Chest { \
                    hitpointName = "HitChest"; \
                    armor = 22.5; \
                    passThrough = 0.5; \
                }; \
                class Diaphragm { \
                    hitpointName = "HitDiaphragm"; \
                    armor = 22.5; \
                    passThrough = 0.5; \
                }; \
                class Abdomen { \
                    hitpointName = "HitAbdomen"; \
                    armor = 22.5; \
                    passThrough = 0.5; \
                }; \
                class Pelvis { \
                    hitpointName = "HitPelvis"; \
                    armor = 22.5; \
                    passThrough = 0.5; \
                }; \
                class Body { \
                    hitpointName = "HitBody"; \
                    passThrough = 0.5; \
                }; \
            }; \
        };

    class V_PlateCarrierIA1_dgtl: Vest_NoCamo_Base {
        class ItemInfo;
    };
    class CLASS(Vest_PlateCarrierFull_Black): V_PlateCarrierIA1_dgtl {
        MACRO_PLATECARRIERFULL_COMMON
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Vest_PlateCarrierFull_Black);
        picture = QPATHTOF(UI\vest_platecarrierfull_black_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_platecarrierfull_black_co.paa)};
    };
    class CLASS(Vest_PlateCarrierFull_Green): V_PlateCarrierIA1_dgtl {
        MACRO_PLATECARRIERFULL_COMMON
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Vest_PlateCarrierFull_Green);
        picture = QPATHTOF(UI\vest_platecarrierfull_green_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_platecarrierfull_green_co.paa)};
    };


    #define MACRO_PLATECARRIER_COMMON \
        dlc = QUOTE(PREFIX); \
        scope = 2; \
        hiddenSelections[] = {"camo"}; \
        class ItemInfo: ItemInfo { \
            hiddenSelections[] = {"camo"}; \
            class HitpointsProtectionInfo { \
                class Chest { \
                    hitpointName = "HitChest"; \
                    armor = 20; \
                    passThrough = 0.5; \
                }; \
                class Diaphragm { \
                    hitpointName = "HitDiaphragm"; \
                    armor = 20; \
                    passThrough = 0.5; \
                }; \
                class Abdomen { \
                    hitpointName = "HitAbdomen"; \
                    armor = 20; \
                    passThrough = 0.5; \
                }; \
                class Body { \
                    hitpointName = "HitBody"; \
                    passThrough = 0.5; \
                }; \
            }; \
        };

    class V_PlateCarrier1_rgr: Vest_NoCamo_Base {
        class ItemInfo;
    };
    class CLASS(Vest_PlateCarrier_Black): V_PlateCarrier1_rgr {
        MACRO_PLATECARRIER_COMMON
        author = "Pomigit, Jonpas, Rory";
        displayName = CSTRING(Vest_PlateCarrier_Black);
        picture = QPATHTOF(UI\vest_platecarrier_black_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_platecarrier_black_co.paa)};
    };
    class CLASS(Vest_PlateCarrier_Green): V_PlateCarrier1_rgr {
        MACRO_PLATECARRIER_COMMON
        author = "Pomigit, Jonpas, Rory";
        displayName = CSTRING(Vest_PlateCarrier_Green);
        picture = QPATHTOF(UI\vest_platecarrier_green_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_platecarrier_green_co.paa)};
    };
    class CLASS(Vest_PlateCarrier_Coyote): V_PlateCarrier1_rgr {
        MACRO_PLATECARRIER_COMMON
        author = "Pomigit, Jonpas, Rory";
        displayName = CSTRING(Vest_PlateCarrier_Coyote);
        picture = QPATHTOF(UI\vest_platecarrier_coyote_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_platecarrier_coyote_co.paa)};
    };
    class CLASS(Vest_PlateCarrier_Khaki): V_PlateCarrier1_rgr {
        MACRO_PLATECARRIER_COMMON
        author = "Pomigit, Jonpas, Rory";
        displayName = CSTRING(Vest_PlateCarrier_Khaki);
        picture = QPATHTOF(UI\vest_platecarrier_khaki_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_platecarrier_khaki_co.paa)};
    };
    class CLASS(Vest_PlateCarrier_MARPAT): V_PlateCarrier1_rgr {
        MACRO_PLATECARRIER_COMMON
        author = "Pomigit, Jonpas, Rory";
        displayName = CSTRING(Vest_PlateCarrier_MARPAT);
        picture = QPATHTOF(UI\vest_platecarrier_marpat_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_platecarrier_marpat_co.paa)};
    };
    class CLASS(Vest_PlateCarrier_White): V_PlateCarrier1_rgr {
        MACRO_PLATECARRIER_COMMON
        author = "Pomigit, Rory, Kresky";
        displayName = CSTRING(Vest_PlateCarrier_White);
        picture = QPATHTOF(UI\vest_platecarrier_white_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_platecarrier_white_co.paa)};
    };


    class Vest_Camo_Base;
    class V_TacVest_khk: Vest_Camo_Base {
        class ItemInfo;
    };
    class CLASS(Vest_Tactical_DarkBlack): V_TacVest_khk {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Vest_Tactical_DarkBlack);
        picture = QPATHTOF(UI\vest_tactical_darkblack_ca.paa);
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_tactical_darkblack_co.paa)};

        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo"};
        };
    };
};
