/* Simple__GetCheckBoxSelection @ 0x8002E904 (size: 0xEC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

char * Script__PopString(void *, void *, int *);
void Script__PushInt(void *, void *, int);
int String__CompareIgnoreCase(const char *, const char *);
void fn_80184430(char *);
void fn_802B2FB0(void *, void *, int);
void fn_802B2FB4(void *);
void fn_802B2FB8(void *, char *);
char * fn_802B3010(void *, char *, int);
extern s8 lbl_8031169C __attribute__((section(".data")));
extern M2C_UNK lbl_803BEFC0 __attribute__((section(".data")));

void Simple__GetCheckBoxSelection(void *arg0, void *arg1) {
    s32 sp8;
    s32 temp_r3_2;
    s32 var_r30;
    s8 *temp_r29;
    s8 *temp_r31;
    s8 *temp_r3;

    temp_r31 = Script__PopString(arg0, arg1, &sp8);
    temp_r29 = Script__PopString(arg0, arg1, &sp8);
    fn_802B2FB0(&lbl_803BEFC0, M2C_FIELD(M2C_FIELD(arg0, void **, 0xC8), void **, 0x1BC), 0);
    fn_802B2FB4(&lbl_803BEFC0);
    fn_802B2FB8(&lbl_803BEFC0, temp_r31);
    temp_r3 = fn_802B3010(&lbl_803BEFC0, temp_r29, 0);
    if (temp_r3 != NULL) {
        temp_r3_2 = String__CompareIgnoreCase(temp_r3, &lbl_8031169C);
        var_r30 = (temp_r3_2 == 0);
    } else {
        var_r30 = 0;
    }
    if (sp8 != 0) {
        if (temp_r31 != NULL) {
            fn_80184430(temp_r31);
        }
        if (temp_r29 != NULL) {
            fn_80184430(temp_r29);
        }
    }
    Script__PushInt(arg0, arg1, var_r30);
}

