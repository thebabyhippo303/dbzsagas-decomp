/* CActor__SetLightColor @ 0x801DD9D4 (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef short s16;
typedef float f32;

typedef struct Vec3 {
    f32 x, y, z;
} Vec3;

typedef struct CActor {
    char pad[0xBC];
    s16 lightFlags;
    s16 pad2;
    Vec3 lightColor;
} CActor;

void CActor__UpdateLightLuminance(CActor *self);

void CActor__SetLightColor(CActor *self, Vec3 *color) {
    if (color->x != self->lightColor.x || color->y != self->lightColor.y || color->z != self->lightColor.z) {
        self->lightColor = *color;
        self->lightFlags = 0x1F;
        CActor__UpdateLightLuminance(self);
    }
}
