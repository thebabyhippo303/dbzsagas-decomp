/* CActor__UpdateLightLuminance @ 0x801DDAB0 (size: 0xC4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32;
typedef struct { f32 x, y, z; } V3;

typedef struct {
    char pad0[0xB8];
    f32 maxLuminance;
    char padBC[4];
    V3 color;
    char padCC[4];
    f32 luminance;
    int fD4;
    char padD8[0xF8 - 0xD8];
    V3 light;
    int f104;
} CActor;

extern f32 lbl_80343C00 __attribute__((section(".data")));
extern f32 lbl_80343C04 __attribute__((section(".data")));
extern f32 lbl_80343C08 __attribute__((section(".data")));
extern f32 lbl_80343C0C __attribute__((section(".data")));
extern f32 lbl_80343C10 __attribute__((section(".data")));
extern f32 fabsf(f32);

void CActor__UpdateLightLuminance(CActor *self) {
    f32 luminance;
    f32 maximum;
    f32 scale;

    self->light = self->color;
    maximum = self->maxLuminance;
    luminance = (self->color.z * lbl_80343C08) + ((self->color.x * lbl_80343C00) + (self->color.y * lbl_80343C04));
    if (!(luminance >= maximum)) {
        if (!(fabsf(luminance) >= lbl_80343C0C)) {
            scale = lbl_80343C10;
        } else {
            scale = maximum / luminance;
        }
        self->light.x = self->light.x * scale;
        self->light.y = self->light.y * scale;
        self->light.z = self->light.z * scale;
        luminance = self->maxLuminance;
    }
    self->luminance = luminance;
    self->f104 = 0;
    self->fD4 = 0;
}
