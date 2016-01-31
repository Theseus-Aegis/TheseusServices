class CfgVehicles {
    class B_Soldier_base_F;

    // Underwear
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


    // Uniforms
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

    // Naming pattern: SizeSleeves_ColorShirt_ColorPants_ColorBoots

    // Combat - Long SLeeves
    class CLASS(Unit_Combat_LS_BS_GP_BB): CLASS(Unit_Combat_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Combat_LS_BS_GP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_ls_bs_gp_bb_ca.paa)};
    };
    class CLASS(Unit_Combat_LS_BS_GP_TB): CLASS(Unit_Combat_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Combat_LS_BS_GP_TB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_ls_bs_gp_tb_ca.paa)};
    };
    class CLASS(Unit_Combat_LS_BS_TP_BB): CLASS(Unit_Combat_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Combat_LS_BS_TP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_ls_bs_tp_bb_ca.paa)};
    };
    class CLASS(Unit_Combat_LS_BS_TP_TB): CLASS(Unit_Combat_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Combat_LS_BS_TP_TB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_ls_bs_tp_tb_ca.paa)};
    };
    class CLASS(Unit_Combat_LS_GS_BP_BB): CLASS(Unit_Combat_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Combat_LS_GS_BP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_ls_gs_bp_bb_ca.paa)};
    };
    class CLASS(Unit_Combat_LS_GS_TP_BB): CLASS(Unit_Combat_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Combat_LS_GS_TP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_ls_gs_tp_bb_ca.paa)};
    };
    class CLASS(Unit_Combat_LS_BS_DGP_BB): CLASS(Unit_Combat_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Combat_LS_BS_DGP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_ls_bs_dgp_bb_ca.paa)};
    };
    class CLASS(Unit_Combat_LS_TS_BP_BB): CLASS(Unit_Combat_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Combat_LS_TS_BP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_ls_ts_bp_bb_ca.paa)};
    };
    class CLASS(Unit_Combat_LS_TS_GP_BB): CLASS(Unit_Combat_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Combat_LS_TS_GP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_ls_ts_gp_bb_ca.paa)};
    };
    class CLASS(Unit_Combat_LS_TS_GP_TB): CLASS(Unit_Combat_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        uniformClass = QCLASS(Uniform_Combat_LS_TS_GP_TB);
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_ls_ts_gp_tb_ca.paa)};
    };
};
