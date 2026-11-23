/* PathGroup__Destroy @ 0x801FD38C (size: 0x94, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Mem__DeleteArray(void *);
void Mem__Delete(void *);
void PathGroup__Destroy(void *arg0, s32 arg1) {
    void *temp_r11;
    void *temp_r30;
    void *temp_r3;
    void *temp_r9;
    void *var_r31;

    temp_r3 = M2C_FIELD(arg0, void **, 0);
    if (temp_r3 != NULL) {
        Mem__DeleteArray(temp_r3);
    }
    var_r31 = M2C_FIELD(arg0, void **, 0xC);
    if (var_r31 != NULL) {
        do {
            temp_r11 = M2C_FIELD(var_r31, void **, 0);
            temp_r30 = M2C_FIELD(var_r31, void **, 4);
            if (temp_r11 != NULL) {
                temp_r9 = M2C_FIELD(temp_r11, void **, 0x14);
                M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 8), 3);
            }
            Mem__Delete(var_r31);
            var_r31 = temp_r30;
        } while (var_r31 != NULL);
    }
    if (arg1 & 1) {
        Mem__Delete(arg0);
    }
}
