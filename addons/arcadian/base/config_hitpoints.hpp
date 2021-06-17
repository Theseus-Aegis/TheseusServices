class HitPoints: HitPoints {
    class HitLFWheel: HitLFWheel {
        radius = 0.2;
        visual = "wheel_1_1_damage";
        armorComponent = "wheel_1_1_hide";
        armor = 1;
        minimalHit = 0;
        explosionShielding = 2;
        passThrough = 0;
    };
    class HitLF2Wheel: HitLFWheel {
        visual = "wheel_1_2_damage";
    };
    class HitRFWheel: HitLFWheel {
        visual = "wheel_2_1_damage";
    };
    class HitRF2Wheel: HitLFWheel {
        visual = "wheel_2_2_damage";
    };

    class HitFuel: HitFuel {
        name = "palivo";
        armor = 2;
        radius = 0.45;
    };
    class HitEngine: HitEngine {
        name = "engine";
        armor = 4;
        radius = 0.25;
    };
    class HitBody: HitBody {
        name = "body";
        visual = "zbytek";
        passThrough = 1;
    };

    class HitGlass1: HitGlass1 {
        armor = 1;
        explosionShielding = 0.5;
        minimalHit = 0.1;
        name = "glass1";
        passThrough = 0;
        radius = 0.11;
        visual = "glass1";
    };
    class HitGlass2: HitGlass1 {};
    class HitGlass3: HitGlass1 {};
    class HitGlass4: HitGlass1 {};
    class HitGlass5: HitGlass1 {};
    class HitGlass6: HitGlass1 {};
    class HitGlass7: HitGlass1 {
        name = "glass7";
        visual = "glass7";
    };
    class HitGlass8: HitGlass1 {
        name = "glass8";
        visual = "glass8";
    };
};
