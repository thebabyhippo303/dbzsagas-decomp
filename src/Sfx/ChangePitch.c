/* Sfx__ChangePitch @ 0x802B0C44 (size: 0x8C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

float Script__PopFloat(void *, void *);
char * Script__PopString(void *, void *, int *);
void fn_80184430(char *);
void Sfx__ChangePitch(void *arg0, void *arg1) {
    s32 sp8;
    s8 *temp_r31;
    void *temp_r28;
    void *temp_r3;
    void *temp_r9;

    temp_r28 = M2C_FIELD(arg0, void **, 0xC8);
    temp_r31 = Script__PopString(arg0, arg1, &sp8);
    Script__PopFloat(arg0, arg1);
    if (temp_r31 != (s8 *)-1) {
        temp_r3 = M2C_FIELD(temp_r28, void **, 0xAC);
        temp_r9 = M2C_FIELD(temp_r3, void **, 0xC);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *, s8 *), 0x3C)(temp_r3 + M2C_FIELD(temp_r9, s16 *, 0x38), temp_r31);
    }
    if ((sp8 != 0) && (temp_r31 != NULL)) {
        fn_80184430(temp_r31);
    }
}
