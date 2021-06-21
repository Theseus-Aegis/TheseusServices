#define MACRO_WHEEL_DAMAGE \
    radius = 0.25; \
    armor = 1; \
    minimalHit = -0.02; \
    explosionShielding = 0.25; \
    passThrough = 0.3;

#define MACRO_GLASS_DAMAGE_SIDE \
    armor = 1; \
    explosionShielding = 0.75; \
    minimalHit = -0.05;

class HitPoints: HitPoints {
    class HitLFWheel: HitLFWheel {
        visual = "wheel_1_1_damage";
        armorComponent = "wheel_1_1_hide";
        MACRO_WHEEL_DAMAGE
    };
    class HitLF2Wheel: HitLF2Wheel {
        visual = "wheel_1_2_damage";
        armorComponent = "wheel_1_2_hide";
        MACRO_WHEEL_DAMAGE
    };
    class HitRFWheel: HitRFWheel {
        visual = "wheel_2_1_damage";
        armorComponent = "wheel_2_1_hide";
        MACRO_WHEEL_DAMAGE
    };
    class HitRF2Wheel: HitRF2Wheel {
        visual = "wheel_2_2_damage";
        armorComponent = "wheel_2_2_hide";
        MACRO_WHEEL_DAMAGE
    };
    class HitFuel: HitFuel {
        name = "palivo";
        armor = 1;
        radius = 0.45;
        passThrough = 0.2;
    };
    class HitEngine: HitEngine {
        name = "engine";
        armor = 1;
        minimalHit = -0.010;
        radius = 0.25;
        passThrough = 0.2;
    };
    class HitBody: HitBody {
        armor = 1;
        explosionShielding = 0.25;
        name = "body";
        visual = "zbytek";
        passThrough = 0.5;
        minimalHit = -0.1;
        radius = 0.4;
    };
    class HitGlass1: HitGlass1 {
        armor = 3;
        explosionShielding = 0.75;
        radius = 0.25;
    };
    class HitGlass2: HitGlass2 {
        MACRO_GLASS_DAMAGE_SIDE
    };
    class HitGlass3: HitGlass3 {
        MACRO_GLASS_DAMAGE_SIDE
    };
    class HitGlass4: HitGlass4 {
        MACRO_GLASS_DAMAGE_SIDE
    };
    class HitGlass5: HitGlass5 {
        armor = 3;
        explosionShielding = 0.75;
    };
    class HitGlass6: HitGlass6 {
        MACRO_GLASS_DAMAGE_SIDE
    };
    class HitGlass7: HitGlass6 {
        name = "glass7";
        visual = "glass7";
    };
    class HitGlass8: HitGlass6 {
        name = "glass8";
        visual = "glass8";
    };
};
