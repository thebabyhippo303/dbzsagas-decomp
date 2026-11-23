/* PathManager__Construct @ 0x801FCC64 (size: 0x90, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


M2C_UNK PathManager__RegisterGroup(void *, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK lbl_80345064 __attribute__((section(".data")));
extern M2C_UNK lbl_803455A0 __attribute__((section(".data")));

void *PathManager__Construct(void *arg0) {
    s32 *var_r9;
    s32 var_ctr;

    M2C_FIELD(arg0, s32 *, 4) = 0;
    var_ctr = 0x20;
    M2C_FIELD(arg0, M2C_UNK **, 0x98) = &lbl_803455A0;
    var_r9 = arg0 + 0x84;
    do {
        *var_r9 = 0;
        var_r9 -= 4;
        var_ctr -= 1;
    } while (var_ctr != 0);
    M2C_FIELD(arg0, s32 *, 0) = 0;
    PathManager__RegisterGroup(arg0, &lbl_80345064, 0x80000000, 1);
    M2C_FIELD(arg0, s32 *, 0x94) = 0;
    M2C_FIELD(arg0, s32 *, 0x88) = -1;
    M2C_FIELD(arg0, s32 *, 0x8C) = 0;
    M2C_FIELD(arg0, s32 *, 0x90) = 0;
    return arg0;
}
