/* SoundDriver__ReleaseAllBanks @ 0x80193780 (size: 0xB0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


s32 SoundDriver__ReleaseAllBanks(void *arg0) {
    s32 temp_r9;
    s32 var_r0;
    s32 var_r8;
    void **var_r9;
    void *temp_r11;
    void *temp_r9_2;

    var_r8 = 0;
    if (var_r8 < (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4)) {
        do {
            temp_r11 = M2C_FIELD(arg0, void **, 0);
            var_r0 = var_r8;
            if (var_r8 < 0) {
                var_r0 = M2C_FIELD(temp_r11, s32 *, 4) - 1;
            }
            temp_r9 = M2C_FIELD(temp_r11, s32 *, 4);
            if ((var_r0 >= temp_r9) || (temp_r9 == 0)) {
                var_r9 = NULL;
            } else {
                var_r9 = M2C_FIELD(temp_r11, s32 *, 0) + (var_r0 * 4);
            }
            var_r8 += 1;
            M2C_FIELD(*var_r9, s32 *, 4) = 1;
        } while (var_r8 < (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4));
    }
    temp_r9_2 = M2C_FIELD(arg0, void **, 0x60);
    M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *), 0x14C)(arg0 + M2C_FIELD(temp_r9_2, s16 *, 0x148));
    return 1;
}
