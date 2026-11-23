/* AvatarMovement__StoreBallisticTargetAndHeading @ 0x8008A524 (size: 0xE8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef float f32;
f32 atan2f(f32, f32);
extern f32 lbl_8031F568 __attribute__((section(".data")));
extern f32 lbl_8031F56C __attribute__((section(".data")));
extern f32 lbl_8031F570 __attribute__((section(".data")));
extern f32 lbl_803DE500;
typedef struct { s32 x, y, z; } I3;
typedef struct { char pad[0x38]; f32 x; char pad2[4]; f32 z; char pad3[0x75C-0x44]; f32 h; } Tgt;
typedef struct { Tgt *t; char pad[0xAC]; I3 pos; f32 f; f32 head; } AM;
void AvatarMovement__StoreBallisticTargetAndHeading(AM *self, I3 *v, f32 f) {
    Tgt *t;
    f32 dz;
    self->pos = *v;
    self->f = f;
    t = self->t;
    dz = ((f32 *)v)[2] - t->z;
    f = ((f32 *)v)[0] - t->x;
    if (!(f * f + dz * dz <= lbl_8031F568)) {
        if (dz == lbl_8031F56C) {
            if (f == lbl_8031F56C) f = lbl_8031F56C;
            else if (!(f <= lbl_8031F56C)) f = lbl_803DE500 * lbl_8031F570;
            else f = -lbl_803DE500 * lbl_8031F570;
        } else f = atan2f(f, dz);
        self->head = f;
        return;
    }
    self->head = t->h;
}
