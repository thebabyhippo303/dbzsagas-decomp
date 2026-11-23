/* MenuPanel__SetSelectedOptionColor @ 0x80268284 (size: 0xC0, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: MenuPanel__SetSelectedOptionColor @ 0x80268284 (0xC0). ProDG -O2. */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 EzNode__GetFirstChild(void *);
void Sphere__SetColor(void *, f32, f32, f32, f32);
void MenuPanel__SetSelectedOptionColor(void *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3) {
    s32 var_r30;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;

    M2C_FIELD(arg0, f32 *, 0xAE10) = farg0;
    M2C_FIELD(arg0, f32 *, 0xAE14) = farg1;
    M2C_FIELD(arg0, f32 *, 0xAE18) = farg2;
    M2C_FIELD(arg0, f32 *, 0xAE1C) = farg3;
    var_r30 = EzNode__GetFirstChild(arg0 + 0xADE4);
    if (var_r30 != 0) {
        do {
            if (var_r30 == (s32) M2C_FIELD(arg0, s32 *, 0xADF8)) {
                Sphere__SetColor(var_r30 + 0x18, M2C_FIELD(arg0, f32 *, 0xAE10), M2C_FIELD(arg0, f32 *, 0xAE14), M2C_FIELD(arg0, f32 *, 0xAE18), M2C_FIELD(arg0, f32 *, 0xAE1C));
            }
            temp_r9 = M2C_FIELD(var_r30, void **, 0x10);
            var_r30 = M2C_FIELD(temp_r9, s32 (**)(s32), 0x54)(var_r30 + M2C_FIELD(temp_r9, s16 *, 0x50));
        } while (var_r30 != 0);
    }
    temp_r9_2 = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *), 0x534)(arg0 + M2C_FIELD(temp_r9_2, s16 *, 0x530));
    temp_r9_3 = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *), 0x3C)(arg0 + M2C_FIELD(temp_r9_3, s16 *, 0x38));
}
