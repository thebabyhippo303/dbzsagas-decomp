/* Simple__GetRotVel @ 0x802AE89C (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void * Script__PopActor(void *, void *, int);
void Script__PushFloat(void *, void *, float);
void Simple__GetRotVel(void *arg0, void *arg1) {
    void *temp_r29;
    void *temp_r3;

    temp_r3 = Script__PopActor(arg0, arg1, 0);
    temp_r29 = temp_r3 + 0x74;
    Script__PushFloat(arg0, arg1, M2C_FIELD(temp_r3, f32 *, 0x74));
    Script__PushFloat(arg0, arg1, M2C_FIELD(temp_r29, f32 *, 4));
    Script__PushFloat(arg0, arg1, M2C_FIELD(temp_r29, f32 *, 8));
}
