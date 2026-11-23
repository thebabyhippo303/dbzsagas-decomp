/* Avatar__GetInputState @ 0x8008CAF0 (size: 0x18, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


s32 Avatar__GetInputState(void *arg0) {
    void *temp_r9;

    temp_r9 = M2C_FIELD(arg0, void **, 0x720);
    if (temp_r9 != NULL) {
        return M2C_FIELD(temp_r9, s32 *, 4);
    }
    return 0;
}
