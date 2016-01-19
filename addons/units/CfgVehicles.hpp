class CfgVehicles {
    class I_Soldier_base_F;

    // Underwear
    class CLASS(Unit_Underwear_Base): I_Soldier_base_F {
        scope = 0;
        faction = CLASS(IND);
        //vehicleClass = "Men";//needed?
        weapons[] = {"Throw", "Put"};
        respawnWeapons[] = {"Throw", "Put"};
        magazines[] = {};
        respawnMagazines[] = {};
        items[] = {};
        respawnItems[] = {};
        linkedItems[] = {};
        respawnLinkedItems[] = {};
        model = "\a3\characters_f\common\basicbody.p3d";
        identityTypes[] = {"LanguageENG_F", "Head_NATO", "Head_TK", "Head_Greek"};
    };
    class CLASS(Unit_Underwear_BlackLogo): CLASS(Unit_Underwear_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        hiddenSelectionsTextures[] = {QPATHTOF(data\underwear_blacklogo_co.paa)};
        uniformClass = QCLASS(Uniform_Underwear_BlackLogo);
    };
    class CLASS(Unit_Underwear_WhiteLogo): CLASS(Unit_Underwear_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        hiddenSelectionsTextures[] = {QPATHTOF(data\underwear_whitelogo_co.paa)};
        uniformClass = QCLASS(Uniform_Underwear_WhiteLogo);
    };
    class CLASS(Unit_Underwear_BlueLogo): CLASS(Unit_Underwear_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        hiddenSelectionsTextures[] = {QPATHTOF(data\underwear_bluelogo_co.paa)};
        uniformClass = QCLASS(Uniform_Underwear_BlueLogo);
    };
    class CLASS(Unit_Underwear_GreenLogo): CLASS(Unit_Underwear_Base) {
        scope = 1;
        author = "Pomigit, Jonpas";
        hiddenSelectionsTextures[] = {QPATHTOF(data\underwear_greenlogo_co.paa)};
        uniformClass = QCLASS(Uniform_Underwear_GreenLogo);
    };


    // Combat - Long SLeeves
    class CLASS(Unit_Combat_LongSleeves_Base): CLASS(Unit_Underwear_Base) {
        scope = 2;
        author = "Pomigit, Jonpas";
        nakedUniform = QCLASS(Uniform_Underwear_GreenLogo);
        hiddenSelectionsMaterials[] = {QPATHTOF(data\uniform_combat.rvmat)};
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniform_combat_longsleeves_black_co.paa)};
        uniformClass = QCLASS();
    }
};
