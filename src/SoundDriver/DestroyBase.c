/* SoundDriver__DestroyBase @ 0x801932BC (size: 0x134, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Mem__Delete(void *);
void * memset(void *, int, u32);
extern M2C_UNK lbl_803405F0 __attribute__((section(".data")));

void SoundDriver__DestroyBase(void *arg0, s32 arg1) {
    s32 var_r0;
    s32 var_r31;
    u32 temp_r29;
    u32 temp_r9;
    void **var_r3;
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r31;
    void *temp_r31_2;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r9_2;

    M2C_FIELD(arg0, M2C_UNK **, 0x60) = &lbl_803405F0;
    if ((s32) M2C_FIELD(arg0, s32 *, 4) != 0) {
        var_r31 = 0;
        temp_r29 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), u32 *, 4);
        if ((u32) var_r31 < temp_r29) {
            do {
                temp_r11 = M2C_FIELD(arg0, void **, 0);
                var_r0 = var_r31;
                if (var_r31 < 0) {
                    var_r0 = M2C_FIELD(temp_r11, u32 *, 4) - 1;
                }
                temp_r9 = M2C_FIELD(temp_r11, u32 *, 4);
                if ((var_r0 >= (s32) temp_r9) || ((s32) temp_r9 == 0)) {
                    var_r3 = NULL;
                } else {
                    var_r3 = M2C_FIELD(temp_r11, void **, 0) + (var_r0 * 4);
                }
                temp_r11_2 = *var_r3;
                if (temp_r11_2 != NULL) {
                    temp_r9_2 = M2C_FIELD(temp_r11_2, void **, 0xC);
                    M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, M2C_UNK), 0x1C)(temp_r11_2 + M2C_FIELD(temp_r9_2, s16 *, 0x18), 3);
                }
                var_r31 += 1;
            } while ((u32) var_r31 < temp_r29);
        }
    }
    temp_r31 = M2C_FIELD(arg0, void **, 0);
    if ((s32) M2C_FIELD(temp_r31, s32 *, 0x10) != 0) {
        temp_r3 = M2C_FIELD(temp_r31, void **, 0);
        if (temp_r3 != NULL) {
            memset(temp_r3, 0, M2C_FIELD(temp_r31, s32 *, 8) * 4);
        }
    }
    M2C_FIELD(temp_r31, u32 *, 4) = 0U;
    temp_r31_2 = M2C_FIELD(arg0, void **, 0);
    if (temp_r31_2 != NULL) {
        temp_r3_2 = M2C_FIELD(temp_r31_2, void **, 0);
        if (temp_r3_2 != NULL) {
            Mem__Delete(temp_r3_2);
        }
        Mem__Delete(temp_r31_2);
    }
    if (arg1 & 1) {
        Mem__Delete(arg0);
    }
}
