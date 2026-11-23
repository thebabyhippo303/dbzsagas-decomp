/* Floater__Construct @ 0x802B31C4 (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Simple__ConstructBase(void *, void *);
M2C_UNK PathFollower__Construct(s32);
extern M2C_UNK lbl_80353AB0 __attribute__((section(".data")));
extern M2C_UNK lbl_80353B80 __attribute__((section(".data")));
extern M2C_UNK lbl_80353BA0 __attribute__((section(".data")));
extern M2C_UNK lbl_80353C48 __attribute__((section(".data")));
extern M2C_UNK lbl_803945B4 __attribute__((section(".data")));
extern s32 lbl_803DE614 __attribute__((section(".sdata")));

/* Floater__Construct: 97% (id 33e8b09d, 11B/5ins). Only gap: lwz r7 must sit
 * AFTER lis x4, ours hoists it before (load-latency hoist sticks across all
 * assign interleavings). Temps must be post-call (else frame grows to r28).
 * Zero stores must list 0x4D0 before 0x4F4 (scheduler emits swapped). */
void *Floater__Construct(void *arg0) {
    void *a;
    void *b;
    void *c;
    void *d;
    s32 t;
    s32 z;

    Simple__ConstructBase(arg0, &lbl_803945B4);
    PathFollower__Construct((s32) (arg0 + 0x414));
    a = &lbl_80353BA0;
    b = &lbl_80353B80;
    t = lbl_803DE614;
    z = 0;
    c = &lbl_80353AB0;
    d = &lbl_80353C48;
    M2C_FIELD(arg0, M2C_UNK **, 0x198) = a;
    M2C_FIELD(arg0, M2C_UNK **, 0x1B4) = b;
    M2C_FIELD(arg0, M2C_UNK **, 0x4C8) = c;
    M2C_FIELD(arg0, M2C_UNK **, 0x34) = d;
    M2C_FIELD(arg0, s32 *, 0x12C) = t;
    M2C_FIELD(arg0, s32 *, 0x4D0) = z;
    M2C_FIELD(arg0, s32 *, 0x4F4) = z;
    return arg0;
}
