/* AvaSurfGrid__BindDimensions @ 0x8009D1CC (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


s32 AvaSurfGrid__BindDimensions(void *arg0, s32 *arg1, s32 *arg2) {
    s32 temp_r0;
    s32 temp_r9;

    if (((s32 *) M2C_FIELD(arg0, s32 **, 0x14) != NULL) || (arg1 == NULL) || ((s32 *) M2C_FIELD(arg0, s32 **, 0x18) != NULL) || (arg2 == NULL)) {
        return 0;
    }
    M2C_FIELD(arg0, s32 **, 0x14) = arg1;
    M2C_FIELD(arg0, s32 **, 0x18) = arg2;
    temp_r0 = *arg1;
    M2C_FIELD(arg0, s32 *, 0x1C) = temp_r0;
    temp_r9 = *arg2;
    M2C_FIELD(arg0, s32 *, 0x20) = temp_r9;
    M2C_FIELD(arg0, s32 *, 0) = (s32) (temp_r0 * temp_r9);
    return 1;
}
