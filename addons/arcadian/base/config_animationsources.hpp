class AnimationSources: AnimationSources {
    class HitGlass1;
    class HitGlass7: HitGlass1 {
        hitpoint = "HitGlass7";
    };
    class HitGlass8: HitGlass1 {
        hitpoint = "HitGlass8";
    };
    class reardoor_2_source {
        displayName = CSTRING(Window);
        source = "door";
        animPeriod = 1;
        initPhase = 0;
        sound = "PlasticDoorsSound";
    };
    class ram_hide_source {
        displayName = CSTRING(Pushbar);
        source = "user";
        animPeriod = 0;
        initPhase = 0;
    };
    class roofbar_hide_source {
        displayName = CSTRING(Roofbar);
        source = "user";
        animPeriod = 0;
        initPhase = 1;
        useSource = 1;
    };
    class antenna_hide_source {
        displayName = CSTRING(Antenna);
        source = "user";
        animPeriod = 0;
        initPhase = 0;
    };
};
