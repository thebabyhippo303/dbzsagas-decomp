/* PathFollower__CreateOwnedPath @ 0x802C00E0 (size: 0xAC, .text, ProDG 3.9.3 -O2) - MATCHED */
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
typedef void (*VFn)(void *, s32, s32);
typedef struct { char pad[8]; s16 adjust; char pad2[2]; VFn fn; } Vtbl;
typedef struct { char pad[20]; Vtbl *vtbl; } T;
typedef struct {
    void *f0;
    void *f4;
    char pad[4];
    T *fC;
    char pad2[28 - 16];
    f32 f1C;
    char pad3[72 - 32];
    s32 f48;
} PF;
void *Mem__New(u32);
void *BezierPath__Construct(void *, void *, void *, s32, s32);
extern char lbl_803527B8[] __attribute__((section(".data")));
extern f32 lbl_803527C8 __attribute__((section(".data")));
void PathFollower__CreateOwnedPath(PF *self, void *arg1, s32 arg2, s32 arg3) {
    void *path;
    s32 *d;
    s32 v0;
    s32 v4;
    s32 v8;
    T *t;
    t = self->fC;
    if (t != NULL) {
        Vtbl *vt = t->vtbl;
        vt->fn((char *)t + vt->adjust, 3, arg2);
    }
    path = BezierPath__Construct(Mem__New(120), lbl_803527B8, arg1, arg2, arg3);
    self->fC = path;
    self->f4 = path;
    d = (s32 *)((char *)self + 0x48);
    v0 = ((s32 *)arg1)[0];
    v4 = ((s32 *)arg1)[1];
    v8 = ((s32 *)arg1)[2];
    self->f48 = v0;
    d[1] = v4;
    d[2] = v8;
    self->f1C = lbl_803527C8;
}
