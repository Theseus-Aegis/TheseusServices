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
};
