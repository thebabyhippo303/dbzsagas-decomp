/* AnimScript__OpWaitAnimEndOnChannel @ 0x8023945C (size: 0xC4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct { char pad[240]; void *threads[1]; } AnimState;

s32 Animation__IsFinished(void *);

s32 AnimScript__OpWaitAnimEndOnChannel(AnimState *arg0, s32 arg1, s32 *arg2) {
    s32 temp_r9_2;
    s32 var_r29;
    void *temp_r31;

    temp_r31 = arg0->threads[arg1];
    var_r29 = 0;
    if ((temp_r31 != NULL) && ((s32) M2C_FIELD(M2C_FIELD(temp_r31, void **, 0x1C), s32 *, 0x38) != 0)) {
        var_r29 = 1;
        *arg2 += 4;
    }
    if (Animation__IsFinished((void *)((char *)arg0 + (M2C_FIELD(temp_r31, s32 **, 0x30)[(s8)M2C_FIELD(temp_r31, u8 *, 8)] * 20 + 264))) != 0) {
        M2C_FIELD(temp_r31, u8 *, 8) = (u8) (M2C_FIELD(temp_r31, u8 *, 8) - 1);
        return 0;
    }
    temp_r9_2 = *arg2 - 4;
    *arg2 = temp_r9_2;
    if (var_r29 != 0) {
        *arg2 = temp_r9_2 - 4;
    }
    return 1;
}
