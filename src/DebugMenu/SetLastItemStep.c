/* DebugMenu__SetLastItemStep @ 0x80264F0C (size: 0x14, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void DebugMenu__SetLastItemStep(void *arg0, f32 farg0) {
    void *temp_r9;

    temp_r9 = M2C_FIELD(arg0, void **, 0x88);
    if (temp_r9 != NULL) {
        M2C_FIELD(temp_r9, f32 *, 0x464) = farg0;
    }
}

