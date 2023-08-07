class B_Heli_Light_01_F;
class CLASS(Heli_I_MH6_Blue): B_Heli_Light_01_F {
    MACRO_AIRVEHICLE_CARGO;
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
