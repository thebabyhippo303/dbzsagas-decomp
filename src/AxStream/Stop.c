/* AxStream__Stop @ 0x80197AC4 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


M2C_UNK fn_802D4EC4(s32, s32);                       /* extern */

s32 AxStream__Stop(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1C0) != 0) {
        M2C_FIELD(arg0, s32 *, 0x1D0) = 0;
        M2C_FIELD(arg0, s32 *, 0x1CC) = 0;
        fn_802D4EC4(M2C_FIELD(arg0, s32 *, 0x1C0), 0);
    }
    return 1;
}
