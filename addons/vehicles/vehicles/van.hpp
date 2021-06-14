class Van_02_base_F;
class Van_02_vehicle_base_F: Van_02_base_F {
    class EventHandlers;
};

class CLASS(Van_Cargo_Base): Van_02_vehicle_base_F {
    class TextureSources {
        class Black {
            displayName = "$STR_A3_TEXTURESOURCES_BLACK0";
            author = "Bohemia Interactive";
            textures[] = {
                "\a3\soft_f_orange\van_02\data\van_body_black_co.paa",
                "\a3\soft_f_orange\van_02\data\van_wheel_co.paa",
                "\a3\soft_f_orange\van_02\data\van_glass_utility_ca.paa",
                "\a3\soft_F_Orange\van_02\data\van_body_black_co.paa"
            };
            factions[] = {QCLASS(IND), QCLASS(BLU)};
        };
        class TheseusBlack {
            displayName = "Theseus Black";
            author = "Tyrone";
            textures[] = {
                QPATHTOF(data\van_body_theseus_black_co.paa),
                "\a3\soft_f_orange\van_02\data\van_wheel_co.paa",
                "\a3\soft_f_orange\van_02\data\van_glass_utility_ca.paa",
                "\a3\soft_F_Orange\van_02\data\van_body_black_co.paa"
            };
            factions[] = {QCLASS(IND), QCLASS(BLU)};
        };
    };

    animationList[] = {
        "Enable_Cargo", 1,
        "Door_1_source", 0,
        "Door_2_source", 0,
        "Door_3_source", 0,
        "Door_4_source", 0,
        "Hide_Door_1_source", 0,
        "Hide_Door_2_source", 0,
        "Hide_Door_3_source", 0,
        "Hide_Door_4_source", 0,
        "lights_em_hide", 0,
        "ladder_hide", 1,
        "spare_tyre_holder_hide", 1,
        "spare_tyre_hide", 1,
        "reflective_tape_hide", 1,
        "roof_rack_hide", 1,
        "LED_lights_hide", 1,
        "sidesteps_hide", 1,
        "rearsteps_hide", 1,
        "side_protective_frame_hide", 0,
        "front_protective_frame_hide", 0,
        "beacon_front_hide", 1,
        "beacon_rear_hide", 1
    };

    class EventHandlers: EventHandlers {
        init = "if (local (_this select 0)) then { [_this select 0, '', [], true] call BIS_fnc_initVehicle; };";
    };
};

class CLASS(Van_Cargo_I_Black): CLASS(Van_Cargo_Base) {
    dlc = QUOTE(PREFIX);
    scope = 2;
    forceInGarage = 1;
    side = 2;
    faction = QCLASS(IND);
    author = "Tyrone";
    displayName = CSTRING(Van_Cargo_Black);
    editorPreview = QPATHTOF(UI\Van_Cargo_Black.jpg);
    crew = QCLASS(Unit_I_Contractor);
    typicalCargo[] = {QCLASS(Unit_I_Engineer)};

    textureList[] = {
        "Black", 0.5,
        "TheseusBlack", 0.5
    };
};
class CLASS(Van_Cargo_B_Black): CLASS(Van_Cargo_I_Black) {
    scope = 2;
    forceInGarage = 0;
    side = 1;
    faction = QCLASS(BLU);
    crew = QCLASS(Unit_B_Contractor);
    typicalCargo[] = {QCLASS(Unit_B_Engineer)};
};

class Van_02_base_F;
class Van_02_transport_base_F: Van_02_base_F {
    class EventHandlers;
};

class CLASS(Van_Transport_Base): Van_02_transport_base_F {
    class TextureSources {
        class Black {
            displayName = "$STR_A3_TEXTURESOURCES_BLACK0";
            author = "Bohemia Interactive";
            textures[] = {
                "\a3\soft_f_orange\van_02\data\van_body_black_co.paa",
                "\a3\soft_f_orange\van_02\data\van_wheel_transport_co.paa",
                "\a3\soft_f_orange\van_02\data\van_glass_transport_CA.paa",
                "\a3\soft_F_Orange\van_02\data\van_body_black_co.paa"
            };
            factions[] = {QCLASS(IND), QCLASS(BLU)};
        };
        class TheseusBlack {
            displayName = "Theseus Black";
            author = "Tyrone";
            textures[] = {
                QPATHTOF(data\van_body_theseus_black_co.paa),
                "\a3\soft_f_orange\van_02\data\van_wheel_transport_co.paa",
                "\a3\soft_f_orange\van_02\data\van_glass_transport_CA.paa",
                "\a3\soft_F_Orange\van_02\data\van_body_black_co.paa"
            };
            factions[] = {QCLASS(IND), QCLASS(BLU)};
        };
    };

    animationList[] = {
        "Door_1_source", 0,
        "Door_2_source", 0,
        "Door_3_source", 0,
        "Door_4_source", 0,
        "Hide_Door_1_source", 0,
        "Hide_Door_2_source", 0,
        "Hide_Door_3_source", 0,
        "Hide_Door_4_source", 0,
        "lights_em_hide", 0,
        "ladder_hide", 1,
        "spare_tyre_holder_hide", 1,
        "spare_tyre_hide", 1,
        "reflective_tape_hide", 1,
        "roof_rack_hide", 1,
        "LED_lights_hide", 1,
        "sidesteps_hide", 1,
        "rearsteps_hide", 1,
        "side_protective_frame_hide", 0,
        "front_protective_frame_hide", 0,
        "beacon_front_hide", 1,
        "beacon_rear_hide", 1
    };

    class EventHandlers: EventHandlers {
        init = "if (local (_this select 0)) then { [_this select 0, '', [], true] call BIS_fnc_initVehicle; };";
    };
};

class CLASS(Van_Transport_I_Black): CLASS(Van_Transport_Base) {
    dlc = QUOTE(PREFIX);
    scope = 2;
    forceInGarage = 1;
    side = 2;
    faction = QCLASS(IND);
    author = "Tyrone";
    displayName = CSTRING(Van_Transport_Black);
    editorPreview = QPATHTOF(UI\Van_Transport_Black.jpg);
    crew = QCLASS(Unit_I_Contractor);
    typicalCargo[] = {QCLASS(Unit_I_Engineer)};

    textureList[] = {
        "Black", 0.5,
        "TheseusBlack", 0.5
    };
};
class CLASS(Van_Transport_B_Black): CLASS(Van_Transport_I_Black) {
    scope = 2;
    forceInGarage = 0;
    side = 1;
    faction = QCLASS(BLU);
    crew = QCLASS(Unit_B_Contractor);
    typicalCargo[] = {QCLASS(Unit_B_Engineer)};
};
