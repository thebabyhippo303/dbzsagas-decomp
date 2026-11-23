/* ScriptThread__ReleaseVariable @ 0x8023A810 (size: 0x16C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct {
    char pad[8];
    u8 b8;
    u8 b9;
    char pad2[30];
    void **valsA;
    u8 *tags2;
    s32 *valsB;
    u8 *tags;
} Thread;
typedef struct { u32 hi; u32 lo; } W64;
typedef union { W64 w; f64 d; } W64U;

void memFree(void *);
extern f32 lbl_80346ED8 __attribute__((section(".rodata")));
extern f64 lbl_80346EE0 __attribute__((section(".rodata")));

void ScriptThread__ReleaseVariable(Thread *t, s32 idx) {
    s32 i;
    u8 b;
    u8 tag;
    s32 tag2;
    void *ptr;
    s32 f;
    u8 *tags;
    W64U u;

    if (t->tags2[idx] == 5) {
        b = t->b8;
        i = idx * 4;
        tags = t->tags;
        ptr = t->valsA[idx];
        f = 1;
        if (tags[(s8) b] == 5 && t->valsB[(s8) b] == (s32) ptr) {
            f = 0;
        }
        if (f != 0) {
            memFree(ptr);
        }
        M2C_FIELD(t->valsA, f32 *, i) = lbl_80346ED8;
    }
    b = t->b8;
    tags = t->tags;
    tag = tags[(s8) b];
    tag2 = t->tags2[idx];
    if (tag2 != tag) {
        if (tag2 == 2) {
            if (tag == 2) {
                t->valsB[(s8) b] = (s32) ((f32 *) t->valsB)[(s8) b];
                t->tags[(s8) t->b8] = (u8) tag2;
            }
        } else if (tag2 > 2) {
            if (tag2 == 3 || tag2 == 5) {
                t->tags2[idx] = tag;
            }
        } else if (tag2 == 1) {
            if (tag == 1) {
                u.w.hi = 0x43300000u;
                u.w.lo = t->valsB[(s8) b] ^ 0x80000000;
                ((f32 *) t->valsB)[(s8) b] = (f32) (u.d - lbl_80346EE0);
                t->tags[(s8) t->b8] = (u8) tag2;
            }
        }
    }
}
