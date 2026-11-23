/* Variable__PostChangeEvent @ 0x8018C724 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef s32 (*DlgFn)(void *);

void EventDispatcher__Send(void *, s32, s32, s32, s32);
extern char lbl_803B1DDC[];

void Variable__PostChangeEvent(void *self) {
    s32 idx;
    void *p;
    s32 v;

    idx = M2C_FIELD(self, s32 *, 56);
    if (idx >= 0) {
        p = M2C_FIELD(self, void **, 4);
        v = ((DlgFn)M2C_FIELD(p, void **, 60))((char *)self + M2C_FIELD(p, s16 *, 56));
        EventDispatcher__Send(lbl_803B1DDC, idx, v, 0, M2C_FIELD(self, s32 *, 60));
    }
}
