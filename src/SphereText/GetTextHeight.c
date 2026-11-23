/* SphereText__GetTextHeight @ 0x80271C7C (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Candidate: SphereText__GetTextHeight @ 0x80271C7C (0x40). ProDG -O2. */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })
#define NULL 0

typedef struct { char pad[20]; f32 h; } HeightOut;

f32 SphereText__GetTextHeight(void *arg0) {
    void *temp_r9;
    HeightOut out;

    temp_r9 = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *, s32, void *), 0x474)(arg0 + M2C_FIELD(temp_r9, s16 *, 0x470), 1, &out);
    return out.h;
}
