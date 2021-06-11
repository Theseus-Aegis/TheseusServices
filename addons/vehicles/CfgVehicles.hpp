class CfgVehicles {
    class B_Heli_Light_01_F;
    class CLASS(Heli_I_MH6_Blue): B_Heli_Light_01_F {
        MACRO_AIRVEHICLE_CARGO
        dlc = QUOTE(PREFIX);
        scope = 2;
        forceInGarage = 1;
        side = 2;
        faction = QCLASS(IND);
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Heli_MH6_Blue);
        editorPreview = QPATHTOF(UI\Heli_MH6_Blue.jpg);
        crew = QCLASS(Unit_I_PilotHeli);
        typicalCargo[] = {QCLASS(Unit_I_Engineer)};
        hiddenSelectionsTextures[] = {QPATHTOF(data\heli_mh6_blue_ext_co.paa)};
    };
    class CLASS(Heli_B_MH6_Blue): CLASS(Heli_I_MH6_Blue) {
        scope = 2;
        forceInGarage = 0;
        side = 1;
        faction = QCLASS(BLU);
        crew = QCLASS(Unit_B_PilotHeli);
        typicalCargo[] = {QCLASS(Unit_B_Engineer)};
    };

    class Offroad_01_base_F;
    class Offroad_01_unarmed_base_F: Offroad_01_base_F {
        class EventHandlers;
    };
    class CLASS(Offroad_Base): Offroad_01_unarmed_base_F {
        class TextureSources {
            class Black {
                displayName = "STR_A3_TEXTURESOURCES_BLACK0";
                author = "BadHabitz, Jonpas";
                textures[] = {
                    QPATHTOF(data\offroad_black_ext_co.paa),
                    QPATHTOF(data\offroad_black_ext_co.paa)
                };
                factions[] = {QCLASS(IND), QCLASS(BLU)};
            };

            class TheseusBlack {
                displayName = "Theseus Black";
                author = "Tyrone";
                textures[] = {
                    QPATHTOF(data\offroad_theseus_black_ext_co.paa),
                    QPATHTOF(data\offroad_theseus_black_ext_co.paa)
                };
                factions[] = {QCLASS(IND), QCLASS(BLU)};
            };
        };

        animationList[] = {
            "HideBackpacks", 0.5,
            "HideBumper2", 0.5,
            "HideConstruction", 0.5,
            "HideDoor3", 0.5
        };

        class EventHandlers: EventHandlers {
            init = "if (local (_this select 0)) then { [_this select 0, '', [], true] call BIS_fnc_initVehicle; };";
        };
    };
    class CLASS(Offroad_I_Black): CLASS(Offroad_Base) {
        dlc = QUOTE(PREFIX);
        scope = 2;
        forceInGarage = 1;
        side = 2;
        faction = QCLASS(IND);
        author = "BadHabitz, Jonpas";
        displayName = CSTRING(Offroad_Black);
        editorPreview = QPATHTOF(UI\Offroad_Black.jpg);
        crew = QCLASS(Unit_I_Contractor);
        typicalCargo[] = {QCLASS(Unit_I_Engineer)};
        transportMaxBackpacks = 6;

        textureList[] = {
            "Black", 0.5,
            "TheseusBlack", 0.5
        };
    };
    class CLASS(Offroad_B_Black): CLASS(Offroad_I_Black) {
        scope = 2;
        forceInGarage = 0;
        side = 1;
        faction = QCLASS(BLU);
        crew = QCLASS(Unit_B_Contractor);
        typicalCargo[] = {QCLASS(Unit_B_Engineer)};
    };

    class Offroad_01_military_base_F;
    class Offroad_01_armed_base_F: Offroad_01_military_base_F {
        class EventHandlers;
    };
    class CLASS(Offroad_Armed_Base): Offroad_01_armed_base_F {
        class TextureSources {
            class Black {
                displayName = "STR_A3_TEXTURESOURCES_BLACK0";
                author = "BadHabitz, Jonpas";
                textures[] = {
                    QPATHTOF(data\offroad_black_ext_co.paa),
                    QPATHTOF(data\offroad_black_ext_co.paa)
                };
                factions[] = {QCLASS(IND), QCLASS(BLU)};
            };

            class TheseusBlack {
                displayName = "Theseus Black";
                author = "Tyrone";
                textures[] = {
                    QPATHTOF(data\offroad_theseus_black_ext_co.paa),
                    QPATHTOF(data\offroad_theseus_black_ext_co.paa)
                };
                factions[] = {QCLASS(IND), QCLASS(BLU)};
            };
        };

        animationList[] = {
            "HideBackpacks", 0.5,
            "HideBumper2", 0.5,
            "HideConstruction", 0.5,
            "HideDoor3", 0.5,
            "Hide_Rail", 0.5,
            "Hide_Shield", 0.5
        };

        class EventHandlers: EventHandlers {
            init = "if (local (_this select 0)) then { [_this select 0, '', [], true] call BIS_fnc_initVehicle; };";
        };
    };

    class CLASS(Offroad_I_Armed_Black): CLASS(Offroad_Armed_Base) {
        dlc = QUOTE(PREFIX);
        scope = 2;
        forceInGarage = 1;
        side = 2;
        faction = QCLASS(IND);
        author = "BadHabitz, Jonpas";
        displayName = CSTRING(Offroad_Armed_Black);
        editorPreview = QPATHTOF(UI\Offroad_Armed_Black.jpg);
        crew = QCLASS(Unit_I_Contractor);
        typicalCargo[] = {QCLASS(Unit_I_Engineer)};
        transportMaxBackpacks = 6;

        textureList[] = {
            "Black", 0.5,
            "TheseusBlack", 0.5
        };
    };
    class CLASS(Offroad_B_Armed_Black): CLASS(Offroad_I_Armed_Black) {
        scope = 2;
        forceInGarage = 0;
        side = 1;
        faction = QCLASS(BLU);
        crew = QCLASS(Unit_B_Contractor);
        typicalCargo[] = {QCLASS(Unit_B_Engineer)};
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
};
