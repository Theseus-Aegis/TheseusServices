class CfgVehicles {
    class BWA3_Eagle_Fleck;
    class BWA3_Eagle_FLW100_Fleck;

    class BWA3_Eagle_hatch_base;
    class BWA3_Eagle_Tropen: BWA3_Eagle_hatch_base {
        class TextureSources {
            class Tropen;
            class Tropen2;
            class Tropen3;
            class Tropen4;
        };
    };

    class BWA3_Eagle_flw100_base;
    class BWA3_Eagle_FLW100_Tropen: BWA3_Eagle_flw100_base {
        class TextureSources {
            class Tropen;
            class Tropen2;
            class Tropen3;
            class Tropen4;
            class Tropen5;
            class Tropen6;
            class Tropen7;
            class Tropen8;
        };
    };


    // Eagle - Flecktarn without German markings
    class CLASS(BWA3_I_Eagle_Fleck): BWA3_Eagle_Fleck {
        dlc = QUOTE(PREFIX);
        scope = 2;
        forceInGarage = 1;
        side = 2;
        faction = CLASS(IND);
        author = "BW-Mod, Mick Mathews, Jonpas";
        editorPreview = QPATHTOF(UI\BWA3_Eagle_Fleck.jpg);
        crew = QCLASS(Unit_I_Contractor);
        typicalCargo[] = {QCLASS(Unit_I_Engineer)};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\bwa3_eagle_co.paa),
            "bwa3_eagle\data\bwa3_eagle_fahrwerk_co.paa",
            "bwa3_eagle\data\bwa3_eagle_int_co.paa",
            "bwa3_eagle\data\bwa3_eagle_alpha_co.paa",
            "#(argb,8,8,3)color(0.345098,0.345098,0.345098,1.0,co)",
            "bwa3_eagle\data\bwa3_eagle_parts_co.paa",
            "bwa3_backpacks\data\bwa3_backpack_fleck_co.paa",
            "bwa3_backpacks\data\bwa3_backpack_fleck_co.paa",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)"
        };
    };
    class CLASS(BWA3_B_Eagle_Fleck): CLASS(BWA3_I_Eagle_Fleck) {
        scope = 2;
        forceInGarage = 0;
        side = 1;
        faction = CLASS(BLU);
        crew = QCLASS(Unit_B_Contractor);
        typicalCargo[] = {QCLASS(Unit_B_Engineer)};
    };

    class CLASS(BWA3_I_Eagle_FLW100_Fleck): BWA3_Eagle_FLW100_Fleck {
        dlc = QUOTE(PREFIX);
        scope = 2;
        forceInGarage = 1;
        side = 2;
        faction = CLASS(IND);
        author = "BW-Mod, Mick Mathews, Jonpas";
        editorPreview = QPATHTOF(UI\BWA3_Eagle_FLW100_Fleck.jpg);
        crew = QCLASS(Unit_I_Contractor);
        typicalCargo[] = {QCLASS(Unit_I_Engineer)};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\bwa3_eagle_co.paa),
            "bwa3_eagle\data\bwa3_eagle_fahrwerk_co.paa",
            "bwa3_eagle\data\bwa3_eagle_int_co.paa",
            "bwa3_eagle\data\bwa3_eagle_alpha_co.paa",
            "#(argb,8,8,3)color(0.345098,0.345098,0.345098,1.0,co)",
            "bwa3_eagle\data\bwa3_eagle_parts_co.paa",
            "bwa3_backpacks\data\bwa3_backpack_fleck_co.paa",
            "bwa3_backpacks\data\bwa3_backpack_fleck_co.paa",
            "bwa3_eagle\data\bwa3_flw100_co.paa",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)",
            "#(argb,8,8,3)color(0,0,0,0,co)"
        };
    };
    class CLASS(BWA3_B_Eagle_FLW100_Fleck): CLASS(BWA3_I_Eagle_FLW100_Fleck) {
        scope = 2;
        forceInGarage = 0;
        side = 1;
        faction = CLASS(BLU);
        crew = QCLASS(Unit_B_Contractor);
        typicalCargo[] = {QCLASS(Unit_B_Engineer)};
    };


    // Eagle - Tropentarn without German markings
    class CLASS(BWA3_I_Eagle_Tropen): BWA3_Eagle_Tropen {
        dlc = QUOTE(PREFIX);
        scope = 2;
        forceInGarage = 1;
        side = 2;
        faction = CLASS(IND);
        author = "BW-Mod, Mick Mathews, Jonpas";
        editorPreview = QPATHTOF(UI\BWA3_Eagle_Tropen.jpg);
        crew = QCLASS(Unit_I_Contractor);
        typicalCargo[] = {QCLASS(Unit_I_Engineer)};

        class TextureSources: TextureSources {
            class Tropen: Tropen {
                author = "BW-Mod, Mick Mathews, Jonpas";
                textures[] = {
                    QPATHTOF(data\bwa3_eagle_tropen_co.paa),
                    "bwa3_eagle\data\bwa3_eagle_fahrwerk_tropen_co.paa",
                    "bwa3_eagle\data\bwa3_eagle_int_co.paa",
                    "bwa3_eagle\data\bwa3_eagle_alpha_co.paa",
                    "#(argb,8,8,3)color(0.345098,0.345098,0.345098,1.0,co)",
                    "bwa3_eagle\data\bwa3_eagle_parts_tropen_co.paa",
                    "bwa3_backpacks\data\bwa3_backpack_tropen_co.paa",
                    "bwa3_backpacks\data\bwa3_backpack_tropen_co.paa",
                    "bwa3_common\data\licenseplates\y_2_ca.paa",
                    "bwa3_common\data\licenseplates\y_1_ca.paa",
                    "bwa3_common\data\licenseplates\y_4_ca.paa",
                    "bwa3_common\data\licenseplates\y_3_ca.paa",
                    "bwa3_common\data\licenseplates\y_6_ca.paa",
                    "bwa3_common\data\licenseplates\y_5_ca.paa",
                    "bwa3_common\data\symbols\1_ca.paa",
                    "bwa3_common\data\symbols\9_ca.paa",
                    "bwa3_common\data\symbols\1_ca.paa",
                    "bwa3_common\data\symbols\1_ca.paa",
                    "#(argb,8,8,3)color(0,0,0,0,co)"
                };
                factions[] = {QCLASS(IND), QCLASS(BLU)};
            };
            class Tropen2: Tropen2 {
                author = "BW-Mod, Mick Mathews, Jonpas";
                textures[] = {
                    QPATHTOF(data\bwa3_eagle_tropen2_co.paa),
                    "bwa3_eagle\data\bwa3_eagle_fahrwerk_tropen2_co.paa",
                    "bwa3_eagle\data\bwa3_eagle_int_co.paa",
                    "bwa3_eagle\data\bwa3_eagle_alpha_co.paa",
                    "#(argb,8,8,3)color(0.345098,0.345098,0.345098,1.0,co)",
                    "bwa3_eagle\data\bwa3_eagle_parts_tropen2_co.paa",
                    "bwa3_backpacks\data\bwa3_backpack_tropen_co.paa",
                    "bwa3_backpacks\data\bwa3_backpack_tropen_co.paa",
                    "bwa3_common\data\licenseplates\y_2_ca.paa",
                    "bwa3_common\data\licenseplates\y_1_ca.paa",
                    "bwa3_common\data\licenseplates\y_4_ca.paa",
                    "bwa3_common\data\licenseplates\y_3_ca.paa",
                    "bwa3_common\data\licenseplates\y_6_ca.paa",
                    "bwa3_common\data\licenseplates\y_5_ca.paa",
                    "bwa3_common\data\symbols\1_ca.paa",
                    "bwa3_common\data\symbols\9_ca.paa",
                    "bwa3_common\data\symbols\1_ca.paa",
                    "bwa3_common\data\symbols\1_ca.paa",
                    "#(argb,8,8,3)color(0,0,0,0,co)"
                };
                factions[] = {QCLASS(IND), QCLASS(BLU)};
            };
            class Tropen3: Tropen3 {
                author = "BW-Mod, Mick Mathews, Jonpas";
                textures[] = {
                    QPATHTOF(data\bwa3_eagle_tropen3_co.paa),
                    "bwa3_eagle\data\bwa3_eagle_fahrwerk_tropen_co.paa",
                    "bwa3_eagle\data\bwa3_eagle_int_co.paa",
                    "bwa3_eagle\data\bwa3_eagle_alpha_co.paa",
                    "#(argb,8,8,3)color(0.345098,0.345098,0.345098,1.0,co)",
                    "bwa3_eagle\data\bwa3_eagle_parts_tropen_co.paa",
                    "bwa3_backpacks\data\bwa3_backpack_tropen_co.paa",
                    "bwa3_backpacks\data\bwa3_backpack_tropen_co.paa",
                    "bwa3_common\data\licenseplates\y_2_ca.paa",
                    "bwa3_common\data\licenseplates\y_1_ca.paa",
                    "bwa3_common\data\licenseplates\y_4_ca.paa",
                    "bwa3_common\data\licenseplates\y_3_ca.paa",
                    "bwa3_common\data\licenseplates\y_6_ca.paa",
                    "bwa3_common\data\licenseplates\y_5_ca.paa",
                    "bwa3_common\data\symbols\1_ca.paa",
                    "bwa3_common\data\symbols\9_ca.paa",
                    "bwa3_common\data\symbols\1_ca.paa",
                    "bwa3_common\data\symbols\1_ca.paa",
                    "#(argb,8,8,3)color(0,0,0,0,co)"
                };
                factions[] = {QCLASS(IND), QCLASS(BLU)};
            };
            class Tropen4: Tropen4 {
                author = "BW-Mod, Mick Mathews, Jonpas";
                textures[] = {
                    QPATHTOF(data\bwa3_eagle_tropen4_co.paa),
                    "bwa3_eagle\data\bwa3_eagle_fahrwerk_tropen2_co.paa",
                    "bwa3_eagle\data\bwa3_eagle_int_co.paa",
                    "bwa3_eagle\data\bwa3_eagle_alpha_co.paa",
                    "#(argb,8,8,3)color(0.345098,0.345098,0.345098,1.0,co)",
                    "bwa3_eagle\data\bwa3_eagle_parts_tropen2_co.paa",
                    "bwa3_backpacks\data\bwa3_backpack_tropen_co.paa",
                    "bwa3_backpacks\data\bwa3_backpack_tropen_co.paa",
                    "bwa3_common\data\licenseplates\y_2_ca.paa",
                    "bwa3_common\data\licenseplates\y_1_ca.paa",
                    "bwa3_common\data\licenseplates\y_4_ca.paa",
                    "bwa3_common\data\licenseplates\y_3_ca.paa",
                    "bwa3_common\data\licenseplates\y_6_ca.paa",
                    "bwa3_common\data\licenseplates\y_5_ca.paa",
                    "bwa3_common\data\symbols\1_ca.paa",
                    "bwa3_common\data\symbols\9_ca.paa",
                    "bwa3_common\data\symbols\1_ca.paa",
                    "bwa3_common\data\symbols\1_ca.paa",
                    "#(argb,8,8,3)color(0,0,0,0,co)"
                };
                factions[] = {QCLASS(IND), QCLASS(BLU)};
            };
        };
    };
    class CLASS(BWA3_B_Eagle_Tropen): CLASS(BWA3_I_Eagle_Tropen) {
        scope = 2;
        forceInGarage = 0;
        side = 1;
        faction = CLASS(BLU);
        crew = QCLASS(Unit_B_Contractor);
        typicalCargo[] = {QCLASS(Unit_B_Engineer)};
    };

    class CLASS(BWA3_I_Eagle_FLW100_Tropen): BWA3_Eagle_FLW100_Tropen {
        dlc = QUOTE(PREFIX);
        scope = 2;
        forceInGarage = 1;
        side = 2;
        faction = CLASS(IND);
        author = "BW-Mod, Mick Mathews, Jonpas";
        editorPreview = QPATHTOF(UI\BWA3_Eagle_FLW100_Tropen.jpg);
        crew = QCLASS(Unit_I_Contractor);
        typicalCargo[] = {QCLASS(Unit_I_Engineer)};

        class TextureSources: TextureSources {
            class Tropen: Tropen {
                author = "BW-Mod, Mick Mathews, Jonpas";
                textures[] = {
                    QPATHTOF(data\bwa3_eagle_tropen_co.paa),
                    "bwa3_eagle\data\bwa3_eagle_fahrwerk_tropen_co.paa",
                    "bwa3_eagle\data\bwa3_eagle_int_co.paa",
                    "bwa3_eagle\data\bwa3_eagle_alpha_co.paa",
                    "#(argb,8,8,3)color(0.345098,0.345098,0.345098,1.0,co)",
                    "bwa3_eagle\data\bwa3_eagle_parts_tropen_co.paa",
                    "bwa3_backpacks\data\bwa3_backpack_tropen_co.paa",
                    "bwa3_backpacks\data\bwa3_backpack_tropen_co.paa",
                    "bwa3_eagle\data\bwa3_flw100_co.paa",
                    "bwa3_common\data\licenseplates\y_2_ca.paa",
                    "bwa3_common\data\licenseplates\y_1_ca.paa",
                    "bwa3_common\data\licenseplates\y_4_ca.paa",
                    "bwa3_common\data\licenseplates\y_3_ca.paa",
                    "bwa3_common\data\licenseplates\y_6_ca.paa",
                    "bwa3_common\data\licenseplates\y_5_ca.paa",
                    "bwa3_common\data\symbols\1_ca.paa",
                    "bwa3_common\data\symbols\9_ca.paa",
                    "bwa3_common\data\symbols\1_ca.paa",
                    "bwa3_common\data\symbols\1_ca.paa",
                    "#(argb,8,8,3)color(0,0,0,0,co)"
                };
                factions[] = {QCLASS(IND), QCLASS(BLU)};
            };
            class Tropen2: Tropen2 {
                author = "BW-Mod, Mick Mathews, Jonpas";
                textures[] = {
                    QPATHTOF(data\bwa3_eagle_tropen_co.paa),
                    "bwa3_eagle\data\bwa3_eagle_fahrwerk_tropen_co.paa",
                    "bwa3_eagle\data\bwa3_eagle_int_co.paa",
                    "bwa3_eagle\data\bwa3_eagle_alpha_co.paa",
                    "#(argb,8,8,3)color(0.345098,0.345098,0.345098,1.0,co)",
                    "bwa3_eagle\data\bwa3_eagle_parts_tropen_co.paa",
                    "bwa3_backpacks\data\bwa3_backpack_tropen_co.paa",
                    "bwa3_backpacks\data\bwa3_backpack_tropen_co.paa",
                    "bwa3_eagle\data\bwa3_flw100_tropen_co.paa",
                    "bwa3_common\data\licenseplates\y_2_ca.paa",
                    "bwa3_common\data\licenseplates\y_1_ca.paa",
                    "bwa3_common\data\licenseplates\y_4_ca.paa",
                    "bwa3_common\data\licenseplates\y_3_ca.paa",
                    "bwa3_common\data\licenseplates\y_6_ca.paa",
                    "bwa3_common\data\licenseplates\y_5_ca.paa",
                    "bwa3_common\data\symbols\1_ca.paa",
                    "bwa3_common\data\symbols\9_ca.paa",
                    "bwa3_common\data\symbols\1_ca.paa",
                    "bwa3_common\data\symbols\1_ca.paa",
                    "#(argb,8,8,3)color(0,0,0,0,co)"
                };
                factions[] = {QCLASS(IND), QCLASS(BLU)};
            };
            class Tropen3: Tropen3 {
                author = "BW-Mod, Mick Mathews, Jonpas";
                textures[] = {
                    QPATHTOF(data\bwa3_eagle_tropen2_co.paa),
                    "bwa3_eagle\data\bwa3_eagle_fahrwerk_tropen2_co.paa",
                    "bwa3_eagle\data\bwa3_eagle_int_co.paa",
                    "bwa3_eagle\data\bwa3_eagle_alpha_co.paa",
                    "#(argb,8,8,3)color(0.345098,0.345098,0.345098,1.0,co)",
                    "bwa3_eagle\data\bwa3_eagle_parts_tropen2_co.paa",
                    "bwa3_backpacks\data\bwa3_backpack_tropen_co.paa",
                    "bwa3_backpacks\data\bwa3_backpack_tropen_co.paa",
                    "bwa3_eagle\data\bwa3_flw100_co.paa",
                    "bwa3_common\data\licenseplates\y_2_ca.paa",
                    "bwa3_common\data\licenseplates\y_1_ca.paa",
                    "bwa3_common\data\licenseplates\y_4_ca.paa",
                    "bwa3_common\data\licenseplates\y_3_ca.paa",
                    "bwa3_common\data\licenseplates\y_6_ca.paa",
                    "bwa3_common\data\licenseplates\y_5_ca.paa",
                    "bwa3_common\data\symbols\1_ca.paa",
                    "bwa3_common\data\symbols\9_ca.paa",
                    "bwa3_common\data\symbols\1_ca.paa",
                    "bwa3_common\data\symbols\1_ca.paa",
                    "#(argb,8,8,3)color(0,0,0,0,co)"
                };
                factions[] = {QCLASS(IND), QCLASS(BLU)};
            };
            class Tropen4: Tropen4 {
                author = "BW-Mod, Mick Mathews, Jonpas";
                textures[] = {
                    QPATHTOF(data\bwa3_eagle_tropen2_co.paa),
                    "bwa3_eagle\data\bwa3_eagle_fahrwerk_tropen2_co.paa",
                    "bwa3_eagle\data\bwa3_eagle_int_co.paa",
                    "bwa3_eagle\data\bwa3_eagle_alpha_co.paa",
                    "#(argb,8,8,3)color(0.345098,0.345098,0.345098,1.0,co)",
                    "bwa3_eagle\data\bwa3_eagle_parts_tropen2_co.paa",
                    "bwa3_backpacks\data\bwa3_backpack_tropen_co.paa",
                    "bwa3_backpacks\data\bwa3_backpack_tropen_co.paa",
                    "bwa3_eagle\data\bwa3_flw100_tropen_co.paa",
                    "bwa3_common\data\licenseplates\y_2_ca.paa",
                    "bwa3_common\data\licenseplates\y_1_ca.paa",
                    "bwa3_common\data\licenseplates\y_4_ca.paa",
                    "bwa3_common\data\licenseplates\y_3_ca.paa",
                    "bwa3_common\data\licenseplates\y_6_ca.paa",
                    "bwa3_common\data\licenseplates\y_5_ca.paa",
                    "bwa3_common\data\symbols\1_ca.paa",
                    "bwa3_common\data\symbols\9_ca.paa",
                    "bwa3_common\data\symbols\1_ca.paa",
                    "bwa3_common\data\symbols\1_ca.paa",
                    "#(argb,8,8,3)color(0,0,0,0,co)"
                };
                factions[] = {QCLASS(IND), QCLASS(BLU)};
            };
            class Tropen5: Tropen5 {
                author = "BW-Mod, Mick Mathews, Jonpas";
                textures[] = {
                    QPATHTOF(data\bwa3_eagle_tropen3_co.paa),
                    "bwa3_eagle\data\bwa3_eagle_fahrwerk_tropen_co.paa",
                    "bwa3_eagle\data\bwa3_eagle_int_co.paa",
                    "bwa3_eagle\data\bwa3_eagle_alpha_co.paa",
                    "#(argb,8,8,3)color(0.345098,0.345098,0.345098,1.0,co)",
                    "bwa3_eagle\data\bwa3_eagle_parts_tropen_co.paa",
                    "bwa3_backpacks\data\bwa3_backpack_tropen_co.paa",
                    "bwa3_backpacks\data\bwa3_backpack_tropen_co.paa",
                    "bwa3_eagle\data\bwa3_flw100_co.paa",
                    "bwa3_common\data\licenseplates\y_2_ca.paa",
                    "bwa3_common\data\licenseplates\y_1_ca.paa",
                    "bwa3_common\data\licenseplates\y_4_ca.paa",
                    "bwa3_common\data\licenseplates\y_3_ca.paa",
                    "bwa3_common\data\licenseplates\y_6_ca.paa",
                    "bwa3_common\data\licenseplates\y_5_ca.paa",
                    "bwa3_common\data\symbols\1_ca.paa",
                    "bwa3_common\data\symbols\9_ca.paa",
                    "bwa3_common\data\symbols\1_ca.paa",
                    "bwa3_common\data\symbols\1_ca.paa",
                    "#(argb,8,8,3)color(0,0,0,0,co)"
                };
                factions[] = {QCLASS(IND), QCLASS(BLU)};
            };
            class Tropen6: Tropen6 {
                author = "BW-Mod, Mick Mathews, Jonpas";
                textures[] = {
                    QPATHTOF(data\bwa3_eagle_tropen3_co.paa),
                    "bwa3_eagle\data\bwa3_eagle_fahrwerk_tropen_co.paa",
                    "bwa3_eagle\data\bwa3_eagle_int_co.paa",
                    "bwa3_eagle\data\bwa3_eagle_alpha_co.paa",
                    "#(argb,8,8,3)color(0.345098,0.345098,0.345098,1.0,co)",
                    "bwa3_eagle\data\bwa3_eagle_parts_tropen_co.paa",
                    "bwa3_backpacks\data\bwa3_backpack_tropen_co.paa",
                    "bwa3_backpacks\data\bwa3_backpack_tropen_co.paa",
                    "bwa3_eagle\data\bwa3_flw100_tropen_co.paa",
                    "bwa3_common\data\licenseplates\y_2_ca.paa",
                    "bwa3_common\data\licenseplates\y_1_ca.paa",
                    "bwa3_common\data\licenseplates\y_4_ca.paa",
                    "bwa3_common\data\licenseplates\y_3_ca.paa",
                    "bwa3_common\data\licenseplates\y_6_ca.paa",
                    "bwa3_common\data\licenseplates\y_5_ca.paa",
                    "bwa3_common\data\symbols\1_ca.paa",
                    "bwa3_common\data\symbols\9_ca.paa",
                    "bwa3_common\data\symbols\1_ca.paa",
                    "bwa3_common\data\symbols\1_ca.paa",
                    "#(argb,8,8,3)color(0,0,0,0,co)"
                };
                factions[] = {QCLASS(IND), QCLASS(BLU)};
            };
            class Tropen7: Tropen7 {
                author = "BW-Mod, Mick Mathews, Jonpas";
                textures[] = {
                    QPATHTOF(data\bwa3_eagle_tropen4_co.paa),
                    "bwa3_eagle\data\bwa3_eagle_fahrwerk_tropen2_co.paa",
                    "bwa3_eagle\data\bwa3_eagle_int_co.paa",
                    "bwa3_eagle\data\bwa3_eagle_alpha_co.paa",
                    "#(argb,8,8,3)color(0.345098,0.345098,0.345098,1.0,co)",
                    "bwa3_eagle\data\bwa3_eagle_parts_tropen2_co.paa",
                    "bwa3_backpacks\data\bwa3_backpack_tropen_co.paa",
                    "bwa3_backpacks\data\bwa3_backpack_tropen_co.paa",
                    "bwa3_eagle\data\bwa3_flw100_co.paa",
                    "bwa3_common\data\licenseplates\y_2_ca.paa",
                    "bwa3_common\data\licenseplates\y_1_ca.paa",
                    "bwa3_common\data\licenseplates\y_4_ca.paa",
                    "bwa3_common\data\licenseplates\y_3_ca.paa",
                    "bwa3_common\data\licenseplates\y_6_ca.paa",
                    "bwa3_common\data\licenseplates\y_5_ca.paa",
                    "bwa3_common\data\symbols\1_ca.paa",
                    "bwa3_common\data\symbols\9_ca.paa",
                    "bwa3_common\data\symbols\1_ca.paa",
                    "bwa3_common\data\symbols\1_ca.paa",
                    "#(argb,8,8,3)color(0,0,0,0,co)"
                };
                factions[] = {QCLASS(IND), QCLASS(BLU)};
            };
            class Tropen8: Tropen8 {
                author = "BW-Mod, Mick Mathews, Jonpas";
                textures[] = {
                    QPATHTOF(data\bwa3_eagle_tropen4_co.paa),
                    "bwa3_eagle\data\bwa3_eagle_fahrwerk_tropen2_co.paa",
                    "bwa3_eagle\data\bwa3_eagle_int_co.paa",
                    "bwa3_eagle\data\bwa3_eagle_alpha_co.paa",
                    "#(argb,8,8,3)color(0.345098,0.345098,0.345098,1.0,co)",
                    "bwa3_eagle\data\bwa3_eagle_parts_tropen2_co.paa",
                    "bwa3_backpacks\data\bwa3_backpack_tropen_co.paa",
                    "bwa3_backpacks\data\bwa3_backpack_tropen_co.paa",
                    "bwa3_eagle\data\bwa3_flw100_tropen_co.paa",
                    "bwa3_common\data\licenseplates\y_2_ca.paa",
                    "bwa3_common\data\licenseplates\y_1_ca.paa",
                    "bwa3_common\data\licenseplates\y_4_ca.paa",
                    "bwa3_common\data\licenseplates\y_3_ca.paa",
                    "bwa3_common\data\licenseplates\y_6_ca.paa",
                    "bwa3_common\data\licenseplates\y_5_ca.paa",
                    "bwa3_common\data\symbols\1_ca.paa",
                    "bwa3_common\data\symbols\9_ca.paa",
                    "bwa3_common\data\symbols\1_ca.paa",
                    "bwa3_common\data\symbols\1_ca.paa",
                    "#(argb,8,8,3)color(0,0,0,0,co)"
                };
                factions[] = {QCLASS(IND), QCLASS(BLU)};
            };
        };
    };
    class CLASS(BWA3_B_Eagle_FLW100_Tropen): CLASS(BWA3_I_Eagle_FLW100_Tropen) {
        scope = 2;
        forceInGarage = 0;
        side = 1;
        faction = CLASS(BLU);
        crew = QCLASS(Unit_B_Contractor);
        typicalCargo[] = {QCLASS(Unit_B_Engineer)};
    };
};
