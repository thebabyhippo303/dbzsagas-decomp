/* Script__GetNearestAvatar @ 0x8002509C (size: 0x128, .text, ProDG 3.9.3 -O2) - MATCHED */
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
typedef struct { f32 x, y, z; } Vec3;
typedef struct { f32 x, y, z, w; } Vec4;

void Script__PushFloat(void *, void *, float);
void Script__PushInt(void *, void *, int);
void fn_80251510(void *, int, void *, void *, int);
extern f32 lbl_803113E0 __attribute__((section(".data")));
extern f32 lbl_803113E4 __attribute__((section(".data")));
extern M2C_UNK lbl_803B1DDC __attribute__((section(".data")));

void Script__GetNearestAvatar(void *arg0, void *arg1) {
    volatile Vec4 query;
    void *volatile found;
    Vec3 pos;
    volatile char *p;
    f32 tx, ty, tz;
    void *hit;

    found = NULL;
    query.w = lbl_803113E0;
    p = (volatile char *)arg0 + 0x10;
    tx = *(volatile f32 *)(p + 0x30);
    tz = *(volatile f32 *)(p + 0x38);
    ty = *(volatile f32 *)(p + 0x34);
    pos.x = tx;
    pos.y = ty;
    pos.z = tz;
    *(Vec3 *)&query = pos;
    fn_80251510(&lbl_803B1DDC, 0x10000, (void *)&query, *(void **)((char *)arg0 + 0xC8), 0);
    hit = found;
    if (hit != NULL) {
        pos = *(Vec3 *)((char *)hit + 0x38);
    } else {
        pos.x = lbl_803113E4;
        pos.y = lbl_803113E4;
        pos.z = lbl_803113E4;
    }
    Script__PushInt(arg0, arg1, (s32)found);
    Script__PushFloat(arg0, arg1, pos.x);
    Script__PushFloat(arg0, arg1, pos.y);
    Script__PushFloat(arg0, arg1, pos.z);
    Script__PushFloat(arg0, arg1, query.w);
}
