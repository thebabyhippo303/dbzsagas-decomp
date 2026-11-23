/* RADTimer__RemoveCallback @ 0x802F7EC8 (size: 0xAC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 RADTimer__UnlinkCallback(void *, void *);
void RADTimer__Destroy(void *);
int OSDisableInterrupts(void);
void OSRestoreInterrupts(int);
s32 RADTimer__RemoveCallback(void *arg0, void *arg1, s32 arg2) {
    s32 temp_r29;
    s32 var_r27;

    var_r27 = 0;
    if ((arg0 != NULL) && (arg1 != NULL) && ((s32) M2C_FIELD(arg1, s32 *, 0x18) != 0) && ((s32) M2C_FIELD(arg1, s32 *, 0x14) != 0)) {
        temp_r29 = OSDisableInterrupts();
        if (RADTimer__UnlinkCallback(arg0, arg1) != 0) {
            M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) - 1);
            if ((arg2 & 1) && ((s32) M2C_FIELD(arg0, s32 *, 0x30) == 0)) {
                var_r27 = 1;
                RADTimer__Destroy(arg0);
            }
        }
        OSRestoreInterrupts(temp_r29);
    }
    return var_r27;
}
