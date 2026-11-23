/* SphereTextBox__SetColor @ 0x80273584 (size: 0xB0, .text, ProDG 3.9.3 -O2) - MATCHED */
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0

void SphereTextBox__SetColor(void *arg0, f32 f0, f32 f1, f32 f2, f32 f3) {
    s32 i = 0;
    s32 off;

    if (i < M2C_FIELD(arg0, s32 *, 0x1A4)) {
        off = 0;
        do {
            void *entry;
            void *fo;
            i++;
            entry = (void *)(off + M2C_FIELD(arg0, s32 *, 0x1A0));
            fo = M2C_FIELD(entry, void **, 0x19C);
            off += 0x1F4;
            M2C_FIELD(fo, void (**)(void *, f32, f32, f32, f32), 0x10C)((void *)((char *)entry + M2C_FIELD(fo, s16 *, 0x108)), f0, f1, f2, f3);
        } while (i < M2C_FIELD(arg0, s32 *, 0x1A4));
    }
}
