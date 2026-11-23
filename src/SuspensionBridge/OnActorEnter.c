/* SuspensionBridge__OnActorEnter @ 0x800FB5CC (size: 0x104, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void TriggerBox__RecordEnteringActor(void *, void *);
M2C_UNK SuspensionBridge__UpdateSpanGeometry(void *, void *); /* extern */
extern f32 lbl_80324564 __attribute__((section(".data")));
extern f32 lbl_80324568 __attribute__((section(".data")));
extern f32 lbl_8032456C __attribute__((section(".data")));
extern f32 lbl_80324570 __attribute__((section(".data")));
extern M2C_UNK lbl_803945E4 __attribute__((section(".data")));

void SuspensionBridge__OnActorEnter(void *arg0, s32 *arg1) {
    s32 var_ctr;
    s32 var_r11;
    void *var_r9;
    s32 *flags;
    f32 c0;
    f32 c1;
    f32 c2;
    f32 c3;

    TriggerBox__RecordEnteringActor(arg0, arg1);
    flags = (s32 *)&lbl_803945E4;
    if ((*arg1 & flags[1]) == flags[0]) {
        M2C_FIELD(arg0, s32 **, 0x418) = arg1;
        M2C_FIELD(arg0, s32 *, 0x41C) = 0;
        M2C_FIELD(arg0, s32 *, 0x770) = (s32) (M2C_FIELD(arg0, s32 *, 0x770) | 0x80000000);
        SuspensionBridge__UpdateSpanGeometry(arg0, arg1 + 0x38);
        c0 = lbl_80324564;
        c1 = lbl_80324568;
        c2 = lbl_8032456C;
        c3 = lbl_80324570;
        var_r11 = 0;
        do {
            var_ctr = 2;
            var_r9 = (char *)(var_r11 * 0x90) + (s32)arg0 + 0x4A8;
            do {
                if (!(M2C_FIELD(var_r9, f32 *, 8) <= M2C_FIELD(var_r9, f32 *, -0x18))) {
                    M2C_FIELD(var_r9, f32 *, -0x10) = c0;
                } else {
                    M2C_FIELD(var_r9, f32 *, -0x10) = c1;
                }
                if (!(M2C_FIELD(var_r9, f32 *, 0x10) <= M2C_FIELD(var_r9, f32 *, -8))) {
                    M2C_FIELD(var_r9, f32 *, 0) = c2;
                } else {
                    M2C_FIELD(var_r9, f32 *, 0) = c3;
                }
                var_r9 = (char *)var_r9 + 4;
                var_ctr -= 1;
            } while (var_ctr != 0);
            var_r11 += 1;
        } while (var_r11 <= 1);
    }
}
