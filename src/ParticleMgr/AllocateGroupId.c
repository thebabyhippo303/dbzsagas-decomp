/* ParticleMgr__AllocateGroupId @ 0x8021DEE8 (size: 0x8C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct {
    char pad[0x524];
    s32 f524;
    u16 f528;
} ParticleMgrState;

s32 ParticleMgr__IsGroupIdInUse(s32 arg0);
extern ParticleMgrState lbl_803AD05C __attribute__((section(".data")));

s32 ParticleMgr__AllocateGroupId(void) {
    s32 id;

    if (lbl_803AD05C.f528 > 40959) {
        lbl_803AD05C.f524 = 1;
        lbl_803AD05C.f528 = 0x9000;
    }
    while (ParticleMgr__IsGroupIdInUse(lbl_803AD05C.f528)) {
        lbl_803AD05C.f528++;
    }
    id = lbl_803AD05C.f528++;
    return id;
}
