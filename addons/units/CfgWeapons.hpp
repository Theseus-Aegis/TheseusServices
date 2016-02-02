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
    class CLASS(Uniform_Combat_LS_BS_DGP_BB): CLASS(Uniform_Base) { // DG = Digital Green
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
    // Checked
    class CLASS(Uniform_Combat_LS_CDBS_GP_TB): CLASS(Uniform_Base) { // CDB = Checked Dark Blue
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Uniform_Combat_LS_CDBS_GP_TB);
        picture = QPATHTOF(UI\uniform_combat_ls_cdbs_gp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Combat_LS_CDBS_GP_TB);
        };
    };
    class CLASS(Uniform_Combat_LS_CLBS_GP_BB): CLASS(Uniform_Base) { // CLB = Checked Light Blue
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Uniform_Combat_LS_CLBS_GP_BB);
        picture = QPATHTOF(UI\uniform_combat_ls_clbs_gp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Combat_LS_CLBS_GP_BB);
        };
    };
    class CLASS(Uniform_Combat_LS_CLRS_TP_BB): CLASS(Uniform_Base) { // CLR = Checked Light Red
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Uniform_Combat_LS_CLRS_TP_BB);
        picture = QPATHTOF(UI\uniform_combat_ls_clrs_tp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Combat_LS_CLRS_TP_BB);
        };
    };
    class CLASS(Uniform_Combat_LS_CPS_BP_BB): CLASS(Uniform_Base) { // CP = Checked Purple
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Uniform_Combat_LS_CPS_BP_BB);
        picture = QPATHTOF(UI\uniform_combat_ls_cps_bp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Combat_LS_CPS_BP_BB);
        };
    };

    // Combat - Rolled Sleeves
    class CLASS(Uniform_Combat_RS_BS_GP_BB): CLASS(Uniform_Base) {
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Uniform_Combat_RS_BS_GP_BB);
        picture = QPATHTOF(UI\uniform_combat_rs_bs_gp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Combat_RS_BS_GP_BB);
        };
    };
    class CLASS(Uniform_Combat_RS_BS_GP_TB): CLASS(Uniform_Base) {
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Uniform_Combat_RS_BS_GP_TB);
        picture = QPATHTOF(UI\uniform_combat_rs_bs_gp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Combat_RS_BS_GP_TB);
        };
    };
    class CLASS(Uniform_Combat_RS_BS_TP_BB): CLASS(Uniform_Base) {
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Uniform_Combat_RS_BS_TP_BB);
        picture = QPATHTOF(UI\uniform_combat_rs_bs_tp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Combat_RS_BS_TP_BB);
        };
    };
    class CLASS(Uniform_Combat_RS_BS_TP_TB): CLASS(Uniform_Base) {
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Uniform_Combat_RS_BS_TP_TB);
        picture = QPATHTOF(UI\uniform_combat_rs_bs_tp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Combat_RS_BS_TP_TB);
        };
    };
    class CLASS(Uniform_Combat_RS_GS_BP_BB): CLASS(Uniform_Base) {
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Uniform_Combat_RS_GS_BP_BB);
        picture = QPATHTOF(UI\uniform_combat_rs_gs_bp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Combat_RS_GS_BP_BB);
        };
    };
    class CLASS(Uniform_Combat_RS_GS_TP_BB): CLASS(Uniform_Base) {
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Uniform_Combat_RS_GS_TP_BB);
        picture = QPATHTOF(UI\uniform_combat_rs_gs_tp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Combat_RS_GS_TP_BB);
        };
    };
    class CLASS(Uniform_Combat_RS_BS_DGP_BB): CLASS(Uniform_Base) { // DG = Digital Green
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Uniform_Combat_RS_BS_DGP_BB);
        picture = QPATHTOF(UI\uniform_combat_rs_bs_dgp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Combat_RS_BS_DGP_BB);
        };
    };
    class CLASS(Uniform_Combat_RS_TS_BP_BB): CLASS(Uniform_Base) {
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Uniform_Combat_RS_TS_BP_BB);
        picture = QPATHTOF(UI\uniform_combat_rs_ts_bp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Combat_RS_TS_BP_BB);
        };
    };
    class CLASS(Uniform_Combat_RS_TS_GP_BB): CLASS(Uniform_Base) {
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Uniform_Combat_RS_TS_GP_BB);
        picture = QPATHTOF(UI\uniform_combat_rs_ts_gp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Combat_RS_TS_GP_BB);
        };
    };
    class CLASS(Uniform_Combat_RS_TS_GP_TB): CLASS(Uniform_Base) {
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Uniform_Combat_RS_TS_GP_TB);
        picture = QPATHTOF(UI\uniform_combat_rs_ts_gp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Combat_RS_TS_GP_TB);
        };
    };
    // Checked
    class CLASS(Uniform_Combat_RS_CDBS_GP_TB): CLASS(Uniform_Base) {
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Uniform_Combat_RS_CDBS_GP_TB);
        picture = QPATHTOF(UI\uniform_combat_rs_cdbs_gp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Combat_RS_CDBS_GP_TB);
        };
    };
    class CLASS(Uniform_Combat_RS_CLBS_GP_BB): CLASS(Uniform_Base) {
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Uniform_Combat_RS_CLBS_GP_BB);
        picture = QPATHTOF(UI\uniform_combat_rs_clbs_gp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Combat_RS_CLBS_GP_BB);
        };
    };
    class CLASS(Uniform_Combat_RS_CLRS_TP_BB): CLASS(Uniform_Base) {
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Uniform_Combat_RS_CLRS_TP_BB);
        picture = QPATHTOF(UI\uniform_combat_rs_clrs_tp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Combat_RS_CLRS_TP_BB);
        };
    };
    class CLASS(Uniform_Combat_RS_CPS_BP_BB): CLASS(Uniform_Base) {
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Uniform_Combat_RS_CPS_BP_BB);
        picture = QPATHTOF(UI\uniform_combat_rs_cps_bp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Combat_RS_CPS_BP_BB);
        };
    };


    // Garment - Long Sleeves
    class CLASS(Uniform_Garment_LS_BS_BP_BB): CLASS(Uniform_Base) {
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Uniform_Garment_LS_BS_BP_BB);
        picture = QPATHTOF(UI\uniform_garment_ls_bs_bp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Garment_LS_BS_BP_BB);
        };
    };
    class CLASS(Uniform_Garment_LS_BS_GP_BB): CLASS(Uniform_Base) {
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Uniform_Garment_LS_BS_GP_BB);
        picture = QPATHTOF(UI\uniform_garment_ls_bs_gp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Garment_LS_BS_GP_BB);
        };
    };
    class CLASS(Uniform_Garment_LS_BS_EP_TB): CLASS(Uniform_Base) { // E = Grey
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Uniform_Garment_LS_BS_EP_TB);
        picture = QPATHTOF(UI\uniform_garment_ls_bs_ep_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Garment_LS_BS_EP_TB);
        };
    };
    class CLASS(Uniform_Garment_LS_GS_GP_BB): CLASS(Uniform_Base) {
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Uniform_Garment_LS_GS_GP_BB);
        picture = QPATHTOF(UI\uniform_garment_ls_gs_gp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Garment_LS_GS_GP_BB);
        };
    };
    class CLASS(Uniform_Garment_LS_GS_BP_BB): CLASS(Uniform_Base) {
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Uniform_Garment_LS_GS_BP_BB);
        picture = QPATHTOF(UI\uniform_garment_ls_gs_bp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Garment_LS_GS_BP_BB);
        };
    };
    class CLASS(Uniform_Garment_LS_GS_EP_TB): CLASS(Uniform_Base) { // E = Grey
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Uniform_Garment_LS_GS_EP_TB);
        picture = QPATHTOF(UI\uniform_garment_ls_gs_ep_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Garment_LS_GS_EP_TB);
        };
    };
    class CLASS(Uniform_Garment_LS_ES_EP_TB): CLASS(Uniform_Base) { // E = Grey
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Uniform_Garment_LS_ES_EP_TB);
        picture = QPATHTOF(UI\uniform_garment_ls_es_ep_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Garment_LS_ES_EP_TB);
        };
    };
    class CLASS(Uniform_Garment_LS_ES_BP_BB): CLASS(Uniform_Base) { // E = Grey
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Uniform_Garment_LS_ES_BP_BB);
        picture = QPATHTOF(UI\uniform_garment_ls_es_bp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Garment_LS_ES_BP_BB);
        };
    };
    class CLASS(Uniform_Garment_LS_ES_GP_BB): CLASS(Uniform_Base) { // E = Grey
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Uniform_Garment_LS_ES_GP_BB);
        picture = QPATHTOF(UI\uniform_garment_ls_es_gp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Garment_LS_ES_GP_BB);
        };
    };
    class CLASS(Uniform_Garment_LS_TS_TP_TB): CLASS(Uniform_Base) {
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Uniform_Garment_LS_TS_TP_TB);
        //picture = QPATHTOF(UI\uniform_garment_ls_ts_tp_ca.paa);//@todo

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Garment_LS_TS_TP_TB);
        };
    };
    class CLASS(Uniform_Garment_LS_GS_TP_TB): CLASS(Uniform_Base) {
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Uniform_Garment_LS_GS_TP_TB);
        //picture = QPATHTOF(UI\uniform_garment_ls_gs_tp_ca.paa);//@todo

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Garment_LS_GS_TP_TB);
        };
    };
    class CLASS(Uniform_Garment_LS_TS_GP_BB): CLASS(Uniform_Base) {
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Uniform_Garment_LS_TS_GP_BB);
        //picture = QPATHTOF(UI\uniform_garment_ls_ts_gp_ca.paa);//@todo

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Garment_LS_TS_GP_BB);
        };
    };
    class CLASS(Uniform_Garment_LS_BS_TP_TB): CLASS(Uniform_Base) {
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Uniform_Garment_LS_BS_TP_TB);
        //picture = QPATHTOF(UI\uniform_garment_ls_bs_tp_ca.paa);//@todo

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Garment_LS_BS_TP_TB);
        };
    };
    class CLASS(Uniform_Garment_LS_TS_BP_BB): CLASS(Uniform_Base) {
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Uniform_Garment_LS_TS_BP_BB);
        //picture = QPATHTOF(UI\uniform_garment_ls_ts_bp_ca.paa);//@todo

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Garment_LS_TS_BP_BB);
        };
    };

    // Garment - Rolled Sleeves
    class CLASS(Uniform_Garment_RS_BS_BP_BB): CLASS(Uniform_Base) {
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Uniform_Garment_RS_BS_BP_BB);
        picture = QPATHTOF(UI\uniform_garment_rs_bs_bp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Garment_RS_BS_BP_BB);
        };
    };
    class CLASS(Uniform_Garment_RS_BS_GP_BB): CLASS(Uniform_Base) {
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Uniform_Garment_RS_BS_GP_BB);
        picture = QPATHTOF(UI\uniform_garment_rs_bs_gp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Garment_RS_BS_GP_BB);
        };
    };
    class CLASS(Uniform_Garment_RS_BS_EP_TB): CLASS(Uniform_Base) { // E = Grey
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Uniform_Garment_RS_BS_EP_TB);
        picture = QPATHTOF(UI\uniform_garment_rs_bs_ep_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Garment_RS_BS_EP_TB);
        };
    };
    class CLASS(Uniform_Garment_RS_GS_GP_BB): CLASS(Uniform_Base) {
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Uniform_Garment_RS_GS_GP_BB);
        picture = QPATHTOF(UI\uniform_garment_rs_gs_gp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Garment_RS_GS_GP_BB);
        };
    };
    class CLASS(Uniform_Garment_RS_GS_BP_BB): CLASS(Uniform_Base) {
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Uniform_Garment_RS_GS_BP_BB);
        picture = QPATHTOF(UI\uniform_garment_rs_gs_bp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Garment_RS_GS_BP_BB);
        };
    };
    class CLASS(Uniform_Garment_RS_GS_EP_TB): CLASS(Uniform_Base) {
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Uniform_Garment_RS_GS_EP_TB);
        picture = QPATHTOF(UI\uniform_garment_rs_gs_ep_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Garment_RS_GS_EP_TB);
        };
    };
    class CLASS(Uniform_Garment_RS_ES_EP_TB): CLASS(Uniform_Base) {
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Uniform_Garment_RS_ES_EP_TB);
        picture = QPATHTOF(UI\uniform_garment_rs_es_ep_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Garment_RS_ES_EP_TB);
        };
    };
    class CLASS(Uniform_Garment_RS_ES_BP_BB): CLASS(Uniform_Base) {
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Uniform_Garment_RS_ES_BP_BB);
        picture = QPATHTOF(UI\uniform_garment_rs_es_bp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Garment_RS_ES_BP_BB);
        };
    };
    class CLASS(Uniform_Garment_RS_ES_GP_BB): CLASS(Uniform_Base) {
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Uniform_Garment_RS_ES_GP_BB);
        picture = QPATHTOF(UI\uniform_garment_rs_es_gp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Garment_RS_ES_GP_BB);
        };
    };
    class CLASS(Uniform_Garment_RS_TS_TP_TB): CLASS(Uniform_Base) {
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Uniform_Garment_RS_TS_TP_TB);
        //picture = QPATHTOF(UI\uniform_garment_rs_ts_tp_ca.paa);//@todo

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Garment_RS_TS_TP_TB);
        };
    };
    class CLASS(Uniform_Garment_RS_GS_TP_TB): CLASS(Uniform_Base) {
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Uniform_Garment_RS_GS_TP_TB);
        //picture = QPATHTOF(UI\uniform_garment_rs_gs_tp_ca.paa);//@todo

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Garment_RS_GS_TP_TB);
        };
    };
    class CLASS(Uniform_Garment_RS_TS_GP_BB): CLASS(Uniform_Base) {
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Uniform_Garment_RS_TS_GP_BB);
        //picture = QPATHTOF(UI\uniform_garment_rs_ts_gp_ca.paa);//@todo

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Garment_RS_TS_GP_BB);
        };
    };
    class CLASS(Uniform_Garment_RS_BS_TP_TB): CLASS(Uniform_Base) {
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Uniform_Garment_RS_BS_TP_TB);
        //picture = QPATHTOF(UI\uniform_garment_rs_bs_tp_ca.paa);//@todo

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Garment_RS_BS_TP_TB);
        };
    };
    class CLASS(Uniform_Garment_RS_TS_BP_BB): CLASS(Uniform_Base) {
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Uniform_Garment_RS_TS_BP_BB);
        //picture = QPATHTOF(UI\uniform_garment_rs_ts_bp_ca.paa);//@todo

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Garment_RS_TS_BP_BB);
        };
    };

    //@todo translations
    //@todo units
    //@todo data

};
