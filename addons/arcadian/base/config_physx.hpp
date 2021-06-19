// Ref; Chevrolet Suburban https://media.chevrolet.com/media/us/en/chevrolet/vehicles/suburban/2021.tab1.html

thrustDelay = 0.15;
brakeIdleSpeed = 1.78;
maxSpeed = 200;
wheelCircumference = 2.505; // Chevrolet suburban has 265/65 18" tires -> 2517mm circum.
antiRollbarForceCoef=3;
antiRollbarForceLimit=2;
antiRollbarSpeedMin=20;
antiRollbarSpeedMax=150;
idleRpm = 700;
redRpm = 6000; // Suburban runs redline at 5750

class complexGearbox {
    GearboxRatios[] = {
        "R1", -4.86,
        "N", 0,
        "D1", 4.69,
        "D2", 2.98,
        "D3", 2.14,
        "D4", 1.77,
        "D5", 1.52,
        "D6", 1.27,
        "D7", 1.00,
        "D8", 0.85,
        "D9", 0.69,
        "D10", 0.63
    };
    TransmissionRatios[] = {"High", 3.23}; // Real life value
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
frontRearSplit = 0.45; // 45/55 front/back distribution
frontBias = 1.5;
rearBias = 1.5;
centreBias = 1.3;
clutchStrength = 20.0;
enginePower = 290; // tuned down real life value
maxOmega = 680; // properly calculated from maxOmega = (maxRpm*2*Pi)/60
peakTorque = 519; // real life value
dampingRateFullThrottle = 0.08;
dampingRateZeroThrottleClutchEngaged = 0.45;
dampingRateZeroThrottleClutchDisengaged = 0.30;

// Close to real life values
torqueCurve[] = {
    {"(1000/6000)", "(150/519)"},
    {"(1500/6000)", "(300/519)"},
    {"(2500/6000)", "(450/519)"},
    {"(3000/6000)", "(475/519)"},
    {"(4000/6000)", "(519/519)"},
    {"(4500/6000)", "(450/519)"},
    {"(5000/6000)", "(350/519)"},
    {"(6000/6000)", "(300/519)"},
    {"(7500/6000)", "(10/519)"}
};
changeGearMinEffectivity[] = {1, 0.15, 0.98, 0.98, 0.98, 0.98, 0.98, 0.98};
switchTime = 0.31;
latency = 1.5;

class Wheels {
    class LF {
        boneName = "wheel_1_1_damper";
        steering = 1;
        side = "left";
        center = "wheel_1_1_axis";
        boundary = "wheel_1_1_bound";
        width = "0.24";
        mass = 25;
        MOI = 12.8;
        dampingRate = 1;
        maxBrakeTorque = 2500;
        maxHandBrakeTorque = 0;
        suspTravelDirection[] = {0, -1, 0};
        suspForceAppPointOffset = "wheel_1_1_axis";
        tireForceAppPointOffset = "wheel_1_1_axis";
        maxCompression = 0.05;
        mMaxDroop = 0.10;
        sprungMass = 650;
        springStrength = 55000; // Reduced by 1000 to make it slightly softer
        springDamperRate = 13500; // Produces dampingRatio of 1.119
        longitudinalStiffnessPerUnitGravity = 10000;
        latStiffX = 25;
        latStiffY = 180;
        frictionVsSlipGraph[]= {
            {0, 1},
            {0.5, 1},
            {1, 1}
        };
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
    class LR: LF {
        boneName = "wheel_1_2_damper";
        steering = 0;
        center = "wheel_1_2_axis";
        springStrength = 73000; // Reduced by 1000 to make it slightly softer
        sprungMass = 650;
        boundary = "wheel_1_2_bound";
        suspForceAppPointOffset = "wheel_1_2_axis";
        tireForceAppPointOffset = "wheel_1_2_axis";
        maxHandBrakeTorque = 6000; // Increased a bit
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
