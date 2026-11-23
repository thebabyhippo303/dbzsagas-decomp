/* Database__GetArrayElement @ 0x802066EC (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void *Database__GetArrayElement(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r4;
    s32 var_r0;
    u16 temp_r10;

    if (arg0 == NULL) {
        return NULL;
    }
    temp_r10 = M2C_FIELD(arg0, u16 *, 2);
    temp_r4 = arg1 & 0xFFFFFF;
    temp_r0 = temp_r10 & 3;
    switch (temp_r0) {                              /* irregular */
    case 1:
        return M2C_FIELD((arg0 + (temp_r4 << 2)), void **, 4);
    case 2:
        var_r0 = 8;
        if (temp_r10 & 8) {
            var_r0 = 0x10;
        }
        return arg0 + var_r0 + (temp_r4 * M2C_FIELD(arg0, s32 *, 4));
    default:
        return NULL;
    }
}

