/* HUD__UpdatePlayerWidgetGroups @ 0x8010BE1C (size: 0x128, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
typedef float f32;
typedef struct WidgetGroupData {
    char pad[648];
    f32 f648;
    f32 f652;
    f32 f656pad;
    f32 f660;
    f32 f664;
    f32 f668;
    f32 f672;
} WidgetGroupData;
extern f32 lbl_80326258 __attribute__((section(".data")));
extern f32 lbl_8032625C __attribute__((section(".data")));
extern void *SdaBasePtr;
extern void HUD__UpdateMeterWidgetGroup(void *hud, void *widgets, int flag, f32 a, f32 b);
extern void HUD__UpdateQuickRecoveryStatusWidgets(void *hud, void *group);
extern void HUD__DestroyWidgetGroupStorage(void *hud, void *widgets);
extern void HUD__RefreshTrackedPlayerWidgets(void *hud, void *group);
extern void HUD__InitializeStarBeepWidgets(void *hud, void *group);
extern void HUD__UpdateSpecialMoveLabel(void *hud, void *group);
extern void HUD__UpdateWeaponActionPrompt(void *hud, void *group);
extern void HUD__UpdateComboButtonAnimations(void *hud, void *group);
extern void HUD__OffsetAllWidgetPositions(void *hud, void *group);
void HUD__UpdatePlayerWidgetGroups(void *hud, void *group) {
    WidgetGroupData *o = *(WidgetGroupData **)group;
    f32 f1a;
    f32 r660_664;
    f32 r668_672;
    void *base;
    if (o == 0) {
        return;
    }
    f1a = o->f648 / o->f652;
    r660_664 = o->f660 / o->f664;
    r668_672 = o->f668 / o->f672;
    HUD__UpdateMeterWidgetGroup(hud, (char *)group + 4, 1, f1a, lbl_80326258);
    HUD__UpdateMeterWidgetGroup(hud, (char *)group + 232, 1, r660_664, lbl_80326258);
    base = SdaBasePtr;
    if (*(s32 *)((char *)base + 8520) == 0) {
        HUD__UpdateQuickRecoveryStatusWidgets(hud, group);
        HUD__UpdateMeterWidgetGroup(hud, (char *)group + 460, 0, r668_672, lbl_8032625C);
    } else {
        HUD__DestroyWidgetGroupStorage(hud, (char *)group + 460);
    }
    HUD__RefreshTrackedPlayerWidgets(hud, group);
    HUD__InitializeStarBeepWidgets(hud, group);
    HUD__UpdateSpecialMoveLabel(hud, group);
    HUD__UpdateWeaponActionPrompt(hud, group);
    HUD__UpdateComboButtonAnimations(hud, group);
    HUD__OffsetAllWidgetPositions(hud, group);
}
