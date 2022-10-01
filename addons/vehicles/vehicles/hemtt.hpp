// Transport HEMTT
class Truck_01_base_F;
class B_Truck_01_transport_F : Truck_01_base_F {
    class EventHandlers;
};

class CLASS(HEMTT_Base): B_Truck_01_transport_F {
    scope = 0;
    class TextureSources {
        class Theseus_Black {
            displayName = "Theseus";
            author = "GilleeDoo";
            textures[] = {
                QPATHTOF(data\truck_01_ext_01_theseus_co.paa),
                QPATHTOF(data\truck_01_ext_02_theseus_co.paa),
                "\a3\soft_f_beta\truck_01\data\truck_01_cargo_co.paa",
                "\a3\soft_f_beta\truck_01\data\truck_01_cover_co.paa"
            };
            factions[] = {QCLASS(IND), QCLASS(BLU)};
        };
    };

    class EventHandlers: EventHandlers {
        init = "if (local (_this select 0)) then { [_this select 0, '', [], true] call BIS_fnc_initVehicle; };";
    };
};

class CLASS(HEMTT_I_Transport): CLASS(HEMTT_Base) {
    dlc = QUOTE(PREFIX);
    scope = 2;
    forceInGarage = 1;
    side = 2;
    faction = QCLASS(IND);
    author = "Mike";
    displayName = CSTRING(Hemtt_Transport_Theseus);
    editorPreview = QPATHTOF(UI\HEMTT_Transport.jpg);
    crew = QCLASS(Unit_I_Contractor);
    typicalCargo[] = {QCLASS(Unit_I_Engineer)};
    transportMaxBackpacks = 6;

    textureList[] = {
        "Theseus_Black", 1
    };
};
class CLASS(HEMTT_B_Transport): CLASS(HEMTT_I_Transport) {
    scope = 2;
    forceInGarage = 0;
    side = 1;
    faction = QCLASS(BLU);
    crew = QCLASS(Unit_B_Contractor);
    typicalCargo[] = {QCLASS(Unit_B_Engineer)};
};

// Repair HEMTT
class B_Truck_01_mover_F;
class B_Truck_01_Repair_F: B_Truck_01_mover_F {
    class EventHandlers;
};

class CLASS(HEMTT_Repair_Base): B_Truck_01_Repair_F {
    scope = 0;
    class TextureSources {
        class Theseus_Black {
            displayName = "Theseus";
            author = "GilleeDoo";
            textures[] = {
                QPATHTOF(data\truck_01_ext_01_theseus_co.paa),
                QPATHTOF(data\truck_01_ext_02_theseus_co.paa),
                QPATHTOF(data\truck_01_ammo_theseus_co.paa),
                "\a3\structures_f\data\metal\containers\containers_02_set_co.paa"
            };
            factions[] = {QCLASS(IND), QCLASS(BLU)};
        };
    };

    class EventHandlers: EventHandlers {
        init = "if (local (_this select 0)) then { [_this select 0, '', [], true] call BIS_fnc_initVehicle; };";
    };
};

class CLASS(HEMTT_I_Repair): CLASS(HEMTT_Repair_Base) {
    dlc = QUOTE(PREFIX);
    scope = 2;
    forceInGarage = 1;
    side = 2;
    faction = QCLASS(IND);
    author = "Mike";
    displayName = CSTRING(Hemtt_Repair_Theseus);
    editorPreview = QPATHTOF(UI\HEMTT_Repair.jpg);
    crew = QCLASS(Unit_I_Contractor);
    typicalCargo[] = {QCLASS(Unit_I_Engineer)};
    transportMaxBackpacks = 6;

    textureList[] = {
        "Theseus_Black", 1
    };
};
class CLASS(HEMTT_B_Repair): CLASS(HEMTT_I_Repair) {
    scope = 2;
    forceInGarage = 0;
    side = 1;
    faction = QCLASS(BLU);
    crew = QCLASS(Unit_B_Contractor);
    typicalCargo[] = {QCLASS(Unit_B_Engineer)};
};

// Hemtt Ammo
class B_Truck_01_ammo_F: B_Truck_01_mover_F {
    class EventHandlers;
};

class CLASS(HEMTT_Ammo_Base): B_Truck_01_ammo_F {
    scope = 0;
    class TextureSources {
        class Theseus_Black {
            displayName = "Theseus";
            author = "GilleeDoo";
            textures[] = {
                QPATHTOF(data\truck_01_ext_01_theseus_co.paa),
                QPATHTOF(data\truck_01_ext_02_theseus_co.paa),
                QPATHTOF(data\truck_01_ammo_theseus_co.paa),
                "\a3\structures_f\data\metal\containers\containers_02_set_co.paa"
            };
            factions[] = {QCLASS(IND), QCLASS(BLU)};
        };
    };

    class EventHandlers: EventHandlers {
        init = "if (local (_this select 0)) then { [_this select 0, '', [], true] call BIS_fnc_initVehicle; };";
    };
};

class CLASS(HEMTT_I_Ammo): CLASS(HEMTT_Ammo_Base) {
    dlc = QUOTE(PREFIX);
    scope = 2;
    forceInGarage = 1;
    side = 2;
    faction = QCLASS(IND);
    author = "Mike";
    displayName = CSTRING(Hemtt_Ammo_Theseus);
    editorPreview = QPATHTOF(UI\HEMTT_Ammo.jpg);
    crew = QCLASS(Unit_I_Contractor);
    typicalCargo[] = {QCLASS(Unit_I_Engineer)};
    transportMaxBackpacks = 6;

    textureList[] = {
        "Theseus_Black", 1
    };
};
class CLASS(HEMTT_B_Ammo): CLASS(HEMTT_I_Ammo) {
    scope = 2;
    forceInGarage = 0;
    side = 1;
    faction = QCLASS(BLU);
    crew = QCLASS(Unit_B_Contractor);
    typicalCargo[] = {QCLASS(Unit_B_Engineer)};
};

// Hemtt Fuel
class B_Truck_01_fuel_F: B_Truck_01_mover_F {
    class EventHandlers;
};

class CLASS(HEMTT_Fuel_Base): B_Truck_01_fuel_F {
    scope = 0;
    class TextureSources {
        class Theseus_Black {
            displayName = "Theseus";
            author = "GilleeDoo";
            textures[] = {
                QPATHTOF(data\truck_01_ext_01_theseus_co.paa),
                QPATHTOF(data\truck_01_ext_02_theseus_co.paa),
                QPATHTOF(data\truck_01_fuel_theseus_co.paa)
            };
            factions[] = {QCLASS(IND), QCLASS(BLU)};
        };
    };

    class EventHandlers: EventHandlers {
        init = "if (local (_this select 0)) then { [_this select 0, '', [], true] call BIS_fnc_initVehicle; };";
    };
};

class CLASS(HEMTT_I_Fuel): CLASS(HEMTT_Fuel_Base) {
    dlc = QUOTE(PREFIX);
    scope = 2;
    forceInGarage = 1;
    side = 2;
    faction = QCLASS(IND);
    author = "Mike";
    displayName = CSTRING(Hemtt_Fuel_Theseus);
    editorPreview = QPATHTOF(UI\HEMTT_Fuel.jpg);
    crew = QCLASS(Unit_I_Contractor);
    typicalCargo[] = {QCLASS(Unit_I_Engineer)};
    transportMaxBackpacks = 6;

    textureList[] = {
        "Theseus_Black", 1
    };
};

class CLASS(HEMTT_B_Fuel): CLASS(HEMTT_I_Fuel) {
    scope = 2;
    forceInGarage = 0;
    side = 1;
    faction = QCLASS(BLU);
    crew = QCLASS(Unit_B_Contractor);
    typicalCargo[] = {QCLASS(Unit_B_Engineer)};
};
