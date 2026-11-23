/* EventDispatcher__Unsubscribe @ 0x80251430 (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


void EventDispatcher__Unsubscribe(void *arg0, void *arg1) {
    s32 temp_r0;
    s32 temp_r9_3;
    void **temp_r9_2;
    void *temp_r9;

    if (arg1 == (void **) M2C_FIELD(arg0, void ***, 0)) {
        M2C_FIELD(arg0, void ***, 0) = (void **) M2C_FIELD(arg1, void ***, 4);
    }
    temp_r9 = M2C_FIELD(arg1, void **, 0);
    if (temp_r9 != NULL) {
        M2C_FIELD(temp_r9, void ***, 4) = (void **) M2C_FIELD(arg1, void ***, 4);
    }
    temp_r9_2 = M2C_FIELD(arg1, void ***, 4);
    if (temp_r9_2 != NULL) {
        *temp_r9_2 = M2C_FIELD(arg1, void **, 0);
    }
    temp_r9_3 = M2C_FIELD(arg1, s32 *, 0x14);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x20);
    if (temp_r9_3 & temp_r0) {
        M2C_FIELD(arg0, s32 *, 0x20) = (s32) (temp_r0 & ~temp_r9_3);
    }
    *(volatile s32 *)((char *)arg1 + 0x14) = 0;
    *(volatile s32 *)((char *)arg1 + 0) = 0;
    *(volatile s32 *)((char *)arg1 + 4) = 0;
    *(volatile s32 *)((char *)arg1 + 0x10) = 0;
}
