class CfgVehicles {
    // UNIFORM HELPER UNITS
    // Naked
    #define MACRO_UNDERWEAR_BASE \
        dlc = QUOTE(PREFIX); \
        scope = 1; \
        side = 2; \
        faction = CLASS(IND); \
        weapons[] = {"Throw", "Put"}; \
        respawnWeapons[] = {"Throw", "Put"}; \
        magazines[] = {}; \
        respawnMagazines[] = {}; \
        items[] = {}; \
        respawnItems[] = {}; \
        linkedItems[] = {}; \
        respawnLinkedItems[] = {}; \
        model = "\A3\Characters_F\Common\basicbody.p3d";

    class B_Soldier_base_F;
    class CLASS(Unit_Underwear_BlackLogo): B_Soldier_base_F {
        MACRO_UNDERWEAR_BASE
        author = "Pomigit, Jonpas, Rory";
        uniformClass = QCLASS(Underwear_BlackLogo);
        hiddenSelectionsTextures[] = {QPATHTOF(data\underwear_blacklogo_co.paa)};
    };
    class CLASS(Unit_Underwear_WhiteLogo): B_Soldier_base_F {
        MACRO_UNDERWEAR_BASE
        author = "Pomigit, Jonpas, Rory";
        uniformClass = QCLASS(Underwear_WhiteLogo);
        hiddenSelectionsTextures[] = {QPATHTOF(data\underwear_whitelogo_co.paa)};
    };
    class CLASS(Unit_Underwear_BlueLogo): B_Soldier_base_F {
        MACRO_UNDERWEAR_BASE
        author = "Pomigit, Jonpas, Rory";
        uniformClass = QCLASS(Underwear_BlueLogo);
        hiddenSelectionsTextures[] = {QPATHTOF(data\underwear_bluelogo_co.paa)};
    };
    class CLASS(Unit_Underwear_GreenLogo): B_Soldier_base_F {
        MACRO_UNDERWEAR_BASE
        author = "Pomigit, Jonpas, Rory";
        uniformClass = QCLASS(Underwear_GreenLogo);
        hiddenSelectionsTextures[] = {QPATHTOF(data\underwear_greenlogo_co.paa)};
    };

    // Uniforms
    #define MACRO_BASE_CLASS_COMMON \
        dlc = QUOTE(PREFIX); \
        scope = 0; \
        side = 2; \
        faction = CLASS(IND); \
        weapons[] = {"Throw", "Put"}; \
        respawnWeapons[] = {"Throw", "Put"}; \
        magazines[] = {}; \
        respawnMagazines[] = {}; \
        items[] = {"FirstAidKit"}; \
        respawnItems[] = {"FirstAidKit"}; \
        linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; \
        respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; \
        modelSides[] = {6}; \
        identityTypes[] = {"LanguageENG_F", "Head_NATO", "Head_TK", "Head_Greek"}; \
        genericNames = QUOTE(PREFIX);

    // Naming pattern: SizeSleeves_ColorShirt_ColorPants_ColorBoots

    // Combat - Long Sleeves
    class CLASS(Unit_Combat_LS_Base): B_Soldier_base_F {
        MACRO_BASE_CLASS_COMMON
        nakedUniform = QCLASS(Underwear_BlackLogo);
        hiddenSelectionsMaterials[] = {QPATHTOF(data\uniform_combat.rvmat)};
    };

    class CLASS(Unit_Combat_LS_BS_GP_BB): CLASS(Unit_Combat_LS_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Combat_LS_BS_GP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_bs_gp_bb_ca.paa)};
    };
    class CLASS(Unit_Combat_LS_BS_GP_TB): CLASS(Unit_Combat_LS_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Combat_LS_BS_GP_TB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_bs_gp_tb_ca.paa)};
    };
    class CLASS(Unit_Combat_LS_BS_TP_BB): CLASS(Unit_Combat_LS_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Combat_LS_BS_TP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_bs_tp_bb_ca.paa)};
    };
    class CLASS(Unit_Combat_LS_BS_TP_TB): CLASS(Unit_Combat_LS_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Combat_LS_BS_TP_TB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_bs_tp_tb_ca.paa)};
    };
    class CLASS(Unit_Combat_LS_GS_BP_BB): CLASS(Unit_Combat_LS_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Combat_LS_GS_BP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_gs_bp_bb_ca.paa)};
    };
    class CLASS(Unit_Combat_LS_GS_TP_BB): CLASS(Unit_Combat_LS_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Combat_LS_GS_TP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_gs_tp_bb_ca.paa)};
    };
    class CLASS(Unit_Combat_LS_BS_DGP_BB): CLASS(Unit_Combat_LS_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Combat_LS_BS_DGP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_bs_dgp_bb_ca.paa)};
    };
    class CLASS(Unit_Combat_LS_TS_BP_BB): CLASS(Unit_Combat_LS_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Combat_LS_TS_BP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_ts_bp_bb_ca.paa)};
    };
    class CLASS(Unit_Combat_LS_TS_GP_BB): CLASS(Unit_Combat_LS_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Combat_LS_TS_GP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_ts_gp_bb_ca.paa)};
    };
    class CLASS(Unit_Combat_LS_TS_GP_TB): CLASS(Unit_Combat_LS_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Combat_LS_TS_GP_TB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_ts_gp_tb_ca.paa)};
    };

    // Combat - Long Sleeves - Checked
    class CLASS(Unit_Combat_LS_C_Base): B_Soldier_base_F {
        MACRO_BASE_CLASS_COMMON
        nakedUniform = QCLASS(Underwear_BlackLogo);
        hiddenSelectionsMaterials[] = {QPATHTOF(data\uniform_combat_checked.rvmat)};
    };

    class CLASS(Unit_Combat_LS_CDBS_GP_TB): CLASS(Unit_Combat_LS_C_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Combat_LS_CDBS_GP_TB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_cdbs_gp_tb_ca.paa)};
    };
    class CLASS(Unit_Combat_LS_CLBS_GP_BB): CLASS(Unit_Combat_LS_C_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Combat_LS_CLBS_GP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_clbs_gp_bb_ca.paa)};
    };
    class CLASS(Unit_Combat_LS_CLRS_TP_BB): CLASS(Unit_Combat_LS_C_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Combat_LS_CLRS_TP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_clrs_tp_bb_ca.paa)};
    };
    class CLASS(Unit_Combat_LS_CPS_BP_BB): CLASS(Unit_Combat_LS_C_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Combat_LS_CPS_BP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_cps_bp_bb_ca.paa)};
    };

    // Combat - Rolled Sleeves
    class B_Soldier_03_f;
    class CLASS(Unit_Combat_RS_Base): B_Soldier_03_f {
        MACRO_BASE_CLASS_COMMON
        nakedUniform = QCLASS(Underwear_WhiteLogo);
        hiddenSelectionsMaterials[] = {QPATHTOF(data\uniform_combat.rvmat)};
    };

    class CLASS(Unit_Combat_RS_BS_GP_BB): CLASS(Unit_Combat_RS_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Combat_RS_BS_GP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_bs_gp_bb_ca.paa)};
    };
    class CLASS(Unit_Combat_RS_BS_GP_TB): CLASS(Unit_Combat_RS_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Combat_RS_BS_GP_TB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_bs_gp_tb_ca.paa)};
    };
    class CLASS(Unit_Combat_RS_BS_TP_BB): CLASS(Unit_Combat_RS_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Combat_RS_BS_TP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_bs_tp_bb_ca.paa)};
    };
    class CLASS(Unit_Combat_RS_BS_TP_TB): CLASS(Unit_Combat_RS_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Combat_RS_BS_TP_TB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_bs_tp_tb_ca.paa)};
    };
    class CLASS(Unit_Combat_RS_GS_BP_BB): CLASS(Unit_Combat_RS_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Combat_RS_GS_BP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_gs_bp_bb_ca.paa)};
    };
    class CLASS(Unit_Combat_RS_GS_TP_BB): CLASS(Unit_Combat_RS_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Combat_RS_GS_TP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_gs_tp_bb_ca.paa)};
    };
    class CLASS(Unit_Combat_RS_BS_DGP_BB): CLASS(Unit_Combat_RS_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Combat_RS_BS_DGP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_bs_dgp_bb_ca.paa)};
    };
    class CLASS(Unit_Combat_RS_TS_BP_BB): CLASS(Unit_Combat_RS_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Combat_RS_TS_BP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_ts_bp_bb_ca.paa)};
    };
    class CLASS(Unit_Combat_RS_TS_GP_BB): CLASS(Unit_Combat_RS_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Combat_RS_TS_GP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_ts_gp_bb_ca.paa)};
    };
    class CLASS(Unit_Combat_RS_TS_GP_TB): CLASS(Unit_Combat_RS_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Combat_RS_TS_GP_TB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_ts_gp_tb_ca.paa)};
    };

    // Combat - Rolled Sleeves - Checked
    class CLASS(Unit_Combat_RS_C_Base): CLASS(Unit_Combat_RS_Base) {
        hiddenSelectionsMaterials[] = {QPATHTOF(data\uniform_combat_checked.rvmat)};
    };

    class CLASS(Unit_Combat_RS_CDBS_GP_TB): CLASS(Unit_Combat_RS_C_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Combat_RS_CDBS_GP_TB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_cdbs_gp_tb_ca.paa)};
    };
    class CLASS(Unit_Combat_RS_CLBS_GP_BB): CLASS(Unit_Combat_RS_C_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Combat_RS_CLBS_GP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_clbs_gp_bb_ca.paa)};
    };
    class CLASS(Unit_Combat_RS_CLRS_TP_BB): CLASS(Unit_Combat_RS_C_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Combat_RS_CLRS_TP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_clrs_tp_bb_ca.paa)};
    };
    class CLASS(Unit_Combat_RS_CPS_BP_BB): CLASS(Unit_Combat_RS_C_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Combat_RS_CPS_BP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_cps_bp_bb_ca.paa)};
    };


    // Garment - Long Sleeves
    class I_Soldier_base_F;
    class CLASS(Unit_Garment_LS_Base): I_Soldier_base_F {
        MACRO_BASE_CLASS_COMMON
        nakedUniform = QCLASS(Underwear_BlueLogo);
    };

    class CLASS(Unit_Garment_LS_BS_BP_BB): CLASS(Unit_Garment_LS_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Garment_LS_BS_BP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_garment_bs_bp_bb_ca.paa)};
    };
    class CLASS(Unit_Garment_LS_BS_GP_BB): CLASS(Unit_Garment_LS_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Garment_LS_BS_GP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_garment_bs_gp_bb_ca.paa)};
    };
    class CLASS(Unit_Garment_LS_BS_EP_TB): CLASS(Unit_Garment_LS_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Garment_LS_BS_EP_TB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_garment_bs_ep_tb_ca.paa)};
    };
    class CLASS(Unit_Garment_LS_GS_GP_BB): CLASS(Unit_Garment_LS_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Garment_LS_GS_GP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_garment_gs_gp_bb_ca.paa)};
    };
    class CLASS(Unit_Garment_LS_GS_BP_BB): CLASS(Unit_Garment_LS_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Garment_LS_GS_BP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_garment_gs_bp_bb_ca.paa)};
    };
    class CLASS(Unit_Garment_LS_GS_EP_TB): CLASS(Unit_Garment_LS_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Garment_LS_GS_EP_TB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_garment_gs_ep_tb_ca.paa)};
    };
    class CLASS(Unit_Garment_LS_ES_EP_TB): CLASS(Unit_Garment_LS_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Garment_LS_ES_EP_TB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_garment_es_ep_tb_ca.paa)};
    };
    class CLASS(Unit_Garment_LS_ES_BP_BB): CLASS(Unit_Garment_LS_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Garment_LS_ES_BP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_garment_es_bp_bb_ca.paa)};
    };
    class CLASS(Unit_Garment_LS_ES_GP_BB): CLASS(Unit_Garment_LS_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Garment_LS_ES_GP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_garment_es_gp_bb_ca.paa)};
    };
    class CLASS(Unit_Garment_LS_TS_TP_TB): CLASS(Unit_Garment_LS_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Garment_LS_TS_TP_TB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_garment_ts_tp_tb_ca.paa)};
    };
    class CLASS(Unit_Garment_LS_GS_TP_TB): CLASS(Unit_Garment_LS_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Garment_LS_GS_TP_TB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_garment_gs_tp_tb_ca.paa)};
    };
    class CLASS(Unit_Garment_LS_TS_GP_BB): CLASS(Unit_Garment_LS_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Garment_LS_TS_GP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_garment_ts_gp_bb_ca.paa)};
    };
    class CLASS(Unit_Garment_LS_BS_TP_TB): CLASS(Unit_Garment_LS_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Garment_LS_BS_TP_TB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_garment_bs_tp_tb_ca.paa)};
    };
    class CLASS(Unit_Garment_LS_TS_BP_BB): CLASS(Unit_Garment_LS_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Garment_LS_TS_BP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_garment_ts_bp_bb_ca.paa)};
    };

    // Garment - Rolled Sleeves
    class I_Soldier_02_F;
    class CLASS(Unit_Garment_RS_Base): I_Soldier_02_F {
        MACRO_BASE_CLASS_COMMON
        nakedUniform = QCLASS(Underwear_GreenLogo);
    };

    class CLASS(Unit_Garment_RS_BS_BP_BB): CLASS(Unit_Garment_RS_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Garment_RS_BS_BP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_garment_bs_bp_bb_ca.paa)};
    };
    class CLASS(Unit_Garment_RS_BS_GP_BB): CLASS(Unit_Garment_RS_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Garment_RS_BS_GP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_garment_bs_gp_bb_ca.paa)};
    };
    class CLASS(Unit_Garment_RS_BS_EP_TB): CLASS(Unit_Garment_RS_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Garment_RS_BS_EP_TB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_garment_bs_ep_tb_ca.paa)};
    };
    class CLASS(Unit_Garment_RS_GS_GP_BB): CLASS(Unit_Garment_RS_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Garment_RS_GS_GP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_garment_gs_gp_bb_ca.paa)};
    };
    class CLASS(Unit_Garment_RS_GS_BP_BB): CLASS(Unit_Garment_RS_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Garment_RS_GS_BP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_garment_gs_bp_bb_ca.paa)};
    };
    class CLASS(Unit_Garment_RS_GS_EP_TB): CLASS(Unit_Garment_RS_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Garment_RS_GS_EP_TB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_garment_gs_ep_tb_ca.paa)};
    };
    class CLASS(Unit_Garment_RS_ES_EP_TB): CLASS(Unit_Garment_RS_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Garment_RS_ES_EP_TB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_garment_es_ep_tb_ca.paa)};
    };
    class CLASS(Unit_Garment_RS_ES_BP_BB): CLASS(Unit_Garment_RS_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Garment_RS_ES_BP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_garment_es_bp_bb_ca.paa)};
    };
    class CLASS(Unit_Garment_RS_ES_GP_BB): CLASS(Unit_Garment_RS_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Garment_RS_ES_GP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_garment_es_gp_bb_ca.paa)};
    };
    class CLASS(Unit_Garment_RS_TS_TP_TB): CLASS(Unit_Garment_RS_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Garment_RS_TS_TP_TB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_garment_ts_tp_tb_ca.paa)};
    };
    class CLASS(Unit_Garment_RS_GS_TP_TB): CLASS(Unit_Garment_RS_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Garment_RS_GS_TP_TB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_garment_gs_tp_tb_ca.paa)};
    };
    class CLASS(Unit_Garment_RS_TS_GP_BB): CLASS(Unit_Garment_RS_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Garment_RS_TS_GP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_garment_ts_gp_bb_ca.paa)};
    };
    class CLASS(Unit_Garment_RS_BS_TP_TB): CLASS(Unit_Garment_RS_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Garment_RS_BS_TP_TB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_garment_bs_tp_tb_ca.paa)};
    };
    class CLASS(Unit_Garment_RS_TS_BP_BB): CLASS(Unit_Garment_RS_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Garment_RS_TS_BP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_garment_ts_bp_bb_ca.paa)};
    };


    // Polo - Tactical Pants
    class B_RangeMaster_F;
    class CLASS(Unit_Polo_TP_Base): B_RangeMaster_F {
        MACRO_BASE_CLASS_COMMON
        nakedUniform = QCLASS(Unit_Underwear_BlueLogo);
        hiddenSelectionsMaterials[] = {QPATHTOF(data\uniform_polo.rvmat)};
    };

    class CLASS(Unit_Polo_TP_LS_TP_TB): CLASS(Unit_Polo_TP_Base) {
        scope = 1;
        author = "Pomigit, Jonpas, Rory";
        uniformClass = QCLASS(Uniform_Polo_TP_LS_TP_TB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_polo_ls_tp_tb_ca.paa)};
    };
    class CLASS(Unit_Polo_TP_TS_GP_BB): CLASS(Unit_Polo_TP_Base) {
        scope = 1;
        author = "Pomigit, Jonpas, Rory";
        uniformClass = QCLASS(Uniform_Polo_TP_TS_GP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_polo_ts_gp_bb_ca.paa)};
    };
    class CLASS(Unit_Polo_TP_BS_TP_TB): CLASS(Unit_Polo_TP_Base) {
        scope = 1;
        author = "Pomigit, Jonpas, Rory";
        uniformClass = QCLASS(Uniform_Polo_TP_BS_TP_TB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_polo_bs_tp_tb_ca.paa)};
    };
    class CLASS(Unit_Polo_TP_BS_LP_BB): CLASS(Unit_Polo_TP_Base) {
        scope = 1;
        author = "Pomigit, Jonpas, Rory";
        uniformClass = QCLASS(Uniform_Polo_TP_BS_LP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_polo_bs_lp_bb_ca.paa)};
    };
    class CLASS(Unit_Polo_TP_LS_GP_BB): CLASS(Unit_Polo_TP_Base) {
        scope = 1;
        author = "Pomigit, Jonpas, Rory";
        uniformClass = QCLASS(Uniform_Polo_TP_LS_GP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_polo_ls_gp_bb_ca.paa)};
    };
    class CLASS(Unit_Polo_TP_OS_TP_BB): CLASS(Unit_Polo_TP_Base) {
        scope = 1;
        author = "Pomigit, Jonpas, Rory";
        uniformClass = QCLASS(Uniform_Polo_TP_OS_TP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_polo_os_tp_bb_ca.paa)};
    };
    class CLASS(Unit_Polo_TP_OS_LP_BB): CLASS(Unit_Polo_TP_Base) {
        scope = 1;
        author = "Pomigit, Jonpas, Rory";
        uniformClass = QCLASS(Uniform_Polo_TP_OS_LP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_polo_os_lp_bb_ca.paa)};
    };
    class CLASS(Unit_Polo_TP_GS_TP_TB): CLASS(Unit_Polo_TP_Base) {
        scope = 1;
        author = "Pomigit, Jonpas, Rory";
        uniformClass = QCLASS(Uniform_Polo_TP_GS_TP_TB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_polo_gs_tp_tb_ca.paa)};
    };
    class CLASS(Unit_Polo_TP_WS_TP_TB): CLASS(Unit_Polo_TP_Base) {
        scope = 1;
        author = "Pomigit, Jonpas, Rory";
        uniformClass = QCLASS(Uniform_Polo_TP_WS_TP_TB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_polo_ws_tp_tb_ca.paa)};
    };
    class CLASS(Unit_Polo_WS_LP_BB): CLASS(Unit_Polo_TP_Base) {
        scope = 1;
        author = "Pomigit, Jonpas, Rory";
        uniformClass = QCLASS(Uniform_Polo_TP_WS_LP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_polo_ws_lp_bb_ca.paa)};
    };
    class CLASS(Unit_Polo_TP_WS_GP_BB): CLASS(Unit_Polo_TP_Base) {
        scope = 1;
        author = "Pomigit, Jonpas, Rory";
        uniformClass = QCLASS(Uniform_Polo_TP_WS_GP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_polo_ws_gp_bb_ca.paa)};
    };
    class CLASS(Unit_Polo_CP_LS_TP_OB): CLASS(Unit_Polo_TP_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Polo_CP_LS_TP_OB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_polo_ls_tp_ob_ca.paa)};
    };
    class CLASS(Unit_Polo_CP_RS_LP_BB): CLASS(Unit_Polo_TP_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Polo_CP_RS_LP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_polo_rs_lp_bb_ca.paa)};
    };
    class CLASS(Unit_Polo_CP_BS_TP_BB): CLASS(Unit_Polo_TP_Base) {
        scope = 1;
        author = "Pomigit, Jonpas, Rory";
        uniformClass = QCLASS(Uniform_Polo_CP_BS_TP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_polo_bs_tp_bb_ca.paa)};
    };

    // TShirt - Jean Pants
    class CLASS(Unit_TShirt_JP_Base): B_Soldier_base_F {
        MACRO_BASE_CLASS_COMMON
        nakedUniform = QCLASS(Unit_Underwear_BlackLogo);
        model = "\A3\Characters_F\Civil\c_citizen5.p3d";
        hiddenSelections[] = {"Camo1", "Camo2"};
    };

    class CLASS(Unit_TShirt_JP_GS_LP_BB): CLASS(Unit_TShirt_JP_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_TShirt_JP_GS_LP_BB);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\underwear_greenlogo_co.paa),
            QPATHTOF(data\jeans_lp_bb_ca.paa)
        };
    };
    class CLASS(Unit_TShirt_JP_GS_TP_BB): CLASS(Unit_TShirt_JP_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_TShirt_JP_GS_TP_BB);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\underwear_greenlogo_co.paa),
            QPATHTOF(data\jeans_tp_bb_ca.paa)
        };
    };
    class CLASS(Unit_TShirt_JP_BS_LP_BB): CLASS(Unit_TShirt_JP_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_TShirt_JP_BS_LP_BB);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\underwear_blacklogo_co.paa),
            QPATHTOF(data\jeans_lp_bb_ca.paa)
        };
    };
    class CLASS(Unit_TShirt_JP_BS_TP_BB): CLASS(Unit_TShirt_JP_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_TShirt_JP_BS_TP_BB);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\underwear_blacklogo_co.paa),
            QPATHTOF(data\jeans_tp_bb_ca.paa)
        };
    };
    class CLASS(Unit_TShirt_JP_LS_TP_BB): CLASS(Unit_TShirt_JP_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_TShirt_JP_LS_TP_BB);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\underwear_bluelogo_co.paa),
            QPATHTOF(data\jeans_lp_bb_ca.paa)
        };
    };
    class CLASS(Unit_TShirt_JP_WS_LP_BB): CLASS(Unit_TShirt_JP_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_TShirt_JP_WS_LP_BB);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\underwear_whitelogo_co.paa),
            QPATHTOF(data\jeans_lp_bb_ca.paa)
        };
    };



    // BOX
    class Box_NATO_Support_F;
    class CLASS(Box_Uniforms): Box_NATO_Support_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = ECSTRING(main,Author);
        displayName = CSTRING(Box_Uniforms);

        transportMaxWeapons = 9001;
        transportMaxMagazines = 9001;
        transportMaxItems = 9001;
        maximumload = 9001;

        class TransportWeapons {};
        class TransportMagazines {};

        class TransportItems {
            MACRO_ADDITEM(CLASS(Uniform_Combat_LS_BS_GP_BB),10)
            MACRO_ADDITEM(CLASS(Uniform_Combat_LS_BS_GP_TB),10)
            MACRO_ADDITEM(CLASS(Uniform_Combat_LS_BS_TP_BB),10)
            MACRO_ADDITEM(CLASS(Uniform_Combat_LS_BS_TP_TB),10)
            MACRO_ADDITEM(CLASS(Uniform_Combat_LS_GS_BP_BB),10)
            MACRO_ADDITEM(CLASS(Uniform_Combat_LS_GS_TP_BB),10)
            MACRO_ADDITEM(CLASS(Uniform_Combat_LS_BS_DGP_BB),10)
            MACRO_ADDITEM(CLASS(Uniform_Combat_LS_TS_BP_BB),10)
            MACRO_ADDITEM(CLASS(Uniform_Combat_LS_TS_GP_BB),10)
            MACRO_ADDITEM(CLASS(Uniform_Combat_LS_TS_GP_TB),10)
            MACRO_ADDITEM(CLASS(Uniform_Combat_LS_CDBS_GP_TB),10)
            MACRO_ADDITEM(CLASS(Uniform_Combat_LS_CLBS_GP_BB),10)
            MACRO_ADDITEM(CLASS(Uniform_Combat_LS_CLRS_TP_BB),10)
            MACRO_ADDITEM(CLASS(Uniform_Combat_LS_CPS_BP_BB),10)
            MACRO_ADDITEM(CLASS(Uniform_Combat_RS_BS_GP_BB),10)
            MACRO_ADDITEM(CLASS(Uniform_Combat_RS_BS_GP_TB),10)
            MACRO_ADDITEM(CLASS(Uniform_Combat_RS_BS_TP_BB),10)
            MACRO_ADDITEM(CLASS(Uniform_Combat_RS_BS_TP_TB),10)
            MACRO_ADDITEM(CLASS(Uniform_Combat_RS_GS_BP_BB),10)
            MACRO_ADDITEM(CLASS(Uniform_Combat_RS_GS_TP_BB),10)
            MACRO_ADDITEM(CLASS(Uniform_Combat_RS_BS_DGP_BB),10)
            MACRO_ADDITEM(CLASS(Uniform_Combat_RS_TS_BP_BB),10)
            MACRO_ADDITEM(CLASS(Uniform_Combat_RS_TS_GP_BB),10)
            MACRO_ADDITEM(CLASS(Uniform_Combat_RS_TS_GP_TB),10)
            MACRO_ADDITEM(CLASS(Uniform_Combat_RS_CDBS_GP_TB),10)
            MACRO_ADDITEM(CLASS(Uniform_Combat_RS_CLBS_GP_BB),10)
            MACRO_ADDITEM(CLASS(Uniform_Combat_RS_CLRS_TP_BB),10)
            MACRO_ADDITEM(CLASS(Uniform_Combat_RS_CPS_BP_BB),10)
            MACRO_ADDITEM(CLASS(Uniform_Garment_LS_BS_BP_BB),10)
            MACRO_ADDITEM(CLASS(Uniform_Garment_LS_BS_GP_BB),10)
            MACRO_ADDITEM(CLASS(Uniform_Garment_LS_BS_EP_TB),10)
            MACRO_ADDITEM(CLASS(Uniform_Garment_LS_GS_GP_BB),10)
            MACRO_ADDITEM(CLASS(Uniform_Garment_LS_GS_BP_BB),10)
            MACRO_ADDITEM(CLASS(Uniform_Garment_LS_GS_EP_TB),10)
            MACRO_ADDITEM(CLASS(Uniform_Garment_LS_ES_EP_TB),10)
            MACRO_ADDITEM(CLASS(Uniform_Garment_LS_ES_BP_BB),10)
            MACRO_ADDITEM(CLASS(Uniform_Garment_LS_ES_GP_BB),10)
            MACRO_ADDITEM(CLASS(Uniform_Garment_LS_TS_TP_TB),10)
            MACRO_ADDITEM(CLASS(Uniform_Garment_LS_GS_TP_TB),10)
            MACRO_ADDITEM(CLASS(Uniform_Garment_LS_TS_GP_BB),10)
            MACRO_ADDITEM(CLASS(Uniform_Garment_LS_BS_TP_TB),10)
            MACRO_ADDITEM(CLASS(Uniform_Garment_LS_TS_BP_BB),10)
            MACRO_ADDITEM(CLASS(Uniform_Garment_RS_BS_BP_BB),10)
            MACRO_ADDITEM(CLASS(Uniform_Garment_RS_BS_GP_BB),10)
            MACRO_ADDITEM(CLASS(Uniform_Garment_RS_BS_EP_TB),10)
            MACRO_ADDITEM(CLASS(Uniform_Garment_RS_GS_GP_BB),10)
            MACRO_ADDITEM(CLASS(Uniform_Garment_RS_GS_BP_BB),10)
            MACRO_ADDITEM(CLASS(Uniform_Garment_RS_GS_EP_TB),10)
            MACRO_ADDITEM(CLASS(Uniform_Garment_RS_ES_EP_TB),10)
            MACRO_ADDITEM(CLASS(Uniform_Garment_RS_ES_BP_BB),10)
            MACRO_ADDITEM(CLASS(Uniform_Garment_RS_ES_GP_BB),10)
            MACRO_ADDITEM(CLASS(Uniform_Garment_RS_TS_TP_TB),10)
            MACRO_ADDITEM(CLASS(Uniform_Garment_RS_GS_TP_TB),10)
            MACRO_ADDITEM(CLASS(Uniform_Garment_RS_TS_GP_BB),10)
            MACRO_ADDITEM(CLASS(Uniform_Garment_RS_BS_TP_TB),10)
            MACRO_ADDITEM(CLASS(Uniform_Garment_RS_TS_BP_BB),10)
            MACRO_ADDITEM(CLASS(Uniform_Polo_TP_LS_TP_TB),10)
            MACRO_ADDITEM(CLASS(Uniform_Polo_TP_TS_GP_BB),10)
            MACRO_ADDITEM(CLASS(Uniform_Polo_TP_BS_TP_TB),10)
            MACRO_ADDITEM(CLASS(Uniform_Polo_TP_BS_LP_BB),10)
            MACRO_ADDITEM(CLASS(Uniform_Polo_TP_LS_GP_BB),10)
            MACRO_ADDITEM(CLASS(Uniform_Polo_TP_OS_TP_BB),10)
            MACRO_ADDITEM(CLASS(Uniform_Polo_TP_OS_LP_BB),10)
            MACRO_ADDITEM(CLASS(Uniform_Polo_TP_GS_TP_TB),10)
            MACRO_ADDITEM(CLASS(Uniform_Polo_TP_WS_TP_TB),10)
            MACRO_ADDITEM(CLASS(Uniform_Polo_TP_WS_LP_BB),10)
            MACRO_ADDITEM(CLASS(Uniform_Polo_TP_WS_GP_BB),10)
            MACRO_ADDITEM(CLASS(Uniform_Polo_CP_LS_TP_OB),10)
            MACRO_ADDITEM(CLASS(Uniform_Polo_CP_RS_LP_BB),10)
            MACRO_ADDITEM(CLASS(Uniform_Polo_CP_BS_TP_BB),10)
            MACRO_ADDITEM(CLASS(Uniform_TShirt_JP_GS_LP_BB),10)
            MACRO_ADDITEM(CLASS(Uniform_TShirt_JP_GS_TP_BB),10)
            MACRO_ADDITEM(CLASS(Uniform_TShirt_JP_BS_LP_BB),10)
            MACRO_ADDITEM(CLASS(Uniform_TShirt_JP_BS_TP_BB),10)
            MACRO_ADDITEM(CLASS(Uniform_TShirt_JP_LS_TP_BB),10)
            MACRO_ADDITEM(CLASS(Uniform_TShirt_JP_WS_LP_BB),10)
            MACRO_ADDITEM(CLASS(Suit_VIP),10)
        };

        class TransportBackpacks {};
    };



    // ITEMS ON GROUND
    //@todo



    // UNITS
    class CLASS(Unit_I_Bodyguard): CLASS(Unit_Polo_CP_LS_TP_OB) {
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Unit_Bodyguard);
        weapons[] += {"SMG_02_ACO_F", "hgun_P07_F", "Binocular"};
        respawnWeapons[] += {"SMG_02_ACO_F", "hgun_P07_F", "Binocular"};
        magazines[] += {ITEMS_9(30Rnd_9x21_Mag), ITEMS_2(16Rnd_9x21_Mag), ITEMS_2(SmokeShell), ITEMS_2(HandGrenade)};
        respawnMagazines[] += {ITEMS_9(30Rnd_9x21_Mag), ITEMS_2(16Rnd_9x21_Mag), ITEMS_2(SmokeShell), ITEMS_2(HandGrenade)};
        linkedItems[] += {QCLASS(Cap_Earpiece_BlackLogo), "G_Shades_Black", QCLASS(Vest_Tactical_DarkBlack)};
        respawnLinkedItems[] += {QCLASS(Cap_Earpiece_BlackLogo), "G_Shades_Black", QCLASS(Vest_Tactical_DarkBlack)};
    };
    class CLASS(Unit_B_Bodyguard): CLASS(Unit_I_Bodyguard) {
        side = 1;
        faction = CLASS(BLU);
    };

    class CLASS(Unit_I_Contractor): CLASS(Unit_Polo_TP_LS_TP_TB) {
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Unit_Contractor);
        weapons[] += {QCLASS(MX_BlackCamo), "hgun_P07_F", "Binocular"};
        respawnWeapons[] += {QCLASS(MX_BlackCamo), "hgun_P07_F", "Binocular"};
        magazines[] += {ITEMS_8(30Rnd_65x39_caseless_mag), ITEMS_3(16Rnd_9x21_Mag), "SmokeShell", ITEMS_4(HandGrenade)};
        respawnMagazines[] += {ITEMS_8(30Rnd_65x39_caseless_mag), ITEMS_3(16Rnd_9x21_Mag), "SmokeShell", ITEMS_4(HandGrenade)};
        linkedItems[] += {QCLASS(Cap_Earpiece_TanLogo), "G_Shades_Black", QCLASS(Vest_PlateCarrier_MARPAT)};
        respawnLinkedItems[] += {QCLASS(Cap_Earpiece_TanLogo), "G_Shades_Black", QCLASS(Vest_PlateCarrier_MARPAT)};
    };
    class CLASS(Unit_B_Contractor): CLASS(Unit_I_Contractor) {
        scope = 2;
        side = 1;
        faction = CLASS(BLU);
    };

    class CLASS(Unit_I_Contractor_GL): CLASS(Unit_Combat_RS_BS_GP_BB) {
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Unit_Contractor_GL);
        weapons[] += {QCLASS(MX_GL_BlackCamo), "hgun_P07_F", "Binocular"};
        respawnWeapons[] += {QCLASS(MX_BlackCamo), "hgun_P07_F", "Binocular"};
        magazines[] += {ITEMS_5(30Rnd_65x39_caseless_mag), "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", ITEMS_3(1Rnd_HE_Grenade_shell), ITEMS_2(16Rnd_9x21_Mag), "SmokeShell", "SmokeShellGreen", ITEMS_2(HandGrenade)};
        respawnMagazines[] += {ITEMS_5(30Rnd_65x39_caseless_mag), "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", ITEMS_3(1Rnd_HE_Grenade_shell), ITEMS_2(16Rnd_9x21_Mag), "SmokeShell", "SmokeShellGreen", ITEMS_2(HandGrenade)};
        linkedItems[] += {QCLASS(Cap_Earpiece_BlackLogo), "G_Shades_Black", QCLASS(Vest_Tactical_DarkBlack)};
        respawnLinkedItems[] += {QCLASS(Cap_Earpiece_BlackLogo), "G_Shades_Black", QCLASS(Vest_Tactical_DarkBlack)};
    };
    class CLASS(Unit_B_Contractor_GL): CLASS(Unit_I_Contractor_GL) {
        scope = 2;
        side = 1;
        faction = CLASS(BLU);
    };

    class CLASS(Unit_I_Engineer): CLASS(Unit_Polo_TP_LS_TP_TB) {
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Unit_Engineer);
        weapons[] += {QCLASS(MX_BlackCamo_MRCO), "hgun_P07_F", "Binocular"};
        respawnWeapons[] += {QCLASS(MX_BlackCamo_MRCO), "hgun_P07_F", "Binocular"};
        magazines[] += {ITEMS_12(30Rnd_65x39_caseless_mag), ITEMS_2(16Rnd_9x21_Mag), ITEMS_2(SmokeShell), ITEMS_2(HandGrenade)};
        respawnMagazines[] += {ITEMS_12(30Rnd_65x39_caseless_mag), ITEMS_2(16Rnd_9x21_Mag), ITEMS_2(SmokeShell), ITEMS_2(HandGrenade)};
        linkedItems[] += {QCLASS(Hat_Boonie_RangerGreen), "G_Shades_Black", QCLASS(Vest_PlateCarrier_Green)};
        respawnLinkedItems[] += {QCLASS(Hat_Boonie_RangerGreen), "G_Shades_Black", QCLASS(Vest_PlateCarrier_Green)};
        backpack = QCLASS(Backpack_AssaultExpanded_Green_ExplosivesTechnician_Filled);

        engineer = 1;
        detectSkill = 80;
        canDeactivateMines = 1;
        icon = "iconManEngineer";
		picture = "pictureRepair";
    };
    class CLASS(Unit_B_Engineer): CLASS(Unit_I_Engineer) {
        scope = 2;
        side = 1;
        faction = CLASS(BLU);
    };

    class CLASS(Unit_I_Medic): CLASS(Unit_Combat_RS_BS_GP_BB) {
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Unit_Medic);
        weapons[] += {"SMG_02_ACO_F", "hgun_P07_F", "Binocular"};
        respawnWeapons[] += {"SMG_02_ACO_F", "hgun_P07_F", "Binocular"};
        magazines[] += {ITEMS_9(30Rnd_9x21_Mag), ITEMS_2(16Rnd_9x21_Mag), "SmokeShell", ITEMS_2(HandGrenade)};
        respawnMagazines[] += {ITEMS_9(30Rnd_9x21_Mag), ITEMS_2(16Rnd_9x21_Mag), "SmokeShell", ITEMS_2(HandGrenade)};
        linkedItems[] += {QCLASS(Helmet_Ballistic_DarkBlack), "G_Shades_Black", QCLASS(Vest_Tactical_DarkBlack)};
        respawnLinkedItems[] += {QCLASS(Helmet_Ballistic_DarkBlack), "G_Shades_Black", QCLASS(Vest_Tactical_DarkBlack)};
        backpack = QCLASS(Backpack_Kitbag_DarkBlack_Medic_Filled);

        attendant = 1;
        icon = "iconManMedic";
        picture = "pictureHeal";
    };
    class CLASS(Unit_B_Medic): CLASS(Unit_I_Medic) {
        scope = 2;
        side = 1;
        faction = CLASS(BLU);
    };

    class CLASS(Unit_I_Specialist): CLASS(Unit_Combat_RS_BS_GP_BB) {
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Unit_Specialist);
        weapons[] += {"LMG_Mk200_MRCO_F", "hgun_Rook40_F", "Binocular"};
        respawnWeapons[] += {"LMG_Mk200_MRCO_F", "hgun_Rook40_F", "Binocular"};
        magazines[] += {"200Rnd_65x39_cased_Box_Tracer", ITEMS_2(16Rnd_9x21_Mag), ITEMS_2(SmokeShell), ITEMS_2(HandGrenade)};
        respawnMagazines[] += {"200Rnd_65x39_cased_Box_Tracer", ITEMS_2(16Rnd_9x21_Mag), ITEMS_2(SmokeShell), ITEMS_2(HandGrenade)};
        linkedItems[] += {QCLASS(Cap_Earpiece_TanLogo), "G_Shades_Black", QCLASS(Vest_PlateCarrierFull_Black)};
        respawnLinkedItems[] += {QCLASS(Cap_Earpiece_TanLogo), "G_Shades_Black", QCLASS(Vest_PlateCarrierFull_Black)};
        backpack = QCLASS(Backpack_AssaultExpanded_Green_Specialist_Filled);

        icon = "iconManMG";
    };
    class CLASS(Unit_B_Specialist): CLASS(Unit_I_Specialist) {
        scope = 2;
        side = 1;
        faction = CLASS(BLU);
    };

    class CLASS(Unit_I_TeamLeader): CLASS(Unit_TShirt_JP_GS_LP_BB) {
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Unit_TeamLeader);
        weapons[] += {QCLASS(MX_BlackCamo_MRCO), "hgun_Rook40_F", "Binocular"};
        respawnWeapons[] += {QCLASS(MX_BlackCamo_MRCO), "hgun_Rook40_F", "Binocular"};
        magazines[] += {ITEMS_11(30Rnd_65x39_caseless_mag), ITEMS_2(16Rnd_9x21_Mag), ITEMS_2(SmokeShell), ITEMS_2(HandGrenade)};
        respawnMagazines[] += {ITEMS_11(30Rnd_65x39_caseless_mag), ITEMS_2(16Rnd_9x21_Mag), ITEMS_2(SmokeShell), ITEMS_2(HandGrenade)};
        linkedItems[] += {QCLASS(Cap_Headphones_BlackLogo), "G_Shades_Black", QCLASS(Vest_PlateCarrier_Khaki)};
        respawnLinkedItems[] += {QCLASS(Cap_Headphones_BlackLogo), "G_Shades_Black", QCLASS(Vest_PlateCarrier_Khaki)};

        icon = "iconManLeader";
        textSingular = "$STR_A3_nameSound_veh_infantry_officer_s";
        textPlural = "$STR_A3_nameSound_veh_infantry_officer_p";
        nameSound = "veh_infantry_officer_s";

        class SpeechVariants {
            class Default {
                speechSingular[] = {"veh_infantry_officer_s"};
                speechPlural[] = {"veh_infantry_officer_p"};
            };
        };
    };
    class CLASS(Unit_B_TeamLeader): CLASS(Unit_I_TeamLeader) {
        scope = 2;
        side = 1;
        faction = CLASS(BLU);
    };

    class CLASS(Unit_I_Marksman): CLASS(Unit_TShirt_JP_GS_LP_BB) {
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Unit_Marksman);
        weapons[] += {"srifle_EBR_SOS_F", "hgun_Rook40_F", "Binocular"};
        respawnWeapons[] += {"srifle_EBR_SOS_F", "hgun_Rook40_F", "Binocular"};
        magazines[] += {ITEMS_6(20Rnd_762x51_Mag), ITEMS_2(16Rnd_9x21_Mag), ITEMS_2(SmokeShell), ITEMS_2(HandGrenade)};
        respawnMagazines[] += {ITEMS_6(20Rnd_762x51_Mag), ITEMS_2(16Rnd_9x21_Mag), ITEMS_2(SmokeShell), ITEMS_2(HandGrenade)};
        linkedItems[] += {QCLASS(Cap_Headphones_BlackLogo), "G_Shades_Black", QCLASS(Vest_Tactical_DarkBlack)};
        respawnLinkedItems[] += {QCLASS(Cap_Headphones_BlackLogo), "G_Shades_Black", QCLASS(Vest_Tactical_DarkBlack)};
    };
    class CLASS(Unit_B_Marksman): CLASS(Unit_I_Marksman) {
        scope = 2;
        side = 1;
        faction = CLASS(BLU);
    };

    class CLASS(Unit_I_PilotHeli): CLASS(Unit_Combat_RS_BS_GP_BB) {
        scope = 2;
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Unit_PilotHeli);
        weapons[] += {"hgun_Rook40_F", "Binocular"};
        respawnWeapons[] += {"hgun_Rook40_F", "Binocular"};
        magazines[] += {ITEMS_2(16Rnd_9x21_Mag), ITEMS_2(SmokeShell), ITEMS_2(HandGrenade)};
        respawnMagazines[] += {ITEMS_2(16Rnd_9x21_Mag), ITEMS_2(SmokeShell), ITEMS_2(HandGrenade)};
        linkedItems[] += {QCLASS(Helmet_PilotHeli_Tan), "G_Shades_Black", QCLASS(Vest_Tactical_DarkBlack)};
        respawnLinkedItems[] += {QCLASS(Helmet_PilotHeli_Tan), "G_Shades_Black", QCLASS(Vest_Tactical_DarkBlack)};

        textSingular = "$STR_A3_nameSound_veh_infantry_pilot_s";
        textPlural = "$STR_A3_nameSound_veh_infantry_pilot_p";
        nameSound = "veh_infantry_pilot_s";

        class SpeechVariants {
            class Default {
                speechSingular[] = {"veh_infantry_pilot_s"};
                speechPlural[] = {"veh_infantry_pilot_p"};
            };
        };
    };
    class CLASS(Unit_B_PilotHeli): CLASS(Unit_I_PilotHeli) {
        scope = 2;
        side = 1;
        faction = CLASS(BLU);
    };


    // VIP
    class Civilian_F;
    class CLASS(Unit_I_VIP): Civilian_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        scopeCurator = 2;
        side = 2;
        faction = CLASS(IND);
        author = "Pomigit, Jonpas";
        displayname = CSTRING(Unit_VIP);
        model = QPATHTOF(data\vip.p3d);
        modelSides[] = {6};
        genericNames = QUOTE(PREFIX);
        uniformClass = QCLASS(Suit_VIP);

        weapons[] = {"Throw", "Put"};
        respawnWeapons[] = {"Throw", "Put"};
        magazines[] = {};
        respawnMagazines[] = {};
        items[] = {};
        respawnItems[] = {};
        linkedItems[] = {"G_Squares_Tinted"};
        respawnLinkedItems[] = {"G_Squares_Tinted"};
    };
    class CLASS(Unit_B_VIP): CLASS(Unit_I_VIP) {
        scope = 2;
        side = 1;
        faction = CLASS(BLU);
    };
};
