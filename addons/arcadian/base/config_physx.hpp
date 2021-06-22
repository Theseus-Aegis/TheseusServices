thrustDelay = 0.15;
brakeIdleSpeed = 1.78;
maxSpeed = 160;
wheelCircumference = 2.517;
antiRollbarForceCoef=3;
antiRollbarForceLimit=2;
antiRollbarSpeedMin=20;
antiRollbarSpeedMax=150;

// ENGINE
idleRpm = 700;
redRpm = 6500;
enginePower = 300;
peakTorque = 625;
maxOmega = 680;  // maxOmega = (maxRpm * 2 * Pi) / 60
clutchStrength = 15.0;
engineMOI = 1.05;

dampingRateFullThrottle = 0.08;
dampingRateZeroThrottleClutchEngaged = 0.45;
dampingRateZeroThrottleClutchDisengaged = 0.30;

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
    TransmissionRatios[] = {"High", 3.23};
    gearBoxMode = "auto";
    moveOffGear = 1;
    driveString = "D";
    neutralString = "N";
    reverseString = "R";
    gearUpMaxCoef = 0.95;
    gearUpMinCoef = 0.75;
    gearDownMaxCoef = 0.85;
    gearDownMinCoef = 0.55;
    transmissionDelay = 2;
};
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
changeGearMinEffectivity[] = {1, 0.15, 0.95, 0.95, 0.95, 0.95, 0.95, 0.95};
switchTime = 0.6;
latency = 1.5;

simulation = "carx";
dampersBumpCoef = 3.0;
turnCoef = 3.5;
differentialType = "all_limited";
frontRearSplit = 0.45;
frontBias = 1.5;
rearBias = 1.5;
centreBias = 1.3;

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
        maxBrakeTorque = 4500;
        maxHandBrakeTorque = 0;
        suspTravelDirection[] = {0, -1, 0};
        suspForceAppPointOffset = "wheel_1_1_axis";
        tireForceAppPointOffset = "wheel_1_1_axis";
        maxCompression = 0.05;
        mMaxDroop = 0.10; // CHANGED
        sprungMass = 1527.49; // CHANGED: Vehicle mass is 6109.96 so each wheel supports 1/4 of the weight
        springStrength = 55000;
        springDamperRate = 13500;
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
        springStrength = 73000;
        sprungMass = 1527.49; // CHANGED: Vehicle mass is 6109.96 so each wheel supports 1/4 of the weight
        boundary = "wheel_1_2_bound";
        suspForceAppPointOffset = "wheel_1_2_axis";
        tireForceAppPointOffset = "wheel_1_2_axis";
        maxHandBrakeTorque = 9000;
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

// Wheel markings on roads
memoryPointTrackFLL = "wheeltrack_f_l_l"; // Front Left / Left
memoryPointTrackFLR = "wheeltrack_f_l_r"; // Front Left / Right
memoryPointTrackBLL = "wheeltrack_f_r_l"; // Back Left / Left
memoryPointTrackBLR = "wheeltrack_f_r_r"; // Back Left / Right
memoryPointTrackFRL = "wheeltrack_r_l_l"; // Front Right / Left
memoryPointTrackFRR = "wheeltrack_r_l_r"; // Front Right / Right
memoryPointTrackBRL = "wheeltrack_r_r_l"; // Back Right / Left
memoryPointTrackBRR = "wheeltrack_r_r_r"; // Back Right / Right
