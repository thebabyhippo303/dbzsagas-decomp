/* RADTimer__UnlockCallback @ 0x802F826C (size: 0x78, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })
int OSDisableInterrupts(void);
void OSRestoreInterrupts(int);
void RADTimer__UnlockCallback(s32 arg0, void *arg1) {
    s32 ie;
    if ((arg0 != 0) && (arg1 != NULL) && (M2C_FIELD(arg1, s32 *, 0x18) != 0) && (M2C_FIELD(arg1, s32 *, 0x14) != 0)) {
        ie = OSDisableInterrupts();
        M2C_FIELD(arg1, volatile s32 *, 0x10) = M2C_FIELD(arg1, volatile s32 *, 0x10) - 1;
        if (M2C_FIELD(arg1, volatile s32 *, 0x10) == 0) {
            M2C_FIELD(arg1, s32 *, 0xC) = 1;
        }
        OSRestoreInterrupts(ie);
    }
}
