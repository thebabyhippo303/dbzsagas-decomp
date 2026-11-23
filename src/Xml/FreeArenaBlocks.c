/* Xml__FreeArenaBlocks @ 0x80306A78 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void memFree(void *);
void Xml__FreeArenaBlocks(void *arg0) {
    void *temp_r30;
    void *var_r30;

    var_r30 = arg0;
    if (var_r30 != NULL) {
        do {
            temp_r30 = M2C_FIELD(var_r30, void **, 8);
            memFree(var_r30);
            var_r30 = temp_r30;
        } while (var_r30 != NULL);
    }
}
