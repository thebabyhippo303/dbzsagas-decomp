/* SimLoop__ActivateControls @ 0x8001D408 (size: 0x118, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef unsigned int u32;

#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))

void Debug__FormatMessage(char *fmt, ...);
void Avatar__ActivateControls(void *avatar, s32 enable);

extern char lbl_8030FCCC[] __attribute__((section(".data")));
extern char lbl_8030FCF0[] __attribute__((section(".data")));
extern char lbl_8030FCF8[] __attribute__((section(".data")));
extern char lbl_8030FD00[] __attribute__((section(".data")));

void SimLoop__ActivateControls(void *self, s32 enable) {
    s32 edge;
    char *state;
    char *edgeStr;
    u32 i;
    void **slot;
    void *avatar;

    edge = 0;
    if (enable != 0) {
        M2C_FIELD(self, s32 *, 0x6C) += 1;
        edge = M2C_FIELD(self, s32 *, 0x6C) == 1;
    } else {
        M2C_FIELD(self, s32 *, 0x6C) -= 1;
        if (M2C_FIELD(self, s32 *, 0x6C) == 0) {
            edge = 1;
        }
    }
    if (enable != 0) {
        state = lbl_8030FCF0;
    } else {
        state = lbl_8030FCF8;
    }
    Debug__FormatMessage(lbl_8030FCCC, state);
    {
        s32 count;

        count = M2C_FIELD(self, s32 *, 0x6C);
        if (edge != 0) {
            edgeStr = lbl_8030FCF0;
        } else {
            edgeStr = lbl_8030FCF8;
        }
        Debug__FormatMessage(lbl_8030FD00, count, edgeStr);
    }
    if (edge != 0) {
        i = 0;
        if (i < (u32) M2C_FIELD(M2C_FIELD(self, void **, 0x238), u32 *, 0x10)) {
            slot = (void **)((char *)self + 0x2B0);
            do {
                avatar = *slot;
                slot += 1;
                if (avatar != 0) {
                    Avatar__ActivateControls(avatar, enable);
                }
                i += 1;
            } while (i < (u32) M2C_FIELD(M2C_FIELD(self, void **, 0x238), u32 *, 0x10));
        }
    }
}
