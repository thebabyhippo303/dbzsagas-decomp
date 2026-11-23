/* Avatar__GetSpinePosition @ 0x8008B6E4 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void fn_801DD1FC(float *, void *, int);
f32 *Avatar__GetSpinePosition(f32 *arg0, void *arg1) {
    u8 temp_r5;
    void *temp_r9;
    s32 x;
    s32 y;
    s32 z;

    temp_r5 = M2C_FIELD(arg1, u8 *, 0x19DC);
    if ((s32) temp_r5 == 0xFF) {
        temp_r9 = arg1 + 0x38;
        x = M2C_FIELD(temp_r9, s32 *, 0);
        y = M2C_FIELD(temp_r9, s32 *, 4);
        z = M2C_FIELD(temp_r9, s32 *, 8);
        M2C_FIELD(arg0, s32 *, 0) = x;
        M2C_FIELD(arg0, s32 *, 4) = y;
        M2C_FIELD(arg0, s32 *, 8) = z;
    } else {
        fn_801DD1FC(arg0, arg1, (s32) temp_r5);
    }
    return arg0;
}
