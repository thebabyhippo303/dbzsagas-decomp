/* inflateReset @ 0x80258F50 (size: 0x78, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void inflate_blocks_reset(void *, void *, void *);
s32 inflateReset(void *arg0) {
    void *temp_r11;
    register s32 var_r10;

    if ((arg0 == NULL) || (temp_r11 = M2C_FIELD(arg0, void **, 0x1C), ((temp_r11 == NULL) != 0))) {
        return -2;
    }
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    var_r10 = 0;
    if ((s32) M2C_FIELD(temp_r11, s32 *, 0xC) != 0) {
        var_r10 = 7;
    }
    M2C_FIELD(temp_r11, s32 *, 0) = var_r10;
    inflate_blocks_reset(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), void **, 0x14), arg0, NULL);
    return 0;
}
