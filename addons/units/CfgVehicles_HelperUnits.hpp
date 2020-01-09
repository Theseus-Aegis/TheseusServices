// Included in CfgVehicles.hpp

// Naked
#define MACRO_UNDERWEAR_BASE \
    dlc = QUOTE(PREFIX); \
    scope = 1; \
    side = 2; \
    faction = QCLASS(IND); \
    weapons[] = {"Throw", "Put"}; \
    respawnWeapons[] = {"Throw", "Put"}; \
    magazines[] = {}; \
    respawnMagazines[] = {}; \
    items[] = {}; \
    respawnItems[] = {}; \
    linkedItems[] = {}; \
    respawnLinkedItems[] = {}; \
    modelSides[] = {6}; \
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
    faction = QCLASS(IND); \
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
    genericNames = QUOTE(PREFIX); \
    class EventHandlers;

// Naming pattern: SizeSleeves_ColorShirt_ColorPants_ColorBoots

// Combat - Long Sleeves
class CLASS(Unit_Combat_LS_Base): B_Soldier_base_F {
    MACRO_BASE_CLASS_COMMON
    nakedUniform = QCLASS(Underwear_BlackLogo);
    hiddenSelectionsMaterials[] = {QPATHTOF(data\uniform_combat.rvmat)};
};

class CLASS(Unit_Combat_LS_BS_BP_BB): CLASS(Unit_Combat_LS_Base) {
    scope = 1;
    author = "Pomigit, Kresky";
    uniformClass = QCLASS(Uniform_Combat_LS_BS_BP_BB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_bs_bp_bb_co.paa)};
};
class CLASS(Unit_Combat_LS_BS_GP_BB): CLASS(Unit_Combat_LS_Base) {
    scope = 1;
    author = "Pomigit, Jonpas";
    uniformClass = QCLASS(Uniform_Combat_LS_BS_GP_BB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_bs_gp_bb_co.paa)};
};
class CLASS(Unit_Combat_LS_BS_GP_TB): CLASS(Unit_Combat_LS_Base) {
    scope = 1;
    author = "Pomigit, Jonpas";
    uniformClass = QCLASS(Uniform_Combat_LS_BS_GP_TB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_bs_gp_tb_co.paa)};
};
class CLASS(Unit_Combat_LS_BS_TP_BB): CLASS(Unit_Combat_LS_Base) {
    scope = 1;
    author = "Pomigit, Jonpas";
    uniformClass = QCLASS(Uniform_Combat_LS_BS_TP_BB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_bs_tp_bb_co.paa)};
};
class CLASS(Unit_Combat_LS_BS_TP_TB): CLASS(Unit_Combat_LS_Base) {
    scope = 1;
    author = "Pomigit, Jonpas";
    uniformClass = QCLASS(Uniform_Combat_LS_BS_TP_TB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_bs_tp_tb_co.paa)};
};
class CLASS(Unit_Combat_LS_GS_GP_BB): CLASS(Unit_Combat_LS_Base) {
    scope = 1;
    author = "Kresky";
    uniformClass = QCLASS(Uniform_Combat_LS_GS_GP_BB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_gs_gp_bb_co.paa)};
};
class CLASS(Unit_Combat_LS_GS_BP_BB): CLASS(Unit_Combat_LS_Base) {
    scope = 1;
    author = "Pomigit, Jonpas";
    uniformClass = QCLASS(Uniform_Combat_LS_GS_BP_BB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_gs_bp_bb_co.paa)};
};
class CLASS(Unit_Combat_LS_GS_TP_BB): CLASS(Unit_Combat_LS_Base) {
    scope = 1;
    author = "Pomigit, Jonpas";
    uniformClass = QCLASS(Uniform_Combat_LS_GS_TP_BB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_gs_tp_bb_co.paa)};
};
class CLASS(Unit_Combat_LS_BS_DGP_BB): CLASS(Unit_Combat_LS_Base) {
    scope = 1;
    author = "Pomigit, Jonpas";
    uniformClass = QCLASS(Uniform_Combat_LS_BS_DGP_BB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_bs_dgp_bb_co.paa)};
};
class CLASS(Unit_Combat_LS_TS_BP_BB): CLASS(Unit_Combat_LS_Base) {
    scope = 1;
    author = "Pomigit, Jonpas";
    uniformClass = QCLASS(Uniform_Combat_LS_TS_BP_BB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_ts_bp_bb_co.paa)};
};
class CLASS(Unit_Combat_LS_TS_GP_BB): CLASS(Unit_Combat_LS_Base) {
    scope = 1;
    author = "Pomigit, Jonpas";
    uniformClass = QCLASS(Uniform_Combat_LS_TS_GP_BB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_ts_gp_bb_co.paa)};
};
class CLASS(Unit_Combat_LS_TS_GP_TB): CLASS(Unit_Combat_LS_Base) {
    scope = 1;
    author = "Pomigit, Jonpas";
    uniformClass = QCLASS(Uniform_Combat_LS_TS_GP_TB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_ts_gp_tb_co.paa)};
};
class CLASS(Unit_Combat_LS_TS_TP_TB): CLASS(Unit_Combat_LS_Base) {
    scope = 1;
    author = "Kresky";
    uniformClass = QCLASS(Uniform_Combat_LS_TS_TP_TB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_ts_tp_tb_co.paa)};
};
class CLASS(Unit_Combat_LS_WS_WP_WB): CLASS(Unit_Combat_LS_Base) {
    scope = 1;
    author = "Kresky";
    uniformClass = QCLASS(Uniform_Combat_LS_WS_WP_WB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_ws_wp_wb_co.paa)};
};

// Combat - Long Sleeves - Plaid
class CLASS(Unit_Combat_LS_C_Base): B_Soldier_base_F {
    MACRO_BASE_CLASS_COMMON
    nakedUniform = QCLASS(Underwear_BlackLogo);
    hiddenSelectionsMaterials[] = {QPATHTOF(data\uniform_combat_plaid.rvmat)};
};

class CLASS(Unit_Combat_LS_CBPS_BP_BB): CLASS(Unit_Combat_LS_Base) {
    scope = 1;
    author = "GilleeDoo, Tyrone";
    uniformClass = QCLASS(Uniform_Combat_LS_CBPS_BP_BB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_cbps_bp_bb_co.paa)};
};
class CLASS(Unit_Combat_LS_CDES_TP_TB): CLASS(Unit_Combat_LS_Base) {
    scope = 1;
    author = "GilleeDoo, Tyrone";
    uniformClass = QCLASS(Uniform_Combat_LS_CDES_TP_TB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_cdes_tp_tb_co.paa)};
};
class CLASS(Unit_Combat_LS_CDFS_GP_TB): CLASS(Unit_Combat_LS_Base) {
    scope = 1;
    author = "GilleeDoo, Tyrone";
    uniformClass = QCLASS(Uniform_Combat_LS_CDFS_GP_TB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_cdfs_gp_tb_co.paa)};
};
class CLASS(Unit_Combat_LS_CLES_TP_BB): CLASS(Unit_Combat_LS_Base) {
    scope = 1;
    author = "GilleeDoo, Tyrone";
    uniformClass = QCLASS(Uniform_Combat_LS_CLES_TP_BB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_cles_tp_bb_co.paa)};
};
class CLASS(Unit_Combat_LS_CLFS_GP_BB): CLASS(Unit_Combat_LS_Base) {
    scope = 1;
    author = "GilleeDoo, Tyrone";
    uniformClass = QCLASS(Uniform_Combat_LS_CLFS_GP_BB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_clfs_gp_bb_co.paa)};
};
class CLASS(Unit_Combat_LS_CDBS_GP_TB): CLASS(Unit_Combat_LS_C_Base) {
    scope = 1;
    author = "Pomigit, Jonpas";
    uniformClass = QCLASS(Uniform_Combat_LS_CDBS_GP_TB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_cdbs_gp_tb_co.paa)};
};
class CLASS(Unit_Combat_LS_CLBS_GP_BB): CLASS(Unit_Combat_LS_C_Base) {
    scope = 1;
    author = "Pomigit, Jonpas";
    uniformClass = QCLASS(Uniform_Combat_LS_CLBS_GP_BB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_clbs_gp_bb_co.paa)};
};
class CLASS(Unit_Combat_LS_CLRS_TP_BB): CLASS(Unit_Combat_LS_C_Base) {
    scope = 1;
    author = "Pomigit, Jonpas";
    uniformClass = QCLASS(Uniform_Combat_LS_CLRS_TP_BB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_clrs_tp_bb_co.paa)};
};
class CLASS(Unit_Combat_LS_CPS_BP_BB): CLASS(Unit_Combat_LS_C_Base) {
    scope = 1;
    author = "Pomigit, Jonpas";
    uniformClass = QCLASS(Uniform_Combat_LS_CPS_BP_BB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_cps_bp_bb_co.paa)};
};

// Combat - Rolled Sleeves
class B_Soldier_03_f;
class CLASS(Unit_Combat_RS_Base): B_Soldier_03_f {
    MACRO_BASE_CLASS_COMMON
    nakedUniform = QCLASS(Underwear_WhiteLogo);
    hiddenSelectionsMaterials[] = {QPATHTOF(data\uniform_combat.rvmat)};
};

class CLASS(Unit_Combat_RS_BS_BP_BB): CLASS(Unit_Combat_RS_Base) {
    scope = 1;
    author = "Pomigit, Kresky";
    uniformClass = QCLASS(Uniform_Combat_RS_BS_BP_BB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_bs_bp_bb_co.paa)};
};
class CLASS(Unit_Combat_RS_BS_GP_BB): CLASS(Unit_Combat_RS_Base) {
    scope = 1;
    author = "Pomigit, Jonpas";
    uniformClass = QCLASS(Uniform_Combat_RS_BS_GP_BB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_bs_gp_bb_co.paa)};
};
class CLASS(Unit_Combat_RS_BS_GP_TB): CLASS(Unit_Combat_RS_Base) {
    scope = 1;
    author = "Pomigit, Jonpas";
    uniformClass = QCLASS(Uniform_Combat_RS_BS_GP_TB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_bs_gp_tb_co.paa)};
};
class CLASS(Unit_Combat_RS_BS_TP_BB): CLASS(Unit_Combat_RS_Base) {
    scope = 1;
    author = "Pomigit, Jonpas";
    uniformClass = QCLASS(Uniform_Combat_RS_BS_TP_BB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_bs_tp_bb_co.paa)};
};
class CLASS(Unit_Combat_RS_BS_TP_TB): CLASS(Unit_Combat_RS_Base) {
    scope = 1;
    author = "Pomigit, Jonpas";
    uniformClass = QCLASS(Uniform_Combat_RS_BS_TP_TB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_bs_tp_tb_co.paa)};
};
class CLASS(Unit_Combat_RS_GS_GP_BB): CLASS(Unit_Combat_RS_Base) {
    scope = 1;
    author = "Jonpas";
    uniformClass = QCLASS(Uniform_Combat_RS_GS_GP_BB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_gs_gp_bb_co.paa)};
};
class CLASS(Unit_Combat_RS_GS_BP_BB): CLASS(Unit_Combat_RS_Base) {
    scope = 1;
    author = "Pomigit, Jonpas";
    uniformClass = QCLASS(Uniform_Combat_RS_GS_BP_BB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_gs_bp_bb_co.paa)};
};
class CLASS(Unit_Combat_RS_GS_TP_BB): CLASS(Unit_Combat_RS_Base) {
    scope = 1;
    author = "Pomigit, Jonpas";
    uniformClass = QCLASS(Uniform_Combat_RS_GS_TP_BB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_gs_tp_bb_co.paa)};
};
class CLASS(Unit_Combat_RS_BS_DGP_BB): CLASS(Unit_Combat_RS_Base) {
    scope = 1;
    author = "Pomigit, Jonpas";
    uniformClass = QCLASS(Uniform_Combat_RS_BS_DGP_BB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_bs_dgp_bb_co.paa)};
};
class CLASS(Unit_Combat_RS_TS_BP_BB): CLASS(Unit_Combat_RS_Base) {
    scope = 1;
    author = "Pomigit, Jonpas";
    uniformClass = QCLASS(Uniform_Combat_RS_TS_BP_BB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_ts_bp_bb_co.paa)};
};
class CLASS(Unit_Combat_RS_TS_GP_BB): CLASS(Unit_Combat_RS_Base) {
    scope = 1;
    author = "Pomigit, Jonpas";
    uniformClass = QCLASS(Uniform_Combat_RS_TS_GP_BB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_ts_gp_bb_co.paa)};
};
class CLASS(Unit_Combat_RS_TS_GP_TB): CLASS(Unit_Combat_RS_Base) {
    scope = 1;
    author = "Pomigit, Jonpas";
    uniformClass = QCLASS(Uniform_Combat_RS_TS_GP_TB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_ts_gp_tb_co.paa)};
};
class CLASS(Unit_Combat_RS_TS_TP_TB): CLASS(Unit_Combat_RS_Base) {
    scope = 1;
    author = "Kresky";
    uniformClass = QCLASS(Uniform_Combat_RS_TS_TP_TB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_ts_tp_tb_co.paa)};
};

// Combat - Rolled Sleeves - Plaid
class CLASS(Unit_Combat_RS_C_Base): CLASS(Unit_Combat_RS_Base) {
    hiddenSelectionsMaterials[] = {QPATHTOF(data\uniform_combat_plaid.rvmat)};
};

class CLASS(Unit_Combat_RS_CBPS_BP_BB): CLASS(Unit_Combat_RS_Base) {
    scope = 1;
    author = "GilleeDoo, Tyrone";
    uniformClass = QCLASS(Uniform_Combat_RS_CBPS_BP_BB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_cbps_bp_bb_co.paa)};
};
class CLASS(Unit_Combat_RS_CDES_TP_TB): CLASS(Unit_Combat_RS_Base) {
    scope = 1;
    author = "GilleeDoo, Tyrone";
    uniformClass = QCLASS(Uniform_Combat_RS_CDES_TP_TB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_cdes_tp_tb_co.paa)};
};
class CLASS(Unit_Combat_RS_CDFS_GP_TB): CLASS(Unit_Combat_RS_Base) {
    scope = 1;
    author = "GilleeDoo, Tyrone";
    uniformClass = QCLASS(Uniform_Combat_RS_CDFS_GP_TB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_cdfs_gp_tb_co.paa)};
};
class CLASS(Unit_Combat_RS_CLES_TP_BB): CLASS(Unit_Combat_RS_Base) {
    scope = 1;
    author = "GilleeDoo, Tyrone";
    uniformClass = QCLASS(Uniform_Combat_RS_CLES_TP_BB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_cles_tp_bb_co.paa)};
};
class CLASS(Unit_Combat_RS_CLFS_GP_BB): CLASS(Unit_Combat_RS_Base) {
    scope = 1;
    author = "GilleeDoo, Tyrone";
    uniformClass = QCLASS(Uniform_Combat_RS_CLFS_GP_BB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_clfs_gp_bb_co.paa)};
};
class CLASS(Unit_Combat_RS_CDBS_GP_TB): CLASS(Unit_Combat_RS_C_Base) {
    scope = 1;
    author = "Pomigit, Jonpas";
    uniformClass = QCLASS(Uniform_Combat_RS_CDBS_GP_TB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_cdbs_gp_tb_co.paa)};
};
class CLASS(Unit_Combat_RS_CLBS_GP_BB): CLASS(Unit_Combat_RS_C_Base) {
    scope = 1;
    author = "Pomigit, Jonpas";
    uniformClass = QCLASS(Uniform_Combat_RS_CLBS_GP_BB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_clbs_gp_bb_co.paa)};
};
class CLASS(Unit_Combat_RS_CLRS_TP_BB): CLASS(Unit_Combat_RS_C_Base) {
    scope = 1;
    author = "Pomigit, Jonpas";
    uniformClass = QCLASS(Uniform_Combat_RS_CLRS_TP_BB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_clrs_tp_bb_co.paa)};
};
class CLASS(Unit_Combat_RS_CPS_BP_BB): CLASS(Unit_Combat_RS_C_Base) {
    scope = 1;
    author = "Pomigit, Jonpas";
    uniformClass = QCLASS(Uniform_Combat_RS_CPS_BP_BB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_cps_bp_bb_co.paa)};
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
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_garment_bs_bp_bb_co.paa)};
};
class CLASS(Unit_Garment_LS_BS_GP_BB): CLASS(Unit_Garment_LS_Base) {
    scope = 1;
    author = "Pomigit, Jonpas";
    uniformClass = QCLASS(Uniform_Garment_LS_BS_GP_BB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_garment_bs_gp_bb_co.paa)};
};
class CLASS(Unit_Garment_LS_OS_EP_TB): CLASS(Unit_Garment_LS_Base) {
    scope = 1;
    author = "Pomigit, Jonpas";
    uniformClass = QCLASS(Uniform_Garment_LS_OS_EP_TB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_garment_os_ep_tb_co.paa)};
};
class CLASS(Unit_Garment_LS_GS_GP_BB): CLASS(Unit_Garment_LS_Base) {
    scope = 1;
    author = "Pomigit, Jonpas";
    uniformClass = QCLASS(Uniform_Garment_LS_GS_GP_BB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_garment_gs_gp_bb_co.paa)};
};
class CLASS(Unit_Garment_LS_GS_BP_BB): CLASS(Unit_Garment_LS_Base) {
    scope = 1;
    author = "Pomigit, Jonpas";
    uniformClass = QCLASS(Uniform_Garment_LS_GS_BP_BB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_garment_gs_bp_bb_co.paa)};
};
class CLASS(Unit_Garment_LS_GS_EP_TB): CLASS(Unit_Garment_LS_Base) {
    scope = 1;
    author = "Pomigit, Jonpas";
    uniformClass = QCLASS(Uniform_Garment_LS_GS_EP_TB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_garment_gs_ep_tb_co.paa)};
};
class CLASS(Unit_Garment_LS_ES_EP_TB): CLASS(Unit_Garment_LS_Base) {
    scope = 1;
    author = "Pomigit, Jonpas";
    uniformClass = QCLASS(Uniform_Garment_LS_ES_EP_TB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_garment_es_ep_tb_co.paa)};
};
class CLASS(Unit_Garment_LS_ES_BP_BB): CLASS(Unit_Garment_LS_Base) {
    scope = 1;
    author = "Pomigit, Jonpas";
    uniformClass = QCLASS(Uniform_Garment_LS_ES_BP_BB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_garment_es_bp_bb_co.paa)};
};
class CLASS(Unit_Garment_LS_ES_GP_BB): CLASS(Unit_Garment_LS_Base) {
    scope = 1;
    author = "Pomigit, Jonpas";
    uniformClass = QCLASS(Uniform_Garment_LS_ES_GP_BB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_garment_es_gp_bb_co.paa)};
};
class CLASS(Unit_Garment_LS_TS_TP_TB): CLASS(Unit_Garment_LS_Base) {
    scope = 1;
    author = "Pomigit, Jonpas";
    uniformClass = QCLASS(Uniform_Garment_LS_TS_TP_TB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_garment_ts_tp_tb_co.paa)};
};
class CLASS(Unit_Garment_LS_GS_TP_TB): CLASS(Unit_Garment_LS_Base) {
    scope = 1;
    author = "Pomigit, Jonpas";
    uniformClass = QCLASS(Uniform_Garment_LS_GS_TP_TB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_garment_gs_tp_tb_co.paa)};
};
class CLASS(Unit_Garment_LS_TS_GP_BB): CLASS(Unit_Garment_LS_Base) {
    scope = 1;
    author = "Pomigit, Jonpas";
    uniformClass = QCLASS(Uniform_Garment_LS_TS_GP_BB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_garment_ts_gp_bb_co.paa)};
};
class CLASS(Unit_Garment_LS_OS_TP_TB): CLASS(Unit_Garment_LS_Base) {
    scope = 1;
    author = "Pomigit, Jonpas";
    uniformClass = QCLASS(Uniform_Garment_LS_OS_TP_TB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_garment_os_tp_tb_co.paa)};
};
class CLASS(Unit_Garment_LS_TS_BP_BB): CLASS(Unit_Garment_LS_Base) {
    scope = 1;
    author = "Pomigit, Jonpas";
    uniformClass = QCLASS(Uniform_Garment_LS_TS_BP_BB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_garment_ts_bp_bb_co.paa)};
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
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_garment_bs_bp_bb_co.paa)};
};
class CLASS(Unit_Garment_RS_BS_GP_BB): CLASS(Unit_Garment_RS_Base) {
    scope = 1;
    author = "Pomigit, Jonpas";
    uniformClass = QCLASS(Uniform_Garment_RS_BS_GP_BB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_garment_bs_gp_bb_co.paa)};
};
class CLASS(Unit_Garment_RS_OS_EP_TB): CLASS(Unit_Garment_RS_Base) {
    scope = 1;
    author = "Pomigit, Jonpas";
    uniformClass = QCLASS(Uniform_Garment_RS_OS_EP_TB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_garment_os_ep_tb_co.paa)};
};
class CLASS(Unit_Garment_RS_GS_GP_BB): CLASS(Unit_Garment_RS_Base) {
    scope = 1;
    author = "Pomigit, Jonpas";
    uniformClass = QCLASS(Uniform_Garment_RS_GS_GP_BB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_garment_gs_gp_bb_co.paa)};
};
class CLASS(Unit_Garment_RS_GS_BP_BB): CLASS(Unit_Garment_RS_Base) {
    scope = 1;
    author = "Pomigit, Jonpas";
    uniformClass = QCLASS(Uniform_Garment_RS_GS_BP_BB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_garment_gs_bp_bb_co.paa)};
};
class CLASS(Unit_Garment_RS_GS_EP_TB): CLASS(Unit_Garment_RS_Base) {
    scope = 1;
    author = "Pomigit, Jonpas";
    uniformClass = QCLASS(Uniform_Garment_RS_GS_EP_TB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_garment_gs_ep_tb_co.paa)};
};
class CLASS(Unit_Garment_RS_ES_EP_TB): CLASS(Unit_Garment_RS_Base) {
    scope = 1;
    author = "Pomigit, Jonpas";
    uniformClass = QCLASS(Uniform_Garment_RS_ES_EP_TB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_garment_es_ep_tb_co.paa)};
};
class CLASS(Unit_Garment_RS_ES_BP_BB): CLASS(Unit_Garment_RS_Base) {
    scope = 1;
    author = "Pomigit, Jonpas";
    uniformClass = QCLASS(Uniform_Garment_RS_ES_BP_BB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_garment_es_bp_bb_co.paa)};
};
class CLASS(Unit_Garment_RS_ES_GP_BB): CLASS(Unit_Garment_RS_Base) {
    scope = 1;
    author = "Pomigit, Jonpas";
    uniformClass = QCLASS(Uniform_Garment_RS_ES_GP_BB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_garment_es_gp_bb_co.paa)};
};
class CLASS(Unit_Garment_RS_TS_TP_TB): CLASS(Unit_Garment_RS_Base) {
    scope = 1;
    author = "Pomigit, Jonpas";
    uniformClass = QCLASS(Uniform_Garment_RS_TS_TP_TB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_garment_ts_tp_tb_co.paa)};
};
class CLASS(Unit_Garment_RS_GS_TP_TB): CLASS(Unit_Garment_RS_Base) {
    scope = 1;
    author = "Pomigit, Jonpas";
    uniformClass = QCLASS(Uniform_Garment_RS_GS_TP_TB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_garment_gs_tp_tb_co.paa)};
};
class CLASS(Unit_Garment_RS_TS_GP_BB): CLASS(Unit_Garment_RS_Base) {
    scope = 1;
    author = "Pomigit, Jonpas";
    uniformClass = QCLASS(Uniform_Garment_RS_TS_GP_BB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_garment_ts_gp_bb_co.paa)};
};
class CLASS(Unit_Garment_RS_OS_TP_TB): CLASS(Unit_Garment_RS_Base) {
    scope = 1;
    author = "Pomigit, Jonpas";
    uniformClass = QCLASS(Uniform_Garment_RS_OS_TP_TB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_garment_os_tp_tb_co.paa)};
};
class CLASS(Unit_Garment_RS_TS_BP_BB): CLASS(Unit_Garment_RS_Base) {
    scope = 1;
    author = "Pomigit, Jonpas";
    uniformClass = QCLASS(Uniform_Garment_RS_TS_BP_BB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_garment_ts_bp_bb_co.paa)};
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
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_polo_ls_tp_tb_co.paa)};
};
class CLASS(Unit_Polo_TP_LS_TP_TB_NoLogo): CLASS(Unit_Polo_TP_Base) {
    scope = 1;
    author = "Pomigit, Jonpas, Kresky";
    uniformClass = QCLASS(Uniform_Polo_TP_LS_TP_TB_NoLogo);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_polo_ls_tp_tb_nologo_co.paa)};
};
class CLASS(Unit_Polo_TP_TS_GP_BB): CLASS(Unit_Polo_TP_Base) {
    scope = 1;
    author = "Pomigit, Jonpas, Rory";
    uniformClass = QCLASS(Uniform_Polo_TP_TS_GP_BB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_polo_ts_gp_bb_co.paa)};
};
class CLASS(Unit_Polo_TP_TS_GP_BB_NoLogo): CLASS(Unit_Polo_TP_Base) {
    scope = 1;
    author = "Pomigit, Jonpas, Kresky";
    uniformClass = QCLASS(Uniform_Polo_TP_TS_GP_BB_NoLogo);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_polo_ts_gp_bb_nologo_co.paa)};
};
class CLASS(Unit_Polo_TP_BS_TP_TB): CLASS(Unit_Polo_TP_Base) {
    scope = 1;
    author = "Pomigit, Jonpas, Rory";
    uniformClass = QCLASS(Uniform_Polo_TP_BS_TP_TB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_polo_bs_tp_tb_co.paa)};
};
class CLASS(Unit_Polo_TP_BS_TP_TB_NoLogo): CLASS(Unit_Polo_TP_Base) {
    scope = 1;
    author = "Pomigit, Jonpas, Kresky";
    uniformClass = QCLASS(Uniform_Polo_TP_BS_TP_TB_NoLogo);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_polo_bs_tp_tb_nologo_co.paa)};
};
class CLASS(Unit_Polo_TP_BS_LP_BB): CLASS(Unit_Polo_TP_Base) {
    scope = 1;
    author = "Pomigit, Jonpas, Rory";
    uniformClass = QCLASS(Uniform_Polo_TP_BS_LP_BB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_polo_bs_lp_bb_co.paa)};
};
class CLASS(Unit_Polo_TP_BS_LP_BB_NoLogo): CLASS(Unit_Polo_TP_Base) {
    scope = 1;
    author = "Pomigit, Jonpas, Kresky";
    uniformClass = QCLASS(Uniform_Polo_TP_BS_LP_BB_NoLogo);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_polo_bs_lp_bb_nologo_co.paa)};
};
class CLASS(Unit_Polo_TP_LS_GP_BB): CLASS(Unit_Polo_TP_Base) {
    scope = 1;
    author = "Pomigit, Jonpas, Rory";
    uniformClass = QCLASS(Uniform_Polo_TP_LS_GP_BB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_polo_ls_gp_bb_co.paa)};
};
class CLASS(Unit_Polo_TP_LS_GP_BB_NoLogo): CLASS(Unit_Polo_TP_Base) {
    scope = 1;
    author = "Pomigit, Jonpas, Kresky";
    uniformClass = QCLASS(Uniform_Polo_TP_LS_GP_BB_NoLogo);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_polo_ls_gp_bb_nologo_co.paa)};
};
class CLASS(Unit_Polo_TP_OS_TP_BB): CLASS(Unit_Polo_TP_Base) {
    scope = 1;
    author = "Pomigit, Jonpas, Rory";
    uniformClass = QCLASS(Uniform_Polo_TP_OS_TP_BB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_polo_os_tp_bb_co.paa)};
};
class CLASS(Unit_Polo_TP_OS_TP_BB_NoLogo): CLASS(Unit_Polo_TP_Base) {
    scope = 1;
    author = "Pomigit, Jonpas, Kresky";
    uniformClass = QCLASS(Uniform_Polo_TP_OS_TP_BB_NoLogo);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_polo_os_tp_bb_nologo_co.paa)};
};
class CLASS(Unit_Polo_TP_OS_LP_BB): CLASS(Unit_Polo_TP_Base) {
    scope = 1;
    author = "Pomigit, Jonpas, Rory";
    uniformClass = QCLASS(Uniform_Polo_TP_OS_LP_BB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_polo_os_lp_bb_co.paa)};
};
class CLASS(Unit_Polo_TP_OS_LP_BB_NoLogo): CLASS(Unit_Polo_TP_Base) {
    scope = 1;
    author = "Pomigit, Jonpas, Kresky";
    uniformClass = QCLASS(Uniform_Polo_TP_OS_LP_BB_NoLogo);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_polo_os_lp_bb_nologo_co.paa)};
};
class CLASS(Unit_Polo_TP_GS_TP_TB): CLASS(Unit_Polo_TP_Base) {
    scope = 1;
    author = "Pomigit, Jonpas, Rory";
    uniformClass = QCLASS(Uniform_Polo_TP_GS_TP_TB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_polo_gs_tp_tb_co.paa)};
};
class CLASS(Unit_Polo_TP_GS_TP_TB_NoLogo): CLASS(Unit_Polo_TP_Base) {
    scope = 1;
    author = "Pomigit, Jonpas, Kresky";
    uniformClass = QCLASS(Uniform_Polo_TP_GS_TP_TB_NoLogo);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_polo_gs_tp_tb_nologo_co.paa)};
};
class CLASS(Unit_Polo_TP_WS_TP_TB): CLASS(Unit_Polo_TP_Base) {
    scope = 1;
    author = "Pomigit, Jonpas, Rory";
    uniformClass = QCLASS(Uniform_Polo_TP_WS_TP_TB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_polo_ws_tp_tb_co.paa)};
};
class CLASS(Unit_Polo_TP_WS_TP_TB_NoLogo): CLASS(Unit_Polo_TP_Base) {
    scope = 1;
    author = "Pomigit, Jonpas, Kresky";
    uniformClass = QCLASS(Uniform_Polo_TP_WS_TP_TB_NoLogo);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_polo_ws_tp_tb_nologo_co.paa)};
};
class CLASS(Unit_Polo_WS_LP_BB): CLASS(Unit_Polo_TP_Base) {
    scope = 1;
    author = "Pomigit, Jonpas, Rory";
    uniformClass = QCLASS(Uniform_Polo_TP_WS_LP_BB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_polo_ws_lp_bb_co.paa)};
};
class CLASS(Unit_Polo_WS_LP_BB_NoLogo): CLASS(Unit_Polo_TP_Base) {
    scope = 1;
    author = "Pomigit, Jonpas, Kresky";
    uniformClass = QCLASS(Uniform_Polo_TP_WS_LP_BB_NoLogo);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_polo_ws_lp_bb_nologo_co.paa)};
};
class CLASS(Unit_Polo_TP_WS_GP_BB): CLASS(Unit_Polo_TP_Base) {
    scope = 1;
    author = "Pomigit, Jonpas, Rory";
    uniformClass = QCLASS(Uniform_Polo_TP_WS_GP_BB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_polo_ws_gp_bb_co.paa)};
};
class CLASS(Unit_Polo_TP_WS_GP_BB_NoLogo): CLASS(Unit_Polo_TP_Base) {
    scope = 1;
    author = "Pomigit, Jonpas, Kresky";
    uniformClass = QCLASS(Uniform_Polo_TP_WS_GP_BB_NoLogo);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_polo_ws_gp_bb_nologo_co.paa)};
};
class CLASS(Unit_Polo_CP_LS_TP_OB): CLASS(Unit_Polo_TP_Base) {
    scope = 1;
    author = "Pomigit, Jonpas";
    uniformClass = QCLASS(Uniform_Polo_CP_LS_TP_OB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_polo_ls_tp_ob_co.paa)};
};
class CLASS(Unit_Polo_CP_RS_LP_BB): CLASS(Unit_Polo_TP_Base) {
    scope = 1;
    author = "Pomigit, Jonpas";
    uniformClass = QCLASS(Uniform_Polo_CP_RS_LP_BB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_polo_rs_lp_bb_co.paa)};
};
class CLASS(Unit_Polo_CP_BS_TP_BB): CLASS(Unit_Polo_TP_Base) {
    scope = 1;
    author = "Pomigit, Jonpas, Rory";
    uniformClass = QCLASS(Uniform_Polo_CP_BS_TP_BB);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_polo_bs_tp_bb_co.paa)};
};
class CLASS(Unit_Polo_CP_BS_TP_BB_NoLogo): CLASS(Unit_Polo_TP_Base) {
    scope = 1;
    author = "Pomigit, Jonpas, Kresky";
    uniformClass = QCLASS(Uniform_Polo_CP_BS_TP_BB_NoLogo);
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_polo_bs_tp_bb_nologo_co.paa)};
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
        QPATHTOF(data\jeans_lp_bb_co.paa)
    };
};
class CLASS(Unit_TShirt_JP_GS_TP_BB): CLASS(Unit_TShirt_JP_Base) {
    scope = 1;
    author = "Pomigit, Jonpas";
    uniformClass = QCLASS(Uniform_TShirt_JP_GS_TP_BB);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\underwear_greenlogo_co.paa),
        QPATHTOF(data\jeans_tp_bb_co.paa)
    };
};
class CLASS(Unit_TShirt_JP_BS_LP_BB): CLASS(Unit_TShirt_JP_Base) {
    scope = 1;
    author = "Pomigit, Jonpas";
    uniformClass = QCLASS(Uniform_TShirt_JP_BS_LP_BB);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\underwear_blacklogo_co.paa),
        QPATHTOF(data\jeans_lp_bb_co.paa)
    };
};
class CLASS(Unit_TShirt_JP_BS_TP_BB): CLASS(Unit_TShirt_JP_Base) {
    scope = 1;
    author = "Pomigit, Jonpas";
    uniformClass = QCLASS(Uniform_TShirt_JP_BS_TP_BB);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\underwear_blacklogo_co.paa),
        QPATHTOF(data\jeans_tp_bb_co.paa)
    };
};
class CLASS(Unit_TShirt_JP_LS_LP_BB): CLASS(Unit_TShirt_JP_Base) {
    scope = 1;
    author = "Pomigit, Jonpas";
    uniformClass = QCLASS(Uniform_TShirt_JP_LS_LP_BB);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\underwear_bluelogo_co.paa),
        QPATHTOF(data\jeans_lp_bb_co.paa)
    };
};
class CLASS(Unit_TShirt_JP_WS_LP_BB): CLASS(Unit_TShirt_JP_Base) {
    scope = 1;
    author = "Pomigit, Jonpas";
    uniformClass = QCLASS(Uniform_TShirt_JP_WS_LP_BB);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\underwear_whitelogo_co.paa),
        QPATHTOF(data\jeans_lp_bb_co.paa)
    };
};
