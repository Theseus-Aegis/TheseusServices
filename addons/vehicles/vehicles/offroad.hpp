class Offroad_01_base_F;
class Offroad_01_unarmed_base_F: Offroad_01_base_F {
    class EventHandlers;
};
class CLASS(Offroad_Base): Offroad_01_unarmed_base_F {
    class TextureSources {
        class Black {
            displayName = "$STR_A3_TEXTURESOURCES_BLACK0";
            author = "BadHabitz, Jonpas";
            textures[] = {
                QPATHTOF(data\offroad_black_ext_co.paa),
                QPATHTOF(data\offroad_black_ext_co.paa)
            };
            factions[] = {QCLASS(IND), QCLASS(BLU)};
        };

        class TheseusBlack {
            displayName = ECSTRING(main,Theseus_Black);
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

    class PlateInfos {
        name = "spz";
        color[] = {0, 0, 0, 0.75};
        plateFont = "RobotoCondensedBold";
        plateFormat = "TACS - ###"; // Will show as TACS - 001 in game.
        plateLetters = "ABCDEFHIKLMOPRSTVXYZ";
    };

    class EventHandlers: EventHandlers {
        init = "if (local (_this select 0)) then { [_this select 0, '', [], true] call BIS_fnc_initVehicle; };";
        killed = "if (local (_this select 0)) then { _this select 0 setPlateNumber '';};";
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
            displayName = "$STR_A3_TEXTURESOURCES_BLACK0";
            author = "BadHabitz, Jonpas";
            textures[] = {
                QPATHTOF(data\offroad_black_ext_co.paa),
                QPATHTOF(data\offroad_black_ext_co.paa)
            };
            factions[] = {QCLASS(IND), QCLASS(BLU)};
        };

        class TheseusBlack {
            displayName = ECSTRING(main,Theseus_Black);
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

    class PlateInfos {
        name = "spz";
        color[] = {0, 0, 0, 0.75};
        plateFont = "RobotoCondensedBold";
        plateFormat = "TACS - ###"; // Will show as TACS - 001 in game.
        plateLetters = "ABCDEFHIKLMOPRSTVXYZ";
    };

    class EventHandlers: EventHandlers {
        init = "if (local (_this select 0)) then { [_this select 0, '', [], true] call BIS_fnc_initVehicle; };";
        killed = "if (local (_this select 0)) then { _this select 0 setPlateNumber '';};";
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
