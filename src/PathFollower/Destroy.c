/* PathFollower__Destroy @ 0x802BD440 (size: 0x98, .text, ProDG 3.9.3 -O2) - MATCHED */
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0

void Mem__Delete(void *);
extern M2C_UNK lbl_80353E30 __attribute__((section(".data")));

void PathFollower__Destroy(void *arg0, s32 arg1) {
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r9;
    void *temp_r9_2;

    temp_r11 = M2C_FIELD(arg0, void **, 8);
    M2C_FIELD(arg0, M2C_UNK **, 0xB4) = &lbl_80353E30;
    if (temp_r11 != NULL) {
        temp_r9 = M2C_FIELD(temp_r11, void **, 0x14);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 8), 3);
    }
    temp_r11_2 = M2C_FIELD(arg0, void **, 0xC);
    if (temp_r11_2 != NULL) {
        temp_r9_2 = M2C_FIELD(temp_r11_2, void **, 0x14);
        M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r11_2 + M2C_FIELD(temp_r9_2, s16 *, 8), 3);
    }
    if (arg1 & 1) {
        Mem__Delete(arg0);
    }
}
