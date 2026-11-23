/* SoundDriver__ReleaseBufferBase @ 0x80193454 (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

/* Byte-matched: SoundDriver__ReleaseBufferBase @ 0x80193454 (0x38). ProDG -O2. */
typedef int s32;
typedef short s16;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
s32 SoundDriver__ReleaseBufferBase(void *arg0) {
    ((void (*)(void *))M2C_FIELD(M2C_FIELD(arg0, void **, 0x60), void **, 0x8C))(
        (char *)arg0 + M2C_FIELD(M2C_FIELD(arg0, void **, 0x60), s16 *, 0x88));
    return 1;
}
