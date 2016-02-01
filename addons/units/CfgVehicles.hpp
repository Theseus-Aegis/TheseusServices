class CfgVehicles {
    class B_Soldier_base_F;

    // Naked
    class CLASS(Unit_Underwear_Base): B_Soldier_base_F {
        dlc = QUOTE(PREFIX);
        scope = 0;
        side = 2;
        faction = CLASS(IND);
        weapons[] = {"Throw", "Put"};
        respawnWeapons[] = {"Throw", "Put"};
        magazines[] = {};
        respawnMagazines[] = {};
        items[] = {};
        respawnItems[] = {};
        linkedItems[] = {};
        respawnLinkedItems[] = {};
        model = "\a3\characters_f\common\basicbody.p3d";
        identityTypes[] = {"LanguageENG_F", "Head_NATO", "Head_TK", "Head_Greek"};
    };
    class CLASS(Unit_Underwear_BlackLogo): CLASS(Unit_Underwear_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Underwear_BlackLogo);
        hiddenSelectionsTextures[] = {QPATHTOF(data\underwear_blacklogo_co.paa)};
    };
    class CLASS(Unit_Underwear_WhiteLogo): CLASS(Unit_Underwear_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Underwear_WhiteLogo);
        hiddenSelectionsTextures[] = {QPATHTOF(data\underwear_whitelogo_co.paa)};
    };
    class CLASS(Unit_Underwear_BlueLogo): CLASS(Unit_Underwear_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Underwear_BlueLogo);
        hiddenSelectionsTextures[] = {QPATHTOF(data\underwear_bluelogo_co.paa)};
    };
    class CLASS(Unit_Underwear_GreenLogo): CLASS(Unit_Underwear_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Underwear_GreenLogo);
        hiddenSelectionsTextures[] = {QPATHTOF(data\underwear_greenlogo_co.paa)};
    };


    // Naming pattern: SizeSleeves_ColorShirt_ColorPants_ColorBoots

    // Combat
    class CLASS(Unit_Combat_Base): B_Soldier_base_F {
        dlc = QUOTE(PREFIX);
        scope = 0;
        side = 2;
        faction = CLASS(IND);
        weapons[] = {"Throw", "Put"};
        respawnWeapons[] = {"Throw", "Put"};
        magazines[] = {};
        respawnMagazines[] = {};
        items[] = {"FirstAidKit"};
        respawnItems[] = {"FirstAidKit"};
        linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        identityTypes[] = {"LanguageENG_F", "Head_NATO", "Head_TK", "Head_Greek"};
        nakedUniform = QCLASS(Underwear_BlackLogo);
        hiddenSelectionsMaterials[] = {QPATHTOF(data\uniform_combat.rvmat)};
    };

    // Long SLeeves
    class CLASS(Unit_Combat_LS_BS_GP_BB): CLASS(Unit_Combat_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Combat_LS_BS_GP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_bs_gp_bb_ca.paa)};
    };
    class CLASS(Unit_Combat_LS_BS_GP_TB): CLASS(Unit_Combat_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Combat_LS_BS_GP_TB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_bs_gp_tb_ca.paa)};
    };
    class CLASS(Unit_Combat_LS_BS_TP_BB): CLASS(Unit_Combat_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Combat_LS_BS_TP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_bs_tp_bb_ca.paa)};
    };
    class CLASS(Unit_Combat_LS_BS_TP_TB): CLASS(Unit_Combat_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Combat_LS_BS_TP_TB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_bs_tp_tb_ca.paa)};
    };
    class CLASS(Unit_Combat_LS_GS_BP_BB): CLASS(Unit_Combat_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Combat_LS_GS_BP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_gs_bp_bb_ca.paa)};
    };
    class CLASS(Unit_Combat_LS_GS_TP_BB): CLASS(Unit_Combat_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Combat_LS_GS_TP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_gs_tp_bb_ca.paa)};
    };
    class CLASS(Unit_Combat_LS_BS_DGP_BB): CLASS(Unit_Combat_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Combat_LS_BS_DGP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_bs_dgp_bb_ca.paa)};
    };
    class CLASS(Unit_Combat_LS_TS_BP_BB): CLASS(Unit_Combat_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Combat_LS_TS_BP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_ts_bp_bb_ca.paa)};
    };
    class CLASS(Unit_Combat_LS_TS_GP_BB): CLASS(Unit_Combat_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Combat_LS_TS_GP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_ts_gp_bb_ca.paa)};
    };
    class CLASS(Unit_Combat_LS_TS_GP_TB): CLASS(Unit_Combat_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Combat_LS_TS_GP_TB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_ts_gp_tb_ca.paa)};
    };
    // Checked
    class CLASS(Unit_Combat_LS_CDBS_GP_TB): CLASS(Unit_Combat_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Combat_LS_CDBS_GP_TB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_cdbs_gp_tb_ca.paa)};
    };
    class CLASS(Unit_Combat_LS_CLBS_GP_BB): CLASS(Unit_Combat_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Combat_LS_CLBS_GP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_clbs_gp_bb_ca.paa)};
    };
    class CLASS(Unit_Combat_LS_CLRS_TP_BB): CLASS(Unit_Combat_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Combat_LS_CLRS_TP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_clrs_tp_bb_ca.paa)};
    };
    class CLASS(Unit_Combat_LS_CPS_BP_BB): CLASS(Unit_Combat_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Combat_LS_CPS_BP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_cps_bp_bb_ca.paa)};
    };

    // Rolled Sleeves
    class CLASS(Unit_Combat_RS_BS_GP_BB): CLASS(Unit_Combat_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Combat_RS_BS_GP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_bs_gp_bb_ca.paa)};
    };
    class CLASS(Unit_Combat_RS_BS_GP_TB): CLASS(Unit_Combat_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Combat_RS_BS_GP_TB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_bs_gp_tb_ca.paa)};
    };
    class CLASS(Unit_Combat_RS_BS_TP_BB): CLASS(Unit_Combat_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Combat_RS_BS_TP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_bs_tp_bb_ca.paa)};
    };
    class CLASS(Unit_Combat_RS_BS_TP_TB): CLASS(Unit_Combat_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Combat_RS_BS_TP_TB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_bs_tp_tb_ca.paa)};
    };
    class CLASS(Unit_Combat_RS_GS_BP_BB): CLASS(Unit_Combat_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Combat_RS_GS_BP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_gs_bp_bb_ca.paa)};
    };
    class CLASS(Unit_Combat_RS_GS_TP_BB): CLASS(Unit_Combat_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Combat_RS_GS_TP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_gs_tp_bb_ca.paa)};
    };
    class CLASS(Unit_Combat_RS_BS_DGP_BB): CLASS(Unit_Combat_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Combat_RS_BS_DGP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_bs_dgp_bb_ca.paa)};
    };
    // Checked
    class CLASS(Unit_Combat_RS_CDBS_GP_TB): CLASS(Unit_Combat_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Combat_RS_CDBS_GP_TB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_cdbs_gp_tb_ca.paa)};
    };
    class CLASS(Unit_Combat_RS_CLBS_GP_BB): CLASS(Unit_Combat_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Combat_RS_CLBS_GP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_clbs_gp_bb_ca.paa)};
    };
    class CLASS(Unit_Combat_RS_CLRS_TP_BB): CLASS(Unit_Combat_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Combat_RS_CLRS_TP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_clrs_tp_bb_ca.paa)};
    };
    class CLASS(Unit_Combat_RS_CPS_BP_BB): CLASS(Unit_Combat_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Combat_RS_CPS_BP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_cps_bp_bb_ca.paa)};
    };


    // Garment
    class CLASS(Unit_Garment_Base): I_Soldier_base_F {
        dlc = QUOTE(PREFIX);
        scope = 0;
        side = 2;
        faction = CLASS(IND);
        weapons[] = {"Throw", "Put"};
        respawnWeapons[] = {"Throw", "Put"};
        magazines[] = {};
        respawnMagazines[] = {};
        items[] = {"FirstAidKit"};
        respawnItems[] = {"FirstAidKit"};
        linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        identityTypes[] = {"LanguageENG_F", "Head_NATO", "Head_TK", "Head_Greek"};
        nakedUniform = QCLASS(Underwear_GreenLogo);
    };

    // Long SLeeves
    class CLASS(Unit_Garment_LS_BS_BP_BB): CLASS(Unit_Garment_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Combat_LS_BS_BP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_garment_bs_bp_bb_ca.paa)};
    };
};
