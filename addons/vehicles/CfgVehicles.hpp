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
        class textureSources {
            class black {
                displayName = "Black";
                author = "BadHabitz, Jonpas";
                textures[] = {
                    QPATHTOF(data\offroad_black_ext_co.paa),
                    QPATHTOF(data\offroad_black_ext_co.paa)
                };
                factions[] = {"BLU_F", "OPF_F", "IND_F", "CIV_F"};
            };

            class theseusblack {
                displayName = "Theseus Black";
                author = "Tyrone";
                textures[] = {
                    QPATHTOF(data\offroad_theseus_black_ext_co.paa),
                    QPATHTOF(data\offroad_theseus_black_ext_co.paa)
                };
                factions[] = {"BLU_F", "IND_F"};
            };
        };

        textureList[] = {
            "black", 0.5,
            "theseusblack", 0.5
        };

        animationList[] = {
            "HideBackpacks", 0.5,
            "HideBumper2", 0.5,
            "HideConstruction", 0.5,
            "HideDoor3", 0.5
        };

        class EventHandlers: EventHandlers {
            init = "if (local (_this select 0)) then {[(_this select 0), """", [], true] call bis_fnc_initVehicle;};";
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
        class textureSources {
            class black {
                displayName = "Black";
                author = "BadHabitz, Jonpas";
                textures[] = {
                    QPATHTOF(data\offroad_black_ext_co.paa),
                    QPATHTOF(data\offroad_black_ext_co.paa)
                };
                factions[] = {};
            };

            class theseusblack {
                displayName = "Theseus Black";
                author = "Tyrone";
                textures[] = {
                    QPATHTOF(data\offroad_theseus_black_ext_co.paa),
                    QPATHTOF(data\offroad_theseus_black_ext_co.paa)
                };
                factions[] = {};
            };
        };

        textureList[] = {
            "black", 0.5,
            "theseusblack", 0.5
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
            init = "if (local (_this select 0)) then {[(_this select 0), """", [], true] call bis_fnc_initVehicle;};";
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
    class CLASS(Polaris_I_Black): LSV_01_unarmed_base_F {
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
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\polaris_black_ext01_co.paa),
            QPATHTOF(data\polaris_black_ext02_co.paa),
            QPATHTOF(data\polaris_black_ext03_co.paa),
            QPATHTOF(data\polaris_black_adds_co.paa)
        };

        class EventHandlers: EventHandlers {
            init = "if (local (_this select 0)) then { [_this select 0, [], []] call BIS_fnc_initVehicle; };";
        };
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
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\polaris_tan_ext01_co.paa),
            QPATHTOF(data\polaris_tan_ext02_co.paa),
            QPATHTOF(data\polaris_tan_ext03_co.paa),
            QPATHTOF(data\polaris_tan_adds_co.paa)
        };
    };
    class CLASS(Polaris_B_Tan): CLASS(Polaris_I_Tan) {
        scope = 2;
        forceInGarage = 0;
        side = 1;
        faction = QCLASS(BLU);
        crew = QCLASS(Unit_B_Contractor);
        typicalCargo[] = {QCLASS(Unit_B_Engineer)};
    };

    class B_T_LSV_01_unarmed_F;
    class CLASS(Polaris_I_Green): B_T_LSV_01_unarmed_F {
        MACRO_LANDVEHICLE_CARGO
        dlc = QUOTE(PREFIX);
        scope = 2;
        forceInGarage = 1;
        side = 2;
        faction = QCLASS(IND);
        author = "Kresky";
        displayName = CSTRING(Polaris_Green);
        editorPreview = QPATHTOF(UI\Polaris_Green.jpg);
        crew = QCLASS(Unit_I_Contractor);
        typicalCargo[] = {QCLASS(Unit_I_Engineer)};
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
    class CLASS(Polaris_I_Armed_Black): LSV_01_armed_base_F {
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
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\polaris_black_ext01_co.paa),
            QPATHTOF(data\polaris_black_ext02_co.paa),
            QPATHTOF(data\polaris_black_ext03_co.paa),
            QPATHTOF(data\polaris_black_adds_co.paa)
        };

        class EventHandlers: EventHandlers {
            init = "if (local (_this select 0)) then { [_this select 0, [], []] call BIS_fnc_initVehicle; };";
        };
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
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\polaris_tan_ext01_co.paa),
            QPATHTOF(data\polaris_tan_ext02_co.paa),
            QPATHTOF(data\polaris_tan_ext03_co.paa),
            QPATHTOF(data\polaris_tan_adds_co.paa)
        };
    };
    class CLASS(Polaris_B_Armed_Tan): CLASS(Polaris_I_Armed_Tan) {
        scope = 2;
        forceInGarage = 0;
        side = 1;
        faction = QCLASS(BLU);
        crew = QCLASS(Unit_B_Contractor);
        typicalCargo[] = {QCLASS(Unit_B_Engineer)};
    };

    class B_T_LSV_01_armed_F;
    class CLASS(Polaris_I_Armed_Green): B_T_LSV_01_armed_F {
        MACRO_LANDVEHICLE_CARGO
        dlc = QUOTE(PREFIX);
        scope = 2;
        forceInGarage = 1;
        side = 2;
        faction = QCLASS(IND);
        author = "Kresky";
        displayName = CSTRING(Polaris_Armed_Green);
        editorPreview = QPATHTOF(UI\Polaris_Armed_Green.jpg);
        crew = QCLASS(Unit_I_Contractor);
        typicalCargo[] = {QCLASS(Unit_I_Engineer)};
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
    class CLASS(Polaris_I_AT_Black): LSV_01_AT_base_F {
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
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\polaris_black_ext01_co.paa),
            QPATHTOF(data\polaris_black_ext02_co.paa),
            QPATHTOF(data\polaris_black_ext03_co.paa),
            QPATHTOF(data\polaris_black_adds_co.paa),
            QPATHTOF(data\polaris_black_atlauncher_co.paa),
            QPATHTOF(data\polaris_black_attube_co.paa)
        };

        class EventHandlers: EventHandlers {
            init = "if (local (_this select 0)) then { [_this select 0, [], []] call BIS_fnc_initVehicle; };";
        };
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
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\polaris_tan_ext01_co.paa),
            QPATHTOF(data\polaris_tan_ext02_co.paa),
            QPATHTOF(data\polaris_tan_ext03_co.paa),
            QPATHTOF(data\polaris_tan_adds_co.paa),
            QPATHTOF(data\polaris_tan_atlauncher_co.paa),
            QPATHTOF(data\polaris_tan_attube_co.paa)
        };
    };
    class CLASS(Polaris_B_AT_Tan): CLASS(Polaris_I_AT_Tan) {
        scope = 2;
        forceInGarage = 0;
        side = 1;
        faction = QCLASS(BLU);
        crew = QCLASS(Unit_B_Contractor);
        typicalCargo[] = {QCLASS(Unit_B_Engineer)};
    };

    class B_T_LSV_01_AT_F;
    class CLASS(Polaris_I_AT_Green): B_T_LSV_01_AT_F {
        MACRO_LANDVEHICLE_CARGO
        dlc = QUOTE(PREFIX);
        scope = 2;
        forceInGarage = 1;
        side = 2;
        faction = QCLASS(IND);
        author = "Kresky";
        displayName = CSTRING(Polaris_AT_Green);
        editorPreview = QPATHTOF(UI\Polaris_AT_Green.jpg);
        crew = QCLASS(Unit_I_Contractor);
        typicalCargo[] = {QCLASS(Unit_I_Engineer)};
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
