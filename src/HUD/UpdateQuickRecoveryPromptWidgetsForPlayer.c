/* HUD__UpdateQuickRecoveryPromptWidgetsForPlayer @ 0x8010A9BC (size: 0x208, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: HUD__UpdateQuickRecoveryPromptWidgetsForPlayer @ 0x8010A9BC (0x208). ProDG -O2. */
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

extern void *Game__GetPlayerImpl(void *, int);
extern float lbl_803261D8 __attribute__((section(".data")));
extern float lbl_803261DC __attribute__((section(".data")));
extern int lbl_803A35DC __attribute__((section(".data")));
extern void *lbl_803DC3C0;

/* widget at arg1+off: vtable at +0x19C; adjust s16 at vt+adj, fn at vt+fn */
#define WIDGET_VT(w) M2C_FIELD(w, void **, 0x19C)
#define CALL4(w, adj, fn, a, b, c, d) \
    ((void (*)(void *, int, int, int, int))M2C_FIELD(WIDGET_VT(w), void **, fn))((char *)(w) + M2C_FIELD(WIDGET_VT(w), short *, adj), a, b, c, d)

void HUD__UpdateQuickRecoveryPromptWidgetsForPlayer(void *arg0, void *arg1) {
    void *temp_r11;
    void *temp_r8;
    void *temp_r4;

    if (lbl_803A35DC != 0) {
        if (M2C_FIELD(arg1, int *, 0) == (int)Game__GetPlayerImpl(lbl_803DC3C0, 0)) {
            temp_r11 = M2C_FIELD(arg1, void **, 0x290);
            if (temp_r11 != NULL) {
                CALL4(temp_r11, 0x70, 0x74, 42, 0, 1, 1);
            }
            temp_r8 = M2C_FIELD(arg1, void **, 0x28C);
            if (temp_r8 != NULL) {
                ((void (*)(void *, float, float, float, float))M2C_FIELD(WIDGET_VT(temp_r8), void **, 0x10C))((char *)temp_r8 + M2C_FIELD(WIDGET_VT(temp_r8), short *, 0x108), lbl_803261D8, lbl_803261D8, lbl_803261DC, lbl_803261DC);
            }
            temp_r11 = M2C_FIELD(arg1, void **, 0x2BC);
            if (temp_r11 != NULL) {
                CALL4(temp_r11, 0x70, 0x74, 32, 0, 1, 1);
            }
        } else {
            temp_r11 = M2C_FIELD(arg1, void **, 0x290);
            if (temp_r11 != NULL) {
                CALL4(temp_r11, 0x70, 0x74, 43, 0, 1, 1);
            }
            temp_r8 = M2C_FIELD(arg1, void **, 0x28C);
            if (temp_r8 != NULL) {
                ((void (*)(void *, float, float, float, float))M2C_FIELD(WIDGET_VT(temp_r8), void **, 0x10C))((char *)temp_r8 + M2C_FIELD(WIDGET_VT(temp_r8), short *, 0x108), lbl_803261D8, lbl_803261DC, lbl_803261D8, lbl_803261DC);
            }
            temp_r11 = M2C_FIELD(arg1, void **, 0x2BC);
            if (temp_r11 != NULL) {
                CALL4(temp_r11, 0x70, 0x74, 33, 0, 1, 1);
            }
        }
        temp_r11 = M2C_FIELD(arg1, void **, 0x290);
        if (temp_r11 != NULL) {
            ((void (*)(void *))M2C_FIELD(WIDGET_VT(temp_r11), void **, 0x3C))((char *)temp_r11 + M2C_FIELD(WIDGET_VT(temp_r11), short *, 0x38));
        }
        temp_r11 = M2C_FIELD(arg1, void **, 0x28C);
        if (temp_r11 != NULL) {
            ((void (*)(void *))M2C_FIELD(WIDGET_VT(temp_r11), void **, 0x3C))((char *)temp_r11 + M2C_FIELD(WIDGET_VT(temp_r11), short *, 0x38));
        }
        temp_r4 = M2C_FIELD(arg1, void **, 0x2BC);
        if (temp_r4 != NULL) {
            ((void (*)(void *))M2C_FIELD(WIDGET_VT(temp_r4), void **, 0x3C))((char *)temp_r4 + M2C_FIELD(WIDGET_VT(temp_r4), short *, 0x38));
        }
    }
}
