#ifndef ZMK_HELPERS_MACROS_H
#define ZMK_HELPERS_MACROS_H

#define XXX &none
#define ___ &trans

#define BASE 0
#define NAV  2
#define DIG  3
#define SYS  4

#define QUICK_TAP_MS 175

#define KEYS_L LT0 LT1 LT2 LT3 LT4 LM0 LM1 LM2 LM3 LM4 LB0 LB1 LB2 LB3 LB4 LB5  // left hand
#define KEYS_R RT0 RT1 RT2 RT3 RT4 RM0 RM1 RM2 RM3 RM4 RB0 RB1 RB2 RB3 RB4 RB5  // right hand
#define THUMBS LH2 LH1 LH0 RH0 RH1 RH2 // thumb cluster for both hands

#define MAKE_HRM(NAME, HOLD, TAP, TRIGGER_POS) \
    ZMK_HOLD_TAP(NAME, \
        flavor = "balanced"; \
        tapping-term-ms = <280>; \
        quick-tap-ms = <QUICK_TAP_MS>; \
        require-prior-idle-ms = <150>; \
        bindings = <HOLD>, <TAP>; \
        hold-trigger-key-positions = <TRIGGER_POS>; \
        hold-trigger-on-release; \
    )

#endif // ZMK_HELPERS_MACROS_H