/* MainMenu__UpdateWidgetDescriptorList @ 0x8012F1EC (size: 0xF4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef unsigned short u16; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef short s16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
typedef struct { u32 hi; u32 lo; } W64;
typedef void (*VFn)(void *, s32, s32, s32, s32, s32);
void Sphere__Render(void *);
extern f32 lbl_8032A900 __attribute__((section(".data")));
extern f32 lbl_8032A910 __attribute__((section(".data")));
extern f32 lbl_8032A914 __attribute__((section(".data")));
extern u32 lbl_803A35AC __attribute__((section(".data")));
extern f64 lbl_8032A908 __attribute__((section(".rodata")));
void MainMenu__UpdateWidgetDescriptorList(void *arg0) {
    f32 div;
    f32 v;
    s32 idx;
    s32 off;
    void *holder;
    void *entry;
    volatile u32 stack_pad[2];
    W64 w;
    div = lbl_8032A900 / *(f32 *)((char *)arg0 + 0x1BC);
    *(f32 *)((char *)arg0 + 0x1C0) = div;
    w.lo = lbl_803A35AC;
    w.hi = 0x43300000u;
    v = (f32)(*(f64 *)&w - lbl_8032A908) * lbl_8032A910 + *(f32 *)((char *)arg0 + 0x1C4);
    *(f32 *)((char *)arg0 + 0x1C4) = v;
    if (v <= div) goto else440;
    idx = *(s32 *)((char *)arg0 + 0x1B8) + 1;
    *(s32 *)((char *)arg0 + 0x1B8) = idx;
    if (idx < *(s32 *)((char *)arg0 + 0x1A4)) {
        holder = *(void **)((char *)arg0 + 0x19C);
        off = idx * 4;
        entry = *(void **)((char *)*(void **)((char *)arg0 + 0x1A0) + off);
        (*(VFn *)((char *)holder + 0x6C))((char *)arg0 + *(s16 *)((char *)holder + 0x68), *(s32 *)((char *)entry + 0), *(s32 *)((char *)entry + 4), 0, 1, 1);
    }
    goto common;
else440:
    *(s32 *)((char *)arg0 + 0x1B8) = 0;
common:
    *(f32 *)((char *)arg0 + 0x1C4) = lbl_8032A914;
    Sphere__Render(arg0);
}
