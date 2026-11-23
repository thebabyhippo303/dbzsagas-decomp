/* Simple__SetRot @ 0x802AE71C (size: 0xA4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void * Script__PopActor(void *, void *, int);
float Script__PopFloat(void *, void *);
M2C_UNK fn_802C5C6C(void *);                        /* extern */
M2C_UNK fn_802C5CEC(void *);                        /* extern */
M2C_UNK fn_802C5D70(void *);                        /* extern */

void Simple__SetRot(void *arg0, void *arg1) {
    void *temp_r30;
    void *temp_r9;
    void *temp_r9_2;

    temp_r30 = Script__PopActor(arg0, arg1, 0);
    Script__PopFloat(arg0, arg1);
    fn_802C5D70(temp_r30);
    Script__PopFloat(arg0, arg1);
    fn_802C5CEC(temp_r30);
    Script__PopFloat(arg0, arg1);
    fn_802C5C6C(temp_r30);
    temp_r9 = M2C_FIELD(temp_r30, void **, 0x34);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0xAC)(temp_r30 + M2C_FIELD(temp_r9, s16 *, 0xA8));
    temp_r9_2 = M2C_FIELD(temp_r30, void **, 0x34);
    M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *), 0x94)(temp_r30 + M2C_FIELD(temp_r9_2, s16 *, 0x90));
}
