/* HUD__AnimateBeanRecoveryForAvatar @ 0x8010C460 (size: 0x1B0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef unsigned short u16; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK; typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef short s16; typedef int s32; typedef float f32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
#define CALL2(w, a, b) ((void (*)(void *, f32, f32))M2C_FIELD(M2C_FIELD(w, char **, 0x19C), void **, 0x19C))((char *)(w) + M2C_FIELD(M2C_FIELD(w, char **, 0x19C), s16 *, 0x198), a, b)

extern f32 lbl_80326264 __attribute__((section(".data")));
extern f32 lbl_80326268 __attribute__((section(".data")));

void HUD__AnimateBeanRecoveryForAvatar(void *arg0, s32 arg1) {
    f32 a, b;
    s32 i, j;
    void *w;
    void *w1, *w2, *w3, *w4, *w5;
    char *p = NULL;
    char *A, *B, *C, *D, *E;

    if (arg1 == M2C_FIELD(arg0, s32 *, 0x1268)) {
        p = (char *)arg0 + 0x1268;
    } else if (arg1 == M2C_FIELD(arg0, s32 *, 0x1774)) {
        p = (char *)arg0 + 0x1774;
    }
    w = M2C_FIELD(p, void **, 0x2C0);
    a = lbl_80326264;
    b = lbl_80326268;
    if (w != NULL) {
        CALL2(w, a, b);
    }
    A = p + 0xC4;
    B = p + 0x1A8;
    C = p + 0x28C;
    D = p + 0x450;
    E = p + 0x47C;
    j = 0;
    for (i = 2; i != 0; i--) {
        w1 = *(void **)(j + (s32)A);
        if (w1 != NULL) CALL2(w1, a, b);
        w2 = *(void **)(j + (s32)B);
        if (w2 != NULL) CALL2(w2, a, b);
        w3 = *(void **)(j + (s32)C);
        j += 4;
        if (w3 != NULL) CALL2(w3, a, b);
    }
    j = 0;
    for (i = 11; i != 0; i--) {
        w4 = *(void **)(j + (s32)D);
        if (w4 != NULL) CALL2(w4, a, b);
        w5 = *(void **)(j + (s32)E);
        j += 4;
        if (w5 != NULL) CALL2(w5, a, b);
    }
}
