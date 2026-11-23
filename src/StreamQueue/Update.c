/* StreamQueue__Update @ 0x80194A6C (size: 0x268, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void StreamQueue__StopCurrent(void *);
void StreamQueue__ApplyVolume(void *);
M2C_UNK StreamQueue__StartNext(s32);
extern f32 lbl_8033F5A0 __attribute__((section(".data")));
extern f32 lbl_8033F5A4 __attribute__((section(".data")));

/* Keep the int-to-float constant pool at the same low 16 bits as the DOL. */
static const char pool_pad[0xF598] = {1};

static inline s32 TimerReached(char *t, f32 now) {
    return ((now * lbl_8033F5A0 - *(f32 *)(t + 4)) - *(f32 *)(t + 0x10)) <= lbl_8033F5A4;
}

void StreamQueue__Update(void *arg0) {
    M2C_UNK (*temp_r30)(s32, void *);
    s32 temp_r3;
    s32 temp_r9_2;
    u32 var_r9;
    void *temp_r10;
    void *temp_r10_2;
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r11_3;
    void *temp_r11_4;
    void *temp_r11_5;
    void *temp_r11_6;
    void *temp_r9;
    void *temp_r9_3;
    void *temp_r9_4;
    void *temp_r9_5;
    void *temp_r9_6;
    void *temp_r9_7;

    if (((M2C_UNK (*)(s32, void *)) M2C_FIELD(arg0, M2C_UNK (**)(s32, void *), 0x90)) != NULL) {
        temp_r30 = M2C_FIELD(arg0, M2C_UNK (**)(s32, void *), 0x9C);
        if (temp_r30 == NULL) {
            temp_r11 = M2C_FIELD(arg0, void **, 0x80);
            if (temp_r11 != NULL) {
                temp_r9 = M2C_FIELD(temp_r11, void **, 0x28);
                if (M2C_FIELD(temp_r9, s32 (**)(void *), 0x2C)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x28)) >= 0) {
                    M2C_FIELD(arg0, M2C_UNK (**)(s32, void *), 0x90)(M2C_FIELD(arg0, s32 *, 0x98), M2C_FIELD(arg0, void **, 0x80));
                    M2C_FIELD(arg0, M2C_UNK (**)(s32, void *), 0x90) = temp_r30;
                    M2C_FIELD(arg0, M2C_UNK (**)(s32, void *), 0x9C) = (M2C_UNK (*)(s32, void *))1;
                }
            }
        }
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x84) == 0) {
        temp_r9_2 = M2C_FIELD(arg0, s32 *, 0x88);
        if (temp_r9_2 > 0) {
            M2C_FIELD(arg0, s32 *, 0x88) = (s32) (temp_r9_2 - 1);
            return;
        }
        temp_r11_2 = M2C_FIELD(arg0, void **, 0);
        temp_r9_3 = M2C_FIELD(temp_r11_2, void **, 0x60);
        if (M2C_FIELD(temp_r9_3, u32 (**)(void *), 0x4C)(temp_r11_2 + M2C_FIELD(temp_r9_3, s16 *, 0x48)) >= (u32) M2C_FIELD(arg0, u32 *, 0x8C)) {
            temp_r11_3 = M2C_FIELD(arg0, void **, 0x80);
            if (((temp_r11_3 != NULL) && (temp_r9_4 = M2C_FIELD(temp_r11_3, void **, 0x28), ((M2C_FIELD(temp_r9_4, s32 (**)(void *), 0x24)(temp_r11_3 + M2C_FIELD(temp_r9_4, s16 *, 0x20)) == 0) != 0))) || (((s32) M2C_FIELD(arg0, s32 *, 0x50) == 1) && (temp_r11_4 = M2C_FIELD(arg0, void **, 0), temp_r9_5 = M2C_FIELD(temp_r11_4, void **, 0x60), (TimerReached((char *)arg0 + 0x68, (f32) (f64) M2C_FIELD(temp_r9_5, u32 (**)(void *), 0x4C)(temp_r11_4 + M2C_FIELD(temp_r9_5, s16 *, 0x48))) == 0)))) {
                StreamQueue__StopCurrent(arg0);
            }
            if ((void *) M2C_FIELD(arg0, void **, 0x80) == NULL) {
                M2C_FIELD(arg0, u32 *, 0x8C) = StreamQueue__StartNext((s32) arg0);
                return;
            }
            if ((s32) M2C_FIELD(arg0, s32 *, 0x50) != 2) {
                StreamQueue__ApplyVolume(arg0);
            }
            if ((s32) M2C_FIELD(arg0, s32 *, 0x50) == 0) {
                temp_r11_5 = M2C_FIELD(arg0, void **, 0);
                temp_r9_6 = M2C_FIELD(temp_r11_5, void **, 0x60);
                if (!TimerReached((char *)arg0 + 0x54, (f32) (f64) M2C_FIELD(temp_r9_6, u32 (**)(void *), 0x4C)(temp_r11_5 + M2C_FIELD(temp_r9_6, s16 *, 0x48)))) {
                    M2C_FIELD(arg0, s32 *, 0x50) = 2;
                }
            }
            temp_r11_6 = M2C_FIELD(arg0, void **, 0);
            temp_r9_7 = M2C_FIELD(temp_r11_6, void **, 0x60);
            temp_r3 = M2C_FIELD(temp_r9_7, s32 (**)(void *), 0x4C)(temp_r11_6 + M2C_FIELD(temp_r9_7, s16 *, 0x48));
            var_r9 = temp_r3 + 0x1E;
            if ((s32) M2C_FIELD(arg0, s32 *, 0x50) == 2) {
                var_r9 = temp_r3 + 0x64;
            }
            M2C_FIELD(arg0, u32 *, 0x8C) = var_r9;
        }
    }
}
