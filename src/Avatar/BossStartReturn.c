/* Avatar__BossStartReturn @ 0x8003E3A4 (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void fn_800654BC(void *, int);
void Avatar__BossStartReturn(void *arg0) {
    void *temp_r9;

    temp_r9 = M2C_FIELD(arg0, void **, 0xC8);
    if ((s32) M2C_FIELD(temp_r9, s32 *, 0x7E4) == 0) {
        fn_800654BC(M2C_FIELD(temp_r9, void **, 0xB8C), 1);
    }
}
