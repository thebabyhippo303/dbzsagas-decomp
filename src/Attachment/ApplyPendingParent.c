/* Attachment__ApplyPendingParent @ 0x801E82BC (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


typedef struct { s32 a, b, c, d; } ApQuad;

void Attachment__ApplyPendingParent(void *arg0) {
    s32 changed;
    void *obj;
    void *vt;

    changed = 1;
    if (M2C_FIELD(arg0, ApQuad *, 0x54).a == M2C_FIELD(arg0, ApQuad *, 0x1C).a) {
        changed = 0;
    }
    M2C_FIELD(arg0, ApQuad *, 0x1C) = M2C_FIELD(arg0, ApQuad *, 0x54);
    if (changed != 0) {
        obj = M2C_FIELD(arg0, void **, 0);
        vt = M2C_FIELD(obj, void **, 0x34);
        M2C_FIELD(vt, M2C_UNK (**)(void *), 0x13C)((char *)obj + M2C_FIELD(vt, s16 *, 0x138));
    }
}
