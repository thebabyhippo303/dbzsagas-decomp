/* NamedPoint__FindByName @ 0x80252A24 (size: 0xB4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 Database__GetTypedObject(M2C_UNK, s32, s32, M2C_UNK); /* extern */
s32 NamedPoint__FindInArrayByName(void *, s32, s32); /* extern */

s32 NamedPoint__FindByName(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;
    s32 temp_r3_2;
    s32 var_r3;
    void *var_r31;

    temp_r3 = Database__GetTypedObject(0x201, arg2, M2C_FIELD(arg0, s32 *, 0x10), 0);
    if ((temp_r3 == 0) || (var_r3 = NamedPoint__FindInArrayByName(arg0, temp_r3, arg1), ((var_r3 == 0) != 0))) {
        var_r31 = M2C_FIELD(arg0, void **, 0x114);
        if (var_r31 != NULL) {
loop_3:
            temp_r3_2 = Database__GetTypedObject(0x201, arg2, M2C_FIELD(var_r31, s32 *, 0xC), 0);
            if ((temp_r3_2 == 0) || (var_r3 = NamedPoint__FindInArrayByName(arg0, temp_r3_2, arg1), ((var_r3 == 0) != 0))) {
                var_r31 = M2C_FIELD(var_r31, void **, 4);
                if (var_r31 == NULL) {
                    goto block_6;
                }
                goto loop_3;
            }
        } else {
block_6:
            var_r3 = 0;
        }
    }
    return var_r3;
}
