/* AvatarMovement__UpdateMovementSound @ 0x800AC4A0 (size: 0x130, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef float f32;
#define F(e,t,o) (*(t)((char *)(e) + (o)))
s32 Sound__Play3DWithSourceAndVolumePitch(char *, s32, void *, f32, f32);
extern f32 lbl_80320D18 __attribute__((section(".data")));
extern f32 lbl_80320D1C __attribute__((section(".data")));
extern f32 lbl_80320D20 __attribute__((section(".data")));
extern f32 lbl_80320D24 __attribute__((section(".data")));
extern f32 lbl_80320D28 __attribute__((section(".data")));
extern char *lbl_803668B0[] __attribute__((section(".data")));
void AvatarMovement__UpdateMovementSound(void *p) {
    s32 a = F(p, s32 *, 0x58C);
    f32 f, lo, hi;
    if (F(p, s32 *, 0x620) == a) {
        F(p, s32 *, 0x624) = 0;
        F(p, s32 *, 0x628) = 0;
    } else if (a != 0) {
        F(p, s32 *, 0x624) = 1;
        F(p, s32 *, 0x628) = 0;
    } else {
        F(p, s32 *, 0x624) = a;
        F(p, s32 *, 0x628) = 1;
    }
    F(p, s32 *, 0x62C) = 0;
    F(p, s32 *, 0x630) = 0;
    F(F(p, void **, 0x144), s32 *, 0x80) = 0;
    if (F(p, s32 *, 0x624) != 0) {
        f = -F(F(p, void **, 0), f32 *, 0x7A4);
        if (!(f <= lbl_80320D18)) {
            f = f * lbl_80320D1C + lbl_80320D20;
            lo = lbl_80320D24;
            hi = lbl_80320D28;
            if (!(f >= lo)) {
                f = lo;
            } else if (!(f <= hi)) {
                f = hi;
            }
            Sound__Play3DWithSourceAndVolumePitch(lbl_803668B0[F(p, s32 *, 0x594)], (s32)(F(p, char **, 0) + 0x38), 0, f, lbl_80320D24);
        }
    }
    F(F(p, void **, 0x144), s32 *, 0x80) = 0;
}
