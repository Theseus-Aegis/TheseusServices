// DEBUG_MODE_x
#ifdef DEBUG_MODE_FULL // If DEBUG_MODE_FULL, then also enable DEBUG_MODE_NORMAL
    #define DEBUG_MODE_NORMAL
#endif

#ifdef DEBUG_MODE_NORMAL // If DEBUG_MODE_NORMAL, then also enable DEBUG_MODE_MINIMAL
    #define DEBUG_MODE_MINIMAL
#endif

#ifndef DEBUG_MODE_MINIMAL // If no debug modes specified, use DEBUG_MODE_NORMAL (+ DEBUG_MODE_MINIMAL)
    #define DEBUG_MODE_NORMAL
    #define DEBUG_MODE_MINIMAL
#endif

#ifdef THIS_FILE
    #define THIS_FILE_ 'THIS_FILE'
#else
    #define THIS_FILE_ __FILE__
#endif


// RETNIL()
#define RETNIL(VARIABLE) if (isNil{VARIABLE}) then {nil} else {VARIABLE}


// TRACE_n()
#define PFORMAT_1(MESSAGE,A) format ['%1: A=%2', MESSAGE, RETNIL(A)]
#define PFORMAT_2(MESSAGE,A,B) format ['%1: A=%2, B=%3', MESSAGE, RETNIL(A), RETNIL(B)]
#define PFORMAT_3(MESSAGE,A,B,C) format ['%1: A=%2, B=%3, C=%4', MESSAGE, RETNIL(A), RETNIL(B), RETNIL(C)]
#define PFORMAT_4(MESSAGE,A,B,C,D) format ['%1: A=%2, B=%3, C=%4, D=%5', MESSAGE, RETNIL(A), RETNIL(B), RETNIL(C), RETNIL(D)]
#define PFORMAT_5(MESSAGE,A,B,C,D,E) format ['%1: A=%2, B=%3, C=%4, D=%5, E=%6', MESSAGE, RETNIL(A), RETNIL(B), RETNIL(C), RETNIL(D), RETNIL(E)]
#define PFORMAT_6(MESSAGE,A,B,C,D,E,F) format ['%1: A=%2, B=%3, C=%4, D=%5, E=%6, F=%7', MESSAGE, RETNIL(A), RETNIL(B), RETNIL(C), RETNIL(D), RETNIL(E), RETNIL(F)]
#define PFORMAT_7(MESSAGE,A,B,C,D,E,F,G) format ['%1: A=%2, B=%3, C=%4, D=%5, E=%6, F=%7, G=%8', MESSAGE, RETNIL(A), RETNIL(B), RETNIL(C), RETNIL(D), RETNIL(E), RETNIL(F), RETNIL(G)]
#define PFORMAT_8(MESSAGE,A,B,C,D,E,F,G,H) format ['%1: A=%2, B=%3, C=%4, D=%5, E=%6, F=%7, G=%8, H=%9', MESSAGE, RETNIL(A), RETNIL(B), RETNIL(C), RETNIL(D), RETNIL(E), RETNIL(F), RETNIL(G), RETNIL(H)]
#define PFORMAT_9(MESSAGE,A,B,C,D,E,F,G,H,I) format ['%1: A=%2, B=%3, C=%4, D=%5, E=%6, F=%7, G=%8, H=%9, I=%10', MESSAGE, RETNIL(A), RETNIL(B), RETNIL(C), RETNIL(D), RETNIL(E), RETNIL(F), RETNIL(G), RETNIL(H), RETNIL(I)]

#ifdef DEBUG_MODE_FULL
    #define TRACE_1(MESSAGE,A) [THIS_FILE_, __LINE__, PFORMAT_1(MESSAGE,A)] call CBA_fnc_log
    #define TRACE_2(MESSAGE,A,B) [THIS_FILE_, __LINE__, PFORMAT_2(MESSAGE,A,B)] call CBA_fnc_log
    #define TRACE_3(MESSAGE,A,B,C) [THIS_FILE_, __LINE__, PFORMAT_3(MESSAGE,A,B,C)] call CBA_fnc_log
    #define TRACE_4(MESSAGE,A,B,C,D) [THIS_FILE_, __LINE__, PFORMAT_4(MESSAGE,A,B,C,D)] call CBA_fnc_log
    #define TRACE_5(MESSAGE,A,B,C,D,E) [THIS_FILE_, __LINE__, PFORMAT_5(MESSAGE,A,B,C,D,E)] call CBA_fnc_log
    #define TRACE_6(MESSAGE,A,B,C,D,E,F) [THIS_FILE_, __LINE__, PFORMAT_6(MESSAGE,A,B,C,D,E,F)] call CBA_fnc_log
    #define TRACE_7(MESSAGE,A,B,C,D,E,F,G) [THIS_FILE_, __LINE__, PFORMAT_7(MESSAGE,A,B,C,D,E,F,G)] call CBA_fnc_log
    #define TRACE_8(MESSAGE,A,B,C,D,E,F,G,H) [THIS_FILE_, __LINE__, PFORMAT_8(MESSAGE,A,B,C,D,E,F,G,H)] call CBA_fnc_log
    #define TRACE_9(MESSAGE,A,B,C,D,E,F,G,H,I) [THIS_FILE_, __LINE__, PFORMAT_9(MESSAGE,A,B,C,D,E,F,G,H,I)] call CBA_fnc_log
#else
    #define TRACE_1(MESSAGE,A) /* disabled */
    #define TRACE_2(MESSAGE,A,B) /* disabled */
    #define TRACE_3(MESSAGE,A,B,C) /* disabled */
    #define TRACE_4(MESSAGE,A,B,C,D) /* disabled */
    #define TRACE_5(MESSAGE,A,B,C,D,E) /* disabled */
    #define TRACE_6(MESSAGE,A,B,C,D,E,F) /* disabled */
    #define TRACE_7(MESSAGE,A,B,C,D,E,F,G) /* disabled */
    #define TRACE_8(MESSAGE,A,B,C,D,E,F,G,H) /* disabled */
    #define TRACE_9(MESSAGE,A,B,C,D,E,F,G,H,I) /* disabled */
#endif
