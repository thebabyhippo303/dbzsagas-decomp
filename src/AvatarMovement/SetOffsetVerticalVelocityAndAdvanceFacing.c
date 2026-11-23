/* AvatarMovement__SetOffsetVerticalVelocityAndAdvanceFacing @ 0x800A7A24 (size: 0xA4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef float f32;
typedef struct Inner { char pad0[0x74]; f32 a; f32 b; f32 c; char pad1[0x75C - 0x80]; f32 facing; } Inner;
typedef struct Mover { Inner *inner; char pad[0x560 - 4]; volatile f32 scale; } Mover;

extern f32 lbl_80320B7C __attribute__((section(".data")));
extern volatile f32 lbl_80320B80 __attribute__((section(".data")));
extern f32 lbl_80320B84 __attribute__((section(".data")));
extern f32 lbl_803DE500;

void AvatarMovement__SetOffsetVerticalVelocityAndAdvanceFacing(Mover *m, f32 f1, f32 f2, f32 f3) {
    f32 v;
    f32 step;
    f32 scale = m->scale;
    f32 *q;
    Inner *in = m->inner;
    in->a = lbl_80320B7C;
    in = (Inner *)((char *)in + 0x74);
    q = (f32 *)in;
    q[1] = f3 + scale;
    q[2] = lbl_80320B7C;
    v = m->scale * f1 + f2;
    if (v > lbl_80320B80 || !(v >= lbl_80320B84)) {
        v = lbl_80320B7C;
    }
    if (!(v >= -lbl_803DE500)) {
        do {
            v += (&lbl_803DE500)[1];
        } while (v < -lbl_803DE500);
    }
    if (v <= lbl_803DE500) goto done;
    step = (&lbl_803DE500)[1];
loop:
    v -= step;
    if (v > lbl_803DE500) goto loop;
done:
    m->inner->facing = v;
}
