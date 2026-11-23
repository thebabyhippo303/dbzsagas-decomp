/* DbzBreakable__Construct @ 0x800E55C4 (size: 0x11C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Actor__Construct(void *, void *);
M2C_UNK DbzBreakable__ResetState(void *);
extern u8 lbl_8031D820 __attribute__((section(".data")));
extern f32 lbl_803232D4 __attribute__((section(".data")));
extern f32 lbl_803232D8 __attribute__((section(".data")));
extern f32 lbl_803232DC __attribute__((section(".data")));
extern M2C_UNK lbl_8032EF58 __attribute__((section(".data")));
extern M2C_UNK lbl_8032F028 __attribute__((section(".data")));
extern M2C_UNK lbl_8032F048 __attribute__((section(".data")));
extern M2C_UNK lbl_8032F0F0 __attribute__((section(".data")));
extern M2C_UNK lbl_80394694 __attribute__((section(".data")));

void *DbzBreakable__Construct(void *arg0) {
    f32 temp_f31;
    u8 b54Cv;
    f32 f820v;
    f32 f830v;
    s32 var_ctr;
    s32 *var_r9;
    void *temp_r11;

    Actor__Construct(arg0, &lbl_80394694);
    temp_f31 = lbl_803232D4;
    M2C_FIELD(arg0, M2C_UNK **, 0x198) = &lbl_8032F048;
    M2C_FIELD(arg0, M2C_UNK **, 0x1B4) = &lbl_8032F028;
    M2C_FIELD(arg0, M2C_UNK **, 0x4C8) = &lbl_8032EF58;
    M2C_FIELD(arg0, M2C_UNK **, 0x34) = &lbl_8032F0F0;
    M2C_FIELD(arg0, s32 *, 0x86C) = 0;
    M2C_FIELD(arg0, s32 *, 0x870) = 0;
    M2C_FIELD(arg0, s32 *, 0x8C4) = 0;
    M2C_FIELD(arg0, s32 *, 0x858) = 0;
    M2C_FIELD(arg0, s32 *, 0x85C) = 0;
    M2C_FIELD(arg0, s32 *, 0x7E8) = 0;
    M2C_FIELD(arg0, s32 *, 0x814) = 0;
    M2C_FIELD(arg0, s32 *, 0x818) = 0;
    M2C_FIELD(arg0, f32 *, 0x81C) = temp_f31;
    M2C_FIELD(arg0, s32 *, 0x83C) = 0;
    b54Cv = lbl_8031D820;
    f820v = lbl_803232D8;
    M2C_FIELD(arg0, s32 *, 0x58C) = 0;
    M2C_FIELD(arg0, s32 *, 0x590) = 0;
    M2C_FIELD(arg0, s32 *, 0x8B0) = 0;
    M2C_FIELD(arg0, s32 *, 0x594) = 0;
    M2C_FIELD(arg0, u8 *, 0x54C) = b54Cv;
    M2C_FIELD(arg0, f32 *, 0x820) = f820v;
    DbzBreakable__ResetState(arg0);
    temp_r11 = arg0 + 0x82C;
    f830v = lbl_803232DC;
    var_ctr = 6;
    M2C_FIELD(arg0, s32 *, 0x828) = 0;
    M2C_FIELD(arg0, f32 *, 0x82C) = temp_f31;
    M2C_FIELD(temp_r11, f32 *, 4) = f830v;
    M2C_FIELD(temp_r11, f32 *, 8) = temp_f31;
    var_r9 = arg0 + 0x87C;
    M2C_FIELD(arg0, s32 *, 0x838) = 0;
    M2C_FIELD(arg0, s32 *, 0x8D8) = 5;
    for (; var_ctr != 0; var_ctr--) {
        var_r9[-1] = 0;
        var_r9[0] = 0;
        var_r9 += 2;
    }
    return arg0;
}
