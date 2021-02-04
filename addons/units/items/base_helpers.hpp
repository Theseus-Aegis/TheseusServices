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

// Combat - Long Sleeves
class CLASS(Unit_Combat_LS_Base): B_Soldier_base_F {
    MACRO_BASE_CLASS_COMMON
    nakedUniform = QCLASS(Underwear_BlackLogo);
    hiddenSelectionsMaterials[] = {QPATHTOF(data\uniform_combat.rvmat)};
};

// Combat - Long Sleeves - Plaid
class CLASS(Unit_Combat_LS_C_Base): B_Soldier_base_F {
    MACRO_BASE_CLASS_COMMON
    nakedUniform = QCLASS(Underwear_BlackLogo);
    hiddenSelectionsMaterials[] = {QPATHTOF(data\uniform_combat_plaid.rvmat)};
};

// Combat - Rolled Sleeves
class B_Soldier_03_f;
class CLASS(Unit_Combat_RS_Base): B_Soldier_03_f {
    MACRO_BASE_CLASS_COMMON
    nakedUniform = QCLASS(Underwear_WhiteLogo);
    hiddenSelectionsMaterials[] = {QPATHTOF(data\uniform_combat.rvmat)};
};

// Combat - Rolled Sleeves - Plaid
class CLASS(Unit_Combat_RS_C_Base): CLASS(Unit_Combat_RS_Base) {
    hiddenSelectionsMaterials[] = {QPATHTOF(data\uniform_combat_plaid.rvmat)};
};

// Garment - Long Sleeves
class I_Soldier_base_F;
class CLASS(Unit_Garment_LS_Base): I_Soldier_base_F {
    MACRO_BASE_CLASS_COMMON
    nakedUniform = QCLASS(Underwear_BlueLogo);
};

// Garment - Rolled Sleeves
class I_Soldier_02_F;
class CLASS(Unit_Garment_RS_Base): I_Soldier_02_F {
    MACRO_BASE_CLASS_COMMON
    nakedUniform = QCLASS(Underwear_GreenLogo);
};

// Polo - Tactical Pants
class B_RangeMaster_F;
class CLASS(Unit_Polo_TP_Base): B_RangeMaster_F {
    MACRO_BASE_CLASS_COMMON
    nakedUniform = QCLASS(Unit_Underwear_BlueLogo);
    hiddenSelectionsMaterials[] = {QPATHTOF(data\uniform_polo.rvmat)};
};

// Floral Shirts with Jeans
class CLASS(Unit_TShirt_Floral_Denim_Base): B_Soldier_base_F {
    MACRO_BASE_CLASS_COMMON
    nakedUniform = QCLASS(Unit_Underwear_BlackLogo);
    model = "\A3\characters_f\Civil\c_poloshirtpants.p3d";
    hiddenSelectionsMaterials[] = {
        "\A3\characters_f\Civil\Data\c_poloshirtpants.rvmat"
    };
};

// Floral Shirts with Shorts
class CLASS(Unit_TShirt_Floral_Shorts_Base): B_Soldier_base_F {
    MACRO_BASE_CLASS_COMMON
    nakedUniform = QCLASS(Unit_Underwear_BlackLogo);
    model = "\A3\characters_f\Civil\c_poloshirt.p3d";
    hiddenSelectionsMaterials[] = {
        "\A3\characters_f\Civil\Data\c_poloshirt.rvmat"
    };
};
