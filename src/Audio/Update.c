/* Audio__Update @ 0x80191A68 (size: 0x198, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 SfxPlayer__IsFinished(void *);
void SoundGroup__Update(void *);
s32 StreamQueue__Update(void *);

void Audio__Update(void *arg0) {
    s32 temp_r30_2;
    s32 temp_r9_4;
    s32 var_r0;
    s32 var_r31_2;
    void **var_r3;
    void *temp_r0;
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r28;
    void *temp_r30;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;
    void *var_r31;

    temp_r11 = M2C_FIELD(arg0, void **, 0x180);
    if (temp_r11 != NULL) {
        temp_r9 = M2C_FIELD(temp_r11, void **, 0x60);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x54)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x50));
        StreamQueue__Update(arg0);
        StreamQueue__Update(0xCC + arg0);
        var_r31 = M2C_FIELD(arg0, void **, 0x1C8);
        if (var_r31 != NULL) {
            do {
                temp_r9_2 = M2C_FIELD(var_r31, void **, 0x3C);
                temp_r28 = M2C_FIELD(var_r31, void **, 0x38);
                M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *), 0x24)(var_r31 + M2C_FIELD(temp_r9_2, s16 *, 0x20));
                if (SfxPlayer__IsFinished(var_r31) != 0) {
                    temp_r30 = arg0 + 0x1C8;
                    if ((void *) M2C_FIELD(arg0, void **, 0x1C8) == var_r31) {
                        M2C_FIELD(arg0, void **, 0x1C8) = (void *) M2C_FIELD(var_r31, void **, 0x38);
                    } else {
                        M2C_FIELD(M2C_FIELD(var_r31, void **, 0x34), void **, 0x38) = (void *) M2C_FIELD(var_r31, void **, 0x38);
                    }
                    if ((void *) M2C_FIELD(temp_r30, void **, 4) == var_r31) {
                        M2C_FIELD(temp_r30, void **, 4) = (void *) M2C_FIELD(var_r31, void **, 0x34);
                    } else {
                        M2C_FIELD(M2C_FIELD(var_r31, void **, 0x38), void **, 0x34) = (void *) M2C_FIELD(var_r31, void **, 0x34);
                    }
                    temp_r0 = M2C_FIELD(temp_r30, void **, 8);
                    if (temp_r0 != NULL) {
                        if (var_r31 != NULL) {
                            temp_r9_3 = M2C_FIELD(var_r31, void **, 0x3C);
                            M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *, M2C_UNK), 0x2C)(var_r31 + M2C_FIELD(temp_r9_3, s16 *, 0x28), 3);
                        }
                    } else {
                        M2C_FIELD(var_r31, void **, 0x34) = temp_r0;
                        M2C_FIELD(var_r31, void **, 0x38) = temp_r0;
                    }
                    M2C_FIELD(temp_r30, s32 *, 0xC) = (M2C_FIELD(temp_r30, s32 *, 0xC) - 1);
                }
                var_r31 = temp_r28;
            } while (var_r31 != NULL);
        }
        temp_r30_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x188), s32 *, 4);
        var_r31_2 = 0;
        if (var_r31_2 < temp_r30_2) {
            do {
                temp_r11_2 = M2C_FIELD(arg0, void **, 0x188);
                var_r0 = var_r31_2;
                if (var_r31_2 < 0) {
                    var_r0 = M2C_FIELD(temp_r11_2, s32 *, 4) - 1;
                }
                temp_r9_4 = M2C_FIELD(temp_r11_2, s32 *, 4);
                if ((var_r0 >= temp_r9_4) || (temp_r9_4 == 0)) {
                    var_r3 = NULL;
                } else {
                    var_r3 = M2C_FIELD(temp_r11_2, u32 *, 0) + (var_r0 * 4);
                }
                var_r31_2 += 1;
                SoundGroup__Update(*var_r3);
            } while (var_r31_2 < temp_r30_2);
        }
    }
}
