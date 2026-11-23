/* DbzBreakable__GetState @ 0x800E74DC (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


s32 DbzBreakable__GetState(void *arg0) {
    s32 value = M2C_FIELD(arg0, s32 *, 0x200);
    if (value != -1) return value;
    if (M2C_FIELD(arg0, s32 *, 0x258) != 0) goto check_state;
return_zero:
    return 0;
check_state:
    if (M2C_FIELD(arg0, s32 *, 0x8A8) == 0) goto return_zero;
    {
        s32 state = 1;
        if (M2C_FIELD(arg0, s32 *, 0x3C0) == 0) state = 0;
        if (state != 0) return 0;
        return 5;
    }
}
