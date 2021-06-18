thrustDelay = 0.15;
brakeIdleSpeed = 1.78;
maxSpeed = 200;
wheelCircumference = 2.805;
antiRollbarForceCoef=3;
antiRollbarForceLimit=2;
antiRollbarSpeedMin=20;
antiRollbarSpeedMax=150;
idleRpm = 700;
redRpm = 6500;

class complexGearbox {
    GearboxRatios[] = {
        "R1", -4,
        "N", 0,
        "D1", "4.5 * (0.58 ^ 0)",
        "D2", "4.5 * (0.58 ^ 1)",
        "D3", "4.5 * (0.58 ^ 2)",
        "D4", "4.5 * (0.58 ^ 3)",
        "D5", "4.5 * (0.59 ^ 4)",
        "D6", "4.5 * (0.6 ^ 5)"
    };
    TransmissionRatios[] = {"High", 5.539};
    gearBoxMode = "auto";
    moveOffGear = 1;
    driveString = "D";
    neutralString = "N";
    reverseString = "R";
    gearUpMaxCoef = 0.95;
    gearDownMaxCoef = 0.85;
    gearUpMinCoef = 0.65;
    gearDownMinCoef = 0.55;
    transmissionDelay = 2;
};
simulation = "carx";
dampersBumpCoef = 3.0;
differentialType = "all_limited";
frontRearSplit = 0.5;
frontBias = 1.5;
rearBias = 1.5;
centreBias = 1.3;
clutchStrength = 20.0;
enginePower = 250;
maxOmega = 525;
peakTorque = 500;
dampingRateFullThrottle = 0.08;
dampingRateZeroThrottleClutchEngaged = 0.5;
dampingRateZeroThrottleClutchDisengaged = 0.35;
torqueCurve[] = {
    {"(0.1/3500)", "(0.1/500)"},
    {"(500/3500)", "(200/500)"},
    {"(1500/3500)", "(405/500)"},
    {"(2000/3500)", "(425/500)"},
    {"(2500/3500)", "(350/500)"},
    {"(3000/3500)", "(300/500)"},
    {"(6000/3500)", "(0/500)"}
};
changeGearMinEffectivity[] = {1, 0.15, 1, 1, 1, 1, 1, 1};
switchTime = 0.31;
latency = 1.5;

class Wheels {
    class LF {
        boneName = "wheel_1_1_damper";
        steering = 1;
        side = "left";
        center = "wheel_1_1_axis";
        boundary = "wheel_1_1_bound";
        width = "0.126";
        mass = 25;
        MOI = 12.8;
        dampingRate = 1;
        maxBrakeTorque = 2500;
        maxHandBrakeTorque = 0;
        suspTravelDirection[] = {0, -1, 0};
        suspForceAppPointOffset = "wheel_1_1_axis";
        tireForceAppPointOffset = "wheel_1_1_axis";
        maxCompression = 0.05;
        mMaxDroop = 0.1;
        sprungMass = 650;
        springStrength = 56000;
        springDamperRate = 12000;
        longitudinalStiffnessPerUnitGravity = 10000;
        latStiffX = 25;
        latStiffY = 180;
        frictionVsSlipGraph[]= {
            {0, 1},
            {0.5, 1},
            {1, 1}
        };
    };
    class LR: LF {
        boneName = "wheel_1_2_damper";
        steering = 0;
        center = "wheel_1_2_axis";
        springStrength = 74000;
        sprungMass = 650;
        boundary = "wheel_1_2_bound";
        suspForceAppPointOffset = "wheel_1_2_axis";
        tireForceAppPointOffset = "wheel_1_2_axis";
        maxHandBrakeTorque = 4000;
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
    class RR: LR {
        boneName = "wheel_2_2_damper";
        side = "right";
        center = "wheel_2_2_axis";
        boundary = "wheel_2_2_bound";
        suspForceAppPointOffset = "wheel_2_2_axis";
        tireForceAppPointOffset = "wheel_2_2_axis";
    };
};
