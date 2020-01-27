#include "script_component.hpp"

class CfgPatches {
    class TACGT_SUV {
        name = COMPONENT_NAME;
        units[] = { "TACGT_Arcadian_B_SUV", "TACGT_Arcadian_I_SUV" };
        weapons[] = { };
        requiredVersion = 0.1;
        requiredAddons[] = { "tacs_main", "CUP_WheeledVehicles_Core", "CUP_Wheeled_SUV" };
    };
        VERSION_CONFIG;
};

class CfgVehicles {

class Car_F;
class CUP_SUV_Base: Car_F { 
    class HitPoints {
    class HitLFWheel;
    class HitLF2Wheel;
    class HitRFWheel;
    class HitRF2Wheel;
    class HitEngine;
    class HitFuel;
    class HitBody;
    class HitGlass1;
    class HitGlass2;
    class HitGlass3;
    class HitGlass4;
    };
    
    class NewTurret;
    class Turrets {
        class MainTurret: NewTurret {
            class HitPoints;
        };
    };
    class Eventhandlers;
    class AnimationSources;
};

class CUP_SUV_Unarmed_Base: CUP_SUV_Base {
    class AnimationSources: AnimationSources {
        class rear_window_source {
        source = "door";
        initPhase = 0;
        animPeriod = 1;
        };
    };
};

class TACGT_SUV_Base: CUP_SUV_Unarmed_Base {
    armor = 90;
    crewCrashProtection = 0.25;
    displayName = "GT SUV Base";
    hiddenSelections[] = { "camo" };
    HiddenSelectionsTextures[] = { "\x\tacs\addons\arcadian\data\arcadian_body_black_co.paa" };
    // Damage & Hitpoints
        class HitPoints: HitPoints {
        class HitLFWheel: HitLFWheel {
        armor = -200;
        explosionShielding = 2;
        passThrough = 0;
        radius = 0.33000001;
        };
        class HitLF2Wheel: HitLF2Wheel {
        armor = -200;
        explosionShielding = 2;
        passThrough = 0;
        radius = 0.33000001;
        };
        class HitRFWheel: HitRFWheel {
        armor = -200;
        explosionShielding = 2;
        passThrough = 0;
        radius = 0.33000001;
        };
        class HitRF2Wheel: HitRF2Wheel {
        armor = -200;
        explosionShielding = 2;
        passThrough = 0;
        radius = 0.33000001;
        };
        class HitEngine: HitEngine {
        armor = 0.5;
        material = -1;
        name = "engine";
        visual = "-";
        passThrough = 0.30000001;
        explosionShielding = 0.2;
        };
        class HitBody: HitBody {
        armor = 3;
        material = -1;
        name = "body";
        visual = "camo";
        passThrough = 1;
        explosionShielding = 1.5;
        radius = 0.44999999;
        };
        class HitGlass1: HitGlass1 {
        armor = 1;
        explosionShielding = 3;
        radius = 0.5;
        passThrough = 0;
        };
        class HitGlass2: HitGlass2 {
        armor = 1;
        explosionShielding = 3;
        radius = 0.5;
        passThrough = 0;
        };
        class HitGlass3: HitGlass3 {
        armor = 1;
        explosionShielding = 3;
        radius = 0.5;
        passThrough = 0;
        };
        class HitGlass4: HitGlass4 {
        armor = 1;
        explosionShielding = 3;
        radius = 0.5;
        passThrough = 0;
        };
    };
    wheelDamageThreshold = 0.18000001;
    wheelDamageRadiusCoef = 0.75;
    wheelDestroyRadiusCoef = 0.47999999;
    soundEngineOnInt[] = { "A3\Sounds_F\vehicles2\soft\Mrap_01\Mrap_01_Engine_Int_Start",0.630957,1 };
    soundEngineOnExt[] = { "A3\Sounds_F\vehicles2\soft\Mrap_01\Mrap_01_Engine_Ext_Start",1.99526,1,50 };
    soundEngineOffInt[] = { "A3\Sounds_F\vehicles2\soft\Mrap_01\Mrap_01_Engine_Int_stop",0.501187,1 };
    soundEngineOffExt[] = { "A3\Sounds_F\vehicles2\soft\Mrap_01\Mrap_01_Engine_Ext_stop",1.99526,1,50 };

#include "sounds.hpp"

    thrustDelay = 0.1;
    brakeIdleSpeed = 1.78;
    maxSpeed = 200;
    fuelCapacity = 45;
    wheelCircumference = 2.8050001;
    antiRollbarForceCoef = 1.9;
    antiRollbarForceLimit = 5;
    antiRollbarSpeedMin = 10;
    antiRollbarSpeedMax = 150;
    idleRpm = 800;
    redRpm = 4500;

    class complexGearbox {
        GearboxRatios[] = { "R1",-4,"N",0,"D1","4.5*(0.58^0)","D2","4.2*(0.58^1)","D3","4.0*(0.58^2)","D4","3.8*(0.58^3)","D5","3.6*(0.59^4)","D6","3.4*(0.6^5)" };
        TransmissionRatios[] = { "High",5.539 };
        gearBoxMode = "auto";
        moveOffGear = 1;
        driveString = "D";
        neutralString = "N";
        reverseString = "R";
        gearUpMaxCoef = 0.94999999;
        gearDownMaxCoef = 0.85000002;
        gearUpMinCoef = 0.64999998;
        gearDownMinCoef = 0.55000001;
        transmissionDelay = 2;
    };

    simulation = "carx";
    dampersBumpCoef = 3;
    differentialType = "all_limited";
    frontRearSplit = 0.5;
    frontBias = 1.5;
    rearBias = 1.5;
    centreBias = 1.3;
    clutchStrength = 20;
    enginePower = 150;
    maxOmega = 450;
    peakTorque = 425;
    dampingRateFullThrottle = 0.079999998;
    dampingRateZeroThrottleClutchEngaged = 0.5;
    dampingRateZeroThrottleClutchDisengaged = 0.34999999;
    torqueCurve[] = { { "(0/3500)","(0/425)" }, { "(500/3500)","(200/425)" }, { "(1500/3500)","(405/425)" }, { "(2000/3500)","(425/425)" }, { "(2500/3500)","(350/425)" }, { "(3000/3500)","(300/425)" }, { "(6000/3500)","(0/425)" } };
    changeGearMinEffectivity[] = {0.94999999,0.15000001,0.94999999,0.94999999,0.94999999,0.94999999,0.94999999}; // Default {1,0.15000001,1,1,1,1,1,1};
    switchTime =  0.31;
    latency =  1.5;

    class Wheels {
        class LF {
        boneName = "wheel_1_1_damper";
        steering = 1;
        side = "left";
        center = "wheel_1_1_axis";
        boundary = "wheel_1_1_bound";
        width = "0.2";
        mass = 30;
        MOI = 6;
        dampingRate =  1;
        dampingRateDamaged = 5;
        dampingRateInAir = 0.80000001;
        dampingRateDestroyed = 5000;
        maxBrakeTorque = 2000;
        maxHandBrakeTorque = 0;
        suspTravelDirection[] = {0,-1,0};
        suspForceAppPointOffset = "wheel_1_1_axis";
        tireForceAppPointOffset = "wheel_1_1_axis";
        maxCompression = 0.1;
        maxDroop = 0.050000001;
        sprungMass = 400;
        springStrength = 14400;
        springDamperRate = "1920*2";
        longitudinalStiffnessPerUnitGravity = 10000;
        latStiffX = 2.5;
        latStiffY = 18;
        frictionVsSlipGraph[] = { {0,1.75},{0.5,1.35},{1,1.2} };
        };
        class LR: LF {
        boneName = "wheel_1_2_damper";
        steering = 0;
        center = "wheel_1_2_axis";
        boundary = "wheel_1_2_bound";
        suspForceAppPointOffset = "wheel_1_2_axis";
        tireForceAppPointOffset = "wheel_1_2_axis";
        maxHandBrakeTorque = 3000;
        frictionVsSlipGraph[] = { {0,2},{0.5,1.53},{1,1.36} };
        };
        class RF: LF {
        boneName = "wheel_2_1_damper";
        center = "wheel_2_1_axis";
        boundary = "wheel_2_1_bound";
        suspForceAppPointOffset = "wheel_2_1_axis";
        tireForceAppPointOffset = "wheel_2_1_axis";
        steering = 1;
        side = "right";
        };
        class RR: RF {
        boneName = "wheel_2_2_damper";
        steering = 0;
        center = "wheel_2_2_axis";
        boundary = "wheel_2_2_bound";
        suspForceAppPointOffset = "wheel_2_2_axis";
        tireForceAppPointOffset = "wheel_2_2_axis";
        maxHandBrakeTorque = 3000;
        frictionVsSlipGraph[] = { {0,2.3},{0.5,2.0999999},{1,2} };
        };
    };
    ace_refuel_fuelCapacity = 60;

    class CargoTurret;
    class Turrets: Turrets {
    delete CargoTurret_03;
    delete CargoTurret_04;
    delete CargoTurret_05;
    delete CargoTurret_06;
    delete CargoTurret_07;
    delete CargoTurret_08;
        class CargoTurret_09: CargoTurret {
        minElev = -10;
        maxElev = 18;
        maxTurn = -10;
        minTurn = -110;
        gunnerAction = "passenger_boat_4";
        gunnerName = "Rear Gunner";
        proxyIndex = 13;
        isPersonTurret = 1;
        memoryPointsGetInGunner = "pos cargo rear";
        memoryPointsGetInGunnerDir = "pos cargo dir rear";
        memoryPointGunnerOptics = "";
        gunnerOutOpticsModel = "";
        gunnerOpticsModel = "";
        enabledByAnimationSource = "rear_window_source";
        usepip = 0;
        startEngine = 0;
        outGunnerMayFire = 1;
        inGunnerMayFire = 0;
        commanding = -2;
        };
    };
};

    class CLASS(Arcadian_B_SUV): TACGT_SUV_Base {
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    displayName = "G&T Armory Arcadian Black";
    crew = "tacs_Unit_B_Contractor";
    typicalCargo[] = { "Unit_B_Contractor" };
    side = 1;
    faction = "TACS_BLU";
    HiddenSelectionsTextures[] = { "\x\tacs\addons\arcadian\data\arcadian_body_black_co.paa" };
    accuracy = 0.5;
    author = "Tyrone, Gilleedoo";
    editorPreview = "\x\tacs\addons\arcadian\ui\Arcadian_B_SUV.jpg";
    class TransportWeapons { };
    class TransportMagazines { };
    maximumLoad = 2500;
    class TransportItems { };
    class TransportBackpacks { };
    };

    class CLASS(Arcadian_B_SUV_Tan): CLASS(Arcadian_B_SUV) {
    displayName = "GT Armory Arcadian Tan";
    HiddenSelectionsTextures[] = { "\x\tacs\addons\arcadian\data\arcadian_body_earth_co.paa" };
    editorPreview = "\x\tacs\addons\arcadian\ui\Arcadian_B_SUV_Tan.jpg";
    };

    class CLASS(Arcadian_B_SUV_Green): CLASS(Arcadian_B_SUV) {
    displayName = "GT Armory Arcadian Green";
    HiddenSelectionsTextures[] = { "\x\tacs\addons\arcadian\data\arcadian_body_foliage_co.paa" };
    editorPreview = "\x\tacs\addons\arcadian\ui\Arcadian_B_SUV_Green.jpg";
    };

    class CLASS(Arcadian_I_SUV_Black): CLASS(Arcadian_B_SUV) {
    displayName = "GT Armory Arcadian Black";
    crew = "tacs_Unit_I_Contractor";
    typicalCargo[] = { "Unit_I_Contractor" };
    side = 2;
    faction = "TACS_IND";
    };

    class CLASS(Arcadian_I_SUV_Tan): CLASS(Arcadian_I_SUV_Black) {
    displayName = "GT Armory Arcadian Tan";
    HiddenSelectionsTextures[] = { "\x\tacs\addons\arcadian\data\arcadian_body_earth_co.paa" };
    editorPreview = "\x\tacs\addons\arcadian\ui\Arcadian_B_SUV_Tan.jpg";
    };

    class CLASS(Arcadian_I_SUV_Green): CLASS(Arcadian_I_SUV_Black) {
    displayName = "GT Armory Arcadian Green";
    HiddenSelectionsTextures[] = { "\x\tacs\addons\arcadian\data\arcadian_body_foliage_co.paa" };
    editorPreview = "\x\tacs\addons\arcadian\ui\Arcadian_B_SUV_Green.jpg";
    };
};
