/* AvatarCurve__ConsumeSpecialMoveAndClearCallback @ 0x800A15E4 (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void AvatarInventory__RemoveItem(void *, void *, void *, int);
void Avatar__SetControlCallbackState(void *, void *);
M2C_UNK AvatarInventory__SelectPreviousSpecialMove(void *); /* extern */

void AvatarCurve__ConsumeSpecialMoveAndClearCallback(void **arg0) {
    s32 var_r11;
    void *temp_r31;

    var_r11 = 0;
    temp_r31 = M2C_FIELD(*arg0, void **, 0x159C);
    if ((s32) M2C_FIELD(temp_r31, s32 *, 0xBF4) != 0) {
        var_r11 = 1;
    }
    if (var_r11 != 0) {
        AvatarInventory__RemoveItem(temp_r31, (void *)0x54, NULL, 1);
        AvatarInventory__SelectPreviousSpecialMove(temp_r31);
    }
    Avatar__SetControlCallbackState(*arg0, NULL);
}

