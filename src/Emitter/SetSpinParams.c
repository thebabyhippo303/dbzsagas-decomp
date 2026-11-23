/* Emitter__SetSpinParams @ 0x80222C8C (size: 0x90, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

f32 Rand__FloatScaled(f32, s32);
extern f32 lbl_803DE504;
extern M2C_UNK lbl_803DD5BC;

typedef struct {
    u32 handle;
    char pad[116 - 4];
    f32 f116;
    f32 f120;
    f32 f124;
    char pad2[176 - 128];
    s32 w176;
    char pad3[272 - 180];
} Entry;

typedef struct {
    char pad[0x430];
    Entry *entries;
    char pad2[0x470 - 0x434];
    u16 counter;
} Pool;

extern Pool lbl_803AD05C;

s32 Emitter__SetSpinParams(u32 arg0, f32 farg0, f32 farg1, s32 arg1) {
    Pool *pool = &lbl_803AD05C;
    Entry *entry = pool->entries + (arg0 >> 16);

    if (entry->handle != arg0) {
        return 0;
    }
    entry->f120 = Rand__FloatScaled(lbl_803DE504, (s32)&lbl_803DD5BC);
    entry->f116 = farg0;
    entry->f124 = farg1;
    entry->w176 = arg1;
    return 1;
}
