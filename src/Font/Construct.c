/* Font__Construct @ 0x80260DCC (size: 0x1C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
typedef struct Font {
    s32 unk0;
    char pad[16436];
    void *vt;
} Font;
extern char lbl_8034E3F8[] __attribute__((section(".data")));

Font *Font__Construct(Font *self) {
    Font *p = self;
    p->vt = lbl_8034E3F8;
    p->unk0 = 0;
    return self;
}
