/* Script__OverrideZVel @ 0x800B146C (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

float Script__PopFloat(void *, void *);
void Script__OverrideZVel(void *arg0, void *arg1) {
    f32 temp_f1;
    void *temp_r9;

    temp_f1 = Script__PopFloat(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0x84), arg1);
    temp_r9 = M2C_FIELD(arg0, void **, 0x144);
    M2C_FIELD(temp_r9, volatile s32 *, 0x80) = 1;
    M2C_FIELD(temp_r9, volatile f32 *, 0x84) = temp_f1;
}
