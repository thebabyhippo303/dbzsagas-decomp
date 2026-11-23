/* AvatarMovement__PlayFootstepSound @ 0x800B5184 (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Sound__Play3DWithSource(s32, s32, s32);
extern s32 lbl_80366848[] __attribute__((section(".data")));
extern s32 lbl_8036687C[] __attribute__((section(".data")));

void AvatarMovement__PlayFootstepSound(void *arg0, s32 arg1) {
    s32 snd;

    if (!(M2C_FIELD(arg0, f32 *, 0x568) <= M2C_FIELD(M2C_FIELD(arg0, void **, 0x68), f32 *, 0x44))) {
        snd = lbl_80366848[arg1];
    } else {
        snd = lbl_8036687C[arg1];
    }
    if (snd != 0) {
        Sound__Play3DWithSource(snd, M2C_FIELD(arg0, s32 *, 0) + 0x38, 0);
    }
}
