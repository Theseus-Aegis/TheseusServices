class Car;
class Car_F: Car {
    class AnimationSources;
    class NewTurret;
    class Turrets {
        class MainTurret: NewTurret {
            class ViewOptics;
        };
    };
    class HitPoints {
        class HitRGlass;
        class HitLGlass;
        class HitGlass1;
        class HitGlass2;
        class HitGlass3;
        class HitGlass4;
        class HitGlass5;
        class HitGlass6;
        class HitBody;
        class HitFuel;
        class HitEngine;
        class HitLFWheel;
        class HitLF2Wheel;
        class HitRFWheel;
        class HitRF2Wheel;
    };
    class EventHandlers;
    class CargoTurret;
};
// Unarmed Base
class CLASS(Arcadian_Base): Car_F {
    htMin = 60;
    htMax = 1800;
    afMax = 200;
    mfMax = 100;
    mFact = 1;
    tBody = 200;
    model = QPATHTOF(armoredSUV_PMC.p3d);
    icon = QPATHTOF(ui\Icon_suv_minigun_PMC.paa);
    picture = QPATHTOF(ui\Picture_suv_minigun_PMC_ca.paa);
    mapSize = 7;
    accuracy = 0.2;
    armor = 80;
    damageResistance = 0.00555;
    transportMaxWeapons = 5000;
    transportMaxMagazines = 20000;
    driverLeftHandAnimName = "drivewheel";
    driverRightHandAnimName = "drivewheel";
    transportSoldier = 5;
    driverCompartments = "Compartment1";
    cargoCompartments[] = {"Compartment1"};
    weapons[] = {"SportCarHorn"};
    driverAction = "Driver_low01";
    cargoAction[] = {"SUV_Cargo_EP1", "SUV_Cargo02_EP1", "SUV_Cargo01_EP1"};
    outsideSoundFilter = 1;
    hiddenSelections[] = {"Camo1", "Camo2"};

    #include "config_sound.hpp"
    #include "config_physx.hpp"

    class Damage {
        tex[] = {};
        mat[] = {
            QPATHTOR(data\suv_body.rvmat),
            QPATHTOR(data\suv_body_damage.rvmat),
            QPATHTOR(data\suv_body_destruct.rvmat),

            QPATHTOR(data\suv_chrom.rvmat),
            QPATHTOR(data\suv_chrom_damage.rvmat),
            QPATHTOR(data\suv_chrom_destruct.rvmat),

            QPATHTOR(data\suv_glass.rvmat),
            QPATHTOR(data\suv_glass_damage.rvmat),
            QPATHTOR(data\suv_glass_destruct.rvmat),

            "a3\data_f\default.rvmat",
            "a3\data_f\default.rvmat",
            "a3\data_F\default_destruct.rvmat"
        };
    };
    class SimpleObject {
        animate[] = {
            {"damageHide", 0},
            {"damageHideVez", 0},
            {"damageHideHlaven", 0},
            {"wheel_1_1_destruct", 0},
            {"wheel_1_2_destruct", 0},
            {"wheel_1_3_destruct", 0},
            {"wheel_1_4_destruct", 0},
            {"wheel_2_1_destruct", 0},
            {"wheel_2_2_destruct", 0},
            {"wheel_2_3_destruct", 0},
            {"wheel_2_4_destruct", 0},
            {"wheel_1_1_destruct_unhide", 0},
            {"wheel_1_2_destruct_unhide", 0},
            {"wheel_1_3_destruct_unhide", 0},
            {"wheel_1_4_destruct_unhide", 0},
            {"wheel_2_1_destruct_unhide", 0},
            {"wheel_2_2_destruct_unhide", 0},
            {"wheel_2_3_destruct_unhide", 0},
            {"wheel_2_4_destruct_unhide", 0},
            {"wheel_1_3_Damage", 0},
            {"wheel_1_4_Damage", 0},
            {"wheel_2_3_Damage", 0},
            {"wheel_2_4_Damage", 0},
            {"wheel_1_3_Damper_Damage_BackAnim", 0},
            {"wheel_1_4_Damper_Damage_BackAnim", 0},
            {"wheel_2_3_Damper_Damage_BackAnim", 0},
            {"wheel_2_4_Damper_Damage_BackAnim", 0},
            {"Glass1_destruct", 0},
            {"Glass2_destruct", 0},
            {"Glass3_destruct", 0},
            {"Glass4_destruct", 0},
            {"Glass5_destruct", 0},
            {"Glass6_destruct", 0},
            {"Wheel_1_1", 0},
            {"wheel_2_1", 0},
            {"wheel_1_2", 0},
            {"Wheel_2_2", 0},
            {"daylights", 0},
            {"reverse_light", 1},
            {"pedal_thrust", 0},
            {"pedal_brake", 1},
            {"wheel_1_1_Damage", 0},
            {"wheel_1_2_Damage", 0},
            {"wheel_2_1_Damage", 0},
            {"wheel_2_2_Damage", 0},
            {"wheel_1_1_Damper_Damage_BackAnim", 0},
            {"wheel_1_2_Damper_Damage_BackAnim", 0},
            {"wheel_2_1_Damper_Damage_BackAnim", 0},
            {"wheel_2_2_Damper_Damage_BackAnim", 0},
            {"DrivingWheel", 0},
            {"Steering_1_1", 0},
            {"Steering_2_1", 0},
            {"IndicatorSpeed", 0.0012},
            {"IndicatorRPM", 0},
            {"fuel", 1},
            {"Hidedoor1", 0},
            {"Hidedoor2", 0},
            {"Hidedoor3", 0},
            {"Hidedoor4", 0},
            {"Hidedoor5", 0},
            {"Hidedoor6", 0},
            {"Wheel_1_1_Damper", 0.5007},
            {"wheel_2_1_Damper", 0.6},
            {"wheel_1_2_Damper", 0.5954},
            {"Wheel_2_2_Damper", 0.6963},
            {"Display_off_hide", 0}
        };
        hide[] = {"clan", "zasleh"};
        verticalOffset = -0.00731516;
    };
    class AcreIntercoms {};
    class AcreRacks {};
    class CargoTurret;
    class Turrets: Turrets {
        class CargoTurret_1: CargoTurret {
            minElev = -10;
            maxElev = 23;
            maxTurn = 130;
            minTurn = 25;
            gunnerAction = "passenger_flatground_2";
            gunnerName = "$STR_A3_REAR_GUNNER";
            proxyIndex = 6;
            LODTurnedIn = 6;
            LODOpticsIn = 1000;
            LODTurnedOut = 1000;
            LODOpticsOut = 1000;
            isPersonTurret = 1;
            memoryPointsGetInGunner = "pos cargo rear";
            memoryPointsGetInGunnerDir = "pos cargo dir rear";
            memoryPointGunnerOptics = "";
            gunnerOutOpticsModel = "";
            gunnerOpticsModel = "";
            enabledByAnimationSource = "reardoor_2_source";
            usepip = 0;
            ejectDeadGunner = 1;
            startEngine = 0;
            outGunnerMayFire = 1;
            inGunnerMayFire = 0;
            commanding = -2;
            gunnerCompartments = "Compartment1";
        };
    };
    class AnimationSources: AnimationSources {
        class gun_hide_source {
            source = "user";
            animPeriod = 0;
            initPhase = 1;
            displayName = "Hide Turret";
            onPhaseChanged = "_this call tacs_arcadian_fnc_toggleGun";
        };
        class CloseCover {
            source = "user";
            initPhase = 0;
            animPeriod = 1.2;
        };
        class BeaconsStart {
            source = "user";
            animPeriod = 0;
            initPhase = 1;
            displayName = "Start Beacon Lights";
        };
        class reardoor_source {
            source = "door";
            animPeriod = 1;
            initPhase = 0;
            sound = "PlasticDoorsSound";
            displayName = "Rear Door";
        };
        class reardoor_2_source: reardoor_source {
            displayName = "Rear Door Window";
        };
        class ram_hide_source {
            source = "user";
            animPeriod = 0;
            initPhase = 0;
            displayName = "Hide Pushbar";
        };
        class lightbar_hide_source {
            source = "user";
            animPeriod = 0;
            initPhase = 1;
            displayName = "Hide Beacon Lights (Unmarked)";
        };
        class roofbar_hide_source {
            source = "user";
            animPeriod = 0;
            initPhase = 0;
            displayName = "Hide Roofbar";
        };
        class antenna_hide_source {
            source = "user";
            animPeriod = 0;
            initPhase = 0;
            displayName = "Hide Front Antenna";
        };
        class rearseats_source {
            source = "user";
            animPeriod = 1;
            initPhase = 0;
            displayName = "Fold Rear Seats";
            lockCargo[] = {4, 5};
            lockCargoAnimationPhase = 1;
            useSource = 1;
        };
    };
    class UserActions {
        class Openreardoor {
            displayName = "Open Rear Door";
            displayNameDefault = "";
            position = "reardoor_mem";
            radius = 0.8;
            onlyForplayer = 0;
            priority = 1;
            condition = "this doorPhase ""reardoor_source"" < 0.5 && this doorPhase ""reardoor_2_source"" < 0.5";
            statement = "this animateDoor [""reardoor_source"",1];";
        };
        class Closereardoor {
            displayName= "Close Rear Door";
            displayNameDefault     = "";
            position="reardoor_mem";
            radius = 0.8;
            onlyForplayer = 0;
            priority = 1;
            condition = "this doorPhase ""reardoor_source"" > 0.5 && this doorPhase ""reardoor_2_source"" < 0.5";
            statement = "this animateDoor [""reardoor_source"",0];";
        };
        class Openrearwindow {
            displayName = "Open Rear Window";
            displayNameDefault = "";
            position = "";
            radius = 3.7;
            onlyForplayer = 0;
            priority = 10;
            condition = "this doorPhase ""reardoor_source"" < 0.5 && this doorPhase ""reardoor_2_source"" < 0.5 && ((this getCargoIndex player) isEqualTo 0)";
            statement = "this animateDoor [""reardoor_2_source"",1];";
        };
        class Closerearwindow {
            displayName = "Close Rear Window";
            displayNameDefault = "";
            position = "";
            radius = 3.7;
            onlyForplayer = 0;
            priority = 10;
            condition = "this doorPhase ""reardoor_source"" < 0.5 && this doorPhase ""reardoor_2_source"" > 0.5 && ((this getCargoIndex player) isEqualTo 0)";
            statement = "this animateDoor [""reardoor_2_source"",0];";
        };
    };
    class Reflectors {
        class Light_L {
            color[] = {185, 190, 199};
            ambient[] = {5, 5, 5};
            position = "Light_L";
            direction = "Light_L Dir";
            hitpoint = "Light_L";
            selection = "Light_L";
            size = 1;
            innerAngle = 30;
            outerAngle = 179;
            coneFadeCoef = 5;
            intensity = 15;
            useFlare = 1;
            dayLight = 0;
            flareSize = 2.5;
            flareMaxDistance = 90;
            class Attenuation {
                start = 1;
                constant = 0;
                linear = 0;
                quadratic = 0.25;
                hardLimitStart = 10;
                hardLimitEnd = 120;
            };
        };
        class Light_R: Light_L {
            position = "Light_R";
            direction = "Light_R_Dir";
            hitpoint = "Light_R";
            selection = "Light_R";
        };
        class Light_L2: Light_L {
            intensity = 0;
            size = 0;
            position = "Light_L2";
            direction = "Light_L2 Dir";
        };
        class Light_R2: Light_R {
            intensity = 0;
            size = 0;
            position = "Light_R2";
            direction = "Light_R2_Dir";
        };
    };
    aggregateReflectors[] = {
        {"Light_L", "Light_L2"},
        {"Light_R", "Light_R2"}
    };
    selectionBackLights = "lights_running";
    selectionBrakeLights = "lights_brake";
    class Exhausts {
        class Exhaust1 {
            position = "exhaust_1";
            direction = "exhaust_1_dir";
            effect = "ExhaustsEffect";
        };
    };
    class RenderTargets {
        class LeftMirror {
            renderTarget = "rendertarget0";
            class CameraView1 {
                pointPosition = "PIP0_pos";
                pointDirection = "PIP0_dir";
                renderQuality = 2;
                renderVisionMode = 4;
                fov = 0.7;
            };
        };
        class RightMirror {
            renderTarget = "renderTarget1";
            class CameraView1 {
                pointPosition = "PIP1_pos";
                pointDirection = "PIP1_dir";
                renderQuality = 2;
                renderVisionMode = 4;
                fov = 0.7;
            };
        };
        class RearCamera {
            renderTarget = "rendertarget2";
            class CameraView1 {
                pointPosition = "pip2_pos";
                pointDirection = "pip2_dir";
                renderQuality = 2;
                renderVisionMode = 4;
                fov = 0.7;
            };
        };
    };
    class HitPoints: HitPoints {
        class HitLFWheel: HitLFWheel {
            armor = 1;
            passThrough = 0;
            explosionShielding = 2;
        };
        class HitLF2Wheel: HitLF2Wheel {
            armor = 1;
            passThrough = 0;
            explosionShielding = 2;
        };
        class HitRFWheel: HitRFWheel {
            armor = 1;
            passThrough = 0;
            explosionShielding = 2;
        };
        class HitRF2Wheel: HitRF2Wheel {
            armor = 1;
            passThrough = 0;
            explosionShielding = 2;
        };
        class HitFuel: HitFuel {
            armor = 2;
            material = -1;
            name = "palivo";
            visual = "";
            passThrough = 0.2;
        };
        class HitEngine: HitEngine {
            armor = 2;
            material = 60;
            name = "engine";
            visual = "";
            passThrough = 0.3;
            explosionShielding = 0.2;
        };
        class HitBody: HitBody {
            armor = 5;
            name = "karoserie";
            visual = "zbytek";
            passThrough = 1;
            radius = 0.45;
            explosionShielding = 1.5;
        };
        class HitGlass1: HitGlass1 {
            armor = 0.4;
            explosionShielding = 0.5;
            minimalHit = 0.1;
            name = "glass1";
            passThrough = 0;
            radius = 0.11;
            visual = "glass1";
        };
        class HitGlass2: HitGlass1 {
            armor = 0.4;
            explosionShielding = 0.5;
            minimalHit = 0.1;
            name = "glass2";
            passThrough = 0;
            radius = 0.11;
            visual = "glass2";
        };
        class HitGlass3: HitGlass1 {
            armor = 0.4;
            explosionShielding = 0.5;
            minimalHit = 0.1;
            name = "glass3";
            passThrough = 0;
            radius = 0.11;
            visual = "glass3";
        };
        class HitGlass4: HitGlass1 {
            armor = 0.4;
            explosionShielding = 0.5;
            minimalHit = 0.1;
            name = "glass4";
            passThrough = 0;
            radius = 0.11;
            visual = "glass4";
        };
        class HitGlass5: HitGlass1 {
            armor = 0.4;
            explosionShielding = 0.5;
            minimalHit = 0.1;
            name = "glass5";
            passThrough = 0;
            radius = 0.11;
            visual = "glass5";
        };
        class HitGlass6: HitGlass1 {
            armor = 0.4;
            explosionShielding = 0.5;
            minimalHit = 0.1;
            name = "glass6";
            passThrough = 0;
            radius = 0.11;
            visual = "glass6";
        };
        class HitGlass7: HitGlass1 {
            armor = 0.4;
            explosionShielding = 0.5;
            minimalHit = 0.1;
            name = "glass7";
            passThrough = 0;
            radius = 0.11;
            visual = "glass7";
        };
        class HitGlass8: HitGlass1 {
            armor = 0.4;
            explosionShielding = 0.5;
            minimalHit = 0.1;
            name = "glass8";
            passThrough = 0;
            radius = 0.11;
            visual = "glass8";
        };
    };
    class Library {
        libTextDesc = $STR_PMC_LIB_ARMOREDSUV;
    };

    maxFordingDepth = 1.25;
    ace_cargo_space = 6;

    class textureSources {
        class Black {
            displayName = CSTRING(Black);
            textures[] = {
                QPATHTOF(data\arcadian_body_black_co.paa),
                QPATHTOF(data\arcadian_interier_co.paa)
            };
            materials[] = {
                QPATHTOF(data\suv_body.rvmat),
                QPATHTOF(data\suv_interier.rvmat)
            };
            factions[] = {};
        };
        class Tan {
            displayName = CSTRING(Tan);
            textures[] = {
                QPATHTOF(data\arcadian_body_tan_co.paa),
                QPATHTOF(data\arcadian_interier_co.paa)
            };
            materials[] = {
                QPATHTOF(data\suv_body.rvmat),
                QPATHTOF(data\suv_interier.rvmat)
            };
            factions[] = {};
        };
        class Green {
            displayName = CSTRING(Green);
            textures[] = {
                QPATHTOF(data\arcadian_body_green_co.paa),
                QPATHTOF(data\arcadian_interier_co.paa)
            };
            materials[] = {
                QPATHTOF(data\suv_body.rvmat),
                QPATHTOF(data\suv_interier.rvmat)
            };
            factions[] = {};
        };
        class Grey {
            displayName = CSTRING(Grey);
            textures[] = {
                QPATHTOF(data\arcadian_body_grey_co.paa),
                QPATHTOF(data\arcadian_interier_co.paa)
            };
            materials[] = {
                QPATHTOF(data\suv_body.rvmat),
                QPATHTOF(data\suv_interier.rvmat)
            };
            factions[] = {};
        };
    };
    textureList[] = {};
};

// Armed Base
class CLASS(Arcadian_Armed_Base): CLASS(Arcadian_Base) {
    class Turrets: Turrets {
        class MainTurret: MainTurret {
            body = "mainTurret";
            gun = "mainGun";
            viewGunnerInExternal = 1;
            minElev = -30;
            maxElev = 45;
            initElev = 0;
            soundServo[] = {"", db-40, 1.0};
            stabilizedInAxes = "StabilizedInAxesBoth";
            gunBeg = "muzzle_1";
            gunEnd = "chamber_1";
            weapons[] = {QCLASS(LMG_Minigun_SUV)};
            maxHorizontalRotSpeed = 1.8;
            maxVerticalRotSpeed = 1.8;
            magazines[] = {"2000Rnd_65x39_Belt_Tracer_Red"};
            gunnerRightHandAnimName = "OtocHlavenSUV";
            gunnerLeftHandAnimName = "OtocHlavenSUV";
            animationSourceHatch = "close_cover_source";
            gunnerInAction = "ArmoredSUV_GunnerTurnIn_PMC"; //ArmoredSUV_GunnerIn_PMC
            gunnerAction = "ArmoredSUV_GunnerTurnOut_PMC"; //ArmoredSUV_Gunner_PMC
            gunnerOpticsModel = "";
            gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
            memoryPointGunnerOutOptics = "gunnerview";
            memoryPointGunnerOptics = "";
            memoryPointsGetInGunner = "pos cargo rear";
            memoryPointsGetInGunnerDir = "pos cargo dir rear";
            outGunnerMayFire = 1;
            startEngine = 0;
            inGunnerMayFire = 0;
            LODTurnedIn = 1000;
            LODOpticsIn = 1000;
            LODTurnedOut = 1000;
            LODOpticsOut = 1000;
            canhideGunner = 1;
            castGunnerShadow = 1;
            hideProxyInCombat = 0;
            forceHideGunner = 0;
            gunnerCompartments = "Compartment1";
            class ViewOptics: ViewOptics {
                minFov = 0.25;
                maxFov = 1.25;
                initFov = 0.75;
            };
            class ViewGunner: ViewOptics {};
        };
    };

    class Damage {
        tex[] = {};
        mat[] = {
            QPATHTOR(data\suv_armouredbody.rvmat),
            QPATHTOR(data\suv_armouredbody_damage.rvmat),
            QPATHTOR(data\suv_armouredbody_destruct.rvmat),

            QPATHTOR(data\suv_chrom.rvmat),
            QPATHTOR(data\suv_chrom_damage.rvmat),
            QPATHTOR(data\suv_chrom_destruct.rvmat),

            QPATHTOR(data\suv_glass.rvmat),
            QPATHTOR(data\suv_glass_damage.rvmat),
            QPATHTOR(data\suv_glass_destruct.rvmat),

            "a3\data_f\default.rvmat",
            "a3\data_f\default.rvmat",
            "a3\data_F\default_destruct.rvmat"
        };
    };

    class AnimationSources: AnimationSources {
        class Revolving {
            source = "revolving";
            weapon = QCLASS(LMG_Minigun_SUV);
        };
        class gun_hide_source {
            source = "user";
            animPeriod = 0;
            initPhase = 0;
            displayName = "Hide Turret";
            onPhaseChanged = "_this call tacs_arcadian_fnc_toggleGun";
        };
        class rearseats_source {
            source = "user";
            animPeriod = 1;
            initPhase = 1;
            displayName = "Fold Rear Seats";
            lockCargo[] = {4, 5};
            lockCargoAnimationPhase = 1;
            useSource = 1;
        };
    };
};
