class CfgWeapons {
    class V_PlateCarrierIA1_dgtl;
    class V_PlateCarrierIA2_dgtl: V_PlateCarrierIA1_dgtl {
        class ItemInfo;
    };

    class CLASS(Vest_PlateCarrierFull_Base): V_PlateCarrierIA2_dgtl {
        dlc = QUOTE(PREFIX);
        scope = 0;
        hiddenSelections[] = {"camo"};

        class ItemInfo: ItemInfo {
            containerClass = "Supply140";
            mass = 110;
            hiddenSelections[] = {"camo"};

            class HitpointsProtectionInfo {
                class Chest {
                    hitpointName = "HitChest";
                    armor = 22.5;
                    passThrough = 0.5;
                };
                class Diaphragm {
                    hitpointName = "HitDiaphragm";
                    armor = 22.5;
                    passThrough = 0.5;
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 22.5;
                    passThrough = 0.5;
                };
                class Pelvis {
                    hitpointName = "HitPelvis";
                    armor = 22.5;
                    passThrough = 0.5;
                };
                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.5;
                };
            };
        };
    };

    class CLASS(Vest_PlateCarrierFull_Black): CLASS(Vest_PlateCarrierFull_Base) {
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Vest_PlateCarrierFull_Black);
        picture = QPATHTOF(UI\vest_platecarrierfull_black_x_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_platecarrierfull_black_co.paa)};
    };

    class CLASS(Vest_PlateCarrierFull_Green): CLASS(Vest_PlateCarrierFull_Base) {
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Vest_PlateCarrierFull_Green);
        picture = QPATHTOF(UI\vest_platecarrierfull_green_x_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_platecarrierfull_green_co.paa)};
    };


    class Vest_NoCamo_Base;
    class V_PlateCarrier1_rgr: Vest_NoCamo_Base {
        class ItemInfo;
    };

    class CLASS(Vest_PlateCarrier_Base): V_PlateCarrier1_rgr {
        dlc = QUOTE(PREFIX);
        scope = 0;
        hiddenSelections[] = {"camo"};

        class ItemInfo: ItemInfo {
            mass = 100;
            hiddenSelections[] = {"camo"};

            class HitpointsProtectionInfo {
                class Chest {
                    hitpointName = "HitChest";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Diaphragm {
                    hitpointName = "HitDiaphragm";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.5;
                };
            };
        };
    };

    class CLASS(Vest_PlateCarrier_Black): CLASS(Vest_PlateCarrier_Base) {
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Vest_PlateCarrier_Black);
        picture = QPATHTOF(UI\vest_platecarrier_black_x_ca.paa);//@todo - change logo to TACS
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_platecarrier_black_co.paa)};//@todo - change logo to TACS
    };
    class CLASS(Vest_PlateCarrier_Green): CLASS(Vest_PlateCarrier_Base) {
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Vest_PlateCarrier_Green);
        picture = QPATHTOF(UI\vest_platecarrier_green_x_ca.paa);//@todo - change logo to TACS
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_platecarrier_green_co.paa)};//@todo - change logo to TACS
    };
    class CLASS(Vest_PlateCarrier_Coyote): CLASS(Vest_PlateCarrier_Base) {
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Vest_PlateCarrier_Coyote);
        picture = QPATHTOF(UI\vest_platecarrier_khaki_x_ca.paa);//picture = QPATHTOF(UI\vest_platecarrier_coyote_x_ca.paa);//@todo - new picture + change logo to TACS
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_platecarrier_coyote_co.paa)};//@todo - change logo to TACS
    };
    class CLASS(Vest_PlateCarrier_Khaki): CLASS(Vest_PlateCarrier_Base) {
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Vest_PlateCarrier_Khaki);
        picture = QPATHTOF(UI\vest_platecarrier_khaki_x_ca.paa);//@todo - change logo to TACS
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_platecarrier_khaki_co.paa)};//@todo - change logo to TACS
    };
    class CLASS(Vest_PlateCarrier_MARPAT): CLASS(Vest_PlateCarrier_Base) {
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Vest_PlateCarrier_MARPAT);
        picture = QPATHTOF(UI\vest_platecarrier_marpat_x_ca.paa);//@todo - change logo to TACS
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_platecarrier_marpat_co.paa)};//@todo - change logo to TACS
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
        picture = "\A3\characters_f\Data\UI\icon_v_tacvest_blk_ca.paa";//picture = QPATHTOF(vest_tactical_darkblack_x_ca.paa);//@todo
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest_tactical_darkblack_co.paa)};

        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo"};
        };
    };
};
