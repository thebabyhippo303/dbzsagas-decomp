/* Simple__SetSaveGameNoState @ 0x802AF924 (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void * Script__PopActor(void *, void *, int);
void Simple__SetSaveGameNoState(void *arg0, void *arg1) {
    void *temp_r3;

    temp_r3 = Script__PopActor(arg0, arg1, 0);
    M2C_FIELD(temp_r3, s32 *, 0x10C) = (s32) ((M2C_FIELD(temp_r3, s32 *, 0x10C) & 0xFFFFFF) | 0x40000000);
}
