/* Team__Add @ 0x8003B674 (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void * Script__PopInt(void *, void *);
s32 Team__AllocateSlot(M2C_UNK);                    /* extern */

void Team__Add(void *arg0, void *arg1) {
    void *temp_r30;

    temp_r30 = M2C_FIELD(Script__PopInt(arg0, arg1), void **, 0xB8C);
    M2C_FIELD(temp_r30, s32 *, 0xC4) = Team__AllocateSlot(0x64);
}
