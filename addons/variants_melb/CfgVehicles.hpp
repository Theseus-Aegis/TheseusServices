class CfgVehicles {
    class MELB_AH6M_H;
    class CLASS(MELB_I_AH6M_H_Theseus): MELB_AH6M_H {
        dlc = QUOTE(PREFIX);
        scope = 2;
        forceInGarage = 1;
        side = 2;
        faction = CLASS(IND);
        author = "Diesel5187 & sykoCrazy, Rory, Jonpas";
        displayName = CSTRING(AH6M_H_Theseus);
        //editorPreview = QPATHTOF(UI\MELB_AH6M_H.jpg);
        crew = QCLASS(Unit_I_PilotHeli);
        typicalCargo[] = {QCLASS(Unit_I_Engineer)};
        hiddenSelectionsTextures[] = {QPATHTOF(data\melb_theseus_ext_co.paa)};
        hiddenSelectionsMaterials[] = {QPATHTOF(data\melb_theseus_ext.rvmat)};
    };
    class CLASS(MELB_B_AH6M_H_Theseus): CLASS(MELB_I_AH6M_H_Theseus) {
        scope = 2;
        forceInGarage = 0;
        side = 1;
        faction = CLASS(BLU);
        crew = QCLASS(Unit_B_PilotHeli);
        typicalCargo[] = {QCLASS(Unit_B_Engineer)};
    };

    class MELB_AH6M_L;
    class CLASS(MELB_I_AH6M_L_Theseus): MELB_AH6M_L {
        dlc = QUOTE(PREFIX);
        scope = 2;
        forceInGarage = 1;
        side = 2;
        faction = CLASS(IND);
        author = "Diesel5187 & sykoCrazy, Rory, Jonpas";
        displayName = CSTRING(AH6M_L_Theseus);
        //editorPreview = QPATHTOF(UI\MELB_AH6M_L.jpg);
        crew = QCLASS(Unit_I_PilotHeli);
        typicalCargo[] = {QCLASS(Unit_I_Engineer)};
        hiddenSelectionsTextures[] = {QPATHTOF(data\melb_theseus_ext_co.paa)};
        hiddenSelectionsMaterials[] = {QPATHTOF(data\melb_theseus_ext.rvmat)};
    };
    class CLASS(MELB_B_AH6M_L_Theseus): CLASS(MELB_I_AH6M_L_Theseus) {
        scope = 2;
        forceInGarage = 0;
        side = 1;
        faction = CLASS(BLU);
        crew = QCLASS(Unit_B_PilotHeli);
        typicalCargo[] = {QCLASS(Unit_B_Engineer)};
    };

    class MELB_AH6M_M;
    class CLASS(MELB_I_AH6M_M_Theseus): MELB_AH6M_M {
        dlc = QUOTE(PREFIX);
        scope = 2;
        forceInGarage = 1;
        side = 2;
        faction = CLASS(IND);
        author = "Diesel5187 & sykoCrazy, Rory, Jonpas";
        displayName = CSTRING(AH6M_M_Theseus);
        //editorPreview = QPATHTOF(UI\MELB_AH6M_M.jpg);
        crew = QCLASS(Unit_I_PilotHeli);
        typicalCargo[] = {QCLASS(Unit_I_Engineer)};
        hiddenSelectionsTextures[] = {QPATHTOF(data\melb_theseus_ext_co.paa)};
        hiddenSelectionsMaterials[] = {QPATHTOF(data\melb_theseus_ext.rvmat)};
    };
    class CLASS(MELB_B_AH6M_M_Theseus): CLASS(MELB_I_AH6M_M_Theseus) {
        scope = 2;
        forceInGarage = 0;
        side = 1;
        faction = CLASS(BLU);
        crew = QCLASS(Unit_B_PilotHeli);
        typicalCargo[] = {QCLASS(Unit_B_Engineer)};
    };

    class MELB_H6M;
    class CLASS(MELB_I_H6M_Theseus): MELB_H6M {
        dlc = QUOTE(PREFIX);
        scope = 2;
        forceInGarage = 1;
        side = 2;
        faction = CLASS(IND);
        author = "Diesel5187 & sykoCrazy, Rory, Jonpas";
        displayName = CSTRING(H6M_Theseus);
        //editorPreview = QPATHTOF(UI\MELB_H6M.jpg);
        crew = QCLASS(Unit_I_PilotHeli);
        typicalCargo[] = {QCLASS(Unit_I_Engineer)};
        hiddenSelectionsTextures[] = {QPATHTOF(data\melb_theseus_ext_co.paa)};
        hiddenSelectionsMaterials[] = {QPATHTOF(data\melb_theseus_ext.rvmat)};
    };
    class CLASS(MELB_B_H6M_Theseus): CLASS(MELB_I_H6M_Theseus) {
        scope = 2;
        forceInGarage = 0;
        side = 1;
        faction = CLASS(BLU);
        crew = QCLASS(Unit_B_PilotHeli);
        typicalCargo[] = {QCLASS(Unit_B_Engineer)};
    };

    class MELB_MH6M;
    class CLASS(MELB_I_MH6M_Theseus): MELB_MH6M {
        dlc = QUOTE(PREFIX);
        scope = 2;
        forceInGarage = 1;
        side = 2;
        faction = CLASS(IND);
        author = "Diesel5187 & sykoCrazy, Rory, Jonpas";
        displayName = CSTRING(MH6M_Theseus);
        //editorPreview = QPATHTOF(UI\MELB_MH6M.jpg);
        crew = QCLASS(Unit_I_PilotHeli);
        typicalCargo[] = {QCLASS(Unit_I_Engineer)};
        hiddenSelectionsTextures[] = {QPATHTOF(data\melb_theseus_ext_co.paa)};
        hiddenSelectionsMaterials[] = {QPATHTOF(data\melb_theseus_ext.rvmat)};
    };
    class CLASS(MELB_B_MH6M_Theseus): CLASS(MELB_I_MH6M_Theseus) {
        scope = 2;
        forceInGarage = 0;
        side = 1;
        faction = CLASS(BLU);
        crew = QCLASS(Unit_B_PilotHeli);
        typicalCargo[] = {QCLASS(Unit_B_Engineer)};
    };
};
