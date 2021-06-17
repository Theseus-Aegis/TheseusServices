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
        armor = 2;
        radius = 0.25;
        passThrough = 1;
    };
    class HitBody: HitBody {
        armor = 10;
        explosionShielding = 0.25;
        name = "body";
        visual = "zbytek";
        passThrough = 1;
    };

    class HitGlass1: HitGlass1 {
        armor = 0.1;
        explosionShielding = 0.9;
        minimalHit = 0.1;
        name = "glass1";
        passThrough = 0.1;
        radius = 0.25;
        visual = "glass1";
    };
    class HitGlass2: HitGlass1 {
        name = "glass2";
        visual = "glass2";
        radius = 0.11;
        explosionShielding = 1;
        minimalHit = 0.05;
    };
    class HitGlass3: HitGlass2 {
        name = "glass3";
        visual = "glass3";
    };
    class HitGlass4: HitGlass2 {
        name = "glass4";
        visual = "glass4";
    };
    class HitGlass5: HitGlass1 {
        name = "glass5";
        visual = "glass5";
    };
    class HitGlass6: HitGlass2 {
        name = "glass6";
        visual = "glass6";
    };
    class HitGlass7: HitGlass2 {
        name = "glass7";
        visual = "glass7";
    };
    class HitGlass8: HitGlass2 {
        name = "glass8";
        visual = "glass8";
    };
};
