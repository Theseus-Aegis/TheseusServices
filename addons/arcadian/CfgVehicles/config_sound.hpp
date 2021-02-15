attenuationEffectType = "SemiOpenCarAttenuation2";
soundGetIn[] = {"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_door", 0.316228, 1};
soundGetOut[] = {"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_door", 0.316228, 1, 60};
soundDammage[] = {"", 0.562341, 1};
insideSoundCoef = 1;
buildCrash0[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1", 1, 1, 200};
buildCrash1[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2", 1, 1, 200};
buildCrash2[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3", 1, 1, 200};
buildCrash3[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4", 1, 1, 200};
soundBuildingCrash[] = {"buildCrash0", 0.25, "buildCrash1", 0.25, "buildCrash2", 0.25, "buildCrash3", 0.25};
WoodCrash0[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1", 1, 1, 200};
WoodCrash1[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1", 1, 1, 200};
WoodCrash2[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1", 1, 1, 200};
WoodCrash3[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1", 1, 1, 200};
soundWoodCrash[] = {"woodCrash0", 0.25, "woodCrash1", 0.25, "woodCrash2", 0.25, "woodCrash3", 0.25};
armorCrash0[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1", 1, 1, 200};
armorCrash1[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2", 1, 1, 200};
armorCrash2[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3", 1, 1, 200};
armorCrash3[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4", 1, 1, 200};
soundArmorCrash[] = {"ArmorCrash0", 0.25, "ArmorCrash1", 0.25, "ArmorCrash2", 0.25, "ArmorCrash3", 0.25};
Crash0[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1", 1, 1, 200};
Crash1[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2", 1, 1, 200};
Crash2[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3", 1, 1, 200};
Crash3[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4", 1, 1, 200};
soundCrashes[] = {"Crash0", 0.25, "Crash1", 0.25, "Crash2", 0.25, "Crash3", 0.25};

// Engine on/off sounds (Source: Vanilla Hunter)
soundEngineOnInt[] = {"A3\Sounds_F\vehicles2\soft\Mrap_01\Mrap_01_Engine_Int_Start", 0.63, 1};
soundEngineOnExt[] = {"A3\Sounds_F\vehicles2\soft\Mrap_01\Mrap_01_Engine_Ext_Start", 1.99, 1, 50};
soundEngineOffInt[] = {"A3\Sounds_F\vehicles2\soft\Mrap_01\Mrap_01_Engine_Int_stop", 0.5, 1};
soundEngineOffExt[] = {"A3\Sounds_F\vehicles2\soft\Mrap_01\Mrap_01_Engine_Ext_stop", 1.99, 1, 50};

class Sounds {
    soundSetsInt[] = {
        "Suv_01_Engine_RPM0_INT_SoundSet",
        "Suv_01_Engine_RPM1_INT_SoundSet",
        "Suv_01_Engine_RPM2_INT_SoundSet",
        "Suv_01_Engine_RPM3_INT_SoundSet",
        "Suv_01_Engine_RPM4_INT_SoundSet",
        "Suv_01_Rattling_INT_SoundSet",
        "Suv_01_Stress_INT_SoundSet",
        "Suv_01_Rain_INT_SoundSet",
        "Suv_01_Tires_Rock_Fast_INT_SoundSet",
        "Suv_01_Tires_Grass_Fast_INT_SoundSet",
        "Suv_01_Tires_Sand_Fast_INT_SoundSet",
        "Suv_01_Tires_Gravel_Fast_INT_SoundSet",
        "Suv_01_Tires_Mud_Fast_INT_SoundSet",
        "Suv_01_Tires_Asphalt_Fast_INT_SoundSet",
        "Suv_01_Tires_Water_Fast_INT_SoundSet",
        "Suv_01_Tires_Rock_Slow_INT_SoundSet",
        "Suv_01_Tires_Grass_Slow_INT_SoundSet",
        "Suv_01_Tires_Sand_Slow_INT_SoundSet",
        "Suv_01_Tires_Gravel_Slow_INT_SoundSet",
        "Suv_01_Tires_Mud_Slow_INT_SoundSet",
        "Suv_01_Tires_Asphalt_Slow_INT_SoundSet",
        "Suv_01_Tires_Water_Slow_INT_SoundSet",
        "Suv_01_Tires_Turn_Hard_INT_SoundSet",
        "Suv_01_Tires_Turn_Soft_INT_SoundSet",
        "Suv_01_Tires_Brake_Hard_INT_SoundSet",
        "Suv_01_Tires_Brake_Soft_INT_SoundSet"
    };
    soundSetsExt[] = {
        "Suv_01_Engine_RPM0_EXT_SoundSet",
        "Suv_01_Engine_RPM1_EXT_SoundSet",
        "Suv_01_Engine_RPM2_EXT_SoundSet",
        "Suv_01_Engine_RPM3_EXT_SoundSet",
        "Suv_01_Engine_RPM4_EXT_SoundSet",
        "Suv_01_Rain_EXT_SoundSet",
        "Suv_01_Tires_Rock_Fast_EXT_SoundSet",
        "Suv_01_Tires_Grass_Fast_EXT_SoundSet",
        "Suv_01_Tires_Sand_Fast_EXT_SoundSet",
        "Suv_01_Tires_Gravel_Fast_EXT_SoundSet",
        "Suv_01_Tires_Mud_Fast_EXT_SoundSet",
        "Suv_01_Tires_Asphalt_Fast_EXT_SoundSet",
        "Suv_01_Tires_Water_Fast_EXT_SoundSet",
        "Suv_01_Tires_Rock_Slow_EXT_SoundSet",
        "Suv_01_Tires_Grass_Slow_EXT_SoundSet",
        "Suv_01_Tires_Sand_Slow_EXT_SoundSet",
        "Suv_01_Tires_Gravel_Slow_EXT_SoundSet",
        "Suv_01_Tires_Mud_Slow_EXT_SoundSet",
        "Suv_01_Tires_Asphalt_Slow_EXT_SoundSet",
        "Suv_01_Tires_Water_Slow_EXT_SoundSet",
        "Suv_01_Tires_Turn_Hard_EXT_SoundSet",
        "Suv_01_Tires_Turn_Soft_EXT_SoundSet",
        "Suv_01_Tires_Brake_Hard_EXT_SoundSet",
        "Suv_01_Tires_Brake_Soft_EXT_SoundSet"
    };
    class Idle_ext {
        sound[] = {"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_engine_idle", 0.281838, 1, 200};
        frequency = "0.9 + ((rpm/6000) factor [(400/6000), (1100/6000)]) * 0.2";
        volume = "engineOn * camPos * (((rpm/6000) factor [(200/6000), (600/6000)]) * ((rpm/6000) factor [(1100/6000), (800/6000)]))";
    };
    class Engine {
        sound[] = {"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_engine_03", 0.316228, 1, 200};
        frequency = "0.8 + ((rpm/6000) factor [(810/6000), (2000/6000)]) * 0.2";
        volume = "engineOn * camPos * (((rpm/6000) factor [(820/6000), (1100/6000)]) * ((rpm/6000) factor [(2000/6000), (1350/6000)]))";
    };
    class Engine1_ext {
        sound[] = {"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_engine_05", 0.354813, 1, 210};
        frequency = "0.8 + ((rpm/6000) factor [(1300/6000), (2700/6000)]) * 0.2";
        volume = "engineOn * camPos * (((rpm/6000) factor [(1300/6000), (2000/6000)]) * ((rpm/6000) factor [(2700/6000), (2150/6000)]))";
    };
    class Engine2_ext {
        sound[] = {"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_engine_07", 0.398107, 1, 220};
        frequency = "0.8 + ((rpm/6000) factor [(2100/6000), (3500/6000)]) * 0.2";
        volume = "engineOn * camPos * (((rpm/6000) factor [(2150/6000), (2650/6000)]) * ((rpm/6000) factor [(3550/6000), (2900/6000)]))";
    };
    class Engine3_ext {
        sound[] = {"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_engine_09", 0.446684, 1, 230};
        frequency = "0.8 + ((rpm/6000) factor [(2900/6000), (4150/6000)]) * 0.2";
        volume = "engineOn * camPos * (((rpm/6000) factor [(2900/6000), (3500/6000)]) * ((rpm/6000) factor [(4180/6000), (3700/6000)]))";
    };
    class Engine4_ext {
        sound[] = {"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_engine_11", 0.398107, 1, 240};
        frequency = "0.8 + ((rpm/6000) factor [(3700/6000), (5200/6000)]) * 0.2";
        volume = "engineOn * camPos * (((rpm/6000) factor [(3700/6000), (4100/6000)]) * ((rpm/6000) factor [(5200/6000), (4500/6000)]))";
    };
    class Engine5_ext {
        sound[] = {"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_engine_13", 0.354813, 1, 250};
        frequency = "0.95 + ((rpm/6000) factor [(4500/6000), (6000/6000)]) * 0.2";
        volume = "engineOn * camPos * ((rpm/6000) factor [(4500/6000), (5600/6000)])";
    };
    class IdleThrust {
        sound[] = {"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_exhaust_idle", 0.398107, 1, 280};
        frequency = "0.9 + ((rpm/6000) factor [(400/6000), (1100/6000)]) * 0.2";
        volume = "engineOn * camPos * (0.4 + (0.6 * (thrust factor [0.1,1]))) * (((rpm/6000) factor [(200/6000), (600/6000)]) * ((rpm/6000) factor [(1100/6000), (800/6000)]))";
    };
    class EngineThrust {
        sound[] = {"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_exhaust_03", 0.446684, 1, 300};
        frequency = "0.8 + ((rpm/6000) factor [(810/6000), (2000/6000)]) * 0.2";
        volume = "engineOn * camPos * (0.4 + (0.6 * (thrust factor [0.1,1]))) * (((rpm/6000) factor [(820/6000), (1100/6000)]) * ((rpm/6000) factor [(2000/6000), (1350/6000)]))";
    };
    class Engine1_Thrust_ext {
        sound[] = {"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_exhaust_05", 0.501187, 1, 310};
        frequency = "0.8 + ((rpm/6000) factor [(1300/6000), (2700/6000)]) * 0.2";
        volume = "engineOn * camPos * (0.4 + (0.6 * (thrust factor [0.1,1]))) * (((rpm/6000) factor [(1300/6000), (2000/6000)]) * ((rpm/6000) factor [(2700/6000), (2150/6000)]))";
    };
    class Engine2_Thrust_ext {
        sound[] = {"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_exhaust_07", 0.562341, 1, 320};
        frequency = "0.8 + ((rpm/6000) factor [(2100/6000), (3500/6000)]) * 0.2";
        volume = "engineOn * camPos * (0.4 + (0.6 * (thrust factor [0.1,1]))) * (((rpm/6000) factor [(2150/6000), (2650/6000)]) * ((rpm/6000) factor [(3550/6000), (2900/6000)]))";
    };
    class Engine3_Thrust_ext {
        sound[] = {"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_exhaust_09", 0.630957, 1, 330};
        frequency = "0.8 + ((rpm/6000) factor [(2900/6000), (4150/6000)]) * 0.2";
        volume = "engineOn * camPos * (0.4 + (0.6 * (thrust factor [0.1,1]))) * (((rpm/6000) factor [(2900/6000), (3500/6000)]) * ((rpm/6000) factor [(4180/6000), (3700/6000)]))";
    };
    class Engine4_Thrust_ext {
        sound[] = {"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_exhaust_11", 0.562341, 1, 340};
        frequency = "0.8 + ((rpm/6000) factor [(3700/6000), (5200/6000)]) * 0.2";
        volume = "engineOn * camPos * (0.4 + (0.6 * (thrust factor [0.1,1]))) * (((rpm/6000) factor [(3700/6000), (4100/6000)]) * ((rpm/6000) factor [(5200/6000), (4500/6000)]))";
    };
    class Engine5_Thrust_ext {
        sound[] = {"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_exhaust_13", 0.501187, 1, 350};
        frequency = "0.9 + ((rpm/6000) factor [(4500/6000), (6000/6000)]) * 0.2";
        volume = "engineOn * camPos * (0.4 + (0.6 * (thrust factor [0.1,1]))) * ((rpm/6000) factor [(4500/6000), (5600/6000)])";
    };
    class Idle_int {
        sound[] = {"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_engine_idle_int", 0.251189, 1};
        frequency = "0.8 + ((rpm/6000) factor [(400/6000), (1100/6000)]) * 0.2";
        volume = "engineOn * (1-camPos) * (((rpm/6000) factor [(200/6000), (600/6000)]) * ((rpm/6000) factor [(1100/6000), (800/6000)]))";
    };
    class Engine_int {
        sound[] = {"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_engine_03_int", 0.281838, 1};
        frequency = "0.8 + ((rpm/6000) factor [(810/6000), (2000/6000)]) * 0.2";
        volume = "engineOn * (1-camPos) * (((rpm/6000) factor [(820/6000), (1100/6000)]) * ((rpm/6000) factor [(2000/6000), (1350/6000)]))";
    };
    class Engine1_int {
        sound[] = {"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_engine_05_int", 0.316228, 1};
        frequency = "0.8 + ((rpm/6000) factor [(1300/6000), (2700/6000)]) * 0.2";
        volume = "engineOn * (1-camPos) * (((rpm/6000) factor [(1300/6000), (2000/6000)]) * ((rpm/6000) factor [(2700/6000), (2150/6000)]))";
    };
    class Engine2_int {
        sound[] = {"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_engine_07_int", 0.354813, 1};
        frequency = "0.8 + ((rpm/6000) factor [(2100/6000), (3500/6000)]) * 0.2";
        volume = "engineOn * (1-camPos) * (((rpm/6000) factor [(2150/6000), (2650/6000)]) * ((rpm/6000) factor [(3550/6000), (2900/6000)]))";
    };
    class Engine3_int {
        sound[] = {"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_engine_09_int", 0.398107, 1};
        frequency = "0.8 + ((rpm/6000) factor [(2900/6000), (4150/6000)]) * 0.2";
        volume = "engineOn * (1-camPos) * (((rpm/6000) factor [(2900/6000), (3500/6000)]) * ((rpm/6000) factor [(4180/6000), (3700/6000)]))";
    };
    class Engine4_int {
        sound[] = {"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_engine_11_int", 0.446684, 1};
        frequency = "0.8 + ((rpm/6000) factor [(3700/6000), (5200/6000)]) * 0.2";
        volume = "engineOn * (1-camPos) * (((rpm/6000) factor [(3700/6000), (4100/6000)]) * ((rpm/6000) factor [(5200/6000), (4500/6000)]))";
    };
    class Engine5_int {
        sound[] = {"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_engine_13_int", 0.501187, 1};
        frequency = "0.95 + ((rpm/6000) factor [(4500/6000), (6000/6000)]) * 0.2";
        volume = "engineOn * (1-camPos) * ((rpm/6000) factor [(4500/6000), (5600/6000)])";
    };
    class IdleThrust_int {
        sound[] = {"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_exhaust_idle_int", 0.354813, 1};
        frequency = "0.8 + ((rpm/6000) factor [(400/6000), (1100/6000)]) * 0.2";
        volume = "engineOn * (1-camPos) * (0.4+(0.6 * (thrust factor [0.1,1]))) * (((rpm/6000) factor [(200/6000), (600/6000)]) * ((rpm/6000) factor [(1100/6000), (800/6000)]))";
    };
    class EngineThrust_int {
        sound[] = {"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_exhaust_03_int", 0.398107, 1};
        frequency = "0.8 + ((rpm/6000) factor [(810/6000), (2000/6000)]) * 0.2";
        volume = "engineOn * (1-camPos) * (0.4+(0.6 * (thrust factor [0.1,1]))) * (((rpm/6000) factor [(820/6000), (1100/6000)]) * ((rpm/6000) factor [(2000/6000), (1350/6000)]))";
    };
    class Engine1_Thrust_int {
        sound[] = {"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_exhaust_05_int", 0.446684, 1};
        frequency = "0.8 + ((rpm/6000) factor [(1300/6000), (2700/6000)]) * 0.2";
        volume = "engineOn * (1-camPos) * (0.4+(0.6 * (thrust factor [0.1,1]))) * (((rpm/6000) factor [(1300/6000), (2000/6000)]) * ((rpm/6000) factor [(2700/6000), (2150/6000)]))";
    };
    class Engine2_Thrust_int {
        sound[] = {"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_exhaust_07_int", 0.501187, 1};
        frequency = "0.8 + ((rpm/6000) factor [(2100/6000), (3500/6000)]) * 0.2";
        volume = "engineOn * (1-camPos) * (0.4+(0.6 * (thrust factor [0.1,1]))) * (((rpm/6000) factor [(2150/6000), (2650/6000)]) * ((rpm/6000) factor [(3550/6000), (2900/6000)]))";
    };
    class Engine3_Thrust_int {
        sound[] = {"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_exhaust_09_int", 0.501187, 1};
        frequency = "0.8 + ((rpm/6000) factor [(2900/6000), (4150/6000)]) * 0.2";
        volume = "engineOn * (1-camPos) * (0.4+(0.6 * (thrust factor [0.1,1]))) * (((rpm/6000) factor [(2900/6000), (3500/6000)]) * ((rpm/6000) factor [(4180/6000), (3700/6000)]))";
    };
    class Engine4_Thrust_int {
        sound[] = {"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_exhaust_11_int", 0.562341, 1};
        frequency = "0.8 + ((rpm/6000) factor [(3700/6000), (5200/6000)]) * 0.3";
        volume = "engineOn * (1-camPos) * (0.4+(0.6 * (thrust factor [0.1,1]))) * (((rpm/6000) factor [(3700/6000), (4100/6000)]) * ((rpm/6000) factor [(5200/6000), (4500/6000)]))";
    };
    class Engine5_Thrust_int {
        sound[] = {"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_exhaust_13_int", 0.630957, 1};
        frequency = "0.9 + ((rpm/6000) factor [(4500/6000), (6000/6000)]) * 0.2";
        volume = "engineOn * (1-camPos) * (0.4+(0.6 * (thrust factor [0.1,1]))) * ((rpm/6000) factor [(4500/6000), (5600/6000)])";
    };
    class TiresRockOut {
        sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1", 0.562341, 1, 60};
        frequency = "1";
        volume = "camPos * rock * (speed factor [2, 20])";
    };
    class TiresSandOut {
        sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1", 0.562341, 1, 60};
        frequency = "1";
        volume = "camPos * sand * (speed factor [2, 20])";
    };
    class TiresGrassOut {
        sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2", 0.562341, 1, 60};
        frequency = "1";
        volume = "camPos * grass * (speed factor [2, 20])";
    };
    class TiresMudOut {
        sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2", 0.562341, 1, 60};
        frequency = "1";
        volume = "camPos * mud * (speed factor [2, 20])";
    };
    class TiresGravelOut {
        sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1", 0.562341, 1, 60};
        frequency = "1";
        volume = "camPos * gravel * (speed factor [2, 20])";
    };
    class TiresAsphaltOut {
        sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2", 0.891251, 1, 60};
        frequency = "1";
        volume = "camPos * asphalt * (speed factor [2, 20])";
    };
    class NoiseOut {
        sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3", 0.316228, 1, 90};
        frequency = "1";
        volume = "camPos * (damper0 max 0.02) * (speed factor [0, 8])";
    };
    class TiresRockIn {
        sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1", 0.446684, 1};
        frequency = "1";
        volume = "(1-camPos) * rock * (speed factor [2, 20])";
    };
    class TiresSandIn {
        sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2", 0.446684, 1};
        frequency = "1";
        volume = "(1-camPos) * sand * (speed factor [2, 20])";
    };
    class TiresGrassIn {
        sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2", 0.446684, 1};
        frequency = "1";
        volume = "(1-camPos) * grass * (speed factor [2, 20])";
    };
    class TiresMudIn {
        sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2", 0.446684, 1};
        frequency = "1";
        volume = "(1-camPos) * mud * (speed factor [2, 20])";
    };
    class TiresGravelIn {
        sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1", 0.446684, 1};
        frequency = "1";
        volume = "(1-camPos) * gravel * (speed factor [2, 20])";
    };
    class TiresAsphaltIn {
        sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2", 0.446684, 1};
        frequency = "1";
        volume = "(1-camPos) * asphalt * (speed factor [2, 20])";
    };
    class NoiseIn {
        sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3", 0.199526, 1};
        frequency = "1";
        volume = "(damper0 max 0.1) * (speed factor [0, 8]) * (1-camPos)";
    };
    class breaking_ext_road {
        sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04", 0.707946, 1, 80};
        frequency = 1;
        volume = "engineOn * camPos * asphalt * (LongSlipDrive factor [-0.15, -0.3]) * (Speed factor [2, 10])";
    };
    class acceleration_ext_road {
        sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02", 0.707946, 1, 80};
        frequency = 1;
        volume = "engineOn * camPos * asphalt * (LongSlipDrive factor [0.15, 0.3]) * (Speed factor [10, 0])";
    };
    class turn_left_ext_road {
        sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02", 0.707946, 1, 80};
        frequency = 1;
        volume = "engineOn * camPos * asphalt * (latSlipDrive factor [0.15, 0.3]) * (Speed factor [0, 10])";
    };
    class turn_right_ext_road {
        sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02", 0.707946, 1, 80};
        frequency = 1;
        volume = "engineOn * camPos * asphalt * (latSlipDrive factor [-0.15, -0.3]) * (Speed factor [0, 10])";
    };
    class breaking_ext_dirt {
        sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking", 0.707946, 1, 60};
        frequency = 1;
        volume = "engineOn * camPos * (1-asphalt) * (LongSlipDrive factor [-0.15, -0.3]) * (Speed factor [2, 10])";
    };
    class acceleration_ext_dirt {
        sound[] = {"A3\Sounds_F\vehicles\soft\noises\acceleration_dirt_ext_1", 0.707946, 1, 60};
        frequency = 1;
        volume = "engineOn * camPos * (1-asphalt) * (LongSlipDrive factor [0.15, 0.3]) * (Speed factor [10, 0])";
    };
    class turn_left_ext_dirt {
        sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt", 0.707946, 1, 60};
        frequency = 1;
        volume = "engineOn * camPos * (1-asphalt) * (latSlipDrive factor [0.15, 0.3]) * (Speed factor [0, 10])";
    };
    class turn_right_ext_dirt {
        sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt", 0.707946, 1, 60};
        frequency = 1;
        volume = "engineOn * camPos * (1-asphalt) * (latSlipDrive factor [-0.15, -0.3]) * (Speed factor [0, 10])";
    };
    class breaking_int_road {
        sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int", 0.398107, 1};
        frequency = 1;
        volume = "engineOn * asphalt * (1-camPos) * (LongSlipDrive factor [-0.1, -0.3]) * (Speed factor [1,15])";
    };
    class acceleration_int_road {
        sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", 0.398107, 1};
        frequency = 1;
        volume = "engineOn * asphalt * (1-camPos) * (LongSlipDrive factor [0.1, 0.3]) * (Speed factor [15, 1])";
    };
    class turn_left_int_road {
        sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", 0.398107, 1};
        frequency = 1;
        volume = "engineOn * asphalt * (1-camPos) * (latSlipDrive factor [0.1, 0.3]) * (Speed factor [1, 15])";
    };
    class turn_right_int_road {
        sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", 0.398107, 1};
        frequency = 1;
        volume = "engineOn * asphalt * (1-camPos) * (latSlipDrive factor [-0.1, -0.3]) * (Speed factor [1, 15])";
    };
    class breaking_int_dirt {
        sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int", 0.398107, 1};
        frequency = 1;
        volume = "engineOn * (1-asphalt) * (1-camPos) * (LongSlipDrive factor [-0.1, -0.3]) * (Speed factor [2, 15])";
    };
    class acceleration_int_dirt {
        sound[] = {"A3\Sounds_F\vehicles\soft\noises\acceleration_dirt_int_1", 0.398107, 1};
        frequency = 1;
        volume = "engineOn * (1-asphalt) * (1-camPos) * (LongSlipDrive factor [0.1, 0.3]) * (Speed factor [15, 2])";
    };
    class turn_left_int_dirt {
        sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int", 0.398107, 1};
        frequency = 1;
        volume = "engineOn * (1-asphalt) * (1-camPos) * (latSlipDrive factor [0.1, 0.3]) * (Speed factor [2, 15])";
    };
    class turn_right_int_dirt {
        sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int", 0.398107, 1};
        frequency = 1;
        volume = "engineOn * (1-asphalt) * (1-camPos) * (latSlipDrive factor [-0.1, -0.3]) * (Speed factor [2, 15])";
    };
};
