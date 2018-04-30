class CfgWeapons {
    class rhsusf_weap_MP7A2_grip3;
    class CLASS(rhs_MP7A2_xps3_grip3): rhsusf_weap_MP7A2_grip3 {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "rhsusf_acc_eotech_xps3";
            };
            class LinkedItemsUnder {
                slot = "UnderBarrelSlot";
                item = "rhsusf_acc_grip3";
            };
        };
    };

    class rhs_weap_m4_mstock;
    class CLASS(rhs_m4_mstock_xps3_grip2_m952v): rhs_weap_m4_mstock {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "rhsusf_acc_eotech_xps3";
            };
            class LinkedItemsUnder {
                slot = "UnderBarrelSlot";
                item = "rhsusf_acc_grip2";
            };
            class LinkedItemsAcc {
                slot = "PointerSlot";
                item = "rhsusf_acc_M952V";
            };
        };
    };

    class rhs_weap_m4_pmag_grip3;
    class CLASS(rhs_m4_pmag_acog_grip1_m952v): rhs_weap_m4_pmag_grip3 {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "rhsusf_acc_ACOG_RMR";
            };
            class LinkedItemsUnder {
                slot = "UnderBarrelSlot";
                item = "rhsusf_acc_grip1";
            };
            class LinkedItemsAcc {
                slot = "PointerSlot";
                item = "rhsusf_acc_M952V";
            };
        };
    };

    class rhs_weap_m249_pip_S;
    class CLASS(rhs_m249_pip_eotech): rhs_weap_m249_pip_S {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "rhsusf_acc_eotech_552";
            };
        };
    };

    class rhs_weap_m4_m203;
    class CLASS(rhs_m4_m203_eotech_m952v): rhs_weap_m4_m203 {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "rhsusf_acc_eotech_552";
            };
            class LinkedItemsAcc {
                slot = "PointerSlot";
                item = "rhsusf_acc_M952V";
            };
        };
    };

    class rhs_weap_sr25;
    class CLASS(rhs_sr25_m8541_harris): rhs_weap_sr25 {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "rhsusf_acc_M8541";
            };
            class LinkedItemsUnder {
                slot = "UnderBarrelSlot";
                item = "rhsusf_acc_harris_bipod";
            };
        };
    };
};
