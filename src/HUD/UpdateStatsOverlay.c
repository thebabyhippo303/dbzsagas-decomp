/* HUD__UpdateStatsOverlay @ 0x80123774 (size: 0xF8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void * Game__GetPlayerImpl(void *, int);
void Minimap__ResetModeWidgets(void);
void SimLoop__ActivateControls(int, int);
void fn_80266F24(void *, s32, f32);
M2C_UNK Avatar__AccumulateStats();                  /* extern */
extern f32 lbl_8032747C __attribute__((section(".data")));
extern f32 lbl_80327488 __attribute__((section(".data")));
extern u32 lbl_803A35AC __attribute__((section(".data")));
extern void *lbl_803DC3C0;

/* Keep the int-to-float constant pool at the same low 16 bits as the DOL. */
static const char pool_pad[0x7480] = {1};

void HUD__UpdateStatsOverlay(void *arg0) {
    s32 temp_r3;
    s32 temp_r4;
    s32 var_r31;
    void *temp_r9;
    void *temp_r9_2;

    temp_r9 = M2C_FIELD(arg0, void **, 0x19C);
    temp_r3 = M2C_FIELD(temp_r9, s32 (**)(void *), 0x3A4)(arg0 + M2C_FIELD(temp_r9, s16 *, 0x3A0));
    if (temp_r3 == 0) {
        M2C_FIELD(arg0, s32 *, 0xB7AC) = temp_r3;
        var_r31 = 0;
        if (var_r31 < (s32) M2C_FIELD(arg0, s32 *, 0xB7A8)) {
            do {
                temp_r4 = var_r31;
                var_r31 += 1;
                Game__GetPlayerImpl(lbl_803DC3C0, temp_r4);
                Avatar__AccumulateStats();
            } while (var_r31 < (s32) M2C_FIELD(arg0, s32 *, 0xB7A8));
        }
        fn_80266F24(arg0, 0, lbl_8032747C);
        M2C_FIELD(arg0, f32 *, 0xB7BC) = (f32) ((f32) (f64) lbl_803A35AC * lbl_80327488);
        temp_r9_2 = M2C_FIELD(arg0, void **, 0x19C);
        M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *), 0x1D4)(arg0 + M2C_FIELD(temp_r9_2, s16 *, 0x1D0));
        SimLoop__ActivateControls((s32) lbl_803DC3C0, 0);
        Minimap__ResetModeWidgets();
    }
}
