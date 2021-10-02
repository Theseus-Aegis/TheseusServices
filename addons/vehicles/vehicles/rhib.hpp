class I_C_Boat_Transport_02_F;
class CLASS(Boat_I_RHIB): I_C_Boat_Transport_02_F {
    MACRO_LANDVEHICLE_CARGO
    dlc = QUOTE(PREFIX);
    scope = 2;
    forceInGarage = 1;
    side = 2;
    faction = QCLASS(IND);
    author = "GilleeDoo, JoramD";
    editorPreview = QPATHTOF(UI\Boat_RHIB.jpg);
    crew = QCLASS(Unit_I_Contractor);
    typicalCargo[] = {QCLASS(Unit_I_Contractor)};
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\boat_rhib_ext_co.paa),
        QPATHTOF(data\boat_rhib_int01_co.paa),
        QPATHTOF(data\boat_rhib_int02_co.paa)
    };
};
class CLASS(Boat_I_RHIB): I_C_Boat_Transport_02_F {
    scope = 2;
    forceInGarage = 0;
    side = 1;
    faction = QCLASS(BLU);
    crew = QCLASS(Unit_B_Contractor);
    typicalCargo[] = {QCLASS(Unit_B_Contractor)};
};
