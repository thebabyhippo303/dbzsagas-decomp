/* SoundDriver__Create @ 0x801955BC (size: 0xE0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 SoundDriver__Construct(s32);
s32 Mem__New(s32);
char * strcpy(char *, const char *);
s32 SoundDriver__Create(s32 arg0, s8 *arg1) {
    s32 temp_r3;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_4;

    temp_r3 = SoundDriver__Construct(Mem__New(0x51C));
    if (temp_r3 == 0) {
        return 0;
    }
    strcpy(temp_r3 + 0x20, arg1);
    temp_r9 = M2C_FIELD(temp_r3, void **, 0x60);
    if (M2C_FIELD(temp_r9, s32 (**)(s32, s32), 0x14)(temp_r3 + M2C_FIELD(temp_r9, s16 *, 0x10), arg0) == 0) {
        temp_r9_4 = M2C_FIELD(temp_r3, void **, 0x60);
        M2C_FIELD(temp_r9_4, M2C_UNK (**)(s32, M2C_UNK), 0xC)(temp_r3 + M2C_FIELD(temp_r9_4, s16 *, 8), 3);
        return 0;
    } else {
        temp_r9_2 = M2C_FIELD(temp_r3, void **, 0x60);
        if (M2C_FIELD(temp_r9_2, s32 (**)(s32, M2C_UNK, M2C_UNK), 0x24)(temp_r3 + M2C_FIELD(temp_r9_2, s16 *, 0x20), 0x7D00, 1) != 0) {
            return temp_r3;
        } else {
            temp_r9_3 = M2C_FIELD(temp_r3, void **, 0x60);
            M2C_FIELD(temp_r9_3, M2C_UNK (**)(s32), 0x1C)(temp_r3 + M2C_FIELD(temp_r9_3, s16 *, 0x18));
            temp_r9_4 = M2C_FIELD(temp_r3, void **, 0x60);
            M2C_FIELD(temp_r9_4, M2C_UNK (**)(s32, M2C_UNK), 0xC)(temp_r3 + M2C_FIELD(temp_r9_4, s16 *, 8), 3);
            return 0;
        }
    }
}
