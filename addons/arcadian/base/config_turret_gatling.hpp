class Turrets: Turrets {
    class MainTurret: MainTurret {
        disableSoundAttenuation = 1;
        body = "mainTurret";
        gun = "mainGun";
        viewGunnerInExternal = 1;
        minElev = -10;
        maxElev = 20;
        initElev = 0;
        soundServo[] = {"a3\sounds_f\dummysound", 0, 1};
        stabilizedInAxes = 0; // StabilizedInAxesNone
        gunBeg = "muzzle_1";
        gunEnd = "chamber_1";
        weapons[] = {QCLASS(LMG_Minigun_SUV)};
        maxHorizontalRotSpeed = 2;
        maxVerticalRotSpeed = 2;
        magazines[] = {"2000Rnd_65x39_Belt_Tracer_Red"};
        gunnerRightHandAnimName = "OtocHlavenSUV";
        gunnerLeftHandAnimName = "OtocHlavenSUV";
        animationSourceHatch = "close_cover_source";
        gunnerInAction = "Arcadian_GunnerTurnIn";
        gunnerAction = "Arcadian_GunnerTurnOut";
        gunnerOpticsModel = "";
        gunnerOutOpticsModel = "\a3\weapons_f\reticle\optics_empty";
        memoryPointGunnerOutOptics = "gunnerview";
        memoryPointGunnerOptics = "gunnerview";
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
            minFov = 0.30;
            maxFov = 1.45;
            initFov = 0.85;
        };
        class ViewGunner: ViewOptics {};
    };
};
