/* FluffLoop__SaveGameToSelectedSlot @ 0x8005316C (size: 0x3D8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Task__WaitFrames(s32);
s32 SaveGame__CheckStorageSlot(void *, s32);
void SaveGame__SelectStorageSlot(void *, s32);
s32 SaveGame__SaveToStorage(void *);
s32 StreamQueue__Stop(void *, f32);
void StreamQueue__Kill(void *);
void Task__WaitSeconds(f32);
void SimLoop__PauseSimulation(void *, s32, s32, s32);
void fn_80267318(void *, int, float);
extern M2C_UNK lbl_80319C0C __attribute__((section(".data")));
extern M2C_UNK lbl_8031A284 __attribute__((section(".data")));
extern M2C_UNK lbl_8031A290 __attribute__((section(".data")));
extern M2C_UNK lbl_8031A2A4 __attribute__((section(".data")));
extern f32 lbl_8031A2C0 __attribute__((section(".data")));
extern f32 lbl_8031A2C4 __attribute__((section(".data")));
extern f32 lbl_8031A2D0 __attribute__((section(".data")));
extern f32 lbl_8031A2D4 __attribute__((section(".data")));
extern f32 lbl_8031A2D8 __attribute__((section(".data")));
extern M2C_UNK lbl_803A35A0 __attribute__((section(".data")));
extern void *lbl_803DC368;
extern void *lbl_803DC390;
extern void *lbl_803DC3C0;
extern s32 lbl_803DCC20;
extern void *lbl_803DCC60;
extern void *lbl_803DCC70;

void FluffLoop__SaveGameToSelectedSlot(void *arg0) {
    char *p_19c;
    f32 arg_load_;
    f32 arg_load;
    f32 temp_f28;
    f32 temp_f28_2;
    f32 temp_f29;
    f32 var_f31;
    f32 var_f31_2;
    s32 temp_r9;
    s32 var_r0;
    s32 var_r30;
    s32 var_r31;
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r11_3;
    void *temp_r25;
    void *temp_r26;
    void *temp_r3;
    void *temp_r3_2;
    u8 *temp_r3_3;
    void *temp_r3_4;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_4;
    void *temp_r9_5;
    void *temp_r9_6;

    temp_r11 = M2C_FIELD(lbl_803DC368, void **, 0x5388);
    temp_r9 = M2C_FIELD(temp_r11, s32 *, 0x48) + 0x210;
    switch (temp_r9) {                              /* irregular */
    case 0x210:
        var_r0 = 0;
block_9:
        M2C_FIELD(temp_r11, s32 *, 0x48) = var_r0;
        break;
    case 0x211:
        var_r0 = 1;
        goto block_9;
    case 0x212:
        var_r0 = 2;
        goto block_9;
    }
    M2C_FIELD(lbl_803DCC60, s32 *, 8) = 1;
    temp_r26 = arg0 + 0x6B34;
    var_f31 = lbl_8031A2C0;
    p_19c = (char *)arg0 + 0x19c;
    temp_r25 = arg0 + 0x1A4;
    temp_r9_2 = M2C_FIELD(p_19c, void **, 0x0);
    M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *), 0x3D4)(arg0 + M2C_FIELD(temp_r9_2, s16 *, 0x3D0));
    temp_r9_3 = M2C_FIELD(lbl_803DCC70, void **, 0xC);
    var_r31 = M2C_FIELD(temp_r9_3, s32 (**)(void *, M2C_UNK), 0x14)(lbl_803DCC70 + M2C_FIELD(temp_r9_3, s16 *, 0x10), 0);
    if (var_r31 == 0) {
        temp_f28 = lbl_8031A2D0;
        temp_f29 = lbl_8031A2C4;
loop_12:
        Task__WaitFrames(0);
        temp_r11_2 = M2C_FIELD(lbl_803DCC70, void **, 0xC);
        var_f31 -= (f32) (f64) M2C_FIELD(&lbl_803A35A0, u32 *, 0xC) * temp_f28;
        var_r31 = M2C_FIELD(temp_r11_2, s32 (**)(void *, M2C_UNK), 0x14)(lbl_803DCC70 + M2C_FIELD(temp_r11_2, s16 *, 0x10), 0);
        if (!(var_f31 <= temp_f29)) {
            if (var_r31 == 0) {
                goto loop_12;
            }
        }
    }
    fn_80267318(temp_r26, 0xA, lbl_8031A2C4);
    if (var_r31 == 0) {
        temp_r3 = M2C_FIELD(lbl_803DC368, void **, 0x5388);
        var_r31 = SaveGame__CheckStorageSlot(temp_r3, M2C_FIELD(temp_r3, s32 *, 0x48));
        if (var_r31 == 0) {
            temp_r11_3 = M2C_FIELD(p_19c, void **, 0x0);
            var_f31_2 = lbl_8031A2C0;
            M2C_FIELD(temp_r11_3, M2C_UNK (**)(void *, M2C_UNK *, M2C_UNK *), 0x3DC)(arg0 + M2C_FIELD(temp_r11_3, s16 *, 0x3D8), &lbl_8031A284, &lbl_80319C0C);
            temp_r3_2 = M2C_FIELD(lbl_803DC368, void **, 0x5388);
            var_r31 = SaveGame__CheckStorageSlot(temp_r3_2, M2C_FIELD(temp_r3_2, s32 *, 0x48));
            if (var_r31 == 0) {
                temp_f28_2 = lbl_8031A2D0;
loop_18:
                Task__WaitFrames(0);
                temp_r3_3 = M2C_FIELD(lbl_803DC368, void **, 0x5388);
                var_f31_2 -= (f32) (f64) M2C_FIELD(&lbl_803A35A0, u32 *, 0xC) * temp_f28_2;
                var_r31 = SaveGame__CheckStorageSlot(temp_r3_3, M2C_FIELD(temp_r3_3, s32 *, 0x48));
                if (!(var_f31_2 <= lbl_8031A2C4)) {
                    if (var_r31 == 0) {
                        goto loop_18;
                    }
                }
                if (var_r31 == 0) {
                    temp_r3_4 = M2C_FIELD(lbl_803DC368, void **, 0x5388);
                    SaveGame__SelectStorageSlot(temp_r3_4, M2C_FIELD(temp_r3_4, s32 *, 0x48));
                    var_r31 = SaveGame__SaveToStorage(M2C_FIELD(lbl_803DC368, void **, 0x5388));
                    if (var_r31 == 0) {
                        temp_r11_3 = M2C_FIELD(lbl_803DC368, void **, 0x5388);
                        *(s32 *)(temp_r11_3 + 0x60 + (M2C_FIELD(temp_r11_3, s32 *, 0x48) * 4)) = var_r31;
                    }
                }
            }
        }
    }
    arg_load = lbl_8031A2C4;
    M2C_FIELD(lbl_803DCC60, s32 *, 8) = 0;
    fn_80267318(temp_r25, 0xA, arg_load);
    fn_80267318(temp_r26, 0xA, lbl_8031A2C4);
    if (var_r31 != 0) {
        temp_r9_4 = M2C_FIELD(p_19c, void **, 0x0);
        M2C_FIELD(temp_r9_4, M2C_UNK (**)(void *, s32), 0x4F4)(arg0 + M2C_FIELD(temp_r9_4, s16 *, 0x4F0), var_r31);
        return;
    }
    var_r30 = 1;
    StreamQueue__Stop(lbl_803DCC20 + 0xCC, lbl_8031A2C4);
    StreamQueue__Kill(lbl_803DCC20 + 0xCC);
    temp_r9_5 = M2C_FIELD(p_19c, void **, 0x0);
    M2C_FIELD(temp_r9_5, M2C_UNK (**)(void *, M2C_UNK *, M2C_UNK *), 0x3DC)(arg0 + M2C_FIELD(temp_r9_5, s16 *, 0x3D8), &lbl_8031A290, &lbl_8031A2A4);
    arg_load_ = lbl_8031A2D4;
    M2C_FIELD(lbl_803DCC60, s32 *, 8) = 1;
    Task__WaitSeconds(arg_load_);
    fn_80267318(temp_r25, 0xA, lbl_8031A2C4);
    M2C_FIELD(lbl_803DCC60, s32 *, 8) = var_r31;
    Task__WaitSeconds(lbl_8031A2D8);
    do {
        Task__WaitSeconds(lbl_8031A2C4);
        if ((void *) lbl_803DC390) {
            temp_r9_6 = M2C_FIELD(lbl_803DC390, void **, 0x19C);
            var_r30 = 0;
            if (M2C_FIELD(temp_r9_6, s32 (**)(void *), 0x3A4)(lbl_803DC390 + M2C_FIELD(temp_r9_6, s16 *, 0x3A0)) != 0) {
                var_r30 = 1;
            }
        }
    } while (var_r30 != 0);
    SimLoop__PauseSimulation(lbl_803DC3C0, 0, 0, 0);
}
