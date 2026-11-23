/* ProtagonistGroup__RemoveEmptySubgroups @ 0x801E9770 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


M2C_UNK ProtagonistGroup__RemoveSubgroup(void *, void *); /* extern */

void ProtagonistGroup__RemoveEmptySubgroups(void *arg0) {
    void *temp_r4;
    void *var_r31;

    var_r31 = M2C_FIELD(arg0, void **, 0x3C);
loop_1:
    if (var_r31 != NULL) {
        if ((s32) M2C_FIELD(var_r31, s32 *, 0) != 0) {
            var_r31 = M2C_FIELD(var_r31, void **, 0x10);
        } else {
            temp_r4 = var_r31;
            var_r31 = M2C_FIELD(var_r31, void **, 0x10);
            ProtagonistGroup__RemoveSubgroup(arg0, temp_r4);
        }
        goto loop_1;
    }
}
