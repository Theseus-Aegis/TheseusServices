class CfgVehicles {
    class CUP_B_C130J_USMC;

    class CLASS(C130J_I_Theseus): CUP_B_C130J_USMC {
        MACRO_AIRVEHICLE_CARGO;
        dlc = QUOTE(PREFIX);
        scope = 2;
        forceInGarage = 1;
        side = 2;
        faction = QCLASS(IND);
        author = CSTRING(C130J_Author);
        displayName = CSTRING(C130J_Theseus_Name);
        editorPreview = QPATHTOF(ui\C130J_Theseus.jpg);
        crew = QCLASS(Unit_I_PilotHeli);
        typicalCargo[] = {QCLASS(Unit_I_Engineer)};
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\theseus_c130j_body_co.paa),
            QPATHTOF(data\theseus_c130j_wings_co.paa)
        };
        class TextureSources {
            class SUBADDON {
                displayname = CSTRING(C130J_Theseus_Texture_Name);
                author = CSTRING(C130J_Author);
                textures[] = {
                    QPATHTOF(data\theseus_c130j_body_co.paa),
                    QPATHTOF(data\theseus_c130j_wings_co.paa)
                };
                factions[] = {
                    QCLASS(IND),
                    QCLASS(BLU)
                };
            };
        };
    };

    class CLASS(C130J_B_Theseus): CLASS(C130J_I_Theseus) {
        scope = 2;
        forceInGarage = 0;
        side = 1;
        faction = QCLASS(BLU);
        crew = QCLASS(Unit_B_PilotHeli);
        typicalCargo[] = {QCLASS(Unit_B_Engineer)};
    };

    class CUP_B_UH60M_Unarmed_US;
    class CLASS(UH60_I_Theseus): CUP_B_UH60M_Unarmed_US {
        MACRO_AIRVEHICLE_CARGO;
        dlc = QUOTE(PREFIX);
        scope = 2;
        forceInGarage = 1;
        side = 2;
        faction = QCLASS(IND);
        crew = QCLASS(Unit_I_PilotHeli);
        typicalCargo[] = {QCLASS(Unit_I_Engineer)};
        animationList[] = {
            "Hide_ESSS2x", 1,
            "Hide_ESSS4x", 1,
            "Hide_Nose", 1,
            "Navyclan_hide", 1,
            "Navyclan2_hide", 1,
            "Blackhawk_Hide", 0,
            "Hide_FlirTurret", 0,
            "Hide_Probe", 1,
            "Doorcock_Hide", 0,
            "Filters_Hide", 1
        };
    };

    class CLASS(UH60_B_Theseus): CLASS(UH60_I_Theseus) {
        scope = 2;
        forceInGarage = 0;
        side = 1;
        faction = QCLASS(BLU);
        crew = QCLASS(Unit_B_PilotHeli);
        typicalCargo[] = {QCLASS(Unit_B_Engineer)};
    };

    class CUP_B_UH60M_US;
    class CLASS(UH60_Minigun_I_Theseus): CUP_B_UH60M_US {
        MACRO_AIRVEHICLE_CARGO;
        dlc = QUOTE(PREFIX);
        scope = 2;
        forceInGarage = 1;
        side = 2;
        faction = QCLASS(IND);
        crew = QCLASS(Unit_I_PilotHeli);
        typicalCargo[] = {QCLASS(Unit_I_Engineer)};
        animationList[] = {
            "Hide_ESSS2x", 1,
            "Hide_ESSS4x", 1,
            "Hide_Nose", 1,
            "Navyclan_hide", 1,
            "Navyclan2_hide", 1,
            "Blackhawk_Hide", 0,
            "Hide_FlirTurret", 0,
            "Hide_Probe", 1,
            "Doorcock_Hide", 0,
            "Filters_Hide", 1
        };
    };

    class CLASS(UH60_Minigun_B_Theseus): CLASS(UH60_Minigun_I_Theseus) {
        scope = 2;
        forceInGarage = 0;
        side = 1;
        faction = QCLASS(BLU);
        crew = QCLASS(Unit_B_PilotHeli);
        typicalCargo[] = {QCLASS(Unit_B_Engineer)};
    };
};
