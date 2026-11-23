/* DebugTextPage__FreeMenuFrames @ 0x80276460 (size: 0xBC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0

void MenuFrame__Destroy(void *, s32);

void DebugTextPage__FreeMenuFrames(void *arg0, s32 arg1) {
    char *p;
    void *d;
    char *q;
    void *e;
    if ((char *)arg0 + 0x6D0C != NULL) {
        p = (char *)arg0 + 0x824C;
        if ((char *)arg0 + 0x6D0C != p) {
            do {
                p -= 0x550;
                d = *(void **)(p + 412);
                ((void (*)(void *, s32))((s32 *)d)[3])((char *)p + ((s16 *)d)[4], 0);
            } while ((char *)arg0 + 0x6D0C != p);
        }
    }
    if ((char *)arg0 + 0x5D6C != NULL) {
        q = (char *)arg0 + 0x6D0C;
        if ((char *)arg0 + 0x5D6C != q) {
            do {
                q -= 0x1F4;
                e = *(void **)(q + 412);
                ((void (*)(void *, s32))((s32 *)e)[3])((char *)q + ((s16 *)e)[4], 0);
            } while ((char *)arg0 + 0x5D6C != q);
        }
    }
    MenuFrame__Destroy(arg0, arg1);
}
