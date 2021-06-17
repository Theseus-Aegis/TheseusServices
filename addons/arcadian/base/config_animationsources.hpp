class AnimationSources: AnimationSources {
    class Revolving {
        source = "revolving";
        weapon = QCLASS(LMG_Minigun_SUV);
    };
    class CloseCover {
        source = "user";
        initPhase = 0;
        animPeriod = 1.2;
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
    class gun_hide_source {
        source = "user";
        animPeriod = 0;
        initPhase = 1;
        displayName = "Hide Turret";
        onPhaseChanged = "_this call tacs_arcadian_fnc_toggleGun";
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
        displayName = "Hide Beacon Lights";
    };
    class BeaconsStart {
        source = "user";
        animPeriod = 0;
        initPhase = 0;
        displayName = "Start Beacon Lights";
    };
    class roofbar_hide_source {
        source = "user";
        animPeriod = 0;
        initPhase = 1;
        displayName = "Extend Roofbar";
        useSource = 1;
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
        initPhase = 1;
        displayName = "Fold Rear Seats";
        lockCargo[] = {4,5};
        lockCargoAnimationPhase = 1;
        useSource = 1;
    };
};
