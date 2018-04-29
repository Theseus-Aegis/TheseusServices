class CfgVehicles {
    class BWA3_Eagle_base;
    class BWA3_Eagle_hatch_base: BWA3_Eagle_base {
        class Turrets;
    };
    class BWA3_Eagle_Fleck: BWA3_Eagle_hatch_base {
        class Turrets: Turrets {
            class CargoTurret_01;
        };
    };

    class BWA3_Eagle_FLW100_Fleck;

    class BWA3_Eagle_Tropen: BWA3_Eagle_hatch_base {
        class Turrets: Turrets {
            class CargoTurret_01;
        };
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

        class Turrets: Turrets {
            class CargoTurret_01: CargoTurret_01 {
                gunnerType = QCLASS(Unit_I_Specialist);
            };
        };
    };
    class CLASS(BWA3_B_Eagle_Fleck): CLASS(BWA3_I_Eagle_Fleck) {
        scope = 2;
        forceInGarage = 0;
        side = 1;
        faction = CLASS(BLU);
        crew = QCLASS(Unit_B_Contractor);
        typicalCargo[] = {QCLASS(Unit_B_Engineer)};

        class Turrets: Turrets {
            class CargoTurret_01: CargoTurret_01 {
                gunnerType = QCLASS(Unit_B_Specialist);
            };
        };
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

        class Turrets: Turrets {
            class CargoTurret_01: CargoTurret_01 {
                gunnerType = QCLASS(Unit_I_Specialist);
            };
        };

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

        class Turrets: Turrets {
            class CargoTurret_01: CargoTurret_01 {
                gunnerType = QCLASS(Unit_B_Specialist);
            };
        };
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


    // Eagle - Black
    class CLASS(BWA3_I_Eagle_Black): BWA3_Eagle_Fleck {
        dlc = QUOTE(PREFIX);
        scope = 2;
        forceInGarage = 1;
        side = 2;
        faction = CLASS(IND);
        author = "BW-Mod, Mick Mathews, Jonpas";
        displayName = CSTRING(Eagle_Black);
        editorPreview = QPATHTOF(UI\BWA3_Eagle_Black.jpg);
        crew = QCLASS(Unit_I_Contractor);
        typicalCargo[] = {QCLASS(Unit_I_Engineer)};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\bwa3_eagle_black_co.paa),
            QPATHTOF(data\bwa3_eagle_fahrwerk_black_co.paa),
            "bwa3_eagle\data\bwa3_eagle_int_co.paa",
            "bwa3_eagle\data\bwa3_eagle_alpha_co.paa",
            "#(argb,8,8,3)color(0.345098,0.345098,0.345098,1.0,co)",
            QPATHTOF(data\bwa3_eagle_parts_black_co.paa),
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

        class Turrets: Turrets {
            class CargoTurret_01: CargoTurret_01 {
                gunnerType = QCLASS(Unit_I_Specialist);
            };
        };
    };
    class CLASS(BWA3_B_Eagle_Black): CLASS(BWA3_I_Eagle_Black) {
        scope = 2;
        forceInGarage = 0;
        side = 1;
        faction = CLASS(BLU);
        crew = QCLASS(Unit_B_Contractor);
        typicalCargo[] = {QCLASS(Unit_B_Engineer)};

        class Turrets: Turrets {
            class CargoTurret_01: CargoTurret_01 {
                gunnerType = QCLASS(Unit_B_Specialist);
            };
        };
    };

    class CLASS(BWA3_I_Eagle_FLW100_Black): BWA3_Eagle_FLW100_Fleck {
        dlc = QUOTE(PREFIX);
        scope = 2;
        forceInGarage = 1;
        side = 2;
        faction = CLASS(IND);
        author = "BW-Mod, Mick Mathews, Jonpas";
        displayName = CSTRING(Eagle_FLW100_Black);
        editorPreview = QPATHTOF(UI\BWA3_Eagle_FLW100_Black.jpg);
        crew = QCLASS(Unit_I_Contractor);
        typicalCargo[] = {QCLASS(Unit_I_Engineer)};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\bwa3_eagle_black_co.paa),
            QPATHTOF(data\bwa3_eagle_fahrwerk_black_co.paa),
            "bwa3_eagle\data\bwa3_eagle_int_co.paa",
            "bwa3_eagle\data\bwa3_eagle_alpha_co.paa",
            "#(argb,8,8,3)color(0.345098,0.345098,0.345098,1.0,co)",
            QPATHTOF(data\bwa3_eagle_parts_black_co.paa),
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
    class CLASS(BWA3_B_Eagle_FLW100_Black): CLASS(BWA3_I_Eagle_FLW100_Black) {
        scope = 2;
        forceInGarage = 0;
        side = 1;
        faction = CLASS(BLU);
        crew = QCLASS(Unit_B_Contractor);
        typicalCargo[] = {QCLASS(Unit_B_Engineer)};
    };


    // Eagle - Green
    class CLASS(BWA3_I_Eagle_Green): BWA3_Eagle_Fleck {
        dlc = QUOTE(PREFIX);
        scope = 2;
        forceInGarage = 1;
        side = 2;
        faction = CLASS(IND);
        author = "BW-Mod, Mick Mathews, Jonpas";
        displayName = CSTRING(Eagle_Green);
        editorPreview = QPATHTOF(UI\BWA3_Eagle_Green.jpg);
        crew = QCLASS(Unit_I_Contractor);
        typicalCargo[] = {QCLASS(Unit_I_Engineer)};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\bwa3_eagle_green_co.paa),
            QPATHTOF(data\bwa3_eagle_fahrwerk_green_co.paa),
            "bwa3_eagle\data\bwa3_eagle_int_co.paa",
            "bwa3_eagle\data\bwa3_eagle_alpha_co.paa",
            "#(argb,8,8,3)color(0.345098,0.345098,0.345098,1.0,co)",
            QPATHTOF(data\bwa3_eagle_parts_green_co.paa),
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

        class Turrets: Turrets {
            class CargoTurret_01: CargoTurret_01 {
                gunnerType = QCLASS(Unit_I_Specialist);
            };
        };
    };
    class CLASS(BWA3_B_Eagle_Green): CLASS(BWA3_I_Eagle_Green) {
        scope = 2;
        forceInGarage = 0;
        side = 1;
        faction = CLASS(BLU);
        crew = QCLASS(Unit_B_Contractor);
        typicalCargo[] = {QCLASS(Unit_B_Engineer)};

        class Turrets: Turrets {
            class CargoTurret_01: CargoTurret_01 {
                gunnerType = QCLASS(Unit_B_Specialist);
            };
        };
    };

    class CLASS(BWA3_I_Eagle_FLW100_Green): BWA3_Eagle_FLW100_Fleck {
        dlc = QUOTE(PREFIX);
        scope = 2;
        forceInGarage = 1;
        side = 2;
        faction = CLASS(IND);
        author = "BW-Mod, Mick Mathews, Jonpas";
        displayName = CSTRING(Eagle_FLW100_Green);
        editorPreview = QPATHTOF(UI\BWA3_Eagle_FLW100_Green.jpg);
        crew = QCLASS(Unit_I_Contractor);
        typicalCargo[] = {QCLASS(Unit_I_Engineer)};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\bwa3_eagle_green_co.paa),
            QPATHTOF(data\bwa3_eagle_fahrwerk_green_co.paa),
            "bwa3_eagle\data\bwa3_eagle_int_co.paa",
            "bwa3_eagle\data\bwa3_eagle_alpha_co.paa",
            "#(argb,8,8,3)color(0.345098,0.345098,0.345098,1.0,co)",
            QPATHTOF(data\bwa3_eagle_parts_green_co.paa),
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
    class CLASS(BWA3_B_Eagle_FLW100_Green): CLASS(BWA3_I_Eagle_FLW100_Green) {
        scope = 2;
        forceInGarage = 0;
        side = 1;
        faction = CLASS(BLU);
        crew = QCLASS(Unit_B_Contractor);
        typicalCargo[] = {QCLASS(Unit_B_Engineer)};
    };


    // Eagle - Tan
    class CLASS(BWA3_I_Eagle_Tan): BWA3_Eagle_Fleck {
        dlc = QUOTE(PREFIX);
        scope = 2;
        forceInGarage = 1;
        side = 2;
        faction = CLASS(IND);
        author = "BW-Mod, Mick Mathews, Jonpas";
        displayName = CSTRING(Eagle_Tan);
        editorPreview = QPATHTOF(UI\BWA3_Eagle_Tan.jpg);
        crew = QCLASS(Unit_I_Contractor);
        typicalCargo[] = {QCLASS(Unit_I_Engineer)};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\bwa3_eagle_tan_co.paa),
            QPATHTOF(data\bwa3_eagle_fahrwerk_tan_co.paa),
            "bwa3_eagle\data\bwa3_eagle_int_co.paa",
            "bwa3_eagle\data\bwa3_eagle_alpha_co.paa",
            "#(argb,8,8,3)color(0.345098,0.345098,0.345098,1.0,co)",
            QPATHTOF(data\bwa3_eagle_parts_tan_co.paa),
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

        class Turrets: Turrets {
            class CargoTurret_01: CargoTurret_01 {
                gunnerType = QCLASS(Unit_I_Specialist);
            };
        };
    };
    class CLASS(BWA3_B_Eagle_Tan): CLASS(BWA3_I_Eagle_Tan) {
        scope = 2;
        forceInGarage = 0;
        side = 1;
        faction = CLASS(BLU);
        crew = QCLASS(Unit_B_Contractor);
        typicalCargo[] = {QCLASS(Unit_B_Engineer)};

        class Turrets: Turrets {
            class CargoTurret_01: CargoTurret_01 {
                gunnerType = QCLASS(Unit_B_Specialist);
            };
        };
    };

    class CLASS(BWA3_I_Eagle_FLW100_Tan): BWA3_Eagle_FLW100_Fleck {
        dlc = QUOTE(PREFIX);
        scope = 2;
        forceInGarage = 1;
        side = 2;
        faction = CLASS(IND);
        author = "BW-Mod, Mick Mathews, Jonpas";
        displayName = CSTRING(Eagle_FLW100_Tan);
        editorPreview = QPATHTOF(UI\BWA3_Eagle_FLW100_Tan.jpg);
        crew = QCLASS(Unit_I_Contractor);
        typicalCargo[] = {QCLASS(Unit_I_Engineer)};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\bwa3_eagle_tan_co.paa),
            QPATHTOF(data\bwa3_eagle_fahrwerk_tan_co.paa),
            "bwa3_eagle\data\bwa3_eagle_int_co.paa",
            "bwa3_eagle\data\bwa3_eagle_alpha_co.paa",
            "#(argb,8,8,3)color(0.345098,0.345098,0.345098,1.0,co)",
            QPATHTOF(data\bwa3_eagle_parts_tan_co.paa),
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
    class CLASS(BWA3_B_Eagle_FLW100_Tan): CLASS(BWA3_I_Eagle_FLW100_Tan) {
        scope = 2;
        forceInGarage = 0;
        side = 1;
        faction = CLASS(BLU);
        crew = QCLASS(Unit_B_Contractor);
        typicalCargo[] = {QCLASS(Unit_B_Engineer)};
    };
};
