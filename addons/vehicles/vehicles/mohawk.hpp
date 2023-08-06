class Heli_Transport_02_base_F;
class I_Heli_Transport_02_F: Heli_Transport_02_base_F {
    class EventHandlers;
};

class CLASS(Mohawk_Base): I_Heli_Transport_02_F {
    dlc = QUOTE(PREFIX);
    scope = 0;
    class TextureSources {
        class Theseus_Black {
            displayName = "Theseus";
            author = "GilleeDoo";
            textures[] = {
                QPATHTOF(data\heli_transport_02_1_theseus_co.paa),
                QPATHTOF(data\heli_transport_02_2_theseus_co.paa),
                QPATHTOF(data\heli_transport_02_3_theseus_co.paa),
                "a3\air_f_beta\heli_transport_02\data\heli_transport_02_int_02_co.paa"
            };
            factions[] = {QCLASS(IND), QCLASS(BLU)};
        };
    };

    class EventHandlers: EventHandlers {
        postInit = "if (local (_this select 0)) then { [_this select 0, '', [], true] call BIS_fnc_initVehicle; };";
    };
};

class CLASS(Heli_I_Mohawk): CLASS(Mohawk_Base) {
    scope = 2;
    forceInGarage = 1;
    side = 2;
    faction = QCLASS(IND);
    displayName = CSTRING(Heli_Mohawk_Theseus);
    editorPreview = QPATHTOF(UI\Heli_Mohawk.jpg);
    author = "Mike";
    crew = QCLASS(Unit_I_PilotHeli);
    typicalCargo[] = {QCLASS(Unit_I_Engineer)};
    textureList[] = {"Theseus_Black", 1};
};

class CLASS(Heli_B_Mohawk): CLASS(Heli_I_Mohawk) {
    forceInGarage = 0;
    side = 1;
    faction = QCLASS(BLU);
    crew = QCLASS(Unit_B_PilotHeli);
    typicalCargo[] = {QCLASS(Unit_B_Engineer)};
};
