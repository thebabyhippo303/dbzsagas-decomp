/* CameraBag__Initialize @ 0x800BBA54 (size: 0x124, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

typedef struct { f32 x, y, z; } V3f;
int ShotList__Initialize(void);
extern const f32 lbl_80321644 __attribute__((section(".data")));
extern const f32 lbl_80321648 __attribute__((section(".data")));

u32 CCameraAvatar__Construct(char *self) {
    V3f t;
    V3f *p;
    f32 *m1;
    f32 *m2;

    p = &t;
    t.x = lbl_80321644;
    p->y = lbl_80321644;
    p->z = lbl_80321644;
    *(V3f *) (self + 0xA0) = t;
    t.x = lbl_80321644;
    p->y = lbl_80321644;
    p->z = lbl_80321648;
    *(V3f *) (self + 0xAC) = t;
    m1 = (f32 *) (self + 0x20);
    m2 = (f32 *) (self + 0x60);
    *(f32 *) (self + 0x20) = lbl_80321648;
    m1[1] = lbl_80321644;
    m1[2] = lbl_80321644;
    m1[3] = lbl_80321644;
    m1[4] = lbl_80321644;
    m1[5] = lbl_80321648;
    m1[6] = lbl_80321644;
    m1[7] = lbl_80321644;
    m1[8] = lbl_80321644;
    m1[9] = lbl_80321644;
    m1[10] = lbl_80321648;
    m1[11] = lbl_80321644;
    m1[12] = lbl_80321644;
    m1[13] = lbl_80321644;
    m1[14] = lbl_80321644;
    m1[15] = lbl_80321648;
    *(f32 *) (self + 0x60) = lbl_80321648;
    m2[1] = lbl_80321644;
    m2[2] = lbl_80321644;
    m2[3] = lbl_80321644;
    m2[4] = lbl_80321644;
    m2[5] = lbl_80321648;
    m2[6] = lbl_80321644;
    m2[7] = lbl_80321644;
    m2[8] = lbl_80321644;
    m2[9] = lbl_80321644;
    m2[10] = lbl_80321648;
    m2[11] = lbl_80321644;
    m2[12] = lbl_80321644;
    m2[13] = lbl_80321644;
    m2[14] = lbl_80321644;
    m2[15] = lbl_80321648;
    *(s32 *) (self + 0xC4) = 0;
    *(s32 *) (self + 0xC8) = 0;
    ShotList__Initialize();
    return 1;
}
