/* EzNode__InsertBefore @ 0x80265AB0 (size: 0xB8, .text, ProDG 3.9.3 -O2) - MATCHED */
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0

void EzNode__InsertBefore(void *arg0, void *arg1) {
    void *vt;
    void *t0;
    void *tC;
    void *tC2;
    void *t0b;

    if (arg1 != NULL && arg1 != arg0) {
        vt = M2C_FIELD(arg1, void **, 0x10);
        M2C_FIELD(vt, void (**)(void *), 0x44)((char *)arg1 + M2C_FIELD(vt, s16 *, 0x40));
        t0 = M2C_FIELD(arg0, void **, 0);
        M2C_FIELD(arg1, void **, 0) = t0;
        tC = M2C_FIELD(arg0, void **, 0xC);
        M2C_FIELD(arg1, void **, 8) = arg0;
        M2C_FIELD(arg1, void **, 0xC) = tC;
        tC2 = M2C_FIELD(arg0, void **, 0xC);
        if (tC2 != NULL) {
            M2C_FIELD(tC2, void **, 8) = arg1;
        }
        t0b = M2C_FIELD(arg0, void **, 0);
        M2C_FIELD(arg0, void **, 0xC) = arg1;
        if (t0b != NULL && M2C_FIELD(M2C_FIELD(t0b, void **, 4), void **, 0xC) != NULL) {
            do {
                M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4) = M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), void **, 0xC);
            } while (M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), void **, 0xC) != NULL);
        }
    }
}
