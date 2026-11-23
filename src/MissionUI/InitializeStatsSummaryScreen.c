/* MissionUI__InitializeStatsSummaryScreen @ 0x801235EC (size: 0x188, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef unsigned short u16; typedef unsigned int u32; typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef short s16; typedef int s32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 Game__GetConfiguredPlayerCount(void *);
void MissionStats__ResolveAllSummaryEntryPlayers(void);
void MissionUI__BuildStatsSummaryWidgets(void *);
void MissionUI__CreateStatsSummaryBackground(s32);
void MissionUI__CreateStatsSummaryWidgets(void *);
void SimLoop__ActivateControls(int, int);
f32 fn_8026B86C(void);
f32 fn_8026B8B8(void);
M2C_UNK MissionStats__BuildSummaryEntries();
M2C_UNK MissionUI__ConfigureContinueButton(void *);
extern f32 lbl_80327474 __attribute__((section(".data")));
extern f32 lbl_80327478 __attribute__((section(".data")));
extern void *lbl_803DC3C0;

void MissionUI__InitializeStatsSummaryScreen(void *arg0) {
    s16 ld_88;
    void *temp_r11;
    void *temp_r29;
    void *temp_r30;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_4;
    void *temp_r9_5;
    void *p88;

    if ((s32) M2C_FIELD(arg0, s32 *, 0xB7B0) == 0) {
        M2C_FIELD(arg0, s32 *, 0xB7B0) = 1;
        temp_r9 = M2C_FIELD(arg0, void **, 0x19C);
        M2C_FIELD(temp_r9, void (**)(void *), 0x3D4)((char *)arg0 + M2C_FIELD(temp_r9, s16 *, 0x3D0));
        temp_r9_2 = M2C_FIELD(arg0, void **, 0x19C);
        M2C_FIELD(temp_r9_2, void (**)(void *, s32, s32, s32, s32, s32), 0x14)((char *)arg0 + M2C_FIELD(temp_r9_2, s16 *, 0x10), 0, 0, 0, 1, 1);
        temp_r11 = M2C_FIELD(arg0, void **, 0x19C);
        M2C_FIELD(temp_r11, void (**)(void *, f32, f64, f64, f32), 0x10C)((char *)arg0 + M2C_FIELD(temp_r11, s16 *, 0x108), lbl_80327474, lbl_80327474, lbl_80327474, lbl_80327478);
        temp_r9_3 = M2C_FIELD(arg0, void **, 0x19C);
        M2C_FIELD(temp_r9_3, void (**)(void *, f32, f32), 0xEC)((char *)arg0 + M2C_FIELD(temp_r9_3, s16 *, 0xE8), lbl_80327474, lbl_80327474);
        temp_r9_4 = M2C_FIELD(arg0, void **, 0x19C);
        M2C_FIELD(temp_r9_4, void (**)(void *, f32, f32), 0xAC)((char *)arg0 + M2C_FIELD(temp_r9_4, s16 *, 0xA8), lbl_80327474, lbl_80327474);
        temp_r29 = M2C_FIELD(arg0, void **, 0x19C);
        ld_88 = M2C_FIELD(temp_r29, s16 *, 0x88);
        p88 = (char *)temp_r29 + 0x88;
        temp_r30 = (char *)arg0 + ld_88;
        M2C_FIELD(p88, void (**)(void *, f32, f32), 4)(temp_r30, fn_8026B86C(), fn_8026B8B8());
        M2C_FIELD(arg0, s32 *, 0xB7A8) = Game__GetConfiguredPlayerCount(lbl_803DC3C0);
        MissionStats__BuildSummaryEntries();
        MissionStats__ResolveAllSummaryEntryPlayers();
        MissionUI__CreateStatsSummaryWidgets(arg0);
        MissionUI__ConfigureContinueButton(arg0);
        MissionUI__BuildStatsSummaryWidgets(arg0);
        MissionUI__CreateStatsSummaryBackground((s32) arg0);
        temp_r9_5 = M2C_FIELD(arg0, void **, 0x19C);
        M2C_FIELD(temp_r9_5, void (**)(void *), 0x1E4)((char *)arg0 + M2C_FIELD(temp_r9_5, s16 *, 0x1E0));
        SimLoop__ActivateControls((s32) lbl_803DC3C0, 0);
    }
}
