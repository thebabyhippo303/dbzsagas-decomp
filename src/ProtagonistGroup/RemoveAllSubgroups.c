/* ProtagonistGroup__RemoveAllSubgroups @ 0x801E9724 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


M2C_UNK ProtagonistGroup__RemoveSubgroup(void *, void *); /* extern */

void ProtagonistGroup__RemoveAllSubgroups(void *arg0) {
    void *temp_r4;
    void *var_r31;

    var_r31 = M2C_FIELD(arg0, void **, 0x3C);
    if (var_r31 != NULL) {
        do {
            temp_r4 = var_r31;
            var_r31 = M2C_FIELD(var_r31, void **, 0x10);
            ProtagonistGroup__RemoveSubgroup(arg0, temp_r4);
        } while (var_r31 != NULL);
    }
}
