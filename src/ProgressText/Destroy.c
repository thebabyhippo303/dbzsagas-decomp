/* ProgressText__Destroy @ 0x8011F8B4 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

extern void *lbl_803DC6B0;

void ProgressText__Destroy(void) {
    void *temp_r9;

    if ((void *) lbl_803DC6B0 != NULL) {
        temp_r9 = M2C_FIELD(lbl_803DC6B0, void **, 0x19C);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK), 0xC)(lbl_803DC6B0 + M2C_FIELD(temp_r9, s16 *, 8), 3);
    }
}

