/* RADTimer__LockCallback @ 0x802F81C4 (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })
void OSYieldThread(void);
M2C_UNK RADTimer__TryLockCallback(s32, s32);
void RADTimer__LockCallback(s32 arg0, void *arg1) {
    if ((arg0 != 0) && (arg1 != NULL) && ((s32) M2C_FIELD(arg1, s32 *, 0x18) != 0) && ((s32) M2C_FIELD(arg1, s32 *, 0x14) != 0)) {
        while (RADTimer__TryLockCallback(arg0, (s32) arg1) == 0) {
            OSYieldThread();
        }
    }
}
