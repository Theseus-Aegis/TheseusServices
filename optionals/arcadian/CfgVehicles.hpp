class CfgVehicles {
    class Car_F;
    class CUP_SUV_Base: Car_F {
        class HitPoints;
    };

    class CUP_SUV_Unarmed_Base: CUP_SUV_Base {
        class HitPoints: HitPoints {
            class HitLFWheel;
            class HitLF2Wheel;
            class HitRFWheel;
            class HitRF2Wheel;
            class HitEngine;
            class HitBody;
            class HitGlass1;
            class HitGlass2;
            class HitGlass3;
            class HitGlass4;
        };

        class Turrets {
            class CargoTurret_09;
        };
    };

    // Base
    class CLASS(Arcadian_Base): CUP_SUV_Unarmed_Base {
        dlc = QUOTE(PREFIX);
        scope = 1;
        author = "TyroneMF, GilleeDoo";

        // Damage
        armor = 90;
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
            class HitEngine: HitEngine {
                armor = 0.5;
                passThrough = 0.3;
                explosionShielding = 0.2;
            };
            class HitBody: HitBody {
                armor = 3;
                passThrough = 1;
                explosionShielding = 1.5;
            };
            class HitGlass1: HitGlass1 {
                armor = 0.35;
                explosionShielding = 3;
                passThrough = 0;
            };
            class HitGlass2: HitGlass2 {
                armor = 0.35;
                explosionShielding = 3;
                passThrough = 0;
            };
            class HitGlass3: HitGlass3 {
                armor = 0.35;
                explosionShielding = 3;
                passThrough = 0;
            };
            class HitGlass4: HitGlass4 {
                armor = 0.35;
                explosionShielding = 3;
                passThrough = 0;
            };
        };

        accuracy = 0.35; // Increase targeting priority for AI due to more durable vehicle (default: 0.25)
        wheelDamageThreshold = 0.18; // Required to simulate runflat tires

        // Lights - Change from low yellow to LED blue.
        class Reflectors {
            class LightCarHeadL01 {
                color[] = {185, 190, 199};
                ambient[] = {6, 9, 9};
                size = 1;
                innerAngle = 100;
                outerAngle = 179;
                coneFadeCoef = 10;
                intensity = 15;
                useFlare = 1;
                flareSize = 1.5;
                dayLight = 0;
                position = "LightCarHeadL01";
                direction = "LightCarHeadL01_end";
                hitpoint = "Light_L";
                selection = "Light_L";
                class Attenuation {
                    start = 1;
                    constant = 0;
                    linear = 0;
                    quadratic = 0.25;
                    hardLimitStart = 30;
                    hardLimitEnd = 60;
                };
            };
            class LightCarHeadL02: LightCarHeadL01 {
                position = "LightCarHeadL02";
                direction = "LightCarHeadL02_end";
                hitpoint = "Light_L2";
                selection = "Light_L2";
            };
            class LightCarHeadR01: LightCarHeadL01 {
                position = "LightCarHeadR01";
                direction = "LightCarHeadR01_end";
                hitpoint = "Light_R";
                selection = "Light_R";
            };
			class LightCarHeadR02: LightCarHeadR01 {
                position = "LightCarHeadR02";
                direction = "LightCarHeadR02_end";
                hitpoint = "Light_R2";
                selection = "Light_R2";
            };
        };

        // Sound
        soundEngineOnInt[] = {"A3\Sounds_F\vehicles2\soft\Mrap_01\Mrap_01_Engine_Int_Start", 0.63, 1};
        soundEngineOnExt[] = {"A3\Sounds_F\vehicles2\soft\Mrap_01\Mrap_01_Engine_Ext_Start", 1.99, 1, 50};
        soundEngineOffInt[] = {"A3\Sounds_F\vehicles2\soft\Mrap_01\Mrap_01_Engine_Int_stop", 0.5, 1};
        soundEngineOffExt[] = {"A3\Sounds_F\vehicles2\soft\Mrap_01\Mrap_01_Engine_Ext_stop", 1.99, 1, 50};

        #include "sounds.hpp"

        // Driving (source: Vanilla Hunter)
        thrustDelay = 0.1;
        brakeIdleSpeed = 1.78;
        maxSpeed = 200;
        idleRpm = 800;
        redRpm = 4500;

        class complexGearbox {
            gearboxRatios[] = {
                "R1", -4,
                "N", 0,
                "D1", "4.5 * (0.58 ^ 0)",
                "D2", "4.2 * (0.58 ^ 1)",
                "D3", "4.0 * (0.58 ^ 2)",
                "D4", "3.8 * (0.58 ^ 3)",
                "D5", "3.6 * (0.59 ^ 4)",
                "D6", "3.4 * (0.6 ^ 5)"
            };
            transmissionRatios[] = {"High", 5.539};
            gearUpMaxCoef = 0.95;
            gearDownMaxCoef = 0.85;
            gearUpMinCoef = 0.65;
            gearDownMinCoef = 0.55;
            transmissionDelay = 2;
        };

        enginePower = 150;
        maxOmega = 450;
        peakTorque = 425;
        dampingRateFullThrottle = 0.08;
        dampingRateZeroThrottleClutchEngaged = 0.5;
        dampingRateZeroThrottleClutchDisengaged = 0.35;
        torqueCurve[] = {
            {"(0/3500)", "(0/425)"},
            {"(500/3500)", "(200/425)"},
            {"(1500/3500)", "(405/425)"},
            {"(2000/3500)", "(425/425)"},
            {"(2500/3500)", "(350/425)"},
            {"(3000/3500)", "(300/425)"},
            {"(6000/3500)", "(0/425)"}
        };
        changeGearMinEffectivity[] = {0.95, 0.15, 0.95, 0.95, 0.95, 0.95, 0.95}; // Default: {1, 0.15000001, 1, 1, 1, 1, 1, 1}
        switchTime = 0.31;
        latency = 1.5;
        maxFordingDepth = 1.25;

        // Turrets (remove side mounts, keep rear gunner)
        class Turrets: Turrets {
            class CargoTurret_09: CargoTurret_09 {};
        };

        // Increase cargo space (default: 4)
        ace_cargo_space = 6;
    };


    // Public
    class CLASS(Arcadian_I_Black): CLASS(Arcadian_Base) {
        scope = 2;
        scopeCurator = 2;
        forceInGarage = 1;
        side = 2;
        faction = QCLASS(IND);
        displayName = CSTRING(Black);
        editorPreview = QPATHTOF(ui\Arcadian.jpg);
        crew = QCLASS(Unit_I_Contractor);
        typicalCargo[] = {QCLASS(Unit_I_Contractor)};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\arcadian_body_black_co.paa)
        };
    };
    class CLASS(Arcadian_B_Black): CLASS(Arcadian_I_Black) {
        scope = 2;
        forceInGarage = 0;
        side = 1;
        faction = QCLASS(BLU);
        crew = QCLASS(Unit_B_Contractor);
        typicalCargo[] = {QCLASS(Unit_B_Contractor)};
    };

    class CLASS(Arcadian_I_Tan): CLASS(Arcadian_I_Black) {
        scope = 2;
        displayName = CSTRING(Tan);
        editorPreview = QPATHTOF(ui\Arcadian_Tan.jpg);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\arcadian_body_tan_co.paa)
        };
    };
    class CLASS(Arcadian_B_Tan): CLASS(Arcadian_I_Tan) {
        scope = 2;
        forceInGarage = 0;
        side = 1;
        faction = QCLASS(BLU);
        crew = QCLASS(Unit_B_Contractor);
        typicalCargo[] = {QCLASS(Unit_B_Contractor)};
    };

    class CLASS(Arcadian_I_Green): CLASS(Arcadian_I_Black) {
        scope = 2;
        displayName = CSTRING(Green);
        editorPreview = QPATHTOF(ui\Arcadian_Green.jpg);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\arcadian_body_green_co.paa)
        };
    };
    class CLASS(Arcadian_B_Green): CLASS(Arcadian_I_Green) {
        scope = 2;
        forceInGarage = 0;
        side = 1;
        faction = QCLASS(BLU);
        crew = QCLASS(Unit_B_Contractor);
        typicalCargo[] = {QCLASS(Unit_B_Contractor)};
    };
};
