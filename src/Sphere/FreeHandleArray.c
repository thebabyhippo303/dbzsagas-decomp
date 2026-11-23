/* Sphere__FreeHandleArray @ 0x8026F30C (size: 0x8C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 EffectHandle__Release(u32);
void Mem__DeleteArray(void *);
void Sphere__FreeHandleArray(void *arg0) {
    s32 var_r29;
    s32 var_r30;
    void *temp_r3;
    void *temp_r3_2;

    if ((void *) M2C_FIELD(arg0, void **, 0x16C) != NULL) {
        var_r30 = 0;
        if (var_r30 < M2C_FIELD(arg0, s32 *, 0x170)) {
            var_r29 = 0;
            do {
                temp_r3 = *(void * *)(var_r29 + (s32) M2C_FIELD(arg0, void **, 0x16C));
                if (temp_r3 != NULL) {
                    EffectHandle__Release((u32) temp_r3);
                }
                var_r30 += 1;
                var_r29 += 4;
            } while (var_r30 < (s32) M2C_FIELD(arg0, s32 *, 0x170));
        }
        temp_r3_2 = M2C_FIELD(arg0, void **, 0x16C);
        if (temp_r3_2 != NULL) {
            Mem__DeleteArray(temp_r3_2);
        }
        M2C_FIELD(arg0, void **, 0x16C) = NULL;
        M2C_FIELD(arg0, s32 *, 0x170) = 0;
    }
}
