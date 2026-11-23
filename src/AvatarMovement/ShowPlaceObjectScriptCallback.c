/* AvatarMovement__ShowPlaceObjectScriptCallback @ 0x800B7614 (size: 0xB0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 AvatarInventory__EquipHandItem(void *, s32, s32);
int Avatar__PopScriptInt(void *, void *);
void Avatar__RemoveHandItemImpl(void *, int);
void fn_80251510(void *, int, void *, void *, int);
M2C_UNK fn_800E53F8(void *, void *);                /* extern */
extern M2C_UNK lbl_803B1DDC __attribute__((section(".data")));

void AvatarMovement__ShowPlaceObjectScriptCallback(void **arg0, void *arg1) {
    void *sp8;
    s32 var_r5;
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r4;
    void *temp_r6;
    void *temp_r5;
    void *var_r7;

    if (Avatar__PopScriptInt(*arg0, arg1) != 0) {
        temp_r3 = *arg0;
        var_r5 = 0;
        temp_r11 = M2C_FIELD(temp_r3, void **, 0x1BB4);
        if (temp_r11 != NULL) {
            var_r5 = M2C_FIELD(temp_r11, s32 *, 0x50C);
        }
        temp_r3_2 = M2C_FIELD(temp_r3, void **, 0x159C);
        AvatarInventory__EquipHandItem(temp_r3_2, M2C_FIELD(temp_r3_2, s32 *, 0x113C), var_r5);
        return;
    }
    Avatar__RemoveHandItemImpl(M2C_FIELD(*arg0, void **, 0x159C), 0);
    temp_r4 = *arg0;
    fn_800E53F8(M2C_FIELD(temp_r4, void **, 0x1BB4), temp_r4);
    temp_r6 = *arg0;
    temp_r5 = &sp8;
    temp_r11_2 = M2C_FIELD(temp_r6, void **, 0x1BB4);
    sp8 = temp_r11_2;
    var_r7 = NULL;
    if (temp_r11_2 != NULL) {
        var_r7 = temp_r11_2 + 0x19C;
    }
    fn_80251510(&lbl_803B1DDC, 0x20007, temp_r5, temp_r6, (s32) var_r7);
}

