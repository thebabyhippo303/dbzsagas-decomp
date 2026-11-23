/* UiSpriteResources__UpdateOverlayRowWidgets @ 0x8000FDDC (size: 0xE0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void UiSpriteResources__HideOverlayRows(void *);
int fn_80260A5C(void *);
void UiSpriteResources__AdvanceOverlayRowSweep(void);

void UiSpriteResources__UpdateOverlayRowWidgets(void *arg0) {
    char *var_r31;
    void *temp_r3;
    s32 temp_r3_2;
    s32 var_r0;
    s32 var_r29;
    s32 var_r30;
    s32 var_r3;
    char *var_r30_2;
    void *temp_r3_3;
    void *temp_r9;
    char *var_r31_2;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x1088) != 0) {
        var_r31 = arg0 + 0x308;
        UiSpriteResources__AdvanceOverlayRowSweep();
        var_r30 = fn_80260A5C((char *)M2C_FIELD(arg0, void **, 0x168) + 0x244);
        do {
            temp_r3 = *(void **)var_r31;
            var_r31 += 0x1A0;
            temp_r3_2 = fn_80260A5C((char *)temp_r3 + 0x244);
            var_r0 = 1;
            if (var_r30 == 0) {
                var_r0 = 0;
            }
            var_r3 = 1;
            if (temp_r3_2 == 0) {
                var_r3 = 0;
            }
            var_r30 = var_r0 | var_r3;
        } while ((u32)var_r31 <= (u32)((char *)arg0 + 0x1008));
        if ((var_r30 == 0) && ((s32) M2C_FIELD(arg0, s32 *, 0) != 0)) {
            UiSpriteResources__HideOverlayRows(arg0);
            M2C_FIELD(arg0, s32 *, 0x1088) = var_r30;
        }
    }
    var_r31_2 = arg0 + 4;
    var_r30_2 = arg0 + 0x1A0;
    var_r29 = 0xA;
    do {
        temp_r9 = *(void **)var_r30_2;
        var_r30_2 += 0x1A0;
        temp_r3_3 = var_r31_2 + M2C_FIELD(temp_r9, s16 *, 0x38);
        var_r31_2 += 0x1A0;
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x3C)(temp_r3_3);
        var_r29 -= 1;
    } while (var_r29 != 0);
}
