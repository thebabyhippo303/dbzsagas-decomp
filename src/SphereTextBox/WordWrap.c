/* SphereTextBox__WordWrap @ 0x80273270 (size: 0x94, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 SphereTextBox__CountLines(void *, char *);
char * SphereTextBox__FindNextSpace(void *, char *);
f32 SphereTextBox__MeasureWord(s32, s32);
extern f32 lbl_8034A098 __attribute__((section(".data")));

void SphereTextBox__WordWrap(void *arg0, s8 *arg1) {
    f32 temp_f1;
    f32 var_f31;
    s8 *var_r30;

    var_r30 = arg1;
    var_f31 = lbl_8034A098;
    M2C_FIELD(arg0, s32 *, 0x1A4) = (s32) (SphereTextBox__CountLines(arg0, arg1) + 1);
    do {
        temp_f1 = SphereTextBox__MeasureWord((s32) arg0, (s32) var_r30);
        var_f31 += temp_f1;
        if (!(var_f31 <= M2C_FIELD(arg0, f32 *, 0x1D0))) {
            *var_r30 = 0xA;
            var_f31 = temp_f1;
            M2C_FIELD(arg0, s32 *, 0x1A4) = (s32) (M2C_FIELD(arg0, s32 *, 0x1A4) + 1);
        }
        var_r30 = SphereTextBox__FindNextSpace(arg0, var_r30);
    } while (var_r30 != NULL);
}
