class CfgMovesBasic {
    class DefaultDie;

    class ManActions {
        Arcadian_Gunner = "Arcadian_Gunner";
        Arcadian_GunnerIn = "Arcadian_GunnerIn";
        Arcadian_GunnerTurnOut = "Arcadian_GunnerTurnOut";
        Arcadian_GunnerTurnIn = "Arcadian_GunnerTurnIn";
    };
};

class CfgMovesMaleSdr: CfgMovesBasic {
    class States {
        class Crew;
        class Arcadian_Gunner: Crew {
            file = QPATHTOF(data\anim\arcadian_gunner_turnout_pose.rtm);
            interpolateTo[] = {
                "Arcadian_KIA_Gunner", 1
            };
            speed = "1e+010";
            leftHandIKCurve[] = {0, 0, 1, 1};
            rightHandIKCurve[] = {0, 0, 1, 1};
        };
        class Arcadian_GunnerIn: Arcadian_Gunner {
            file = QPATHTOF(data\anim\arcadian_gunner_turnin_pose.rtm);
            leftHandIKCurve[] = {0};
            rightHandIKCurve[] = {0};
        };
        class Arcadian_KIA_Gunner: DefaultDie {
            actions = "DeadActions";
            file = QPATHTOF(data\anim\arcadian_gunner_death.rtm);
            speed = "1e+010";
            terminal = 1;
            soundEnabled = 0;
            looped = 0;
            connectTo[] = {
                "Unconscious", 0.1
            };
        };
        class Arcadian_GunnerTurnIn: Crew {
            file = QPATHTOF(data\anim\arcadian_gunner_turnin.rtm);
            interpolateTo[] = {
                "Arcadian_KIA_Gunner", 1
            };
            connectTo[] = {
                "Arcadian_GunnerIn", 0.8
            };
            leftHandIKCurve[] = {0};
            rightHandIKCurve[] = {0};
            speed = -0.9;
            looped = 0;
        };
        class Arcadian_GunnerTurnOut: Crew {
            file = QPATHTOF(data\anim\arcadian_gunner_turnout.rtm);
            interpolateTo[] = {
                "Arcadian_KIA_Gunner", 1
            };
            connectTo[] = {
                "Arcadian_Gunner", 0.8
            };
            leftHandIKCurve[] = {0, 0, 1, 1};
            rightHandIKCurve[] = {0, 0, 1, 1};
            speed = -1.8;
            looped = 0;
        };
    };
};
