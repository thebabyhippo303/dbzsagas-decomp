/* Script__GetVelocity @ 0x802B1570 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Script__PushFloat(void *, s32, f32);
void Script__GetVelocity(void *arg0, s32 arg1) {
    void *temp_r29;
    void *temp_r29_2;

    temp_r29 = M2C_FIELD(arg0, void **, 0xC8);
    temp_r29_2 = temp_r29 + 0x68;
    Script__PushFloat(arg0, arg1, M2C_FIELD(temp_r29, f32 *, 0x68));
    Script__PushFloat(arg0, arg1, M2C_FIELD(temp_r29_2, f32 *, 4));
    Script__PushFloat(arg0, arg1, M2C_FIELD(temp_r29_2, f32 *, 8));
}

