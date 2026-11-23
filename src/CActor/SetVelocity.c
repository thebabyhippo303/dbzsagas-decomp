/* CActor__SetVelocity @ 0x8002E610 (size: 0x80, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

float Script__PopFloat(void *, void *);
void * Script__PopInt(void *, void *);
void CActor__SetVelocity(void *arg0, void *arg1) {
    f32 temp_f1;
    f32 temp_f30;
    f32 temp_f31;
    void *temp_r30;
    void *temp_r30_2;

    temp_r30 = Script__PopInt(arg0, arg1);
    temp_f30 = Script__PopFloat(arg0, arg1);
    temp_f31 = Script__PopFloat(arg0, arg1);
    temp_f1 = Script__PopFloat(arg0, arg1);
    M2C_FIELD(temp_r30, f32 *, 0x68) = temp_f30;
    temp_r30_2 = temp_r30 + 0x68;
    M2C_FIELD(temp_r30_2, f32 *, 4) = temp_f31;
    M2C_FIELD(temp_r30_2, f32 *, 8) = temp_f1;
}

