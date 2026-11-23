/* Simple__GetWeaponHitInfo @ 0x802C809C (size: 0xB4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef struct { s32 f0; s32 f4; s32 f8; } W3;

void Simple__GetWeaponHitInfo(void *arg0, s32 *arg1, s32 *arg2, s32 *arg3, void *arg4, void *arg5, void *arg6, s32 *arg7) {
    if (arg1 != NULL) {
        *arg1 = M2C_FIELD(arg0, s32 *, 0);
    }
    if (arg2 != NULL) {
        *arg2 = M2C_FIELD(arg0, s32 *, 4);
    }
    if (arg3 != NULL) {
        *arg3 = M2C_FIELD(arg0, s32 *, 8);
    }
    if (arg7 != NULL) {
        *arg7 = M2C_FIELD(arg0, s32 *, 0x14);
    }
    if (arg4 != NULL) {
        *(W3 *)arg4 = *(W3 *)M2C_FIELD(arg0, void **, 0xC);
    }
    if (arg6 != NULL) {
        *(W3 *)arg6 = *(W3 *)M2C_FIELD(arg0, void **, 0x10);
    }
    if (arg5 != NULL) {
        *(W3 *)arg5 = *(W3 *)M2C_FIELD(arg0, void **, 0x18);
    }
}
