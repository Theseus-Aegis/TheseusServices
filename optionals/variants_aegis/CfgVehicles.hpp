class CfgVehicles {
    class Plane_Transport_01_base_F;

    class CLASS(C130J_I_Theseus): Plane_Transport_01_base_F {
        MACRO_AIRVEHICLE_CARGO
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
            class ADDON {
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
};
