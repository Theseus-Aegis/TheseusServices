class CfgWeapons {
    class Uniform_Base;

    // Underwear
    class U_BasicBody: Uniform_Base {
        class ItemInfo;
    };
    class CLASS(Underwear_BlackLogo): U_BasicBody {
        scope = 1;
        author = "Pomigit, Jonpas";
        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Underwear_BlackLogo);
        };
    };
    class CLASS(Underwear_WhiteLogo): U_BasicBody {
        scope = 1;
        author = "Pomigit, Jonpas";
        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Underwear_WhiteLogo);
        };
    };
    class CLASS(Underwear_BlueLogo): U_BasicBody {
        scope = 1;
        author = "Pomigit, Jonpas";
        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Underwear_BlueLogo);
        };
    };
    class CLASS(Underwear_GreenLogo): U_BasicBody {
        scope = 1;
        author = "Pomigit, Jonpas";
        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Underwear_GreenLogo);
        };
    };


    // Uniforms
    class UniformItem;
    class CLASS(Uniform_Base): Uniform_Base {
        dlc = QUOTE(PREFIX);
        scope = 0;
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

        class ItemInfo: UniformItem {
            uniformModel = "-";
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class CLASS(Uniform_Base_Floral): CLASS(Uniform_Base) {
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";

        class ItemInfo: UniformItem {
            uniformModel = "-";
            containerClass = "Supply40";
            mass = 40;
        };
    };

    // Naming pattern: TypeSleevesOrPants_ColorShirt_ColorPants_ColorBoots

    // Combat - Long SLeeves
    class CLASS(Uniform_Combat_LS_BS_BP_BB): CLASS(Uniform_Base) {
        scope = 2;
        author = "Pomigit, Kresky";
        displayName = CSTRING(Uniform_Combat_LS_BS_BP_BB);
        picture = QPATHTOF(UI\uniform_combat_ls_bs_bp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Combat_LS_BS_BP_BB);
        };
    };
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
    class CLASS(Uniform_Combat_LS_GS_GP_BB): CLASS(Uniform_Base) {
        scope = 2;
        author = "Kresky";
        displayName = CSTRING(Uniform_Combat_LS_GS_GP_BB);
        picture = QPATHTOF(UI\uniform_combat_ls_gs_gp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Combat_LS_GS_GP_BB);
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
    class CLASS(Uniform_Combat_LS_TS_TP_TB): CLASS(Uniform_Base) {
        scope = 2;
        author = "Kresky";
        displayName = CSTRING(Uniform_Combat_LS_TS_TP_TB);
        picture = QPATHTOF(UI\uniform_combat_ls_ts_tp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Combat_LS_TS_TP_TB);
        };
    };
    class CLASS(Uniform_Combat_LS_WS_WP_WB): CLASS(Uniform_Base) {
        scope = 2;
        author = "Kresky";
        displayName = CSTRING(Uniform_Combat_LS_WS_WP_WB);
        picture = QPATHTOF(UI\uniform_combat_ls_ws_wp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Combat_LS_WS_WP_WB);
        };
    };

    // Plaid
    class CLASS(Uniform_Combat_LS_CBPS_BP_BB): CLASS(Uniform_Base) { // CBP = Buffalo Plaid
        scope = 2;
        author = "GilleeDoo, Tyrone";
        displayName = CSTRING(Uniform_Combat_LS_CBPS_BP_BB);
        picture = QPATHTOF(UI\uniform_combat_ls_cbps_bp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Combat_LS_CBPS_BP_BB);
        };
    };
    class CLASS(Uniform_Combat_LS_CDES_TP_TB): CLASS(Uniform_Base) { // CDE = Plaid Dark Earth
        scope = 2;
        author = "GilleeDoo, Tyrone";
        displayName = CSTRING(Uniform_Combat_LS_CDES_TP_TB);
        picture = QPATHTOF(UI\uniform_combat_ls_cdes_tp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Combat_LS_CDES_TP_TB);
        };
    };
    class CLASS(Uniform_Combat_LS_CDFS_GP_TB): CLASS(Uniform_Base) { // CDF = Plaid Dark Foliage
        scope = 2;
        author = "GilleeDoo, Tyrone";
        displayName = CSTRING(Uniform_Combat_LS_CDFS_GP_TB);
        picture = QPATHTOF(UI\uniform_combat_ls_cdfs_gp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Combat_LS_CDFS_GP_TB);
        };
    };
    class CLASS(Uniform_Combat_LS_CLES_TP_BB): CLASS(Uniform_Base) { // CLE = Plaid Light Earth
        scope = 2;
        author = "GilleeDoo, Tyrone";
        displayName = CSTRING(Uniform_Combat_LS_CLES_TP_BB);
        picture = QPATHTOF(UI\uniform_combat_ls_cles_tp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Combat_LS_CLES_TP_BB);
        };
    };
    class CLASS(Uniform_Combat_LS_CLFS_GP_BB): CLASS(Uniform_Base) { // CLF = Plaid Light Foliage
        scope = 2;
        author = "GilleeDoo, Tyrone";
        displayName = CSTRING(Uniform_Combat_LS_CLFS_GP_BB);
        picture = QPATHTOF(UI\uniform_combat_ls_clfs_gp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Combat_LS_CLFS_GP_BB);
        };
    };
    class CLASS(Uniform_Combat_LS_CDBS_GP_TB): CLASS(Uniform_Base) { // CDB = Plaid Dark Blue
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Uniform_Combat_LS_CDBS_GP_TB);
        picture = QPATHTOF(UI\uniform_combat_ls_cdbs_gp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Combat_LS_CDBS_GP_TB);
        };
    };
    class CLASS(Uniform_Combat_LS_CLBS_GP_BB): CLASS(Uniform_Base) { // CLB = Plaid Light Blue
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Uniform_Combat_LS_CLBS_GP_BB);
        picture = QPATHTOF(UI\uniform_combat_ls_clbs_gp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Combat_LS_CLBS_GP_BB);
        };
    };
    class CLASS(Uniform_Combat_LS_CLRS_TP_BB): CLASS(Uniform_Base) { // CLR = Plaid Light Red
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Uniform_Combat_LS_CLRS_TP_BB);
        picture = QPATHTOF(UI\uniform_combat_ls_clrs_tp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Combat_LS_CLRS_TP_BB);
        };
    };
    class CLASS(Uniform_Combat_LS_CPS_BP_BB): CLASS(Uniform_Base) { // CP = Plaid Purple
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Uniform_Combat_LS_CPS_BP_BB);
        picture = QPATHTOF(UI\uniform_combat_ls_cps_bp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Combat_LS_CPS_BP_BB);
        };
    };

    // Combat - Rolled Sleeves
    class CLASS(Uniform_Combat_RS_BS_BP_BB): CLASS(Uniform_Base) {
        scope = 2;
        author = "Pomigit, Kresky";
        displayName = CSTRING(Uniform_Combat_RS_BS_BP_BB);
        picture = QPATHTOF(UI\uniform_combat_rs_bs_bp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Combat_RS_BS_BP_BB);
        };
    };
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
    class CLASS(Uniform_Combat_RS_GS_GP_BB): CLASS(Uniform_Base) {
        scope = 2;
        author = "Kresky";
        displayName = CSTRING(Uniform_Combat_RS_GS_GP_BB);
        picture = QPATHTOF(UI\uniform_combat_rs_gs_gp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Combat_RS_GS_GP_BB);
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
    class CLASS(Uniform_Combat_RS_TS_TP_TB): CLASS(Uniform_Base) {
        scope = 2;
        author = "Kresky";
        displayName = CSTRING(Uniform_Combat_RS_TS_TP_TB);
        picture = QPATHTOF(UI\uniform_combat_rs_ts_tp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Combat_RS_TS_TP_TB);
        };
    };

    // Plaid
    class CLASS(Uniform_Combat_RS_CBPS_BP_BB): CLASS(Uniform_Base) { // CBP = Buffalo Plaid
        scope = 2;
        author = "GilleeDoo, Tyrone";
        displayName = CSTRING(Uniform_Combat_RS_CBPS_BP_BB);
        picture = QPATHTOF(UI\uniform_combat_rs_cbps_bp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Combat_RS_CBPS_BP_BB);
        };
    };
    class CLASS(Uniform_Combat_RS_CDES_TP_TB): CLASS(Uniform_Base) { // CDE = Plaid Dark Earth
        scope = 2;
        author = "GilleeDoo, Tyrone";
        displayName = CSTRING(Uniform_Combat_RS_CDES_TP_TB);
        picture = QPATHTOF(UI\uniform_combat_rs_cdes_tp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Combat_RS_CDES_TP_TB);
        };
    };
    class CLASS(Uniform_Combat_RS_CDFS_GP_TB): CLASS(Uniform_Base) { // CDF = Plaid Dark Foliage
        scope = 2;
        author = "GilleeDoo, Tyrone";
        displayName = CSTRING(Uniform_Combat_RS_CDFS_GP_TB);
        picture = QPATHTOF(UI\uniform_combat_rs_cdfs_gp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Combat_RS_CDFS_GP_TB);
        };
    };
    class CLASS(Uniform_Combat_RS_CLES_TP_BB): CLASS(Uniform_Base) { // CLE = Plaid Light Earth
        scope = 2;
        author = "GilleeDoo, Tyrone";
        displayName = CSTRING(Uniform_Combat_RS_CLES_TP_BB);
        picture = QPATHTOF(UI\uniform_combat_rs_cles_tp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Combat_RS_CLES_TP_BB);
        };
    };
    class CLASS(Uniform_Combat_RS_CLFS_GP_BB): CLASS(Uniform_Base) { // CLF = Plaid Light Foliage
        scope = 2;
        author = "GilleeDoo, Tyrone";
        displayName = CSTRING(Uniform_Combat_RS_CLFS_GP_BB);
        picture = QPATHTOF(UI\uniform_combat_rs_clfs_gp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Combat_RS_CLFS_GP_BB);
        };
    };
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
    class CLASS(Uniform_Garment_LS_OS_EP_TB): CLASS(Uniform_Base) { // O = Brown, E = Grey
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Uniform_Garment_LS_OS_EP_TB);
        picture = QPATHTOF(UI\uniform_garment_ls_os_ep_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Garment_LS_OS_EP_TB);
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
        author = "Pomigit, Jonpas, Rory";
        displayName = CSTRING(Uniform_Garment_LS_TS_TP_TB);
        picture = QPATHTOF(UI\uniform_garment_ls_ts_tp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Garment_LS_TS_TP_TB);
        };
    };
    class CLASS(Uniform_Garment_LS_GS_TP_TB): CLASS(Uniform_Base) {
        scope = 2;
        author = "Pomigit, Jonpas, Rory";
        displayName = CSTRING(Uniform_Garment_LS_GS_TP_TB);
        picture = QPATHTOF(UI\uniform_garment_ls_gs_tp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Garment_LS_GS_TP_TB);
        };
    };
    class CLASS(Uniform_Garment_LS_TS_GP_BB): CLASS(Uniform_Base) {
        scope = 2;
        author = "Pomigit, Jonpas, Rory";
        displayName = CSTRING(Uniform_Garment_LS_TS_GP_BB);
        picture = QPATHTOF(UI\uniform_garment_ls_ts_gp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Garment_LS_TS_GP_BB);
        };
    };
    class CLASS(Uniform_Garment_LS_OS_TP_TB): CLASS(Uniform_Base) { // O = Brown
        scope = 2;
        author = "Pomigit, Jonpas, Rory";
        displayName = CSTRING(Uniform_Garment_LS_OS_TP_TB);
        picture = QPATHTOF(UI\uniform_garment_ls_os_tp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Garment_LS_OS_TP_TB);
        };
    };
    class CLASS(Uniform_Garment_LS_TS_BP_BB): CLASS(Uniform_Base) {
        scope = 2;
        author = "Pomigit, Jonpas, Rory";
        displayName = CSTRING(Uniform_Garment_LS_TS_BP_BB);
        picture = QPATHTOF(UI\uniform_garment_ls_ts_bp_ca.paa);

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
    class CLASS(Uniform_Garment_RS_OS_EP_TB): CLASS(Uniform_Base) { // O = Brown, E = Grey
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Uniform_Garment_RS_OS_EP_TB);
        picture = QPATHTOF(UI\uniform_garment_rs_os_ep_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Garment_RS_OS_EP_TB);
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
        author = "Pomigit, Jonpas, Rory";
        displayName = CSTRING(Uniform_Garment_RS_TS_TP_TB);
        picture = QPATHTOF(UI\uniform_garment_rs_ts_tp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Garment_RS_TS_TP_TB);
        };
    };
    class CLASS(Uniform_Garment_RS_GS_TP_TB): CLASS(Uniform_Base) {
        scope = 2;
        author = "Pomigit, Jonpas, Rory";
        displayName = CSTRING(Uniform_Garment_RS_GS_TP_TB);
        picture = QPATHTOF(UI\uniform_garment_rs_gs_tp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Garment_RS_GS_TP_TB);
        };
    };
    class CLASS(Uniform_Garment_RS_TS_GP_BB): CLASS(Uniform_Base) {
        scope = 2;
        author = "Pomigit, Jonpas, Rory";
        displayName = CSTRING(Uniform_Garment_RS_TS_GP_BB);
        picture = QPATHTOF(UI\uniform_garment_rs_ts_gp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Garment_RS_TS_GP_BB);
        };
    };
    class CLASS(Uniform_Garment_RS_OS_TP_TB): CLASS(Uniform_Base) { // O = Brown
        scope = 2;
        author = "Pomigit, Jonpas, Rory";
        displayName = CSTRING(Uniform_Garment_RS_OS_TP_TB);
        picture = QPATHTOF(UI\uniform_garment_rs_os_tp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Garment_RS_OS_TP_TB);
        };
    };
    class CLASS(Uniform_Garment_RS_TS_BP_BB): CLASS(Uniform_Base) {
        scope = 2;
        author = "Pomigit, Jonpas, Rory";
        displayName = CSTRING(Uniform_Garment_RS_TS_BP_BB);
        picture = QPATHTOF(UI\uniform_garment_rs_ts_bp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Garment_RS_TS_BP_BB);
        };
    };


    // Polo - Tactical Pants
    class CLASS(Uniform_Polo_TP_LS_TP_TB): CLASS(Uniform_Base) { // L = Blue
        scope = 2;
        author = "Pomigit, Jonpas, Rory";
        displayName = CSTRING(Uniform_Polo_TP_LS_TP_TB);
        picture = QPATHTOF(UI\uniform_polo_tp_ls_tp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Polo_TP_LS_TP_TB);
        };
    };
    class CLASS(Uniform_Polo_TP_LS_TP_TB_NoLogo): CLASS(Uniform_Base) { // L = Blue
        scope = 2;
        author = "Pomigit, Jonpas, Kresky";
        displayName = CSTRING(Uniform_Polo_TP_LS_TP_TB_NoLogo);
        picture = QPATHTOF(UI\uniform_polo_tp_ls_tp_nologo_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Polo_TP_LS_TP_TB_NoLogo);
        };
    };
    class CLASS(Uniform_Polo_TP_TS_GP_BB): CLASS(Uniform_Base) {
        scope = 2;
        author = "Pomigit, Jonpas, Rory";
        displayName = CSTRING(Uniform_Polo_TP_TS_GP_BB);
        picture = QPATHTOF(UI\uniform_polo_tp_ts_gp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Polo_TP_TS_GP_BB);
        };
    };
    class CLASS(Uniform_Polo_TP_TS_GP_BB_NoLogo): CLASS(Uniform_Base) {
        scope = 2;
        author = "Pomigit, Jonpas, Kresky";
        displayName = CSTRING(Uniform_Polo_TP_TS_GP_BB_NoLogo);
        picture = QPATHTOF(UI\uniform_polo_tp_ts_gp_nologo_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Polo_TP_TS_GP_BB_NoLogo);
        };
    };
    class CLASS(Uniform_Polo_TP_BS_TP_TB): CLASS(Uniform_Base) {
        scope = 2;
        author = "Pomigit, Jonpas, Rory";
        displayName = CSTRING(Uniform_Polo_TP_BS_TP_TB);
        picture = QPATHTOF(UI\uniform_polo_tp_bs_tp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Polo_TP_BS_TP_TB);
        };
    };
    class CLASS(Uniform_Polo_TP_BS_TP_TB_NoLogo): CLASS(Uniform_Base) {
        scope = 2;
        author = "Pomigit, Jonpas, Kresky";
        displayName = CSTRING(Uniform_Polo_TP_BS_TP_TB_NoLogo);
        picture = QPATHTOF(UI\uniform_polo_tp_bs_tp_nologo_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Polo_TP_BS_TP_TB_NoLogo);
        };
    };
    class CLASS(Uniform_Polo_TP_BS_LP_BB): CLASS(Uniform_Base) { // L = Blue
        scope = 2;
        author = "Pomigit, Jonpas, Rory";
        displayName = CSTRING(Uniform_Polo_TP_BS_LP_BB);
        picture = QPATHTOF(UI\uniform_polo_tp_bs_lp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Polo_TP_BS_LP_BB);
        };
    };
    class CLASS(Uniform_Polo_TP_BS_LP_BB_NoLogo): CLASS(Uniform_Base) { // L = Blue
        scope = 2;
        author = "Pomigit, Jonpas, Kresky";
        displayName = CSTRING(Uniform_Polo_TP_BS_LP_BB_NoLogo);
        picture = QPATHTOF(UI\uniform_polo_tp_bs_lp_nologo_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Polo_TP_BS_LP_BB_NoLogo);
        };
    };
    class CLASS(Uniform_Polo_TP_LS_GP_BB): CLASS(Uniform_Base) { // L = Blue
        scope = 2;
        author = "Pomigit, Jonpas, Rory";
        displayName = CSTRING(Uniform_Polo_TP_LS_GP_BB);
        picture = QPATHTOF(UI\uniform_polo_tp_ls_gp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Polo_TP_LS_GP_BB);
        };
    };
    class CLASS(Uniform_Polo_TP_LS_GP_BB_NoLogo): CLASS(Uniform_Base) { // L = Blue
        scope = 2;
        author = "Pomigit, Jonpas, Kresky";
        displayName = CSTRING(Uniform_Polo_TP_LS_GP_BB_NoLogo);
        picture = QPATHTOF(UI\uniform_polo_tp_ls_gp_nologo_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Polo_TP_LS_GP_BB_NoLogo);
        };
    };
    class CLASS(Uniform_Polo_TP_OS_TP_BB): CLASS(Uniform_Base) { // O = Brown
        scope = 2;
        author = "Pomigit, Jonpas, Rory";
        displayName = CSTRING(Uniform_Polo_TP_OS_TP_BB);
        picture = QPATHTOF(UI\uniform_polo_tp_os_tp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Polo_TP_OS_TP_BB);
        };
    };
    class CLASS(Uniform_Polo_TP_OS_TP_BB_NoLogo): CLASS(Uniform_Base) { // O = Brown
        scope = 2;
        author = "Pomigit, Jonpas, Kresky";
        displayName = CSTRING(Uniform_Polo_TP_OS_TP_BB_NoLogo);
        picture = QPATHTOF(UI\uniform_polo_tp_os_tp_nologo_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Polo_TP_OS_TP_BB_NoLogo);
        };
    };
    class CLASS(Uniform_Polo_TP_OS_LP_BB): CLASS(Uniform_Base) { // O = Brown, L = Blue
        scope = 2;
        author = "Pomigit, Jonpas, Rory";
        displayName = CSTRING(Uniform_Polo_TP_OS_LP_BB);
        picture = QPATHTOF(UI\uniform_polo_tp_os_lp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Polo_TP_OS_LP_BB);
        };
    };
    class CLASS(Uniform_Polo_TP_OS_LP_BB_NoLogo): CLASS(Uniform_Base) { // O = Brown, L = Blue
        scope = 2;
        author = "Pomigit, Jonpas, Kresky";
        displayName = CSTRING(Uniform_Polo_TP_OS_LP_BB_NoLogo);
        picture = QPATHTOF(UI\uniform_polo_tp_os_lp_nologo_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Polo_TP_OS_LP_BB_NoLogo);
        };
    };
    class CLASS(Uniform_Polo_TP_GS_TP_TB): CLASS(Uniform_Base) {
        scope = 2;
        author = "Pomigit, Jonpas, Rory";
        displayName = CSTRING(Uniform_Polo_TP_GS_TP_TB);
        picture = QPATHTOF(UI\uniform_polo_tp_gs_tp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Polo_TP_GS_TP_TB);
        };
    };
    class CLASS(Uniform_Polo_TP_GS_TP_TB_NoLogo): CLASS(Uniform_Base) {
        scope = 2;
        author = "Pomigit, Jonpas, Kresky";
        displayName = CSTRING(Uniform_Polo_TP_GS_TP_TB_NoLogo);
        picture = QPATHTOF(UI\uniform_polo_tp_gs_tp_nologo_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Polo_TP_GS_TP_TB_NoLogo);
        };
    };
    class CLASS(Uniform_Polo_TP_WS_TP_TB): CLASS(Uniform_Base) {
        scope = 2;
        author = "Pomigit, Jonpas, Rory";
        displayName = CSTRING(Uniform_Polo_TP_WS_TP_TB);
        picture = QPATHTOF(UI\uniform_polo_tp_ws_tp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Polo_TP_WS_TP_TB);
        };
    };
    class CLASS(Uniform_Polo_TP_WS_TP_TB_NoLogo): CLASS(Uniform_Base) {
        scope = 2;
        author = "Pomigit, Jonpas, Kresky";
        displayName = CSTRING(Uniform_Polo_TP_WS_TP_TB_NoLogo);
        picture = QPATHTOF(UI\uniform_polo_tp_ws_tp_nologo_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Polo_TP_WS_TP_TB_NoLogo);
        };
    };
    class CLASS(Uniform_Polo_TP_WS_LP_BB): CLASS(Uniform_Base) { // L = Blue
        scope = 2;
        author = "Pomigit, Jonpas, Rory";
        displayName = CSTRING(Uniform_Polo_TP_WS_LP_BB);
        picture = QPATHTOF(UI\uniform_polo_tp_ws_lp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Polo_WS_LP_BB);
        };
    };
    class CLASS(Uniform_Polo_TP_WS_LP_BB_NoLogo): CLASS(Uniform_Base) { // L = Blue
        scope = 2;
        author = "Pomigit, Jonpas, Kresky";
        displayName = CSTRING(Uniform_Polo_TP_WS_LP_BB_NoLogo);
        picture = QPATHTOF(UI\uniform_polo_tp_ws_lp_nologo_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Polo_WS_LP_BB_NoLogo);
        };
    };
    class CLASS(Uniform_Polo_TP_WS_GP_BB): CLASS(Uniform_Base) { // L = Blue
        scope = 2;
        author = "Pomigit, Jonpas, Rory";
        displayName = CSTRING(Uniform_Polo_TP_WS_GP_BB);
        picture = QPATHTOF(UI\uniform_polo_tp_ws_gp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Polo_TP_WS_GP_BB);
        };
    };
    class CLASS(Uniform_Polo_TP_WS_GP_BB_NoLogo): CLASS(Uniform_Base) { // L = Blue
        scope = 2;
        author = "Pomigit, Jonpas, Kresky";
        displayName = CSTRING(Uniform_Polo_TP_WS_GP_BB_NoLogo);
        picture = QPATHTOF(UI\uniform_polo_tp_ws_gp_nologo_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Polo_TP_WS_GP_BB_NoLogo);
        };
    };

    // Polo - Cord Pants
    class CLASS(Uniform_Polo_CP_LS_TP_OB): CLASS(Uniform_Base) { // O = Brown
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Uniform_Polo_CP_LS_TP_OB);
        picture = QPATHTOF(UI\uniform_polo_cp_ls_tp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Polo_CP_LS_TP_OB);
        };
    };
    class CLASS(Uniform_Polo_CP_RS_LP_BB): CLASS(Uniform_Base) { // L = Blue
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Uniform_Polo_CP_RS_LP_BB);
        picture = QPATHTOF(UI\uniform_polo_cp_rs_lp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Polo_CP_RS_LP_BB);
        };
    };
    class CLASS(Uniform_Polo_CP_BS_TP_BB): CLASS(Uniform_Base) {
        scope = 2;
        author = "Pomigit, Jonpas, Rory";
        displayName = CSTRING(Uniform_Polo_CP_BS_TP_BB);
        picture = QPATHTOF(UI\uniform_polo_cp_bs_tp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Polo_CP_BS_TP_BB);
        };
    };
    class CLASS(Uniform_Polo_CP_BS_TP_BB_NoLogo): CLASS(Uniform_Base) {
        scope = 2;
        author = "Pomigit, Jonpas, Kresky";
        displayName = CSTRING(Uniform_Polo_CP_BS_TP_BB_NoLogo);
        picture = QPATHTOF(UI\uniform_polo_cp_bs_tp_nologo_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Polo_CP_BS_TP_BB_NoLogo);
        };
    };

    // TShirt - Jean Pants
    class CLASS(Uniform_TShirt_JP_GS_LP_BB): CLASS(Uniform_Base) { // L = Blue
        scope = 2;
        author = "Pomigit, Jonpas, Rory";
        displayName = CSTRING(Uniform_TShirt_JP_GS_LP_BB);
        picture = QPATHTOF(UI\uniform_tshirt_jp_gs_lp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_TShirt_JP_GS_LP_BB);
        };
    };
    class CLASS(Uniform_TShirt_JP_GS_TP_BB): CLASS(Uniform_Base) { // L = Blue
        scope = 2;
        author = "Pomigit, Jonpas, Rory";
        displayName = CSTRING(Uniform_TShirt_JP_GS_TP_BB);
        picture = QPATHTOF(UI\uniform_tshirt_jp_gs_tp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_TShirt_JP_GS_TP_BB);
        };
    };
    class CLASS(Uniform_TShirt_JP_BS_LP_BB): CLASS(Uniform_Base) { // L = Blue
        scope = 2;
        author = "Pomigit, Jonpas, Rory";
        displayName = CSTRING(Uniform_TShirt_JP_BS_LP_BB);
        picture = QPATHTOF(UI\uniform_tshirt_jp_bs_lp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_TShirt_JP_BS_LP_BB);
        };
    };
    class CLASS(Uniform_TShirt_JP_BS_TP_BB): CLASS(Uniform_Base) {
        scope = 2;
        author = "Pomigit, Jonpas, Rory";
        displayName = CSTRING(Uniform_TShirt_JP_BS_TP_BB);
        picture = QPATHTOF(UI\uniform_tshirt_jp_bs_tp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_TShirt_JP_BS_TP_BB);
        };
    };
    class CLASS(Uniform_TShirt_JP_LS_LP_BB): CLASS(Uniform_Base) { // L = Blue
        scope = 2;
        author = "Pomigit, Jonpas, Rory";
        displayName = CSTRING(Uniform_TShirt_JP_LS_LP_BB);
        picture = QPATHTOF(UI\uniform_tshirt_jp_ls_lp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_TShirt_JP_LS_LP_BB);
        };
    };
    class CLASS(Uniform_TShirt_JP_WS_LP_BB): CLASS(Uniform_Base) { // L = Blue
        scope = 2;
        author = "Pomigit, Jonpas, Rory";
        displayName = CSTRING(Uniform_TShirt_JP_WS_LP_BB);
        picture = QPATHTOF(UI\uniform_tshirt_jp_ws_lp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_TShirt_JP_WS_LP_BB);
        };
    };
    // Floral Shirts with Jeans
    class CLASS(Uniform_Floral_JP_BS_LP_BB): CLASS(Uniform_Base_Floral) {
        scope = 2;
        author = "Trenchgun, Tyrone";
        displayName = CSTRING(Uniform_Floral_JP_BS_LP_BB);
        picture = QPATHTOF(UI\uniform_floral_jp_bs_lp_bb_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Floral_JP_BS_LP_BB);
        };
    };
    class CLASS(Uniform_Floral_JP_RS_LP_BB): CLASS(Uniform_Base_Floral) {
        scope = 2;
        author = "Trenchgun, Tyrone";
        displayName = CSTRING(Uniform_Floral_JP_RS_LP_BB);
        picture = QPATHTOF(UI\uniform_floral_jp_rs_lp_bb_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Floral_JP_RS_LP_BB);
        };
    };
    class CLASS(Uniform_Floral_JP_GS_LP_BB): CLASS(Uniform_Base_Floral) {
        scope = 2;
        author = "Trenchgun, Tyrone";
        displayName = CSTRING(Uniform_Floral_JP_GS_LP_BB);
        picture = QPATHTOF(UI\uniform_floral_jp_gs_lp_bb_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Floral_JP_GS_LP_BB);
        };
    };
    class CLASS(Uniform_Floral_JP_WS_LP_BB): CLASS(Uniform_Base_Floral) {
        scope = 2;
        author = "Trenchgun, Tyrone";
        displayName = CSTRING(Uniform_Floral_JP_WS_LP_BB);
        picture = QPATHTOF(UI\uniform_floral_jp_ws_lp_bb_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Floral_JP_WS_LP_BB);
        };
    };
    class CLASS(Uniform_Floral_JP_BYS_LP_BB): CLASS(Uniform_Base_Floral) {
        scope = 2;
        author = "Trenchgun, Tyrone";
        displayName = CSTRING(Uniform_Floral_JP_BYS_LP_BB);
        picture = QPATHTOF(UI\uniform_floral_jp_bys_lp_bb_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Floral_JP_BYS_LP_BB);
        };
    };

    // Floral Shirts with Shorts
    class CLASS(Uniform_Floral_SP_BS_LP_BB): CLASS(Uniform_Base_Floral) {
        scope = 2;
        author = "Trenchgun, Tyrone";
        displayName = CSTRING(Uniform_Floral_SP_BS_LP_BB);
        picture = QPATHTOF(UI\uniform_floral_sp_bs_lp_bb_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Floral_SP_BS_LP_BB);
        };
    };
    class CLASS(Uniform_Floral_SP_RS_LP_BB): CLASS(Uniform_Base_Floral) {
        scope = 2;
        author = "Trenchgun, Tyrone";
        displayName = CSTRING(Uniform_Floral_SP_RS_LP_BB);
        picture = QPATHTOF(UI\uniform_floral_sp_rs_lp_bb_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Floral_SP_RS_LP_BB);
        };
    };
    class CLASS(Uniform_Floral_SP_GS_LP_BB): CLASS(Uniform_Base_Floral) {
        scope = 2;
        author = "Trenchgun, Tyrone";
        displayName = CSTRING(Uniform_Floral_SP_GS_LP_BB);
        picture = QPATHTOF(UI\uniform_floral_sp_gs_lp_bb_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Floral_SP_GS_LP_BB);
        };
    };
    class CLASS(Uniform_Floral_SP_WS_LP_BB): CLASS(Uniform_Base_Floral) {
        scope = 2;
        author = "Trenchgun, Tyrone";
        displayName = CSTRING(Uniform_Floral_SP_WS_LP_BB);
        picture = QPATHTOF(UI\uniform_floral_sp_ws_lp_bb_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Floral_SP_WS_LP_BB);
        };
    };
    class CLASS(Uniform_Floral_SP_BYS_LP_BB): CLASS(Uniform_Base_Floral) {
        scope = 2;
        author = "Trenchgun, Tyrone";
        displayName = CSTRING(Uniform_Floral_SP_BYS_LP_BB);
        picture = QPATHTOF(UI\uniform_floral_sp_bys_lp_bb_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Floral_SP_BYS_LP_BB);
        };
    };

    // Plaid Shirts with Jeans
    class CLASS(Uniform_Plaid_JP_GY_BP_BB): CLASS(Uniform_Base_Floral) {
        scope = 2;
        author = "Trenchgun, Tyrone";
        displayName = CSTRING(Uniform_Plaid_JP_GY_BP_BB);
//      picture = QPATHTOF(UI\);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Uniform_Plaid_JP_GY_BP_BB);
        };
    };
    class CLASS(Uniform_Plaid_JP_LP_BP_BB): CLASS(Uniform_Base_Floral) {
        scope = 2;
        author = "Trenchgun, Tyrone";
        displayName = CSTRING(Uniform_Plaid_JP_LP_BP_BB);
//      picture = QPATHTOF(UI\);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Uniform_Plaid_JP_LP_BP_BB);
        };
    };
    class CLASS(Uniform_Plaid_BP_LPP_BP_BB): CLASS(Uniform_Base_Floral) {
        scope = 2;
        author = "Trenchgun, Tyrone";
        displayName = CSTRING(Uniform_Plaid_BP_LPP_BP_BB);
//      picture = QPATHTOF(UI\);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Uniform_Plaid_BP_LPP_BP_BB);
        };
    };
    class CLASS(Uniform_Plaid_BP_LY_BP_BB): CLASS(Uniform_Base_Floral) {
        scope = 2;
        author = "Trenchgun, Tyrone";
        displayName = CSTRING(Uniform_Plaid_BP_LY_BP_BB);
//      picture = QPATHTOF(UI\);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Uniform_Plaid_BP_LY_BP_BB);
        };
    };
    class CLASS(Uniform_Plaid_JP_CB_BP_BB): CLASS(Uniform_Base_Floral) {
        scope = 2;
        author = "Trenchgun, Tyrone";
        displayName = CSTRING(Uniform_Plaid_JP_CB_BP_BB);
//      picture = QPATHTOF(UI\);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Uniform_Plaid_JP_CB_BP_BB);
        };
    };
    class CLASS(Uniform_Plaid_JP_RO_BP_BB): CLASS(Uniform_Base_Floral) {
        scope = 2;
        author = "Trenchgun, Tyrone";
        displayName = CSTRING(Uniform_Plaid_JP_RO_BP_BB);
//      picture = QPATHTOF(UI\);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Uniform_Plaid_JP_RO_BP_BB);
        };
    };
    class CLASS(Uniform_Plaid_JP_RT_BP_BB): CLASS(Uniform_Base_Floral) {
        scope = 2;
        author = "Trenchgun, Tyrone";
        displayName = CSTRING(Uniform_Plaid_JP_RT_BP_BB);
//      picture = QPATHTOF(UI\);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Uniform_Plaid_JP_RT_BP_BB);
        };
    };
    // Plaid Shirts with Shorts
    class CLASS(Uniform_Plaid_SP_GY_BP_BB): CLASS(Uniform_Base_Floral) {
        scope = 2;
        author = "Trenchgun, Tyrone";
        displayName = CSTRING(Uniform_Plaid_SP_GY_BP_BB);
//      picture = QPATHTOF(UI\);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Uniform_Plaid_SP_GY_BP_BB);
        };
    };
    class CLASS(Uniform_Plaid_SP_LP_BP_BB): CLASS(Uniform_Base_Floral) {
        scope = 2;
        author = "Trenchgun, Tyrone";
        displayName = CSTRING(Uniform_Plaid_SP_LP_BP_BB);
//      picture = QPATHTOF(UI\);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Uniform_Plaid_SP_LP_BP_BB);
        };
    };
    class CLASS(Uniform_Plaid_SP_LPP_BP_BB): CLASS(Uniform_Base_Floral) {
        scope = 2;
        author = "Trenchgun, Tyrone";
        displayName = CSTRING(Uniform_Plaid_SP_LPP_BP_BB);
//      picture = QPATHTOF(UI\);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Uniform_Plaid_SP_LPP_BP_BB);
        };
    };
    class CLASS(Uniform_Plaid_SP_LY_BP_BB): CLASS(Uniform_Base_Floral) {
        scope = 2;
        author = "Trenchgun, Tyrone";
        displayName = CSTRING(Uniform_Plaid_SP_LY_BP_BB);
//      picture = QPATHTOF(UI\);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Uniform_Plaid_SP_LY_BP_BB);
        };
    };
    class CLASS(Uniform_Plaid_SP_CB_BP_BB): CLASS(Uniform_Base_Floral) {
        scope = 2;
        author = "Trenchgun, Tyrone";
        displayName = CSTRING(Uniform_Plaid_SP_CB_BP_BB);
//      picture = QPATHTOF(UI\);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Uniform_Plaid_SP_CB_BP_BB);
        };
    };
    class CLASS(Uniform_Plaid_SP_RO_BP_BB): CLASS(Uniform_Base_Floral) {
        scope = 2;
        author = "Trenchgun, Tyrone";
        displayName = CSTRING(Uniform_Plaid_SP_RO_BP_BB);
//      picture = QPATHTOF(UI\);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Uniform_Plaid_SP_RO_BP_BB);
        };
    };
    class CLASS(Uniform_Plaid_SP_RT_BP_BB): CLASS(Uniform_Base_Floral) {
        scope = 2;
        author = "Trenchgun, Tyrone";
        displayName = CSTRING(Uniform_Plaid_SP_RT_BP_BB);
//      picture = QPATHTOF(UI\);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Uniform_Plaid_SP_RT_BP_BB);
        };
    };
    // VIP
    class CLASS(Suit_VIP): CLASS(Uniform_Base) {
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Suit_VIP);
        picture = QPATHTOF(UI\suit_vip.paa);

        class ItemInfo: ItemInfo {
            containerClass = "Supply10";
            mass = 20;
            uniformClass = QCLASS(Unit_I_VIP);
        };
    };
};
