/* CActor__AcquireQueryGeometry @ 0x801DE92C (size: 0xAC, .text, ProDG 3.9.3 -O2) - MATCHED */
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0

typedef void *(*QueryFn)(void *);
typedef s32 (*QueryCmpFn)(void *);

void *CActor__AcquireQueryGeometry(void *arg0, s32 arg1) {
    void *p = *(void **)((char *)arg0 + 0x9C);
    void *vt;
    void *v;
    void *q;
    void *u;
    if (p == NULL) {
        return NULL;
    }
    vt = *(void **)p;
    v = ((QueryFn)*(void **)((char *)vt + 0x9C))((char *)p + *(s16 *)((char *)vt + 0x98));
    if (v != NULL) {
        vt = *(void **)v;
        if (arg1 == ((QueryCmpFn)*(void **)((char *)vt + 0x34))((char *)v + *(s16 *)((char *)vt + 0x30))) {
            return NULL;
        }
    }
    q = *(void **)((char *)arg0 + 0x9C);
    vt = *(void **)q;
    u = ((QueryFn)*(void **)((char *)vt + 0x8C))((char *)q + *(s16 *)((char *)vt + 0x88));
    if (u == NULL) {
        return q;
    }
    return u;
}
