/* SoundDriver__StoreOutputMode @ 0x801933F8 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


s32 SoundDriver__StoreOutputMode(void *arg0, s32 arg1) {
    void *table = M2C_FIELD(arg0, void **, 0x60);
    if (M2C_FIELD(table, s32 (**)(void *), 0x3C)(arg0 + M2C_FIELD(table, s16 *, 0x38)) == 0) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 8) = arg1;
    return 1;
}
