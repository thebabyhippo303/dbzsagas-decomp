/* Environment__SpawnEntity @ 0x800F0768 (size: 0x1B8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

int Environment__GetEntityTypeIndex(const char *);
int String__CompareIgnoreCase(const char *, const char *);
float cosf(float);
void fn_802C2728(void *, int);
float sinf(float);
char * strcpy(char *, const char *);
void *Environment__CreateEntityFromType();          /* extern */
M2C_UNK Environment__GetEntityTypeFlags(s32 *, s8 *); /* extern */
M2C_UNK fn_801DCA9C(void *, s32, f32 *);            /* extern */
M2C_UNK fn_802ABE70(s32, u8 *, M2C_UNK);            /* extern */
M2C_UNK fn_802C2764(void *, s32);                   /* extern */
M2C_UNK fn_802C27A0(void *, s32);                   /* extern */
extern s8 lbl_80323BBC __attribute__((section(".data")));
extern f32 lbl_80323BC8 __attribute__((section(".data")));
extern f32 lbl_80323BCC __attribute__((section(".data")));

void *Environment__SpawnEntity(s8 *arg0, s32 arg1, s32 arg2, u8 *arg3, s32 arg4, f32 farg0, s32 arg5) {
    s32 sp30;
    f32 sp8[9];
    f32 *matrix;
    M2C_UNK (*temp_lr)(void *, M2C_UNK);
    f32 temp_f1;
    f32 temp_f31;
    void *temp_r3;
    void *temp_r9;
    void *temp_r9_2;
    void *var_r31;

    var_r31 = Environment__CreateEntityFromType();
    if (var_r31 == NULL) {
        return NULL;
    }
    matrix = sp8;
    temp_f31 = sinf(farg0);
    temp_f1 = cosf(farg0);
    sp8[0] = temp_f1;
    M2C_FIELD(matrix, f32 *, 8) = (f32) -temp_f31;
    M2C_FIELD(matrix, f32 *, 4) = (f32) lbl_80323BC8;
    M2C_FIELD(matrix, f32 *, 0x10) = (f32) lbl_80323BCC;
    M2C_FIELD(matrix, f32 *, 0xC) = (f32) lbl_80323BC8;
    M2C_FIELD(matrix, f32 *, 0x14) = (f32) lbl_80323BC8;
    M2C_FIELD(matrix, f32 *, 0x1C) = (f32) lbl_80323BC8;
    M2C_FIELD(matrix, f32 *, 0x20) = temp_f1;
    M2C_FIELD(matrix, f32 *, 0x18) = temp_f31;
    fn_801DCA9C(var_r31, arg4, matrix);
    fn_802C2728(var_r31, arg1);
    fn_802C2764(var_r31, arg1);
    if (arg2 != 0) {
        fn_802C27A0(var_r31, arg2);
    }
    M2C_FIELD(var_r31, s32 *, 0x410) = arg5;
    temp_r9 = M2C_FIELD(var_r31, void **, 0x34);
    if (M2C_FIELD(temp_r9, s32 (**)(void *), 0x174)(var_r31 + M2C_FIELD(temp_r9, s16 *, 0x170)) == 0) {
        temp_r9_2 = M2C_FIELD(var_r31, void **, 0x34);
        temp_r3 = var_r31 + M2C_FIELD(temp_r9_2, s16 *, 0x38);
        temp_lr = M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, M2C_UNK), 0x3C);
        var_r31 = NULL;
        temp_lr(temp_r3, 3);
    } else {
        strcpy(var_r31 + 0x1C0, arg0);
        M2C_FIELD(var_r31, s32 *, 0x204) = Environment__GetEntityTypeIndex(arg0);
        Environment__GetEntityTypeFlags(&sp30, arg0);
        M2C_FIELD(var_r31, s32 *, 0x10) = (s32) (M2C_FIELD(var_r31, s32 *, 0x10) | sp30);
        if ((arg3 != NULL) && ((s32) *arg3 != 0)) {
            fn_802ABE70(M2C_FIELD(var_r31, s32 *, 0x84), arg3, 0);
        }
    }
    if (String__CompareIgnoreCase(arg0, &lbl_80323BBC) == 0) {
        fn_802C2728(var_r31, (s32) arg0);
    }
    return var_r31;
}
