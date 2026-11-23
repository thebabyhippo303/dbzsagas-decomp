/* Device__SerializeState @ 0x800E5574 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

int Device__GetBaseStateSize(void);
int Device__GetStateSize(void *);
M2C_UNK fn_802B4FD4(void *, s32, s32);              /* extern */

void Device__SerializeState(void *arg0, s32 arg1, s32 arg2) {
    fn_802B4FD4(arg0, arg1 + Device__GetBaseStateSize(), arg2);
    Device__GetStateSize(arg0);
}
