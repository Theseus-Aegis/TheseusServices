class CfgVehicles {
    #include "CfgVehicles_HelperUnits.hpp"

    // Box
    class B_supplyCrate_F;
    class CLASS(Box_Uniforms): B_supplyCrate_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = ECSTRING(main,Author);
        displayName = CSTRING(Box_Uniforms);

        transportMaxWeapons = 9001;
        transportMaxMagazines = 9001;
        transportMaxItems = 9001;
        maximumload = 9001;

        class TransportWeapons {};
        class TransportMagazines {};

        class TransportItems {
            MACRO_ADDITEM(CLASS(Uniform_Combat_LS_BS_GP_BB),10);
            MACRO_ADDITEM(CLASS(Uniform_Combat_LS_BS_GP_TB),10);
            MACRO_ADDITEM(CLASS(Uniform_Combat_LS_BS_TP_BB),10);
            MACRO_ADDITEM(CLASS(Uniform_Combat_LS_BS_TP_TB),10);
            MACRO_ADDITEM(CLASS(Uniform_Combat_LS_GS_GP_BB),10);
            MACRO_ADDITEM(CLASS(Uniform_Combat_LS_GS_BP_BB),10);
            MACRO_ADDITEM(CLASS(Uniform_Combat_LS_GS_TP_BB),10);
            MACRO_ADDITEM(CLASS(Uniform_Combat_LS_BS_DGP_BB),10);
            MACRO_ADDITEM(CLASS(Uniform_Combat_LS_TS_BP_BB),10);
            MACRO_ADDITEM(CLASS(Uniform_Combat_LS_TS_GP_BB),10);
            MACRO_ADDITEM(CLASS(Uniform_Combat_LS_TS_GP_TB),10);
            MACRO_ADDITEM(CLASS(Uniform_Combat_LS_TS_TP_TB),10);
            MACRO_ADDITEM(CLASS(Uniform_Combat_LS_CDBS_GP_TB),10);
            MACRO_ADDITEM(CLASS(Uniform_Combat_LS_CLBS_GP_BB),10);
            MACRO_ADDITEM(CLASS(Uniform_Combat_LS_CLRS_TP_BB),10);
            MACRO_ADDITEM(CLASS(Uniform_Combat_LS_CPS_BP_BB),10);
            MACRO_ADDITEM(CLASS(Uniform_Combat_RS_BS_GP_BB),10);
            MACRO_ADDITEM(CLASS(Uniform_Combat_RS_BS_GP_TB),10);
            MACRO_ADDITEM(CLASS(Uniform_Combat_RS_BS_TP_BB),10);
            MACRO_ADDITEM(CLASS(Uniform_Combat_RS_BS_TP_TB),10);
            MACRO_ADDITEM(CLASS(Uniform_Combat_RS_GS_GP_BB),10);
            MACRO_ADDITEM(CLASS(Uniform_Combat_RS_GS_BP_BB),10);
            MACRO_ADDITEM(CLASS(Uniform_Combat_RS_GS_TP_BB),10);
            MACRO_ADDITEM(CLASS(Uniform_Combat_RS_BS_DGP_BB),10);
            MACRO_ADDITEM(CLASS(Uniform_Combat_RS_TS_BP_BB),10);
            MACRO_ADDITEM(CLASS(Uniform_Combat_RS_TS_GP_BB),10);
            MACRO_ADDITEM(CLASS(Uniform_Combat_RS_TS_GP_TB),10);
            MACRO_ADDITEM(CLASS(Uniform_Combat_RS_TS_TP_TB),10);
            MACRO_ADDITEM(CLASS(Uniform_Combat_RS_CDBS_GP_TB),10);
            MACRO_ADDITEM(CLASS(Uniform_Combat_RS_CLBS_GP_BB),10);
            MACRO_ADDITEM(CLASS(Uniform_Combat_RS_CLRS_TP_BB),10);
            MACRO_ADDITEM(CLASS(Uniform_Combat_RS_CPS_BP_BB),10);
            MACRO_ADDITEM(CLASS(Uniform_Garment_LS_BS_BP_BB),10);
            MACRO_ADDITEM(CLASS(Uniform_Garment_LS_BS_GP_BB),10);
            MACRO_ADDITEM(CLASS(Uniform_Garment_LS_OS_EP_TB),10);
            MACRO_ADDITEM(CLASS(Uniform_Garment_LS_GS_GP_BB),10);
            MACRO_ADDITEM(CLASS(Uniform_Garment_LS_GS_BP_BB),10);
            MACRO_ADDITEM(CLASS(Uniform_Garment_LS_GS_EP_TB),10);
            MACRO_ADDITEM(CLASS(Uniform_Garment_LS_ES_EP_TB),10);
            MACRO_ADDITEM(CLASS(Uniform_Garment_LS_ES_BP_BB),10);
            MACRO_ADDITEM(CLASS(Uniform_Garment_LS_ES_GP_BB),10);
            MACRO_ADDITEM(CLASS(Uniform_Garment_LS_TS_TP_TB),10);
            MACRO_ADDITEM(CLASS(Uniform_Garment_LS_GS_TP_TB),10);
            MACRO_ADDITEM(CLASS(Uniform_Garment_LS_TS_GP_BB),10);
            MACRO_ADDITEM(CLASS(Uniform_Garment_LS_OS_TP_TB),10);
            MACRO_ADDITEM(CLASS(Uniform_Garment_LS_TS_BP_BB),10);
            MACRO_ADDITEM(CLASS(Uniform_Garment_RS_BS_BP_BB),10);
            MACRO_ADDITEM(CLASS(Uniform_Garment_RS_BS_GP_BB),10);
            MACRO_ADDITEM(CLASS(Uniform_Garment_RS_OS_EP_TB),10);
            MACRO_ADDITEM(CLASS(Uniform_Garment_RS_GS_GP_BB),10);
            MACRO_ADDITEM(CLASS(Uniform_Garment_RS_GS_BP_BB),10);
            MACRO_ADDITEM(CLASS(Uniform_Garment_RS_GS_EP_TB),10);
            MACRO_ADDITEM(CLASS(Uniform_Garment_RS_ES_EP_TB),10);
            MACRO_ADDITEM(CLASS(Uniform_Garment_RS_ES_BP_BB),10);
            MACRO_ADDITEM(CLASS(Uniform_Garment_RS_ES_GP_BB),10);
            MACRO_ADDITEM(CLASS(Uniform_Garment_RS_TS_TP_TB),10);
            MACRO_ADDITEM(CLASS(Uniform_Garment_RS_GS_TP_TB),10);
            MACRO_ADDITEM(CLASS(Uniform_Garment_RS_TS_GP_BB),10);
            MACRO_ADDITEM(CLASS(Uniform_Garment_RS_OS_TP_TB),10);
            MACRO_ADDITEM(CLASS(Uniform_Garment_RS_TS_BP_BB),10);
            MACRO_ADDITEM(CLASS(Uniform_Polo_TP_LS_TP_TB),10);
            MACRO_ADDITEM(CLASS(Uniform_Polo_TP_LS_TP_TB_NoLogo),10);
            MACRO_ADDITEM(CLASS(Uniform_Polo_TP_TS_GP_BB),10);
            MACRO_ADDITEM(CLASS(Uniform_Polo_TP_TS_GP_BB_NoLogo),10);
            MACRO_ADDITEM(CLASS(Uniform_Polo_TP_BS_TP_TB),10);
            MACRO_ADDITEM(CLASS(Uniform_Polo_TP_BS_TP_TB_NoLogo),10);
            MACRO_ADDITEM(CLASS(Uniform_Polo_TP_BS_LP_BB),10);
            MACRO_ADDITEM(CLASS(Uniform_Polo_TP_BS_LP_BB_NoLogo),10);
            MACRO_ADDITEM(CLASS(Uniform_Polo_TP_LS_GP_BB),10);
            MACRO_ADDITEM(CLASS(Uniform_Polo_TP_LS_GP_BB_NoLogo),10);
            MACRO_ADDITEM(CLASS(Uniform_Polo_TP_OS_TP_BB),10);
            MACRO_ADDITEM(CLASS(Uniform_Polo_TP_OS_TP_BB_NoLogo),10);
            MACRO_ADDITEM(CLASS(Uniform_Polo_TP_OS_LP_BB),10);
            MACRO_ADDITEM(CLASS(Uniform_Polo_TP_OS_LP_BB_NoLogo),10);
            MACRO_ADDITEM(CLASS(Uniform_Polo_TP_GS_TP_TB),10);
            MACRO_ADDITEM(CLASS(Uniform_Polo_TP_GS_TP_TB_NoLogo),10);
            MACRO_ADDITEM(CLASS(Uniform_Polo_TP_WS_TP_TB),10);
            MACRO_ADDITEM(CLASS(Uniform_Polo_TP_WS_TP_TB_NoLogo),10);
            MACRO_ADDITEM(CLASS(Uniform_Polo_TP_WS_LP_BB),10);
            MACRO_ADDITEM(CLASS(Uniform_Polo_TP_WS_LP_BB_NoLogo),10);
            MACRO_ADDITEM(CLASS(Uniform_Polo_TP_WS_GP_BB),10);
            MACRO_ADDITEM(CLASS(Uniform_Polo_TP_WS_GP_BB_NoLogo),10);
            MACRO_ADDITEM(CLASS(Uniform_Polo_CP_LS_TP_OB),10);
            MACRO_ADDITEM(CLASS(Uniform_Polo_CP_RS_LP_BB),10);
            MACRO_ADDITEM(CLASS(Uniform_Polo_CP_BS_TP_BB),10);
            MACRO_ADDITEM(CLASS(Uniform_Polo_CP_BS_TP_BB_NoLogo),10);
            MACRO_ADDITEM(CLASS(Uniform_TShirt_JP_GS_LP_BB),10);
            MACRO_ADDITEM(CLASS(Uniform_TShirt_JP_GS_TP_BB),10);
            MACRO_ADDITEM(CLASS(Uniform_TShirt_JP_BS_LP_BB),10);
            MACRO_ADDITEM(CLASS(Uniform_TShirt_JP_BS_TP_BB),10);
            MACRO_ADDITEM(CLASS(Uniform_TShirt_JP_LS_LP_BB),10);
            MACRO_ADDITEM(CLASS(Uniform_TShirt_JP_WS_LP_BB),10);
            MACRO_ADDITEM(CLASS(Suit_VIP),10);
        };

        class TransportBackpacks {};
    };


    #include "CfgVehicles_GroundItems.hpp"
    #include "CfgVehicles_PublicUnits.hpp"
};
