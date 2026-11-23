/* inflateInit2_ @ 0x80259048 (size: 0x164, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

int inflateEnd(void *);
s32 inflateReset(void *);
s32 inflate_blocks_new(void *, u32 (*)(u32, const u8 *, u32), s32);
void *zcalloc(void *, s32, s32);
extern u32 adler32(u32, const u8 *, u32);
extern void zcfree(void *, void *);

s32 inflateInit2_(void *arg0, s32 arg1, u8 *arg2, s32 arg3) {
    M2C_UNK *var_r4;
    s32 temp_r3_2;
    s32 var_r30;
    void *(*temp_r9)(void *, s32, s32);
    void *temp_r3;

    var_r30 = arg1;
    if ((arg2 == NULL) || ((s32) *arg2 != 0x31) || (arg3 != 0x38)) {
        return -6;
    }
    if (arg0 == NULL) {
        return -2;
    }
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    if (((void *(*)(s32, M2C_UNK, M2C_UNK, M2C_UNK)) M2C_FIELD(arg0, void *(**)(void *, s32, s32), 0x20)) == NULL) {
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
        M2C_FIELD(arg0, void *(**)(void *, s32, s32), 0x20) = zcalloc;
    }
    if ((M2C_UNK *) M2C_FIELD(arg0, M2C_UNK **, 0x24) == NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x24) = &zcfree;
    }
    temp_r9 = M2C_FIELD(arg0, void *(**)(void *, s32, s32), 0x20);
    temp_r3 = temp_r9((void *)M2C_FIELD(arg0, s32 *, 0x28), 1, 0x18);
    M2C_FIELD(arg0, void **, 0x1C) = temp_r3;
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s32 *, 0x14) = 0;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), s32 *, 0xC) = 0;
        if (var_r30 < 0) {
            var_r30 = -var_r30;
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), s32 *, 0xC) = 1;
        }
        if ((u32) (var_r30 - 8) > 7U) {
            inflateEnd(arg0);
            return -2;
        }
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), s32 *, 0x10) = var_r30;
        if ((s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), s32 *, 0xC) == 0) {
            var_r4 = (M2C_UNK *)adler32;
        } else {
            var_r4 = NULL;
        }
        temp_r3_2 = inflate_blocks_new(arg0, var_r4, 1 << var_r30);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), s32 *, 0x14) = temp_r3_2;
        if (temp_r3_2 != 0) {
            inflateReset(arg0);
            return 0;
        }
        inflateEnd(arg0);
        goto block_21;
    }
block_21:
    return -4;
}
