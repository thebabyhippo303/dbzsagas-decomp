/* ShadowMgr__ReleaseLightSlot @ 0x8022E54C (size: 0xA0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void TextureMgr__FreeRenderTarget(s32, s32);
void FrustumPool__Free(void *);
void MatrixPool__Free(void *);
void ShadowMgr__ReleaseLightSlot(s32 arg0, s32 arg1) {
    s32 temp_r30;
    s32 temp_r30_2;
    s32 temp_r30_3;
    s32 temp_r30_4;
    s32 temp_r31;
    s32 temp_r4;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;

    temp_r31 = arg1 * 4;
    temp_r30 = arg0 + 0x7C;
    temp_r4 = *(s32 *)(temp_r30 + temp_r31);
    if (temp_r4 != 0) {
        TextureMgr__FreeRenderTarget(0, temp_r4);
        *(s32 *)(temp_r30 + temp_r31) = 0;
    }
    temp_r30_2 = arg0 + 0x1C;
    temp_r3 = *(void * *)(temp_r30_2 + temp_r31);
    if (temp_r3 != NULL) {
        FrustumPool__Free(temp_r3);
        *(s32 *)(temp_r30_2 + temp_r31) = 0;
    }
    temp_r30_3 = arg0 + 0x5C;
    temp_r3_2 = *(void * *)(temp_r30_3 + temp_r31);
    if (temp_r3_2 != NULL) {
        MatrixPool__Free(temp_r3_2);
        *(s32 *)(temp_r30_3 + temp_r31) = 0;
    }
    temp_r30_4 = arg0 + 0x6C;
    temp_r3_3 = *(void * *)(temp_r30_4 + temp_r31);
    if (temp_r3_3 != NULL) {
        MatrixPool__Free(temp_r3_3);
        *(s32 *)(temp_r30_4 + temp_r31) = 0;
    }
}
