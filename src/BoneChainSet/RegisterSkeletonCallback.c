/* BoneChainSet__RegisterSkeletonCallback @ 0x801DB4B4 (size: 0x88, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


M2C_UNK fn_8023F8FC(s32, M2C_UNK *, void *, M2C_UNK, s32, M2C_UNK, void *); /* extern */
void fn_8023FA4C(s32, void *, s32);
extern M2C_UNK BoneChainSet__SkeletonCallback __attribute__((section(".data")));

void BoneChainSet__RegisterSkeletonCallback(void *arg0, void *arg1, s32 arg2) {
    s32 temp_r0;
    void *temp_r30;

    if (arg2 != 0) {
        temp_r30 = (char *) arg0 + 8;
        if (((s32) M2C_FIELD(arg0, s32 *, 4) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 8) != 0)) {
            fn_8023FA4C(M2C_FIELD(arg0, s32 *, 4), temp_r30, 0x14);
        }
        temp_r0 = M2C_FIELD(arg1, s32 *, 0x174);
        M2C_FIELD(arg0, s32 *, 4) = temp_r0;
        fn_8023F8FC(temp_r0, &BoneChainSet__SkeletonCallback, arg0, 0x64, arg2, 0, temp_r30);
    }
}
