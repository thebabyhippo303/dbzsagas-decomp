/* CollPart__ParseRows @ 0x80280C44 (size: 0xA4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void CollPart__ParseRows(void *arg0) {
    s32 var_r0;
    s32 var_r31;
    u32 temp_r30;
    s32 temp_r9;
    u32 var_r3;
    char *temp_r3;
    void *temp_r11;
    void *vt;

    var_r31 = 0;
    temp_r30 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u32 *, 4);
    if ((u32) var_r31 < temp_r30) {
        do {
            temp_r11 = M2C_FIELD(arg0, void **, 4);
            var_r0 = var_r31;
            if (var_r31 < 0) {
                var_r0 = M2C_FIELD(temp_r11, s32 *, 4) - 1;
            }
            temp_r9 = M2C_FIELD(temp_r11, s32 *, 4);
            if ((var_r0 >= temp_r9) || (temp_r9 == 0)) {
                var_r3 = 0;
            } else {
                var_r3 = M2C_FIELD(temp_r11, u32 *, 0) + (var_r0 * 4);
            }
            temp_r3 = *(char **) var_r3;
            var_r31 += 1;
            vt = *(void **) temp_r3;
            M2C_FIELD(vt, void (**)(void *), 20)((char *) temp_r3 + M2C_FIELD(vt, s16 *, 16));
        } while ((u32) var_r31 < temp_r30);
    }
}
