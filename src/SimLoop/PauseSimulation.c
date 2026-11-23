/* SimLoop__PauseSimulation @ 0x8001E950 (size: 0x13C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef short s16;

#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))

void Debug__FormatMessage(char *fmt, ...);
void SimLoop__ActivateControls(void *self, int active);
void SimLoop__ApplyPauseState(void *self);

extern char lbl_8030FCF0[] __attribute__((section(".data")));
extern char lbl_8030FCF8[] __attribute__((section(".data")));
extern char lbl_8030FDD8[] __attribute__((section(".data")));
extern char lbl_8030FDF8[] __attribute__((section(".data")));
extern char lbl_8030FE28[] __attribute__((section(".data")));
extern char lbl_8030FE58[] __attribute__((section(".data")));
extern void *lbl_803DCC74 __attribute__((section(".sdata")));

void SimLoop__PauseSimulation(void *self, s32 pause, s32 arg2, s32 arg3) {
    void *obj;
    void *vt;
    char *state;

    state = pause != 0 ? lbl_8030FCF0 : lbl_8030FCF8;
    Debug__FormatMessage(lbl_8030FDD8, state);
    if (pause != 0) {
        if (M2C_FIELD(self, s32 *, 0x240) == 0) {
            Debug__FormatMessage(lbl_8030FDF8);
            SimLoop__ActivateControls(self, 0);
        }
    } else if (M2C_FIELD(self, s32 *, 0x240) != 0) {
            Debug__FormatMessage(lbl_8030FE28);
            SimLoop__ActivateControls(self, 1);
            if (M2C_FIELD(self, s32 *, 0x6C) == 1) {
                Debug__FormatMessage(lbl_8030FE58);
                obj = lbl_803DCC74;
                vt = M2C_FIELD(obj, void **, 0x10);
                ((void (*)(void *))M2C_FIELD(vt, void **, 0x14))((char *)obj + M2C_FIELD(vt, s16 *, 0x10));
                vt = M2C_FIELD(obj, void **, 0x10);
                ((void (*)(void *))M2C_FIELD(vt, void **, 0x1C))((char *)obj + M2C_FIELD(vt, s16 *, 0x18));
            }
    }
    M2C_FIELD(self, s32 *, 0x240) = pause;
    M2C_FIELD(self, s32 *, 0x244) = arg2;
    M2C_FIELD(self, s32 *, 0x248) = arg3;
    if (pause != 0) {
        M2C_FIELD(self, s32 *, 0x23C) = 1;
        return;
    }
    SimLoop__ApplyPauseState(self);
}
