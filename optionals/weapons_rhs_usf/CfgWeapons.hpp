class CfgWeapons {
    class rhsusf_weap_MP7A2_grip3;
    class CLASS(rhsusf_weap_MP7A2): rhsusf_weap_MP7A2_grip3 {
        class LinkedItems {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="rhsusf_acc_eotech_xps3";
            };
            class LinkedItemsUnder {
                slot="UnderBarrelSlot";
                item="rhsusf_acc_grip3";
            };
        };
    };

    class rhs_weap_m4_mstock;
    class CLASS(rhs_weap_m4_mstock): rhs_weap_m4_mstock {
        class LinkedItems {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="rhsusf_acc_eotech_xps3";
            };
            class LinkedItemsUnder {
                slot="UnderBarrelSlot";
                item="rhsusf_acc_grip2";
            };
            class LinkedItemsAcc {
                slot="PointerSlot";
                item="rhsusf_acc_M952V";
            };
        };
    };

    class rhs_weap_m4_pmag_grip3;
    class CLASS(rhs_weap_m4_pmag_grip3): rhs_weap_m4_pmag_grip3 {
        class LinkedItems {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="rhsusf_acc_ACOG_RMR";
            };
            class LinkedItemsUnder {
                slot="UnderBarrelSlot";
                item="rhsusf_acc_grip1";
            };
            class LinkedItemsAcc {
                slot="PointerSlot";
                item="rhsusf_acc_M952V";
            };
        };
    };

    class rhs_weap_m249_pip_S;
    class CLASS(rhs_weap_m249_pip_S): rhs_weap_m249_pip_S {
        class LinkedItems {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="rhsusf_acc_eotech_552";
            };
        };
    };

    class rhs_weap_m4_m203;
    class CLASS(rhs_weap_m4_m203): rhs_weap_m4_m203 {
        class LinkedItems {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="rhsusf_acc_eotech_552";
            };
            class LinkedItemsAcc {
                slot="PointerSlot";
                item="rhsusf_acc_M952V";
            };
        };
    };

    class rhs_weap_sr25;
    class CLASS(rhs_weap_sr25): rhs_weap_sr25 {
        class LinkedItems {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="rhsusf_acc_M8541";
            };
            class LinkedItemsUnder {
                slot="UnderBarrelSlot";
                item="rhsusf_acc_harris_bipod";
            };
        };
    };
};