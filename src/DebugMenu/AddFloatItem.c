/* DebugMenu__AddFloatItem @ 0x80265608 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void * BaseMenu__AddItem(void *, s32);
void *DebugMenu__AddFloatItem(void *arg0, s32 arg1, s32 arg2) {
    void *temp_r3;
    void *temp_r9;

    temp_r3 = BaseMenu__AddItem(arg0, arg1);
    if (temp_r3 != NULL) {
        temp_r9 = M2C_FIELD(temp_r3, void **, 0x10);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK, s32), 0x294)(temp_r3 + M2C_FIELD(temp_r9, s16 *, 0x290), 1, arg2);
    }
    return temp_r3;
}

