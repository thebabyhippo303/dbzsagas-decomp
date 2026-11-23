/* Platform__CreateControllers @ 0x801D62E8 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;

s32 PadManager__CreateControllers(void *);
extern s32 lbl_803DCC6C;

s32 Platform__CreateControllers(char *self) {
    if (lbl_803DCC6C == 0) {
        if (PadManager__CreateControllers(self + 0x480) == 0) {
            return 0;
        }
        lbl_803DCC6C = 1;
    }
    return 1;
}
