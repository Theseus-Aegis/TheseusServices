htMin = 60;
htMax = 1800;
afMax = 200;
mfMax = 100;
mFact = 1;
tBody = 200;
mapSize = 7;
accuracy = 0.35;
cost = 50000;
driverLeftHandAnimName = "drivewheel";
driverRightHandAnimName = "drivewheel";
weapons[] = {"SportCarHorn"};
outsideSoundFilter = 1;
hiddenSelections[] = {"camo1", "camo2"};
hiddenSelectionsTextures[] = {
    QPATHTOF(data\arcadian_body_black_co.paa),
    QPATHTOF(data\arcadian_interior_co.paa)
};
maxFordingDepth = 1.25;
waterResistance = 1;
fuelCapacity = 20;

class Exhausts {
    class Exhaust1 {
        position = "exhaust_1";
        direction = "exhaust_1_dir";
        effect = "ExhaustsEffect";
    };
};

class Library {
    libTextDesc = "";
};

// Cargo
ace_cargo_space = 6;
cargoAction[] = {
    "passenger_low01",
    "passenger_generic01_leanleft",
    "passenger_generic01_foldhands",
    "passenger_generic01_leanleft",
    "passenger_low01"
};
cargoCompartments[] = {"Compartment1"};
cargoGetInAction[] = {"GetInLow"};
cargoGetOutAction[] = {"GetOutLow"};
driverAction = "Driver_low01";
driverCompartments = "Compartment1";
getInAction = "GetInLow";
getOutAction = "GetOutLow";

class TransportBackpacks {};
class TransportItems {
    class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 4;
    };
};
class TransportMagazines {};
class TransportWeapons {};

// Damage
crewCrashProtection = 2; // Lower is better protection
armor = 120;
armorStructural = 3;
damageResistance = 0.006;
wheelDamageThreshold = 0.18;

// Transport
transportSoldier = 5;
transportMaxMagazines = 20000;
transportMaxWeapons = 5000;
