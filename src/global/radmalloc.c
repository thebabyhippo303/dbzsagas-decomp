/* radmalloc @ 0x802EFE30 (size: 0xBC, .text, ProDG 3.9.3 -O2) - MATCHED */
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0

void *OSAllocFromHeap(void *, s32);
extern void *lbl_8037FC78 __attribute__((section(".data")));
extern s32 lbl_8037FC7C __attribute__((section(".data")));
extern void *lbl_803DD0D8 __attribute__((section(".data")));

void *radmalloc(s32 size) {
    s32 need;
    char *p;
    s32 marker;
    u8 pad;
    void *fn;

    if (size == 0) {
        return NULL;
    }
    if (size == -1) {
        return NULL;
    }
    need = size + 64;
    fn = lbl_8037FC78;
    if (fn != NULL) {
        if ((p = ((void *(*)(s32))fn)(need)) != NULL) {
            if (p == (void *)-1) {
                return NULL;
            }
            marker = 3;
            goto align;
        }
    }
    if ((p = OSAllocFromHeap(lbl_803DD0D8, need)) == NULL) {
        return NULL;
    }
    marker = 0;
align:
    pad = (u8)(64 - ((u32)p & 31));
    p += pad;
    ((u8 *)p)[-1] = pad;
    ((u8 *)p)[-2] = (u8)marker;
    if (marker == 3) {
        ((s32 *)p)[-2] = lbl_8037FC7C;
    }
    return p;
}
