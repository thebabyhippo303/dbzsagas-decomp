/* MissionStats__UpdateSummaryDisplayEntryWidgets @ 0x80122F14 (size: 0x284, .text, ProDG 3.9.3 -O2) - MATCHED */
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
void * Mem__New(u32);
void * Sphere__Construct(void *);
M2C_UNK UI__ProjectPointToScreen();
extern f32 lbl_80327458 __attribute__((section(".data")));
extern f32 lbl_8032745C __attribute__((section(".data")));
extern s32 lbl_803DC640 __attribute__((section(".sdata")));
typedef M2C_UNK (*Fn6)(void *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
typedef M2C_UNK (*Fn4)(void *, f32, f32, f32, f32);
typedef M2C_UNK (*Fn2)(void *, f32, f32);
typedef M2C_UNK (*Fn1)(void *, M2C_UNK);
#define VT(o) (*(char **)((char *)(o) + 0x19C))
#define ADJ(o, a) ((char *)(o) + *(s16 *)(VT(o) + (a)))
#define W48 M2C_FIELD(arg0, void **, 0x48)
#define W4C M2C_FIELD(arg0, void **, 0x4C)
s32 MissionStats__UpdateSummaryDisplayEntryWidgets(void *arg0, s32 arg1) {
    u32 out[4];
    s32 ret;
    void *temp;
    void *temp2;
    s32 sda;
    f32 fa;
    f32 fb;
    f32 fc;
    f32 fd;
    ret = 0;
    if (W48 == NULL) {
        UI__ProjectPointToScreen(&out[0], arg0, arg1);
        *(u64 *)((char *)arg0 + 0xC) = *(u64 *)&out[0];
        temp = Sphere__Construct(Mem__New(0x1A0U));
        sda = lbl_803DC640;
        W48 = temp;
        (*(Fn6 *)(VT(temp) + 0x14))(ADJ(temp, 0x10), sda, M2C_FIELD(arg0, s32 *, 0x68), 0, 1, 1);
        fa = lbl_80327458;
        fb = fa;
        fc = fb;
        fd = fc;
        (*(Fn4 *)(VT(W48) + 0x10C))(ADJ(W48, 0x108), fa, fb, fc, fd);
        (*(Fn2 *)(VT(W48) + 0xCC))(ADJ(W48, 0xC8), lbl_80327458, lbl_80327458);
        (*(Fn2 *)(VT(W48) + 0xEC))(ADJ(W48, 0xE8), lbl_8032745C, lbl_8032745C);
        (*(Fn1 *)(VT(W48) + 0x1B4))(ADJ(W48, 0x1B0), 5);
        (*(Fn2 *)(VT(W48) + 0xAC))(ADJ(W48, 0xA8), M2C_FIELD(arg0, f32 *, 0xC), M2C_FIELD(arg0, f32 *, 0x10));
    } else {
        UI__ProjectPointToScreen(&out[2], arg0, arg1);
        ret = 1;
        *(u64 *)((char *)arg0 + 0x14) = *(u64 *)&out[2];
        temp2 = Sphere__Construct(Mem__New(0x1A0U));
        W4C = temp2;
        (*(Fn6 *)(VT(temp2) + 0x14))(ADJ(temp2, 0x10), lbl_803DC640, M2C_FIELD(arg0, s32 *, 0x68), 0, 1, 1);
        fa = lbl_80327458;
        fb = fa;
        fc = fb;
        fd = fc;
        (*(Fn4 *)(VT(W4C) + 0x10C))(ADJ(W4C, 0x108), fa, fb, fc, fd);
        (*(Fn2 *)(VT(W4C) + 0xCC))(ADJ(W4C, 0xC8), lbl_80327458, lbl_80327458);
        (*(Fn2 *)(VT(W4C) + 0xEC))(ADJ(W4C, 0xE8), lbl_8032745C, lbl_8032745C);
        (*(Fn1 *)(VT(W4C) + 0x1B4))(ADJ(W4C, 0x1B0), 5);
        (*(Fn2 *)(VT(W4C) + 0xAC))(ADJ(W4C, 0xA8), M2C_FIELD(arg0, f32 *, 0x14), M2C_FIELD(arg0, f32 *, 0x18));
    }
    return ret;
}
