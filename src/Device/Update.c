/* Device__Update @ 0x800E53FC (size: 0x128, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

/* Byte-matched: Device__Update @ 0x800E53FC (0x128). ProDG -O2. */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0
void Simple__Update(void *);
float sinf(float);
void Floater__SetSpinAngle(void *, f32);
f32 Rand__RangeFloat(void *, f32, f32);
s32 Rand__RangeInt(void *, s32, s32);
void Simple__SetYRotVel(void *, f32);
extern f32 lbl_803232B8 __attribute__((section(".data")));
extern f32 lbl_803232BC __attribute__((section(".data")));
extern f32 lbl_803232C0 __attribute__((section(".data")));
extern f32 lbl_803232C4 __attribute__((section(".data")));
extern f32 lbl_803232C8 __attribute__((section(".data")));
extern f32 lbl_803A35BC __attribute__((section(".data")));
extern s32 lbl_803AD83C __attribute__((section(".data")));
extern char lbl_803DD634[8] __attribute__((section(".sdata")));
void Device__Update(void *self) {
    f32 na;
    f32 nb;
    f32 s1;
    f32 s2;
    f32 b8;
    Simple__Update(self);
    if ((*(s32 *)((char *)*(void **)((char *)self + 0x510) + 4) & 4) != 0) {
        na = *(f32 *)((char *)self + 0x520) + lbl_803A35BC;
        nb = *(f32 *)((char *)self + 0x524) - lbl_803A35BC;
        *(f32 *)((char *)self + 0x520) = na;
        *(f32 *)((char *)self + 0x524) = nb;
        if (*(s32 *)((char *)*(void **)((char *)*(void **)((char *)self + 0x84) + 0x94) + 0xC) == lbl_803AD83C) {
            s1 = sinf(na + na);
            b8 = lbl_803232B8;
            s2 = sinf(*(f32 *)((char *)self + 0x520) * b8);
            Floater__SetSpinAngle(self, (s1 + s2) * lbl_803232BC + *(f32 *)((char *)self + 0x518));
            if (!(*(f32 *)((char *)self + 0x524) > lbl_803232C0)) {
                *(f32 *)((char *)self + 0x524) = Rand__RangeFloat(lbl_803DD634, lbl_803232C4, b8);
                if (Rand__RangeInt(lbl_803DD634, 0, 10) <= 4) {
                    *(f32 *)((char *)self + 0x528) = b8;
                } else {
                    *(f32 *)((char *)self + 0x528) = lbl_803232C8;
                }
            }
            Simple__SetYRotVel(self, *(f32 *)((char *)self + 0x528));
        }
    }
}
