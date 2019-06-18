class CfgGroups {
    class Indep {
        class CLASS(IND) {
            name = ECSTRING(main,Company);
            class Infantry {
                name = CSTRING(GroupType_Infantry);
                class Bodyguards {
                    side = 2;
                    faction = QCLASS(IND);
                    name = CSTRING(Group_Bodyguards);
                    class Unit0 {
                        side = 2;
                        vehicle = QCLASS(Unit_I_Bodyguard);
                        rank = "LIEUTENANT";
                        position[] = {0, 0, 0};
                    };
                    class Unit1: Unit0 {
                        rank = "CORPORAL";
                        position[] = {5, -5, 0};
                    };
                    class Unit2: Unit0 {
                        rank = "CORPORAL";
                        position[] = {-5, -5, 0};
                    };
                };
                class Patrol {
                    side = 2;
                    faction = QCLASS(IND);
                    name = CSTRING(Group_Patrol);
                    class Unit0 {
                        side = 2;
                        vehicle = QCLASS(Unit_I_Contractor_GL);
                        rank = "SERGEANT";
                        position[] = {0, 0, 0};
                    };
                    class Unit1: Unit0 {
                        rank = "CORPORAL";
                        position[] = {5, -5, 0};
                    };
                    class Unit2: Unit0 {
                        vehicle = QCLASS(Unit_I_Contractor);
                        rank = "PRIVATE";
                        position[] = {-5, -5, 0};
                    };
                    class Unit3: Unit2 {
                        position[] = {10, -10, 0};
                    };
                };
                class Team {
                    side = 2;
                    faction = QCLASS(IND);
                    name = CSTRING(Group_Team);
                    class Unit0 {
                        side = 2;
                        vehicle = QCLASS(Unit_I_TeamLeader);
                        rank = "LIEUTENANT";
                        position[] = {0, 0, 0};
                    };
                    class Unit1: Unit0 {
                        vehicle = QCLASS(Unit_I_Marksman);
                        rank = "SERGEANT";
                        position[] = {5, -5, 0};
                    };
                    class Unit2: Unit1 {
                        vehicle = QCLASS(Unit_I_Medic);
                        position[] = {-5, -5, 0};
                    };
                    class Unit3: Unit0 {
                        vehicle = QCLASS(Unit_I_Specialist);
                        rank = "CORPORAL";
                        position[] = {10, -10, 0};
                    };
                    class Unit4: Unit3 {
                        vehicle = QCLASS(Unit_I_Contractor_GL);
                        position[] = {-10, -10, 0};
                    };
                    class Unit5: Unit0 {
                        vehicle = QCLASS(Unit_I_Contractor);
                        rank = "PRIVATE";
                        position[] = {15, -15, 0};
                    };
                };
                class Squad {
                    side = 2;
                    faction = QCLASS(IND);
                    name = CSTRING(Group_Squad);
                    class Unit0 {
                        side = 2;
                        vehicle = QCLASS(Unit_I_TeamLeader);
                        rank = "LIEUTENANT";
                        position[] = {0, 0, 0};
                    };
                    class Unit1: Unit0 {
                        vehicle = QCLASS(Unit_I_Marksman);
                        rank = "SERGEANT";
                        position[] = {5, -5, 0};
                    };
                    class Unit2: Unit1 {
                        vehicle = QCLASS(Unit_I_Medic);
                        position[] = {-5, -5, 0};
                    };
                    class Unit3: Unit1 {
                        vehicle = QCLASS(Unit_I_Specialist);
                        position[] = {10, -10, 0};
                    };
                    class Unit4: Unit0 {
                        vehicle = QCLASS(Unit_I_Contractor);
                        rank = "CORPORAL";
                        position[] = {-10, -10, 0};
                    };
                    class Unit5: Unit4 {
                        vehicle = QCLASS(Unit_I_Contractor_GL);
                        position[] = {15, -15, 0};
                    };
                    class Unit6: Unit5 {
                        position[] = {-15, -15, 0};
                    };
                    class Unit7: Unit0 {
                        vehicle = QCLASS(Unit_I_Contractor);
                        rank = "PRIVATE";
                        position[] = {20, -20, 0};
                    };
                    class Unit8: Unit7 {
                        vehicle = QCLASS(Unit_I_Engineer);
                        position[] = {-20, -20, 0};
                    };
                    class Unit9: Unit7 {
                        vehicle = QCLASS(Unit_I_Contractor);
                        position[] = {25, -25, 0};
                    };
                };
                class Specialists {
                    side = 2;
                    faction = QCLASS(IND);
                    name = CSTRING(Group_Specialists);
                    class Unit0 {
                        side = 2;
                        vehicle = QCLASS(Unit_I_TeamLeader);
                        rank = "LIEUTENANT";
                        position[] = {0, 0, 0};
                    };
                    class Unit1: Unit0 {
                        vehicle = QCLASS(Unit_I_Marksman);
                        rank = "SERGEANT";
                        position[] = {5, -5, 0};
                    };
                    class Unit2: Unit1 {
                        vehicle = QCLASS(Unit_I_Medic);
                        position[] = {-5, -5, 0};
                    };
                    class Unit3: Unit0 {
                        vehicle = QCLASS(Unit_I_Specialist);
                        rank = "CORPORAL";
                        position[] = {10, -10, 0};
                    };
                    class Unit4: Unit0 {
                        vehicle = QCLASS(Unit_I_Contractor);
                        rank = "PRIVATE";
                        position[] = {-10, -10, 0};
                    };
                };
                class Support {
                    side = 2;
                    faction = QCLASS(IND);
                    name = CSTRING(Group_Support);
                    class Unit0 {
                        side = 2;
                        vehicle = QCLASS(Unit_I_Contractor_GL);
                        rank = "SERGEANT";
                        position[] = {0, 0, 0};
                    };
                    class Unit1: Unit0 {
                        rank = "CORPORAL";
                        position[] = {5, -5, 0};
                    };
                    class Unit2: Unit1 {
                        vehicle = QCLASS(Unit_I_Engineer);
                        position[] = {-5, -5, 0};
                    };
                    class Unit3: Unit0 {
                        vehicle = QCLASS(Unit_I_Medic);
                        rank = "PRIVATE";
                        position[] = {10, -10, 0};
                    };
                };
            };
        };
    };

    class West {
        class CLASS(BLU) {
            name = ECSTRING(main,Company);
            class Infantry {
                name = CSTRING(GroupType_Infantry);
                class Bodyguards {
                    side = 1;
                    faction = QCLASS(BLU);
                    name = CSTRING(Group_Bodyguards);
                    class Unit0 {
                        side = 1;
                        vehicle = QCLASS(Unit_B_Bodyguard);
                        rank = "LIEUTENANT";
                        position[] = {0, 0, 0};
                    };
                    class Unit1: Unit0 {
                        rank = "CORPORAL";
                        position[] = {5, -5, 0};
                    };
                    class Unit2: Unit0 {
                        rank = "CORPORAL";
                        position[] = {-5, -5, 0};
                    };
                };
                class Patrol {
                    side = 1;
                    faction = QCLASS(BLU);
                    name = CSTRING(Group_Patrol);
                    class Unit0 {
                        side = 1;
                        vehicle = QCLASS(Unit_B_Contractor_GL);
                        rank = "SERGEANT";
                        position[] = {0, 0, 0};
                    };
                    class Unit1: Unit0 {
                        rank = "CORPORAL";
                        position[] = {5, -5, 0};
                    };
                    class Unit2: Unit0 {
                        vehicle = QCLASS(Unit_B_Contractor);
                        rank = "PRIVATE";
                        position[] = {-5, -5, 0};
                    };
                    class Unit3: Unit2 {
                        position[] = {10, -10, 0};
                    };
                };
                class Team {
                    side = 1;
                    faction = QCLASS(BLU);
                    name = CSTRING(Group_Team);
                    class Unit0 {
                        side = 1;
                        vehicle = QCLASS(Unit_B_TeamLeader);
                        rank = "LIEUTENANT";
                        position[] = {0, 0, 0};
                    };
                    class Unit1: Unit0 {
                        vehicle = QCLASS(Unit_B_Marksman);
                        rank = "SERGEANT";
                        position[] = {5, -5, 0};
                    };
                    class Unit2: Unit1 {
                        vehicle = QCLASS(Unit_B_Medic);
                        position[] = {-5, -5, 0};
                    };
                    class Unit3: Unit0 {
                        vehicle = QCLASS(Unit_B_Specialist);
                        rank = "CORPORAL";
                        position[] = {10, -10, 0};
                    };
                    class Unit4: Unit3 {
                        vehicle = QCLASS(Unit_B_Contractor_GL);
                        position[] = {-10, -10, 0};
                    };
                    class Unit5: Unit0 {
                        vehicle = QCLASS(Unit_B_Contractor);
                        rank = "PRIVATE";
                        position[] = {15, -15, 0};
                    };
                };
                class Squad {
                    side = 1;
                    faction = QCLASS(BLU);
                    name = CSTRING(Group_Squad);
                    class Unit0 {
                        side = 1;
                        vehicle = QCLASS(Unit_B_TeamLeader);
                        rank = "LIEUTENANT";
                        position[] = {0, 0, 0};
                    };
                    class Unit1: Unit0 {
                        vehicle = QCLASS(Unit_B_Marksman);
                        rank = "SERGEANT";
                        position[] = {5, -5, 0};
                    };
                    class Unit2: Unit1 {
                        vehicle = QCLASS(Unit_B_Medic);
                        position[] = {-5, -5, 0};
                    };
                    class Unit3: Unit1 {
                        vehicle = QCLASS(Unit_B_Specialist);
                        position[] = {10, -10, 0};
                    };
                    class Unit4: Unit0 {
                        vehicle = QCLASS(Unit_B_Contractor);
                        rank = "CORPORAL";
                        position[] = {-10, -10, 0};
                    };
                    class Unit5: Unit4 {
                        vehicle = QCLASS(Unit_B_Contractor_GL);
                        position[] = {15, -15, 0};
                    };
                    class Unit6: Unit5 {
                        position[] = {-15, -15, 0};
                    };
                    class Unit7: Unit0 {
                        vehicle = QCLASS(Unit_B_Contractor);
                        rank = "PRIVATE";
                        position[] = {20, -20, 0};
                    };
                    class Unit8: Unit7 {
                        vehicle = QCLASS(Unit_B_Engineer);
                        position[] = {-20, -20, 0};
                    };
                    class Unit9: Unit7 {
                        vehicle = QCLASS(Unit_B_Contractor);
                        position[] = {25, -25, 0};
                    };
                };
                class Specialists {
                    side = 1;
                    faction = QCLASS(BLU);
                    name = CSTRING(Group_Specialists);
                    class Unit0 {
                        side = 1;
                        vehicle = QCLASS(Unit_B_TeamLeader);
                        rank = "LIEUTENANT";
                        position[] = {0, 0, 0};
                    };
                    class Unit1: Unit0 {
                        vehicle = QCLASS(Unit_B_Marksman);
                        rank = "SERGEANT";
                        position[] = {5, -5, 0};
                    };
                    class Unit2: Unit1 {
                        vehicle = QCLASS(Unit_B_Medic);
                        position[] = {-5, -5, 0};
                    };
                    class Unit3: Unit0 {
                        vehicle = QCLASS(Unit_B_Specialist);
                        rank = "CORPORAL";
                        position[] = {10, -10, 0};
                    };
                    class Unit4: Unit0 {
                        vehicle = QCLASS(Unit_B_Contractor);
                        rank = "PRIVATE";
                        position[] = {-10, -10, 0};
                    };
                };
                class Support {
                    side = 1;
                    faction = QCLASS(BLU);
                    name = CSTRING(Group_Support);
                    class Unit0 {
                        side = 1;
                        vehicle = QCLASS(Unit_B_Contractor_GL);
                        rank = "SERGEANT";
                        position[] = {0, 0, 0};
                    };
                    class Unit1: Unit0 {
                        rank = "CORPORAL";
                        position[] = {5, -5, 0};
                    };
                    class Unit2: Unit1 {
                        vehicle = QCLASS(Unit_B_Engineer);
                        position[] = {-5, -5, 0};
                    };
                    class Unit3: Unit0 {
                        vehicle = QCLASS(Unit_B_Medic);
                        rank = "PRIVATE";
                        position[] = {10, -10, 0};
                    };
                };
            };
        };
    };
};
