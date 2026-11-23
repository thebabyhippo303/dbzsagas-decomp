/* Physics__SetGravity @ 0x801A5EF4 (size: 0xFC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

float sqrtf(float);
extern f32 lbl_80340D28 __attribute__((section(".data")));
typedef struct { f32 x, y, z; } Vec3;
extern Vec3 lbl_803A366C __attribute__((section(".data")));
extern Vec3 lbl_803A3678 __attribute__((section(".data")));
extern f32 lbl_803DCC48;

void Physics__SetGravity(Vec3 *arg0) {
    Vec3 sp8;
    Vec3 *t;
    f32 len;
    f32 k;

    t = &sp8;
    sp8.y = arg0->y * arg0->y;
    sp8.z = arg0->z * arg0->z;
    sp8.x = arg0->x * arg0->x;
    len = sqrtf(sp8.x + t->y + t->z);
    k = lbl_80340D28 / len;
    lbl_803DCC48 = len;
    sp8.x = arg0->x * k;
    sp8.y = arg0->y * k;
    sp8.z = arg0->z * k;
    lbl_803A366C = sp8;
    sp8.x = lbl_803A366C.x * len;
    sp8.y = lbl_803A366C.y * len;
    sp8.z = lbl_803A366C.z * len;
    lbl_803A3678 = sp8;
}
