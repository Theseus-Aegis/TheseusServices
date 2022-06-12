// Armed
class Heli_light_03_dynamicLoadout_base_F;
class I_Heli_light_03_dynamicLoadout_F: Heli_light_03_dynamicLoadout_base_F {
    class EventHandlers;
};

class CLASS(Heli_Wildcat_Base): I_Heli_light_03_dynamicLoadout_F {
    scope = 0;
    class TextureSources {
        class TheseusBlack {
            displayName = ECSTRING(Main,Theseus_Black);
            author = "GilleeDoo";
            textures[] = {
                QPATHTOF(data\heli_wildcat_theseus_co.paa),
                "a3\weapons_f\ammoboxes\data\ammobox_co.paa",
                "a3\weapons_f\ammoboxes\data\ammobox_signs_ca.paa"
            };
            factions[] = {QCLASS(IND), QCLASS(BLU)};
        };
        class Black {
            displayName = "$STR_A3_TEXTURESOURCES_BLACK0";
            author = "GilleeDoo";
            textures[] = {
                QPATHTOF(data\heli_wildcat_black_co.paa),
                "a3\weapons_f\ammoboxes\data\ammobox_co.paa",
                "a3\weapons_f\ammoboxes\data\ammobox_signs_ca.paa"
            };
            factions[] = {QCLASS(IND), QCLASS(BLU)};
        };
    };

    class EventHandlers: EventHandlers {
        init = "if (local (_this select 0)) then { [_this select 0, '', [], true] call BIS_fnc_initVehicle; };";
    };
};

class CLASS(Heli_I_Wildcat_Theseus): CLASS(Heli_Wildcat_Base) {
    MACRO_AIRVEHICLE_CARGO
    dlc = QUOTE(PREFIX);
    scope = 2;
    forceInGarage = 1;
    side = 2;
    faction = QCLASS(IND);
    author = "GilleeDoo";
    displayName = CSTRING(Heli_Wildcat_Theseus);
    editorPreview = QPATHTOF(UI\Heli_Wildcat_Theseus.jpg);
    crew = QCLASS(Unit_I_PilotHeli);
    typicalCargo[] = {QCLASS(Unit_I_Engineer)};

    textureList[] = {
        "TheseusBlack", 1,
        "Black", 0
    };
};

class CLASS(Heli_B_Wildcat_Theseus): CLASS(Heli_I_Wildcat_Theseus) {
    scope = 2;
    forceInGarage = 0;
    side = 1;
    faction = QCLASS(BLU);
    crew = QCLASS(Unit_B_PilotHeli);
    typicalCargo[] = {QCLASS(Unit_B_Engineer)};
};

// Unarmed
class Heli_light_03_unarmed_base_F;
class I_Heli_light_03_unarmed_F: Heli_light_03_unarmed_base_F {
    class EventHandlers;
};

class CLASS(Heli_I_Wildcat_Unarmed_Base): I_Heli_light_03_unarmed_F {
    scope = 0;
    class TextureSources {
        class TheseusBlack {
            displayName = ECSTRING(Main,Theseus_Black);
            author = "GilleeDoo";
            textures[] = {
                QPATHTOF(data\heli_wildcat_theseus_co.paa)
            };
            factions[] = {QCLASS(IND), QCLASS(BLU)};
        };
        class Black {
            displayName = "$STR_A3_TEXTURESOURCES_BLACK0";
            author = "GilleeDoo";
            textures[] = {
                QPATHTOF(data\heli_wildcat_black_co.paa)
            };
            factions[] = {QCLASS(IND), QCLASS(BLU)};
        };
    };

    class EventHandlers: EventHandlers {
        init = "if (local (_this select 0)) then { [_this select 0, '', [], true] call BIS_fnc_initVehicle; };";
    };
};

class CLASS(Heli_I_Wildcat_Theseus_Unarmed): CLASS(Heli_I_Wildcat_Unarmed_Base) {
    MACRO_AIRVEHICLE_CARGO
    dlc = QUOTE(PREFIX);
    scope = 2;
    forceInGarage = 1;
    side = 2;
    faction = QCLASS(IND);
    author = "GilleeDoo";
    displayName = CSTRING(Heli_Wildcat_Theseus_Unarmed);
    editorPreview = QPATHTOF(UI\Heli_Wildcat_Theseus_Unarmed.jpg);
    crew = QCLASS(Unit_I_PilotHeli);
    typicalCargo[] = {QCLASS(Unit_I_Engineer)};

    textureList[]= {
        "TheseusBlack", 1,
        "Black", 0
    };
};

class CLASS(Heli_B_Wildcat_Theseus_Unarmed): CLASS(Heli_I_Wildcat_Theseus_Unarmed) {
    scope = 2;
    forceInGarage = 0;
    side = 1;
    faction = QCLASS(BLU);
    crew = QCLASS(Unit_B_PilotHeli);
    typicalCargo[] = {QCLASS(Unit_B_Engineer)};
};
