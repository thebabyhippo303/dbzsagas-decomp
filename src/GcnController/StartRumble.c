/* GcnController__StartRumble @ 0x801D862C (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


extern s32 lbl_803DCBC4;

s32 GcnController__StartRumble(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *table = M2C_FIELD(arg0, void **, 0x1F8);
    if (M2C_FIELD(table, s32 (**)(void *, s32, s32), 0x34)(arg0 + M2C_FIELD(table, s16 *, 0x30), arg2, arg3) == 0) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0x4608) = lbl_803DCBC4 + arg1;
    return 1;
}
