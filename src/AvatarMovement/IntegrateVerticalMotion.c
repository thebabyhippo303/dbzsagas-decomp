/* AvatarMovement__IntegrateVerticalMotion @ 0x800A8458 (size: 0xB8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
typedef float f32;

f32 AvatarConfig__GetGravity(void *);
extern const f32 lbl_80320BD4 __attribute__((section(".data")));
extern f32 lbl_80320BD8 __attribute__((section(".data")));

void AvatarMovement__IntegrateVerticalMotion(void *arg0, f32 farg0, f32 *arg1, f32 *arg2, f32 *arg3) {
    f32 cap;
    f32 grav;
    f32 k;

    grav = -AvatarConfig__GetGravity(*(void **)arg0 + 0x694);
    *arg3 = grav;
    cap = lbl_80320BD4;
    if (!(*(*(f32 **)arg0 + 0x7A4 / 4) >= cap)) {
        *arg3 = grav - (*(f32 *)((char *)arg0 + 0x570) * *(*(f32 **)arg0 + 0x7A4 / 4));
    }
    k = farg0 * lbl_80320BD8;
    *arg2 = *arg3 * farg0 + *(*(f32 **)arg0 + 0x7A4 / 4);
    *arg1 = (*arg3 * k + *(*(f32 **)arg0 + 0x7A4 / 4)) * farg0;
}
