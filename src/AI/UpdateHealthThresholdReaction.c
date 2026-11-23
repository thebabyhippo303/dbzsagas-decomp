/* AI__UpdateHealthThresholdReaction @ 0x80074860 (size: 0xD8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef unsigned int u32;
typedef float f32;
typedef double f64;
typedef short s16;

extern char lbl_8031EFC0[] __attribute__((section(".data")));
extern f32 lbl_8031EFD4 __attribute__((section(".data")));

/* Keep the int-to-float constant pool at the same low 16 bits as the DOL. */
static const char pool_pad[0xEFD8] = {1};

void AI__UpdateHealthThresholdReaction(void *self) {
    s32 current;
    s32 threshold;
    void *avatar;
    void *obj;
    void *vtbl;

    current = *(s32 *)((char *)self + 0x584);
    avatar = *(void **)((char *)self + 0x390);
    threshold = current - (s32)(((*(f32 *)((char *)avatar + 0x288) / *(f32 *)((char *)avatar + 0x28C)) * lbl_8031EFD4) / (lbl_8031EFD4 / (f32)(f64)current));
    if (threshold == 0) {
        threshold = 1;
    }
    if (threshold != *(s32 *)((char *)self + 0x580)) {
        if (threshold != 1) {
            obj = *(void **)((char *)avatar + 0xAC);
            vtbl = *(void **)((char *)obj + 0xC);
            ((void (*)(void *, char *))(*(void **)((char *)vtbl + 0x4C)))((char *)obj + *(s16 *)((char *)vtbl + 0x48), lbl_8031EFC0);
            *(s32 *)((char *)self + 0x398) = 0;
            *(s32 *)((char *)self + 0x10C) = 0;
        }
        *(s32 *)((char *)self + 0x580) = threshold;
    }
}
