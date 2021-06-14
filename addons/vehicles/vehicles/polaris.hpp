#define MACRO_POLARIS_TEXTURES \
    class TextureSources { \
        class Black { \
            displayName = "$STR_A3_TEXTURESOURCES_BLACK0"; \
            author = "Kresky"; \
            textures[] = { \
                QPATHTOF(data\polaris_black_ext01_co.paa), \
                QPATHTOF(data\polaris_black_ext02_co.paa), \
                QPATHTOF(data\polaris_black_ext03_co.paa), \
                QPATHTOF(data\polaris_black_adds_co.paa), \
                "\a3\weapons_f_beta\launchers\titan\data\launcher_indp_co.paa", \
                "\a3\weapons_f_beta\launchers\titan\data\tubem_indp_co.paa" \
            }; \
            factions[] = {QCLASS(IND), QCLASS(BLU)}; \
        }; \
        class Tan { \
            displayName = "$STR_A3_TEXTURESOURCES_TAN0"; \
            author = "GilleeDoo"; \
            textures[] = { \
                QPATHTOF(data\polaris_tan_ext01_co.paa), \
                QPATHTOF(data\polaris_tan_ext02_co.paa), \
                QPATHTOF(data\polaris_tan_ext03_co.paa), \
                QPATHTOF(data\polaris_tan_adds_co.paa), \
                "\A3\weapons_f_beta\launchers\titan\data\launcher_co.paa", \
                "\A3\weapons_f_beta\launchers\titan\data\tubem_co.paa" \
            }; \
            factions[] = {QCLASS(IND), QCLASS(BLU)}; \
        }; \
        class Green { \
            displayName = "$STR_A3_TEXTURESOURCES_GREEN0"; \
            author = "GilleeDoo"; \
            textures[] = { \
                QPATHTOF(data\polaris_green_ext01_co.paa), \
                QPATHTOF(data\polaris_green_ext02_co.paa), \
                QPATHTOF(data\polaris_green_ext03_co.paa), \
                QPATHTOF(data\polaris_green_adds_co.paa), \
                "\a3\weapons_f_beta\launchers\titan\data\launcher_indp_co.paa", \
                "\a3\weapons_f_beta\launchers\titan\data\tubem_indp_co.paa" \
            }; \
            factions[] = {QCLASS(IND), QCLASS(BLU)}; \
        }; \
    }; \
    class EventHandlers: EventHandlers { \
        init = "if (local (_this select 0)) then { [_this select 0, '', [], true] call BIS_fnc_initVehicle; };"; \
    };

class LSV_01_base_F;
class LSV_01_unarmed_base_F: LSV_01_base_F {
    class EventHandlers;
};

class CLASS(Polaris_Base): LSV_01_unarmed_base_F {
    MACRO_POLARIS_TEXTURES
};

class CLASS(Polaris_I_Black): CLASS(Polaris_Base) {
    MACRO_LANDVEHICLE_CARGO
    dlc = QUOTE(PREFIX);
    scope = 2;
    scopeCurator = 2;
    forceInGarage = 1;
    side = 2;
    faction = QCLASS(IND);
    author = "Kresky";
    displayName = CSTRING(Polaris_Black);
    editorPreview = QPATHTOF(UI\Polaris_Black.jpg);
    crew = QCLASS(Unit_I_Contractor);
    typicalCargo[] = {QCLASS(Unit_I_Engineer)};
    textureList[] = {"Black", 1};
};
class CLASS(Polaris_B_Black): CLASS(Polaris_I_Black) {
    scope = 2;
    forceInGarage = 0;
    side = 1;
    faction = QCLASS(BLU);
    crew = QCLASS(Unit_B_Contractor);
    typicalCargo[] = {QCLASS(Unit_B_Engineer)};
};

class CLASS(Polaris_I_Tan): CLASS(Polaris_I_Black) {
    scope = 2;
    displayName = CSTRING(Polaris_Tan);
    editorPreview = QPATHTOF(UI\Polaris_Tan.jpg);
    textureList[] = {"Tan", 1};
};
class CLASS(Polaris_B_Tan): CLASS(Polaris_I_Tan) {
    scope = 2;
    forceInGarage = 0;
    side = 1;
    faction = QCLASS(BLU);
    crew = QCLASS(Unit_B_Contractor);
    typicalCargo[] = {QCLASS(Unit_B_Engineer)};
};

class CLASS(Polaris_I_Green): CLASS(Polaris_I_Black) {
    scope = 2;
    displayName = CSTRING(Polaris_Green);
    editorPreview = QPATHTOF(UI\Polaris_Green.jpg);
    textureList[] = {"Green", 1};
};
class CLASS(Polaris_B_Green): CLASS(Polaris_I_Green) {
    scope = 2;
    forceInGarage = 0;
    side = 1;
    faction = QCLASS(BLU);
    crew = QCLASS(Unit_B_Contractor);
    typicalCargo[] = {QCLASS(Unit_B_Engineer)};
};

class LSV_01_armed_base_F: LSV_01_base_F {
    class EventHandlers;
};
class CLASS(Polaris_Armed_Base): LSV_01_armed_base_F {
    MACRO_POLARIS_TEXTURES
};

class CLASS(Polaris_I_Armed_Black): CLASS(Polaris_Armed_Base) {
    MACRO_LANDVEHICLE_CARGO
    dlc = QUOTE(PREFIX);
    scope = 2;
    scopeCurator = 2;
    forceInGarage = 1;
    side = 2;
    faction = QCLASS(IND);
    author = "Kresky";
    displayName = CSTRING(Polaris_Armed_Black);
    editorPreview = QPATHTOF(UI\Polaris_Armed_Black.jpg);
    crew = QCLASS(Unit_I_Contractor);
    typicalCargo[] = {QCLASS(Unit_I_Engineer)};
    textureList[] = {"Black", 1};
};
class CLASS(Polaris_B_Armed_Black): CLASS(Polaris_I_Armed_Black) {
    scope = 2;
    forceInGarage = 0;
    side = 1;
    faction = QCLASS(BLU);
    crew = QCLASS(Unit_B_Contractor);
    typicalCargo[] = {QCLASS(Unit_B_Engineer)};
};

class CLASS(Polaris_I_Armed_Tan): CLASS(Polaris_I_Armed_Black) {
    scope = 2;
    displayName = CSTRING(Polaris_Armed_Tan);
    editorPreview = QPATHTOF(UI\Polaris_Armed_Tan.jpg);
    textureList[] = {"Tan", 1};
};
class CLASS(Polaris_B_Armed_Tan): CLASS(Polaris_I_Armed_Tan) {
    scope = 2;
    forceInGarage = 0;
    side = 1;
    faction = QCLASS(BLU);
    crew = QCLASS(Unit_B_Contractor);
    typicalCargo[] = {QCLASS(Unit_B_Engineer)};
};

class CLASS(Polaris_I_Armed_Green): CLASS(Polaris_I_Armed_Black) {
    scope = 2;
    displayName = CSTRING(Polaris_Armed_Green);
    editorPreview = QPATHTOF(UI\Polaris_Armed_Green.jpg);
    textureList[] = {"Green", 1};
};
class CLASS(Polaris_B_Armed_Green): CLASS(Polaris_I_Armed_Green) {
    scope = 2;
    forceInGarage = 0;
    side = 1;
    faction = QCLASS(BLU);
    crew = QCLASS(Unit_B_Contractor);
    typicalCargo[] = {QCLASS(Unit_B_Engineer)};
};

class LSV_01_AT_base_F: LSV_01_base_F {
    class EventHandlers;
};
class CLASS(Polaris_AT_Base): LSV_01_AT_base_F {
    MACRO_POLARIS_TEXTURES
};
class CLASS(Polaris_I_AT_Black): CLASS(Polaris_AT_Base) {
    MACRO_LANDVEHICLE_CARGO
    dlc = QUOTE(PREFIX);
    scope = 2;
    scopeCurator = 2;
    forceInGarage = 1;
    side = 2;
    faction = QCLASS(IND);
    author = "Kresky";
    displayName = CSTRING(Polaris_AT_Black);
    editorPreview = QPATHTOF(UI\Polaris_AT_Black.jpg);
    crew = QCLASS(Unit_I_Contractor);
    typicalCargo[] = {QCLASS(Unit_I_Engineer)};
    textureList[] = {"Black", 1};
};
class CLASS(Polaris_B_AT_Black): CLASS(Polaris_I_AT_Black) {
    scope = 2;
    forceInGarage = 0;
    side = 1;
    faction = QCLASS(BLU);
    crew = QCLASS(Unit_B_Contractor);
    typicalCargo[] = {QCLASS(Unit_B_Engineer)};
};

class CLASS(Polaris_I_AT_Tan): CLASS(Polaris_I_AT_Black) {
    scope = 2;
    displayName = CSTRING(Polaris_AT_Tan);
    editorPreview = QPATHTOF(UI\Polaris_AT_Tan.jpg);
    textureList[] = {"Tan", 1};
};
class CLASS(Polaris_B_AT_Tan): CLASS(Polaris_I_AT_Tan) {
    scope = 2;
    forceInGarage = 0;
    side = 1;
    faction = QCLASS(BLU);
    crew = QCLASS(Unit_B_Contractor);
    typicalCargo[] = {QCLASS(Unit_B_Engineer)};
};

class CLASS(Polaris_I_AT_Green): CLASS(Polaris_I_AT_Black) {
    scope = 2;
    displayName = CSTRING(Polaris_AT_Green);
    editorPreview = QPATHTOF(UI\Polaris_AT_Green.jpg);
    textureList[] = {"Green", 1};
};
class CLASS(Polaris_B_AT_Green): CLASS(Polaris_I_AT_Green) {
    scope = 2;
    forceInGarage = 0;
    side = 1;
    faction = QCLASS(BLU);
    crew = QCLASS(Unit_B_Contractor);
    typicalCargo[] = {QCLASS(Unit_B_Engineer)};
};
