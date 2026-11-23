/* UpgradeMenu__SelectNextAttackCategory @ 0x80016E98 (size: 0x12C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-match UpgradeMenu__SelectNextAttackCategory @ 0x80016E98 (0x12C). */
typedef int s32;
typedef float f32;

extern char lbl_8030DAC0 __attribute__((section(".data")));
extern char lbl_8030DBB4 __attribute__((section(".data")));
extern char lbl_8030DBC0 __attribute__((section(".data")));
extern char lbl_8030DBD0 __attribute__((section(".data")));
extern f32 lbl_8030DBE0 __attribute__((section(".data")));
extern f32 lbl_8030DBE4 __attribute__((section(".data")));
extern f32 lbl_8030DBE8 __attribute__((section(".data")));
extern f32 lbl_8030DBEC __attribute__((section(".data")));
extern f32 lbl_8030DBF0 __attribute__((section(".data")));

void fn_80188B64(char *name, s32 flag);
void fn_80270784(char *dst, char *name);
void fn_8026B420(void *obj);
void fn_80260304(void *obj, f32 a, f32 b);
void fn_8026B0C8(void *obj, s32 flag);

void UpgradeMenu__SelectNextAttackCategory(char *self) {
    s32 temp_r0;
    s32 temp_r9;

    fn_80188B64(&lbl_8030DBB4, 0);
    temp_r9 = *(s32 *)(self + 0x3D48) + 1;
    *(s32 *)(self + 0x3D48) = temp_r9;
    if (temp_r9 > 2) {
        *(s32 *)(self + 0x3D48) = 0;
    }
    temp_r0 = *(s32 *)(self + 0x3D48);
    switch (temp_r0) {
    case 0:
        fn_80270784(self + 0x1C14, &lbl_8030DAC0);
        break;
    case 1:
        fn_80270784(self + 0x1C14, &lbl_8030DBC0);
        break;
    case 2:
        fn_80270784(self + 0x1C14, &lbl_8030DBD0);
        break;
    }
    fn_8026B420(*(void **)(self + 0x1898));
    fn_80260304(*(char **)(self + 0x1898) + 0x304, lbl_8030DBE0, lbl_8030DBE0);
    fn_80260304(*(char **)(self + 0x1898) + 0x304, lbl_8030DBE4, lbl_8030DBE8);
    fn_80260304(*(char **)(self + 0x1898) + 0x304, lbl_8030DBEC, lbl_8030DBE8);
    fn_80260304(*(char **)(self + 0x1898) + 0x304, lbl_8030DBF0, lbl_8030DBE0);
    fn_8026B0C8(*(void **)(self + 0x1898), 0);
}
