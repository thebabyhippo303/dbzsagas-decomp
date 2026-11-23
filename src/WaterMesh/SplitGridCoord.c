/* WaterMesh__SplitGridCoord @ 0x802A0058 (size: 0xA8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32;
typedef int s32;
typedef unsigned char u8;

static const u8 mt_ro_pad[1952] __attribute__((section(".rodata"))) = { 1 };

f32 floorf(f32);
extern f32 lbl_80350798 __attribute__((section(".rodata")));

void WaterMesh__SplitGridCoord(s32 *a, s32 *b, f32 *c, f32 x, f32 y) {
    f32 t = x * y;
    f32 fa = floorf(t);
    f32 k = lbl_80350798;
    *a = (s32)fa;
    *b = (s32)floorf(t + k);
    *c = t - (f32)*a;
}
