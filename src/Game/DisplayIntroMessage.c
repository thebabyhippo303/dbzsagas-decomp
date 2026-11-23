/* Game__DisplayIntroMessage @ 0x8003DD34 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Game__DisplayIntroMessage @ 0x8003DD34 (0x4C). ProDG -O2. */
typedef struct {
    char pad[4];
    int flag;
} IntroInner;

typedef struct {
    char pad[0x238];
    IntroInner *inner;
} IntroCfg;

extern IntroCfg *lbl_803DC3C0;
extern void *lbl_803DC3A0;
extern void fn_80009A88(void *hud, float seconds, int a, int b, int c);

void Game__DisplayIntroMessage(void) {
    if (lbl_803DC3C0->inner->flag == 1) {
        volatile float *base = (volatile float *)0x80310000;
        /* 0.25f pool at 0x80311B2C; displacement must be an immediate. */
        fn_80009A88(lbl_803DC3A0, base[1739], 4, 86, 0);
    }
}
