class CfgMovesBasic {
    class DefaultDie;

    class ManActions {
        ArmoredSUV_Gunner_PMC = "ArmoredSUV_Gunner_PMC";
        ArmoredSUV_GunnerIn_PMC = "ArmoredSUV_GunnerIn_PMC";
        ArmoredSUV_GunnerTurnOut_PMC = "ArmoredSUV_GunnerTurnOut_PMC";
        ArmoredSUV_GunnerTurnIn_PMC = "ArmoredSUV_GunnerTurnIn_PMC";
    };
};

class CfgMovesMaleSdr: CfgMovesBasic {
    class States {
        class Crew;
        class ArmoredSUV_Gunner_PMC: Crew {
            file = QPATHTOF(data\Anim\SUVmatildaTurnOutPose.rtm);
            interpolateTo[] = {
                "ArmoredSUV_KIA_Gunner_PMC", 1
            };
            speed = 1e+010;
            leftHandIKCurve[] = {0, 0, 1, 1};
            rightHandIKCurve[] = {0, 0, 1, 1};
        };
        class ArmoredSUV_GunnerIn_PMC: ArmoredSUV_Gunner_PMC {
            file = QPATHTOF(data\Anim\SUVmatildaTurnInPose.rtm);
            leftHandIKCurve[] = {0};
            rightHandIKCurve[] = {0};
        };
        class ArmoredSUV_KIA_Gunner_PMC: DefaultDie {
            actions = DeadActions;
            file = QPATHTOF(data\Anim\SUVmatildaDeath.rtm);
            speed = 1e+010;
            terminal = 1;
            soundEnabled = 0;
            looped = 0;
            connectTo[] = {
                "Unconscious", 0.1
            };
        };
        class ArmoredSUV_GunnerTurnIn_PMC: Crew {
            file = QPATHTOF(data\Anim\SUVmatildaTurnIn.rtm);
            interpolateTo[] = {
                "ArmoredSUV_KIA_Gunner_PMC", 1
            };
            connectTo[] = {
                "ArmoredSUV_GunnerIn_PMC", 0.8
            };
            leftHandIKCurve[] = {0};
            rightHandIKCurve[] = {0};
            speed = -0.9;
            looped = 0;
        };
        class ArmoredSUV_GunnerTurnOut_PMC: Crew {
            file = QPATHTOF(data\Anim\SUVmatildaTurnOut.rtm);
            interpolateTo[] = {
                "ArmoredSUV_KIA_Gunner_PMC", 1
            };
            connectTo[] = {
                "ArmoredSUV_Gunner_PMC", 0.8
            };
            leftHandIKCurve[] = {0, 0, 1, 1};
            rightHandIKCurve[] = {0, 0, 1, 1};
            speed = -1.8;
            looped = 0;
        };
    };
};
