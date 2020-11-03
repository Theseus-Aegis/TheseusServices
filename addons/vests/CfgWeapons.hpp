class CfgWeapons {
    #define FIX_CAMO_HIDDENSELECTIONS \
        hiddenSelections[] = {"camo"}; \
        class ItemInfo: ItemInfo { \
            hiddenSelections[] = {"camo"}; \
        };

    class Vest_NoCamo_Base;

    // Plate Carrier Full
    class V_PlateCarrierIA1_dgtl: Vest_NoCamo_Base {
        class ItemInfo;
    };
    class CLASS(Vest_PlateCarrierFull_Black): V_PlateCarrierIA1_dgtl {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Vest_PlateCarrierFull_Black);
        picture = QPATHTOF(UI\vest_platecarrierfull_black_ca.paa);
        FIX_CAMO_HIDDENSELECTIONS
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_platecarrierfull_black_co.paa)};
    };
    class CLASS(Vest_PlateCarrierFull_Green): V_PlateCarrierIA1_dgtl {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Vest_PlateCarrierFull_Green);
        picture = QPATHTOF(UI\vest_platecarrierfull_green_ca.paa);
        FIX_CAMO_HIDDENSELECTIONS
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_platecarrierfull_green_co.paa)};
    };

    // Plate Carrier
    class V_PlateCarrier1_rgr: Vest_NoCamo_Base {
        class ItemInfo;
    };
    class CLASS(Vest_PlateCarrier_Black): V_PlateCarrier1_rgr {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "Pomigit, Jonpas, Rory";
        displayName = CSTRING(Vest_PlateCarrier_Black);
        picture = QPATHTOF(UI\vest_platecarrier_black_ca.paa);
        FIX_CAMO_HIDDENSELECTIONS
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_platecarrier_black_co.paa)};
    };
    class CLASS(Vest_PlateCarrier_Green): V_PlateCarrier1_rgr {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "Pomigit, Jonpas, Rory";
        displayName = CSTRING(Vest_PlateCarrier_Green);
        picture = QPATHTOF(UI\vest_platecarrier_green_ca.paa);
        FIX_CAMO_HIDDENSELECTIONS
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_platecarrier_green_co.paa)};
    };
    class CLASS(Vest_PlateCarrier_Coyote): V_PlateCarrier1_rgr {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "Pomigit, Jonpas, Rory";
        displayName = CSTRING(Vest_PlateCarrier_Coyote);
        picture = QPATHTOF(UI\vest_platecarrier_coyote_ca.paa);
        FIX_CAMO_HIDDENSELECTIONS
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_platecarrier_coyote_co.paa)};
    };
    class CLASS(Vest_PlateCarrier_Khaki): V_PlateCarrier1_rgr {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "Pomigit, Jonpas, Rory";
        displayName = CSTRING(Vest_PlateCarrier_Khaki);
        picture = QPATHTOF(UI\vest_platecarrier_khaki_ca.paa);
        FIX_CAMO_HIDDENSELECTIONS
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_platecarrier_khaki_co.paa)};
    };
    class CLASS(Vest_PlateCarrier_MARPAT): V_PlateCarrier1_rgr {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "Pomigit, Jonpas, Rory";
        displayName = CSTRING(Vest_PlateCarrier_MARPAT);
        picture = QPATHTOF(UI\vest_platecarrier_marpat_ca.paa);
        FIX_CAMO_HIDDENSELECTIONS
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_platecarrier_marpat_co.paa)};
    };
    class CLASS(Vest_PlateCarrier_White): V_PlateCarrier1_rgr {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "Pomigit, Rory, Kresky";
        displayName = CSTRING(Vest_PlateCarrier_White);
        picture = QPATHTOF(UI\vest_platecarrier_white_ca.paa);
        FIX_CAMO_HIDDENSELECTIONS
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_platecarrier_white_co.paa)};
    };
    class CLASS(Vest_PlateCarrier_RGR): V_PlateCarrier1_rgr {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "Pomigit, Jonpas, Rory, JoramD, GilleeDoo";
        displayName = CSTRING(Vest_PlateCarrier_RGR);
        picture = QPATHTOF(UI\vest_platecarrier_rgr_ca.paa);
        FIX_CAMO_HIDDENSELECTIONS
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_platecarrier_rgr_co.paa)};
    };

    // Plate Carrier Heavy
    class V_PlateCarrierGL_rgr;
    class CLASS(Vest_PlateCarrierHeavy_Black): V_PlateCarrierGL_rgr {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "Kresky";
        displayName = CSTRING(Vest_PlateCarrierHeavy_Black);
        picture = QPATHTOF(UI\vest_PlateCarrierHeavy_black_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_PlateCarrierHeavy_black_co.paa)};
    };
    class CLASS(Vest_PlateCarrierHeavy_Coyote): V_PlateCarrierGL_rgr {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "Kresky";
        displayName = CSTRING(Vest_PlateCarrierHeavy_Coyote);
        picture = QPATHTOF(UI\vest_PlateCarrierHeavy_coyote_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_PlateCarrierHeavy_coyote_co.paa)};
    };
    class CLASS(Vest_PlateCarrierHeavy_Green): V_PlateCarrierGL_rgr {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "Kresky";
        displayName = CSTRING(Vest_PlateCarrierHeavy_Green);
        picture = QPATHTOF(UI\vest_PlateCarrierHeavy_green_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_PlateCarrierHeavy_green_co.paa)};
    };
    class CLASS(Vest_PlateCarrierHeavy_White): V_PlateCarrierGL_rgr {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "Kresky";
        displayName = CSTRING(Vest_PlateCarrierHeavy_White);
        picture = QPATHTOF(UI\vest_PlateCarrierHeavy_white_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_PlateCarrierHeavy_white_co.paa)};
    };

    // Tactical
    class V_TacVest_khk;
    class CLASS(Vest_Tactical_DarkBlack): V_TacVest_khk {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Vest_Tactical_DarkBlack);
        picture = QPATHTOF(UI\vest_tactical_darkblack_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_tactical_darkblack_co.paa)};
    };

    // Modular Carrier
    class V_CarrierRigKBT_01_EAF_F;
    class CLASS(Vest_Modular_Black): V_CarrierRigKBT_01_EAF_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "Trenchgun, TyroneMF";
        displayName = CSTRING(Vest_Modular_Black);
        picture = QPATHTOF(UI\vest_modular_black_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_modular_black_co.paa)};
    };

    class CLASS(Vest_Modular_Green): CLASS(Vest_Modular_Black) {
        scope = 2;
        displayName = CSTRING(Vest_Modular_Green);
//      picture = QPATHTOF(UI\);
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_modular_green_co.paa)};
    };

    class CLASS(Vest_Modular_Coyote): CLASS(Vest_Modular_Black) {
        scope = 2;
        displayName = CSTRING(Vest_Modular_Coyote);
        picture = QPATHTOF(UI\vest_modular_coyote_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_modular_coyote_co.paa)};
    };
};
