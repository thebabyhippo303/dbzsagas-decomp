/* MainMenu__BeginPlayerSelectAnimation @ 0x80012114 (size: 0x24C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

float MainMenu__GetCenterCharacterCardX(void *);
f32 MainMenu__GetCenterCharacterCardY(void *);
void MainMenu__SetPlayerSelectState(void *, int);
void UI__SetColorRGBA(void *, float, float, float, float);
void fn_80260304(void *, float, float);
void fn_8026B0C8(void *, int);
void fn_8026B420(void *);
void fn_8026C508(void *, float, float);
void fn_8026C634(void *, float, float);
void fn_80270784(void *, char *);
f32 fn_8026D748(void *);                            /* extern */
f32 fn_8026D750(void *);                            /* extern */
extern s8 lbl_8030D798 __attribute__((section(".data")));
extern f32 lbl_8030D89C __attribute__((section(".data")));
extern f32 lbl_8030D8A0 __attribute__((section(".data")));
extern f32 lbl_8030D8A4 __attribute__((section(".data")));
extern f32 lbl_8030D8A8 __attribute__((section(".data")));
extern f32 lbl_8030D8AC __attribute__((section(".data")));
extern f32 lbl_8030D8B0 __attribute__((section(".data")));

void MainMenu__BeginPlayerSelectAnimation(void *arg0) {
    f32 temp_f30;
    f32 temp_f31;
    f32 temp_f31_2;
    f32 temp_f31_3;
    f32 var_f4;
    s32 var_r29;
    void *temp_r28;
    void *temp_r29;
    void *var_r27;
    void *var_r28;
    void *var_r30;
    void *var_r3;

    var_r29 = 0;
    var_r30 = arg0 + 0xDCC;
    var_r27 = var_r30;
    var_r28 = var_r30;
    do {
        if (var_r29 != 3) {
            if (var_r29 <= 3) {
                if (var_r29 >= 1) {
                    goto block_8;
                }
                goto block_13;
            }
            if (var_r29 <= 5) {
block_8:
                if ((s32) M2C_FIELD(arg0, s32 *, 0xD94) != 0) {
                    var_r3 = var_r28;
                    var_f4 = lbl_8030D8A4;
                } else {
                    var_r3 = var_r30;
                    goto block_11;
                }
                goto block_12;
            }
block_13:
            UI__SetColorRGBA(var_r27, lbl_8030D89C, lbl_8030D89C, lbl_8030D89C, lbl_8030D8A4);
        } else {
            var_r3 = arg0 + 0x12E8;
block_11:
            var_f4 = lbl_8030D8A0;
block_12:
            UI__SetColorRGBA(var_r3, lbl_8030D89C, lbl_8030D89C, lbl_8030D89C, var_f4);
        }
        var_r29 += 1;
        var_r27 += 0x1B4;
        var_r30 += 0x1B4;
        var_r28 += 0x1B4;
    } while (var_r29 <= 6);
    temp_r28 = arg0 + 0x20B0;
    fn_80270784(temp_r28, &lbl_8030D798);
    temp_r29 = arg0 + 0x1F10;
    UI__SetColorRGBA(temp_r28, lbl_8030D89C, lbl_8030D89C, lbl_8030D89C, lbl_8030D89C);
    UI__SetColorRGBA(temp_r29, lbl_8030D89C, lbl_8030D89C, lbl_8030D89C, lbl_8030D89C);
    temp_f31 = MainMenu__GetCenterCharacterCardX(arg0);
    temp_f30 = lbl_8030D8A8;
    fn_8026C508(temp_r29, temp_f31, MainMenu__GetCenterCharacterCardY(arg0) + temp_f30);
    temp_f31_2 = fn_8026D748(temp_r28);
    fn_8026C634(temp_r29, temp_f31_2, fn_8026D750(temp_r28));
    temp_f31_3 = MainMenu__GetCenterCharacterCardX(arg0);
    fn_8026C508(temp_r28, temp_f31_3, MainMenu__GetCenterCharacterCardY(arg0) + temp_f30);
    fn_8026B420(M2C_FIELD(arg0, void **, 0x2214));
    fn_80260304(M2C_FIELD(arg0, void **, 0x2214) + 0x244, lbl_8030D8A4, lbl_8030D89C);
    fn_80260304(M2C_FIELD(arg0, void **, 0x2214) + 0x244, lbl_8030D89C, lbl_8030D8AC);
    fn_80260304(M2C_FIELD(arg0, void **, 0x2214) + 0x244, lbl_8030D8B0, lbl_8030D89C);
    fn_8026B0C8(M2C_FIELD(arg0, void **, 0x2214), 1);
    UI__SetColorRGBA(arg0 + 0x19DC, lbl_8030D89C, lbl_8030D89C, lbl_8030D89C, lbl_8030D8A4);
    UI__SetColorRGBA(arg0 + 0x1B7C, lbl_8030D89C, lbl_8030D89C, lbl_8030D89C, lbl_8030D8A4);
    M2C_FIELD(arg0, s32 *, 0xDA0) = 1;
    MainMenu__SetPlayerSelectState(arg0, 1);
}
