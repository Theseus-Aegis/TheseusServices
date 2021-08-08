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
    class rearseats_source {
        source = "user";
        animPeriod = 1;
        initPhase = 1;
        displayName = "Fold Rear Seats";
        lockCargo[] = {3,4};
        lockCargoAnimationPhase = 1;
        useSource = 1;
    };
};
