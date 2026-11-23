/* VIGetCurrentPosition @ 0x80177298 (size: 0x60, .text, MWCC GC/1.x (Dolphin SDK)) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void VI__ConvertBeamPosition(s32, s32, void *, void *);
void VIGetCurrentPosition(void *arg0, void *arg1) {
    u32 temp_r7;
    u32 var_r8;

    var_r8 = M2C_FIELD((void *)0xCC002000, u16 *, 0x2C) & 0x7FF;
    do {
        temp_r7 = var_r8;
        var_r8 = M2C_FIELD((void *)0xCC002000, u16 *, 0x2C) & 0x7FF;
    } while (temp_r7 != var_r8);
    VI__ConvertBeamPosition(M2C_FIELD((void *)0xCC002000, u16 *, 0x2E) & 0x7FF, (s32) var_r8, arg0, arg1);
}

