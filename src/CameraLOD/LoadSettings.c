/* CameraLOD__LoadSettings @ 0x80253D40 (size: 0x188, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0
s32 CmdCon__SetContextScript(void *, s32, s32);
void VarRealUnit__CreateWithScale(f32, void *, char *, char *, void *, s32, s32, s32, s32);
void CmdCon__ExecuteFileInContext(s32, s32);
extern char lbl_80347ED0[] __attribute__((section(".rodata")));
extern char lbl_80347EDC[] __attribute__((section(".rodata")));
extern char lbl_80347EE8[] __attribute__((section(".rodata")));
extern char lbl_80347EF4[] __attribute__((section(".rodata")));
extern char lbl_80347F04[] __attribute__((section(".rodata")));
extern char lbl_80347F10[] __attribute__((section(".rodata")));
extern f32 lbl_80347F1C __attribute__((section(".rodata")));
extern f32 lbl_80347F20 __attribute__((section(".rodata")));
extern void *lbl_803DCC10;
typedef struct { char pad[8]; f32 f8; f32 f12; f32 f16; f32 f20; f32 f24; f32 f28; f32 f32; } Self;
s32 CameraLOD__LoadSettings(Self *self, s32 file) {
    f32 *d;
    f32 v;
    f32 w;
    s32 i;
    self->f32 = lbl_80347F1C;
    CmdCon__SetContextScript(lbl_803DCC10, file, file);
    VarRealUnit__CreateWithScale(lbl_80347F20, lbl_803DCC10, file, lbl_80347ED0, &self->f8, 0, 0, -1, 0);
    VarRealUnit__CreateWithScale(lbl_80347F20, lbl_803DCC10, file, lbl_80347EDC, &self->f12, 0, 0, -1, 0);
    VarRealUnit__CreateWithScale(lbl_80347F20, lbl_803DCC10, file, lbl_80347EE8, &self->f16, 0, 0, -1, 0);
    VarRealUnit__CreateWithScale(lbl_80347F20, lbl_803DCC10, file, lbl_80347EF4, &self->f20, 0, 0, -1, 0);
    VarRealUnit__CreateWithScale(lbl_80347F20, lbl_803DCC10, file, lbl_80347F04, &self->f24, 0, 0, -1, 0);
    VarRealUnit__CreateWithScale(lbl_80347F20, lbl_803DCC10, file, lbl_80347F10, &self->f28, 0, 0, -1, 0);
    CmdCon__ExecuteFileInContext((s32)lbl_803DCC10, file);
    d = (f32 *)((char *)self + 36);
    for (i = 0; i < 6; i++) {
        v = d[-6] * self->f8;
        w = v * v;
        d[-6] = v;
        d[0] = w;
        d++;
    }
}
