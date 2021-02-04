class CLASS(Item_Suit_VIP): Item_Base_F {
    MACRO_ITEM_COMMON
    author = "Jonpas";
    displayName = CSTRING(Suit_VIP);

    class TransportItems {
        MACRO_ADDITEM(CLASS(Suit_VIP),1);
    };
};
