class CfgVehicles {
    class MELB_AH6M_H;
    class CLASS(MELB_I_AH6M_H): MELB_AH6M_H {
        dlc = QUOTE(PREFIX);
        scope = 2;
        forceInGarage = 1;
        side = 2;
        faction = CLASS(IND);
        author = "Diesel5187 & sykoCrazy, Rory, Jonpas";
        //editorPreview = QPATHTOF(UI\MELB_AH6M_H.jpg);
        crew = QCLASS(Unit_I_PilotHeli);
        typicalCargo[] = {QCLASS(Unit_I_Engineer)};
        hiddenSelectionsTextures[] = {QPATHTOF(data\melb_theseus_ext_co.paa)};
        hiddenSelectionsMaterials[] = {QPATHTOF(data\melb_theseus_ext.rvmat)};
    };
    class CLASS(MELB_B_AH6M_H): CLASS(MELB_I_AH6M_H) {
        scope = 2;
        forceInGarage = 0;
        side = 1;
        faction = CLASS(BLU);
        crew = QCLASS(Unit_B_PilotHeli);
        typicalCargo[] = {QCLASS(Unit_B_Engineer)};
    };

    class MELB_AH6M_L;
    class CLASS(MELB_I_AH6M_L): MELB_AH6M_L {
        dlc = QUOTE(PREFIX);
        scope = 2;
        forceInGarage = 1;
        side = 2;
        faction = CLASS(IND);
        author = "Diesel5187 & sykoCrazy, Rory, Jonpas";
        //editorPreview = QPATHTOF(UI\MELB_AH6M_L.jpg);
        crew = QCLASS(Unit_I_PilotHeli);
        typicalCargo[] = {QCLASS(Unit_I_Engineer)};
        hiddenSelectionsTextures[] = {QPATHTOF(data\melb_theseus_ext_co.paa)};
        hiddenSelectionsMaterials[] = {QPATHTOF(data\melb_theseus_ext.rvmat)};
    };
    class CLASS(MELB_B_AH6M_L): CLASS(MELB_I_AH6M_L) {
        scope = 2;
        forceInGarage = 0;
        side = 1;
        faction = CLASS(BLU);
        crew = QCLASS(Unit_B_PilotHeli);
        typicalCargo[] = {QCLASS(Unit_B_Engineer)};
    };

    class MELB_AH6M_M;
    class CLASS(MELB_I_AH6M_M): MELB_AH6M_M {
        dlc = QUOTE(PREFIX);
        scope = 2;
        forceInGarage = 1;
        side = 2;
        faction = CLASS(IND);
        author = "Diesel5187 & sykoCrazy, Rory, Jonpas";
        //editorPreview = QPATHTOF(UI\MELB_AH6M_M.jpg);
        crew = QCLASS(Unit_I_PilotHeli);
        typicalCargo[] = {QCLASS(Unit_I_Engineer)};
        hiddenSelectionsTextures[] = {QPATHTOF(data\melb_theseus_ext_co.paa)};
        hiddenSelectionsMaterials[] = {QPATHTOF(data\melb_theseus_ext.rvmat)};
    };
    class CLASS(MELB_B_AH6M_M): CLASS(MELB_I_AH6M_M) {
        scope = 2;
        forceInGarage = 0;
        side = 1;
        faction = CLASS(BLU);
        crew = QCLASS(Unit_B_PilotHeli);
        typicalCargo[] = {QCLASS(Unit_B_Engineer)};
    };

    class MELB_H6M;
    class CLASS(MELB_I_H6M): MELB_H6M {
        dlc = QUOTE(PREFIX);
        scope = 2;
        forceInGarage = 1;
        side = 2;
        faction = CLASS(IND);
        author = "Diesel5187 & sykoCrazy, Rory, Jonpas";
        //editorPreview = QPATHTOF(UI\MELB_H6M.jpg);
        crew = QCLASS(Unit_I_PilotHeli);
        typicalCargo[] = {QCLASS(Unit_I_Engineer)};
        hiddenSelectionsTextures[] = {QPATHTOF(data\melb_theseus_ext_co.paa)};
        hiddenSelectionsMaterials[] = {QPATHTOF(data\melb_theseus_ext.rvmat)};
    };
    class CLASS(MELB_B_H6M): CLASS(MELB_I_H6M) {
        scope = 2;
        forceInGarage = 0;
        side = 1;
        faction = CLASS(BLU);
        crew = QCLASS(Unit_B_PilotHeli);
        typicalCargo[] = {QCLASS(Unit_B_Engineer)};
    };

    class MELB_MH6M;
    class CLASS(MELB_I_MH6M): MELB_MH6M {
        dlc = QUOTE(PREFIX);
        scope = 2;
        forceInGarage = 1;
        side = 2;
        faction = CLASS(IND);
        author = "Diesel5187 & sykoCrazy, Rory, Jonpas";
        //editorPreview = QPATHTOF(UI\MELB_MH6M.jpg);
        crew = QCLASS(Unit_I_PilotHeli);
        typicalCargo[] = {QCLASS(Unit_I_Engineer)};
        hiddenSelectionsTextures[] = {QPATHTOF(data\melb_theseus_ext_co.paa)};
        hiddenSelectionsMaterials[] = {QPATHTOF(data\melb_theseus_ext.rvmat)};
    };
    class CLASS(MELB_B_MH6M): CLASS(MELB_I_MH6M) {
        scope = 2;
        forceInGarage = 0;
        side = 1;
        faction = CLASS(BLU);
        crew = QCLASS(Unit_B_PilotHeli);
        typicalCargo[] = {QCLASS(Unit_B_Engineer)};
    };
};
