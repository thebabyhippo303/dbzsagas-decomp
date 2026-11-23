/* AvatarMovement__SetVerticalVelocityAndFacing @ 0x800A7AE8 (size: 0x28, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef float f32;
typedef struct MoveInner { char pad[116]; f32 vertical; f32 velocity; f32 verticalCopy; char mid[0x75C - 128]; f32 facing; } MoveInner;
extern f32 lbl_80320B8C __attribute__((section(".data")));
void AvatarMovement__SetVerticalVelocityAndFacing(MoveInner **self, f32 facing, f32 velocity) {
    MoveInner *inner = *self;
    f32 *v = &inner->vertical;
    f32 scale = lbl_80320B8C;
    *v = scale;
    v[1] = velocity;
    v[2] = scale;
    (*self)->facing = facing;
}
