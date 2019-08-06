class CfgVehicles {
    class MELB_AH6M_H;
    class MELB_AH6M_L;
    class MELB_AH6M_M;
    class MELB_H6M;
    class MELB_MH6M;


    // Theseus Black
    class CLASS(MELB_I_AH6M_H_Theseus_Black): MELB_AH6M_H {
        MACRO_AIRVEHICLE_CARGO
        dlc = QUOTE(PREFIX);
        scope = 2;
        forceInGarage = 1;
        side = 2;
        faction = QCLASS(IND);
        author = "Diesel5187 & sykoCrazy, Kresky, Jonpas, Rory";
        displayName = CSTRING(AH6M_H_Theseus_Black);
        editorPreview = QPATHTOF(UI\MELB_AH6M_H_Black.jpg);
        crew = QCLASS(Unit_I_PilotHeli);
        typicalCargo[] = {QCLASS(Unit_I_Engineer)};
        hiddenSelectionsTextures[] = {QPATHTOF(data\melb_theseus_black_ext_co.paa)};
        hiddenSelectionsMaterials[] = {QPATHTOF(data\melb_clear_ext.rvmat)};
    };
    class CLASS(MELB_B_AH6M_H_Theseus_Black): CLASS(MELB_I_AH6M_H_Theseus_Black) {
        scope = 2;
        forceInGarage = 0;
        side = 1;
        faction = QCLASS(BLU);
        crew = QCLASS(Unit_B_PilotHeli);
        typicalCargo[] = {QCLASS(Unit_B_Engineer)};
    };

    class CLASS(MELB_I_AH6M_L_Theseus_Black): MELB_AH6M_L {
        MACRO_AIRVEHICLE_CARGO
        dlc = QUOTE(PREFIX);
        scope = 2;
        forceInGarage = 1;
        side = 2;
        faction = QCLASS(IND);
        author = "Diesel5187 & sykoCrazy, Kresky, Jonpas, Rory";
        displayName = CSTRING(AH6M_L_Theseus_Black);
        editorPreview = QPATHTOF(UI\MELB_AH6M_L_Black.jpg);
        crew = QCLASS(Unit_I_PilotHeli);
        typicalCargo[] = {QCLASS(Unit_I_Engineer)};
        hiddenSelectionsTextures[] = {QPATHTOF(data\melb_theseus_black_ext_co.paa)};
        hiddenSelectionsMaterials[] = {QPATHTOF(data\melb_clear_ext.rvmat)};
    };
    class CLASS(MELB_B_AH6M_L_Theseus_Black): CLASS(MELB_I_AH6M_L_Theseus_Black) {
        scope = 2;
        forceInGarage = 0;
        side = 1;
        faction = QCLASS(BLU);
        crew = QCLASS(Unit_B_PilotHeli);
        typicalCargo[] = {QCLASS(Unit_B_Engineer)};
    };

    class CLASS(MELB_I_AH6M_M_Theseus_Black): MELB_AH6M_M {
        MACRO_AIRVEHICLE_CARGO
        dlc = QUOTE(PREFIX);
        scope = 2;
        forceInGarage = 1;
        side = 2;
        faction = QCLASS(IND);
        author = "Diesel5187 & sykoCrazy, Kresky, Jonpas, Rory";
        displayName = CSTRING(AH6M_M_Theseus_Black);
        editorPreview = QPATHTOF(UI\MELB_AH6M_M_Black.jpg);
        crew = QCLASS(Unit_I_PilotHeli);
        typicalCargo[] = {QCLASS(Unit_I_Engineer)};
        hiddenSelectionsTextures[] = {QPATHTOF(data\melb_theseus_black_ext_co.paa)};
        hiddenSelectionsMaterials[] = {QPATHTOF(data\melb_clear_ext.rvmat)};
    };
    class CLASS(MELB_B_AH6M_M_Theseus_Black): CLASS(MELB_I_AH6M_M_Theseus_Black) {
        scope = 2;
        forceInGarage = 0;
        side = 1;
        faction = QCLASS(BLU);
        crew = QCLASS(Unit_B_PilotHeli);
        typicalCargo[] = {QCLASS(Unit_B_Engineer)};
    };

    class CLASS(MELB_I_H6M_Theseus_Black): MELB_H6M {
        MACRO_AIRVEHICLE_CARGO
        dlc = QUOTE(PREFIX);
        scope = 2;
        forceInGarage = 1;
        side = 2;
        faction = QCLASS(IND);
        author = "Diesel5187 & sykoCrazy, Kresky, Jonpas, Rory";
        displayName = CSTRING(H6M_Theseus_Black);
        editorPreview = QPATHTOF(UI\MELB_H6M_Black.jpg);
        crew = QCLASS(Unit_I_PilotHeli);
        typicalCargo[] = {QCLASS(Unit_I_Engineer)};
        hiddenSelectionsTextures[] = {QPATHTOF(data\melb_theseus_black_ext_co.paa)};
        hiddenSelectionsMaterials[] = {QPATHTOF(data\melb_clear_ext.rvmat)};
    };
    class CLASS(MELB_B_H6M_Theseus_Black): CLASS(MELB_I_H6M_Theseus_Black) {
        scope = 2;
        forceInGarage = 0;
        side = 1;
        faction = QCLASS(BLU);
        crew = QCLASS(Unit_B_PilotHeli);
        typicalCargo[] = {QCLASS(Unit_B_Engineer)};
    };

    class CLASS(MELB_I_MH6M_Theseus_Black): MELB_MH6M {
        MACRO_AIRVEHICLE_CARGO
        dlc = QUOTE(PREFIX);
        scope = 2;
        forceInGarage = 1;
        side = 2;
        faction = QCLASS(IND);
        author = "Diesel5187 & sykoCrazy, Kresky, Jonpas, Rory";
        displayName = CSTRING(MH6M_Theseus_Black);
        editorPreview = QPATHTOF(UI\MELB_MH6M_Black.jpg);
        crew = QCLASS(Unit_I_PilotHeli);
        typicalCargo[] = {QCLASS(Unit_I_Engineer)};
        hiddenSelectionsTextures[] = {QPATHTOF(data\melb_theseus_black_ext_co.paa)};
        hiddenSelectionsMaterials[] = {QPATHTOF(data\melb_clear_ext.rvmat)};
    };
    class CLASS(MELB_B_MH6M_Theseus_Black): CLASS(MELB_I_MH6M_Theseus_Black) {
        scope = 2;
        forceInGarage = 0;
        side = 1;
        faction = QCLASS(BLU);
        crew = QCLASS(Unit_B_PilotHeli);
        typicalCargo[] = {QCLASS(Unit_B_Engineer)};
    };


    // Black
    class CLASS(MELB_I_AH6M_H_Black): MELB_AH6M_H {
        MACRO_AIRVEHICLE_CARGO
        dlc = QUOTE(PREFIX);
        scope = 2;
        forceInGarage = 1;
        side = 2;
        faction = QCLASS(IND);
        author = "Diesel5187 & sykoCrazy, Kresky, Jonpas";
        displayName = CSTRING(AH6M_H_Black);
        editorPreview = QPATHTOF(UI\MELB_AH6M_H_Black.jpg);
        crew = QCLASS(Unit_I_PilotHeli);
        typicalCargo[] = {QCLASS(Unit_I_Engineer)};
        hiddenSelectionsTextures[] = {QPATHTOF(data\melb_black_ext_co.paa)};
        hiddenSelectionsMaterials[] = {QPATHTOF(data\melb_clear_ext.rvmat)};
    };
    class CLASS(MELB_B_AH6M_H_Black): CLASS(MELB_I_AH6M_H_Black) {
        scope = 2;
        forceInGarage = 0;
        side = 1;
        faction = QCLASS(BLU);
        crew = QCLASS(Unit_B_PilotHeli);
        typicalCargo[] = {QCLASS(Unit_B_Engineer)};
    };

    class CLASS(MELB_I_AH6M_L_Black): MELB_AH6M_L {
        MACRO_AIRVEHICLE_CARGO
        dlc = QUOTE(PREFIX);
        scope = 2;
        forceInGarage = 1;
        side = 2;
        faction = QCLASS(IND);
        author = "Diesel5187 & sykoCrazy, Kresky, Jonpas";
        displayName = CSTRING(AH6M_L_Black);
        editorPreview = QPATHTOF(UI\MELB_AH6M_L_Black.jpg);
        crew = QCLASS(Unit_I_PilotHeli);
        typicalCargo[] = {QCLASS(Unit_I_Engineer)};
        hiddenSelectionsTextures[] = {QPATHTOF(data\melb_black_ext_co.paa)};
        hiddenSelectionsMaterials[] = {QPATHTOF(data\melb_clear_ext.rvmat)};
    };
    class CLASS(MELB_B_AH6M_L_Black): CLASS(MELB_I_AH6M_L_Black) {
        scope = 2;
        forceInGarage = 0;
        side = 1;
        faction = QCLASS(BLU);
        crew = QCLASS(Unit_B_PilotHeli);
        typicalCargo[] = {QCLASS(Unit_B_Engineer)};
    };

    class CLASS(MELB_I_AH6M_M_Black): MELB_AH6M_M {
        MACRO_AIRVEHICLE_CARGO
        dlc = QUOTE(PREFIX);
        scope = 2;
        forceInGarage = 1;
        side = 2;
        faction = QCLASS(IND);
        author = "Diesel5187 & sykoCrazy, Kresky, Jonpas";
        displayName = CSTRING(AH6M_M_Black);
        editorPreview = QPATHTOF(UI\MELB_AH6M_M_Black.jpg);
        crew = QCLASS(Unit_I_PilotHeli);
        typicalCargo[] = {QCLASS(Unit_I_Engineer)};
        hiddenSelectionsTextures[] = {QPATHTOF(data\melb_black_ext_co.paa)};
        hiddenSelectionsMaterials[] = {QPATHTOF(data\melb_clear_ext.rvmat)};
    };
    class CLASS(MELB_B_AH6M_M_Black): CLASS(MELB_I_AH6M_M_Black) {
        scope = 2;
        forceInGarage = 0;
        side = 1;
        faction = QCLASS(BLU);
        crew = QCLASS(Unit_B_PilotHeli);
        typicalCargo[] = {QCLASS(Unit_B_Engineer)};
    };

    class CLASS(MELB_I_H6M_Black): MELB_H6M {
        MACRO_AIRVEHICLE_CARGO
        dlc = QUOTE(PREFIX);
        scope = 2;
        forceInGarage = 1;
        side = 2;
        faction = QCLASS(IND);
        author = "Diesel5187 & sykoCrazy, Kresky, Jonpas";
        displayName = CSTRING(H6M_Black);
        editorPreview = QPATHTOF(UI\MELB_H6M_Black.jpg);
        crew = QCLASS(Unit_I_PilotHeli);
        typicalCargo[] = {QCLASS(Unit_I_Engineer)};
        hiddenSelectionsTextures[] = {QPATHTOF(data\melb_black_ext_co.paa)};
        hiddenSelectionsMaterials[] = {QPATHTOF(data\melb_clear_ext.rvmat)};
    };
    class CLASS(MELB_B_H6M_Black): CLASS(MELB_I_H6M_Black) {
        scope = 2;
        forceInGarage = 0;
        side = 1;
        faction = QCLASS(BLU);
        crew = QCLASS(Unit_B_PilotHeli);
        typicalCargo[] = {QCLASS(Unit_B_Engineer)};
    };

    class CLASS(MELB_I_MH6M_Black): MELB_MH6M {
        MACRO_AIRVEHICLE_CARGO
        dlc = QUOTE(PREFIX);
        scope = 2;
        forceInGarage = 1;
        side = 2;
        faction = QCLASS(IND);
        author = "Diesel5187 & sykoCrazy, Kresky, Jonpas";
        displayName = CSTRING(MH6M_Black);
        editorPreview = QPATHTOF(UI\MELB_MH6M_Black.jpg);
        crew = QCLASS(Unit_I_PilotHeli);
        typicalCargo[] = {QCLASS(Unit_I_Engineer)};
        hiddenSelectionsTextures[] = {QPATHTOF(data\melb_black_ext_co.paa)};
        hiddenSelectionsMaterials[] = {QPATHTOF(data\melb_clear_ext.rvmat)};
    };
    class CLASS(MELB_B_MH6M_Black): CLASS(MELB_I_MH6M_Black) {
        scope = 2;
        forceInGarage = 0;
        side = 1;
        faction = QCLASS(BLU);
        crew = QCLASS(Unit_B_PilotHeli);
        typicalCargo[] = {QCLASS(Unit_B_Engineer)};
    };
};
