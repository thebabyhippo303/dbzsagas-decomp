/* Simple__Hide @ 0x802AE5B0 (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Actor__ToNonProtagonistCastImpl(void *);
void Actor__ToProtagonistCastImpl(void *);
void * Script__PopInt(void *, void *);
void Simple__SetModelHidden(void *, int);
void Simple__Hide(void *arg0, void *arg1) {
    s32 var_r30;
    void *temp_r31;
    void *temp_r9;

    var_r30 = 1;
    if (Script__PopInt(arg0, arg1) == NULL) {
        var_r30 = 0;
    }
    temp_r31 = M2C_FIELD(arg0, void **, 0xC8);
    temp_r9 = M2C_FIELD(temp_r31, void **, 0x34);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *, s32), 0x64)(temp_r31 + M2C_FIELD(temp_r9, s16 *, 0x60), var_r30);
    Simple__SetModelHidden(temp_r31, var_r30);
    if (var_r30 != 0) {
        Actor__ToNonProtagonistCastImpl(temp_r31);
        return;
    }
    Actor__ToProtagonistCastImpl(temp_r31);
}
