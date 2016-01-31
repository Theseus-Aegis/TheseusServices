class CfgWeapons {
    class Uniform_Base;

    // Underwear
    class U_BasicBody: Uniform_Base {
        class ItemInfo;
    };
    class CLASS(Underwear_BlackLogo): U_BasicBody {
        scope = 1;
        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Underwear_BlackLogo);
        };
    };
    class CLASS(Underwear_WhiteLogo): U_BasicBody {
        scope = 1;
        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Underwear_WhiteLogo);
        };
    };
    class CLASS(Underwear_BlueLogo): U_BasicBody {
        scope = 1;
        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Underwear_BlueLogo);
        };
    };
    class CLASS(Underwear_GreenLogo): U_BasicBody {
        scope = 1;
        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Underwear_GreenLogo);
        };
    };


    // Uniforms
    class U_B_CTRG_1;
    class CLASS(Uniform_Base): U_B_CTRG_1 {
        dlc = QUOTE(PREFIX);
        scope = 0;
        class ItemInfo;
    };

    // Naming pattern: SizeSleeves_ColorShirt_ColorPants_ColorBoots

    // Combat - Long SLeeves
    class CLASS(Uniform_Combat_LS_BS_GP_BB): CLASS(Uniform_Base) {
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Uniform_Combat_LS_BS_GP_BB);
        picture = QPATHTOF(UI\uniform_combat_ls_bs_gp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Combat_LS_BS_GP_BB);
        };
    };
    class CLASS(Uniform_Combat_LS_BS_GP_TB): CLASS(Uniform_Base) {
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Uniform_Combat_LS_BS_GP_TB);
        picture = QPATHTOF(UI\uniform_combat_ls_bs_gp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Combat_LS_BS_GP_TB);
        };
    };
    class CLASS(Uniform_Combat_LS_BS_TP_BB): CLASS(Uniform_Base) {
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Uniform_Combat_LS_BS_TP_BB);
        picture = QPATHTOF(UI\uniform_combat_ls_bs_tp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Combat_LS_BS_TP_BB);
        };
    };
    class CLASS(Uniform_Combat_LS_BS_TP_TB): CLASS(Uniform_Base) {
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Uniform_Combat_LS_BS_TP_TB);
        picture = QPATHTOF(UI\uniform_combat_ls_bs_tp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Combat_LS_BS_TP_TB);
        };
    };
    class CLASS(Uniform_Combat_LS_GS_BP_BB): CLASS(Uniform_Base) {
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Uniform_Combat_LS_GS_BP_BB);
        picture = QPATHTOF(UI\uniform_combat_ls_gs_bp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Combat_LS_GS_BP_BB);
        };
    };
    class CLASS(Uniform_Combat_LS_GS_TP_BB): CLASS(Uniform_Base) {
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Uniform_Combat_LS_GS_TP_BB);
        picture = QPATHTOF(UI\uniform_combat_ls_gs_tp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Combat_LS_GS_TP_BB);
        };
    };
    class CLASS(Uniform_Combat_LS_BS_DGP_BB): CLASS(Uniform_Base) {
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Uniform_Combat_LS_BS_DGP_BB);
        picture = QPATHTOF(UI\uniform_combat_ls_bs_dgp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Combat_LS_BS_DGP_BB);
        };
    };
    class CLASS(Uniform_Combat_LS_TS_BP_BB): CLASS(Uniform_Base) {
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Uniform_Combat_LS_TS_BP_BB);
        picture = QPATHTOF(UI\uniform_combat_ls_ts_bp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Combat_LS_TS_BP_BB);
        };
    };
    class CLASS(Uniform_Combat_LS_TS_GP_BB): CLASS(Uniform_Base) {
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Uniform_Combat_LS_TS_GP_BB);
        picture = QPATHTOF(UI\uniform_combat_ls_ts_gp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Combat_LS_TS_GP_BB);
        };
    };
    class CLASS(Uniform_Combat_LS_TS_GP_TB): CLASS(Uniform_Base) {
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Uniform_Combat_LS_TS_GP_TB);
        picture = QPATHTOF(UI\uniform_combat_ls_ts_gp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Combat_LS_TS_GP_TB);
        };
    };
    //@todo units
    //@todo translations
};
