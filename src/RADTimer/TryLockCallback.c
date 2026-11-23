/* RADTimer__TryLockCallback @ 0x802F8130 (size: 0x94, .text, ProDG 3.9.3 -O2) - MATCHED */
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
int OSDisableInterrupts(void);
void OSRestoreInterrupts(int);
s32 RADTimer__TryLockCallback(s32 arg0, void *arg1) {
    s32 ie;
    s32 ret;
    if ((arg0 != 0) && (arg1 != NULL) && (M2C_FIELD(arg1, s32 *, 0x18) != 0) && (M2C_FIELD(arg1, s32 *, 0x14) != 0)) {
        ie = OSDisableInterrupts();
        if (M2C_FIELD(arg1, s32 *, 0xC) == 1) {
            M2C_FIELD(arg1, s32 *, 0xC) = 2;
        }
        M2C_FIELD(arg1, s32 *, 0x10) = M2C_FIELD(arg1, s32 *, 0x10) + 1;
        OSRestoreInterrupts(ie);
        ret = 1;
        if (M2C_FIELD(arg1, s32 *, 0xC) == 1) {
            ret = 0;
        }
        return ret;
    }
    return 1;
}
