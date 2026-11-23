/* Sphere__GetLocalMatrix @ 0x8026DD18 (size: 0xB8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef void (*GetMatFn)(void *, void *);
typedef struct { char pad[0x240]; s16 adj; s16 pad2; GetMatFn fn; } VT;
typedef struct { char pad[0x19C]; VT *vt; } Holder;
void *Sphere__GetLocalMatrix(void *arg0, void *arg1) {
    s32 buf[16];
    Holder *h = (Holder *)arg1;
    VT *vt = h->vt;
    s16 adj = vt->adj;
    GetMatFn fn = vt->fn;
    s32 *dst;
    s32 *src;
    s32 n;
    s32 w;
    fn((u8 *)arg1 + adj, buf);
    dst = arg0;
    src = buf;
    n = 48;
    do {
        w = src[0];
        dst[0] = w;
        w = src[1];
        dst[1] = w;
        w = src[2];
        dst[2] = w;
        w = src[3];
        dst[3] = w;
        w = src[4];
        dst[4] = w;
        w = src[5];
        dst[5] = w;
        src += 6;
        dst += 6;
        n -= 24;
    } while (n != 0);
    w = src[0];
    dst[0] = w;
    w = src[1];
    dst[1] = w;
    w = src[2];
    dst[2] = w;
    w = src[3];
    dst[3] = w;
    return arg0;
}
