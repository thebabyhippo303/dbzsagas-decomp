/* AI__DestroyEffectAttachments @ 0x800766DC (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Attacher__Destroy(void *);
void AI__DestroyEffectAttachments(s32 arg0) {
    s32 var_r29;
    s32 var_r30;
    void **var_r31;
    void *temp_r0;

    var_r31 = arg0 + 0x59C;
    var_r29 = 0;
    var_r30 = 7;
    do {
        temp_r0 = *var_r31;
        if (temp_r0 != NULL) {
            Attacher__Destroy(temp_r0);
            *var_r31 = (void *)var_r29;
        }
        var_r31 += 1;
        var_r30 -= 1;
    } while (var_r30 != 0);
}
