/* Menu__RefreshOptionsDisplay @ 0x8001A198 (size: 0x348, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 Options__GetSoundVolume(s32);
s32 Options__GetMusicVolume(s32);
s32 Options__GetDialogVolume(s32);
s32 Options__ApplyStereoSetting(void *);
void Options__EnableStereo(s32);
void Options__DisableStereo(s32);
s32 Options__GetRumble(s32);
s32 Options__AdjustRumbleModeForController(void *, s32);
s32 PersistentData__GetGlobalImpl(void *, void *);
s32 Game__GetDifficultyLevelImpl(s32);
void Options__SetMusicVolume(void *, int);
void Options__SetSoundVolume(void *, int);
void fn_80270784(void *, char *);
M2C_UNK MenuSlider__SetValue(s32, s32);
M2C_UNK fn_8026D4A4(s32);
extern s8 lbl_8030DD84 __attribute__((section(".data")));
extern s8 lbl_8030DD8C __attribute__((section(".data")));
extern s8 lbl_8030DE18 __attribute__((section(".data")));
extern s8 lbl_8030DE20 __attribute__((section(".data")));
extern s8 lbl_8030DE24 __attribute__((section(".data")));
extern s8 lbl_8030DE28 __attribute__((section(".data")));
extern s8 lbl_8030DE2C __attribute__((section(".data")));
extern M2C_UNK lbl_8030DE34 __attribute__((section(".data")));
extern M2C_UNK lbl_8030DE48 __attribute__((section(".data")));
extern s8 lbl_8030DE5C __attribute__((section(".data")));
extern s8 lbl_8030DE64 __attribute__((section(".data")));
extern s8 lbl_8030DE6C __attribute__((section(".data")));
extern f32 lbl_8030DE74 __attribute__((section(".data")));
extern s32 lbl_803DC368;
extern void *lbl_803DC3C0;

void Menu__RefreshOptionsDisplay(u8 *arg0) {
    s32 temp_r3;
    s32 var_r28;
    s32  var_r28_b;
    register s32 var_r29;
    void **var_r30;
    void *temp_r3_2;
    void *temp_r9;

    var_r29 = arg0 + 0x3E78;
    temp_r9 = M2C_FIELD(arg0, void **, 0x19C);
    var_r30 = arg0 + 0x4014;
    var_r28 = 8;
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *, void *, f32, f32, f32, f32), 0x134)(arg0 + M2C_FIELD(temp_r9, s16 *, 0x130), temp_r9, lbl_8030DE74, lbl_8030DE74, lbl_8030DE74, lbl_8030DE74);
    do {
        temp_r9 = *var_r30;
        var_r30 += 0x1F4;
        temp_r3 = var_r29 + M2C_FIELD(temp_r9, s16 *, 0x388);
        temp_r3_2 = M2C_FIELD(temp_r9, void *(**)(s32), 0x38C)(temp_r3);
        var_r29 += 0x1F4;
        temp_r9 = M2C_FIELD(temp_r3_2, void **, 8);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x1C)(temp_r3_2 + M2C_FIELD(temp_r9, s16 *, 0x18));
        var_r28 -= 1;
    } while (var_r28 != 0);
    temp_r9 = arg0 + 0x1A0;
    temp_r3_2 = arg0 + 0x9FC;
    MenuSlider__SetValue((s32) temp_r3_2, Options__GetMusicVolume(lbl_803DC368 + 0x370));
    MenuSlider__SetValue((s32) temp_r9, Options__GetSoundVolume(lbl_803DC368 + 0x370));
    MenuSlider__SetValue((s32) (arg0 + 0x1258), Options__GetDialogVolume(lbl_803DC368 + 0x370));
    var_r28_b = lbl_803DC368 + 0x370;
    Options__SetSoundVolume((void *) var_r28_b, Options__GetSoundVolume(var_r28_b));
    var_r28 = lbl_803DC368 + 0x370;
    Options__SetMusicVolume((void *) var_r28, Options__GetMusicVolume(var_r28));
    if (Options__ApplyStereoSetting(lbl_803DC368 + 0x370) != 0) {
        Options__EnableStereo(lbl_803DC368 + 0x370);
        fn_80270784(arg0 + 0x1AB4, &lbl_8030DD84);
    } else {
        Options__DisableStereo(lbl_803DC368 + 0x370);
        fn_80270784(arg0 + 0x1AB4, &lbl_8030DE18);
    }
    var_r28 = lbl_803DC368 + 0x370;
    temp_r3 = Options__AdjustRumbleModeForController((void *) var_r28, Options__GetRumble(var_r28));
    switch (temp_r3) {                            /* switch 1; irregular */
    case 3:                                         /* switch 1 */
        fn_80270784(arg0 + 0x1CA8, &lbl_8030DE20);
        break;
    case 1:                                         /* switch 1 */
        fn_80270784(arg0 + 0x1CA8, &lbl_8030DE24);
        break;
    case 2:                                         /* switch 1 */
        fn_80270784(arg0 + 0x1CA8, &lbl_8030DE28);
        break;
    case 0:                                         /* switch 1 */
        fn_80270784(arg0 + 0x1CA8, &lbl_8030DE2C);
        break;
    }
    if (PersistentData__GetGlobalImpl(lbl_803DC368 + 0x12C, &lbl_8030DE34) != 0) {
        fn_80270784(arg0 + 0x2090, &lbl_8030DD8C);
    } else {
        fn_80270784(arg0 + 0x2090, &lbl_8030DE20);
    }
    if (PersistentData__GetGlobalImpl(lbl_803DC368 + 0x12C, &lbl_8030DE48) != 0) {
        fn_80270784(arg0 + 0x2284, &lbl_8030DD8C);
    } else {
        fn_80270784(arg0 + 0x2284, &lbl_8030DE20);
    }
    if ((s32) M2C_FIELD(M2C_FIELD(lbl_803DC3C0, void **, 0x238), s32 *, 0x1C) != 5) {
        temp_r3 = Game__GetDifficultyLevelImpl(lbl_803DC368 + 0x370);
        switch (temp_r3) {                        /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            fn_80270784(arg0 + 0x1E9C, &lbl_8030DE5C);
            break;
        case 1:                                     /* switch 2 */
            fn_80270784(arg0 + 0x1E9C, &lbl_8030DE64);
            break;
        case 2:                                     /* switch 2 */
            fn_80270784(arg0 + 0x1E9C, &lbl_8030DE6C);
            break;
        }
    }
    MenuSlider__SetValue((s32) temp_r9, Options__GetSoundVolume(lbl_803DC368 + 0x370));
    MenuSlider__SetValue((s32) temp_r3_2, Options__GetMusicVolume(lbl_803DC368 + 0x370));
    fn_8026D4A4((s32) arg0);
}
