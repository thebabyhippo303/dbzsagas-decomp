/* Sphere__Render @ 0x8026BF14 (size: 0xE4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK; typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef short s16; typedef int s32;
#define M2C_FIELD(e,t,o) (*(t)((char*)(e)+(o)))
#define NULL 0
typedef void (*Fn1)(void *);
void Sphere__Render(void *arg0) {
    void *vt;
    void *node;
    void *cvt;
    vt = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(vt, Fn1 *, 0x354)((char *)arg0 + M2C_FIELD(vt, s16 *, 0x350));
    if (M2C_FIELD(arg0, void **, 4) == NULL && (M2C_FIELD(arg0, s32 *, 0x50) == 0 || M2C_FIELD(arg0, s32 *, 0x114) == 0)) {
        vt = M2C_FIELD(arg0, void **, 0x19C);
        M2C_FIELD(vt, Fn1 *, 0x54)((char *)arg0 + M2C_FIELD(vt, s16 *, 0x50));
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x60) == 0) {
        vt = M2C_FIELD(arg0, void **, 0x19C);
        M2C_FIELD(vt, Fn1 *, 0x4C)((char *)arg0 + M2C_FIELD(vt, s16 *, 0x48));
        return;
    }
    vt = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(vt, Fn1 *, 0x2DC)((char *)arg0 + M2C_FIELD(vt, s16 *, 0x2D8));
    node = M2C_FIELD(arg0, void **, 4);
    if (node != NULL) {
        do {
            cvt = M2C_FIELD(node, void **, 0x19C);
            M2C_FIELD(cvt, Fn1 *, 0x3C)((char *)node + M2C_FIELD(cvt, s16 *, 0x38));
            node = M2C_FIELD(node, void **, 8);
        } while (node != NULL);
    }
}