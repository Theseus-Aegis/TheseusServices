class AnimationSources: AnimationSources {
    class reardoor_2_source {
        displayName = "Rear Door Window";
        source = "door";
        animPeriod = 1;
        initPhase = 0;
        sound = "PlasticDoorsSound";
    };
    class ram_hide_source {
        source = "user";
        animPeriod = 0;
        initPhase = 0;
        displayName = "Hide Pushbar";
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
};
