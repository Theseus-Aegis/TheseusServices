class CfgVehicles {
    class B_Heli_Light_01_F;
    class CLASS(Heli_I_MH6_Blue): B_Heli_Light_01_F {
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
    class CLASS(Offroad_I_Black): Offroad_01_unarmed_base_F {
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
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\offroad_black_ext_co.paa),
            QPATHTOF(data\offroad_black_ext_co.paa)
        };
        transportMaxBackpacks = 6;

        animationList[] = {
            "HideBackpacks", 0.5,
            "HideBumper2", 0.5,
            "HideConstruction", 0.5,
            "HideDoor3", 0.5
        };

        class EventHandlers: EventHandlers {
            init = "if (local (_this select 0)) then { [_this select 0, [], []] call BIS_fnc_initVehicle; };";
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
    class CLASS(Offroad_I_Armed_Black): Offroad_01_armed_base_F {
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
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\offroad_black_ext_co.paa),
            QPATHTOF(data\offroad_black_ext_co.paa)
        };
        transportMaxBackpacks = 6;

        animationList[] = {
            "HideBackpacks", 0.5,
            "HideBumper2", 0.5,
            "HideConstruction", 0.5,
            "HideDoor3", 0.5
        };

        class EventHandlers: EventHandlers {
            init = "if (local (_this select 0)) then { [_this select 0, [], []] call BIS_fnc_initVehicle; };";
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

    #define MACRO_CLEAR_VEHICLE_CARGO \
        class TransportBackpacks {}; \
        class TransportItems {}; \
        class TransportMagazines {}; \
        class TransportWeapons {};

    class LSV_01_base_F;
    class LSV_01_unarmed_base_F: LSV_01_base_F {
        class EventHandlers;
    };
    class CLASS(Polaris_I_Black): LSV_01_unarmed_base_F {
        MACRO_CLEAR_VEHICLE_CARGO
        dlc = QUOTE(PREFIX);
        scope = 2;
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

    class LSV_01_armed_base_F: LSV_01_base_F {
        class EventHandlers;
    };
    class CLASS(Polaris_I_Armed_Black): LSV_01_armed_base_F {
        MACRO_CLEAR_VEHICLE_CARGO
        dlc = QUOTE(PREFIX);
        scope = 2;
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

    class LSV_01_AT_base_F: LSV_01_base_F {
        class EventHandlers;
    };
    class CLASS(Polaris_I_AT_Black): LSV_01_AT_base_F {
        MACRO_CLEAR_VEHICLE_CARGO
        dlc = QUOTE(PREFIX);
        scope = 2;
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
};
