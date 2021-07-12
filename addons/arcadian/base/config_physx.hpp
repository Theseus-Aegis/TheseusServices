// Reference: Chevrolet Suburban https://media.chevrolet.com/media/us/en/chevrolet/vehicles/suburban/2021.tab1.html

simulation = "carx";
thrustDelay = 0.5;
brakeIdleSpeed = 1.78;
maxSpeed = 160;
wheelCircumference = 2.517;

// Engine
idleRpm = 700;
redRpm = 6500;
enginePower = 420; // in kW;
peakTorque = 800; // In Nm; more than standard because we have a heavily armoured car, hence upgrades to the engine
maxOmega = 680;  // maxOmega = (maxRpm * 2 * Pi) / 60
clutchStrength = 15.0;
engineMOI = 1.025;

torqueCurve[] = {
    {"1000/6000", "150/519"},
    {"1500/6000", "300/519"},
    {"2500/6000", "450/519"},
    {"3000/6000", "475/519"},
    {"4000/6000", "519/519"},
    {"4500/6000", "450/519"},
    {"5000/6000", "350/519"},
    {"6000/6000", "300/519"}
};

changeGearMinEffectivity[] = {
    1,
    0.15,
    0.95,
    0.95,
    0.95,
    0.95,
    0.95,
    0.95
};
switchTime = 0.31;
latency = 1.5;

// Gearbox
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

// Differential
differentialType = "all_limited";
frontRearSplit = 0.45;
frontBias = 1.5;
rearBias = 1.5;
centreBias = 1.3;

// Suspension
antiRollbarForceCoef = 7;
antiRollbarForceLimit = 3;
antiRollbarSpeedMin = 20;
antiRollbarSpeedMax = 80;
dampersBumpCoef = 5;
turnCoef = 2.9;

class Wheels {
    class LF {
        boneName = "wheel_1_1_damper";
        steering = 1;
        side = "left";
        center = "wheel_1_1_axis";
        boundary = "wheel_1_1_bound";
        width = 0.265;
        mass = 30;
        MOI = 12.8;
        dampingRate = 0.4;
        maxBrakeTorque = 6500;
        maxHandBrakeTorque = 0;
        suspTravelDirection[] = {0, -1, 0};
        suspForceAppPointOffset = "wheel_1_1_axis";
        tireForceAppPointOffset = "wheel_1_1_axis";
        maxCompression = 0.1;
        maxDroop = 0.15;
        sprungMass = 1527.49;
        springStrength = 120000;
        springDamperRate = 29785; // dampingRatio * 2 * sqrt(springStrength * sprungMass); dampingRatio=1.1
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
        springStrength = 130000;
        sprungMass = 1527.49;
        springDamperRate = 31001; // dampingRatio * 2 * sqrt(springStrength * sprungMass); dampingRatio=1.1

        boundary = "wheel_1_2_bound";
        suspForceAppPointOffset = "wheel_1_2_axis";
        tireForceAppPointOffset = "wheel_1_2_axis";
        maxHandBrakeTorque = 200000;
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
