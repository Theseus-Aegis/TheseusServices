// Transport HEMTT
class Truck_01_base_F;
class B_Truck_01_transport_F : Truck_01_base_F {
    class EventHandlers;
};

class CLASS(Hemtt_Base): B_Truck_01_transport_F {
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

class CLASS(Hemtt_I_Transport): CLASS(Hemtt_Base) {
    dlc = QUOTE(PREFIX);
    scope = 2;
    forceInGarage = 1;
    side = 2;
    faction = QCLASS(IND);
    author = "Mike";
    displayName = CSTRING(Hemtt_Transport_Theseus);
    editorPreview = QPATHTOF(UI/Hemtt_Transport.jpg);
    crew = QCLASS(Unit_I_Contractor);
    typicalCargo[] = {QCLASS(Unit_I_Engineer)};
    transportMaxBackpacks = 6;

    textureList[] = {
        "Theseus_Black", 1
    };
};
class CLASS(Hemtt_B_Transport): CLASS(Hemtt_I_Transport) {
    scope = 2;
    forceInGarage = 0;
    side = 1;
    faction = QCLASS(BLU);
    crew = QCLASS(Unit_B_Contractor);
    typicalCargo[] = {QCLASS(Unit_B_Engineer)};
};

// Repair HEMTT
class B_Truck_01_Repair_F: B_Truck_01_mover_F {
    class EventHandlers;
};

class CLASS(Hemtt_Repair_Base): B_Truck_01_Repair_F {
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

class CLASS(Hemtt_I_Repair): CLASS(Hemtt_Repair_Base) {
    dlc = QUOTE(PREFIX);
    scope = 2;
    forceInGarage = 1;
    side = 2;
    faction = QCLASS(IND);
    author = "Mike";
    displayName = CSTRING(Hemtt_Repair_Theseus);
    editorPreview = QPATHTOF(UI/Hemtt_Repair.jpg);
    crew = QCLASS(Unit_I_Contractor);
    typicalCargo[] = {QCLASS(Unit_I_Engineer)};
    transportMaxBackpacks = 6;

    textureList[] = {
        "Theseus_Black", 1
    };
};
class CLASS(Hemtt_B_Repair): CLASS(Hemtt_I_Repair) {
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

class CLASS(Hemtt_Ammo_Base): B_Truck_01_ammo_F {
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

class CLASS(Hemtt_I_Ammo): CLASS(Hemtt_Ammo_Base) {
    dlc = QUOTE(PREFIX);
    scope = 2;
    forceInGarage = 1;
    side = 2;
    faction = QCLASS(IND);
    author = "Mike";
    displayName = CSTRING(Hemtt_Ammo_Theseus);
    editorPreview = QPATHTOF(UI/Hemtt_Ammo.jpg);
    crew = QCLASS(Unit_I_Contractor);
    typicalCargo[] = {QCLASS(Unit_I_Engineer)};
    transportMaxBackpacks = 6;

    textureList[] = {
        "Theseus_Black", 1
    };
};
class CLASS(Hemtt_B_Ammo): CLASS(Hemtt_I_Ammo) {
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

class CLASS(Hemtt_Fuel_Base): B_Truck_01_fuel_F {
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

class CLASS(Hemtt_I_Fuel): CLASS(Hemtt_Fuel_Base) {
    dlc = QUOTE(PREFIX);
    scope = 2;
    forceInGarage = 1;
    side = 2;
    faction = QCLASS(IND);
    author = "Mike";
    displayName = CSTRING(Hemtt_Fuel_Theseus);
    editorPreview = QPATHTOF(UI/Hemtt_Fuel).jpg);
    crew = QCLASS(Unit_I_Contractor);
    typicalCargo[] = {QCLASS(Unit_I_Engineer)};
    transportMaxBackpacks = 6;

    textureList[] = {
        "Theseus_Black", 1
    };
};

class CLASS(Hemtt_B_Fuel): CLASS(Hemtt_I_Fuel) {
    scope = 2;
    forceInGarage = 0;
    side = 1;
    faction = QCLASS(BLU);
    crew = QCLASS(Unit_B_Contractor);
    typicalCargo[] = {QCLASS(Unit_B_Engineer)};
};
