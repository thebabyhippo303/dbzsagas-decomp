/* PersistentData__Add @ 0x8002FF9C (size: 0xC4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

int PersistentData__AddValue(void *, void *, const char *, int, int);
int Script__PopInt(void *, void *);
char * Script__PopString(void *, void *, int *);
void Script__PushInt(void *, void *, int);
void fn_80184430(char *);
extern s32 lbl_803DC368;
extern void *lbl_803DC3C0;

void PersistentData__Add(void *arg0, void *arg1) {
    s32 spC;
    s32 sp8;
    s8 *temp_r28;
    s8 *temp_r31;
    int value;

    temp_r31 = Script__PopString(arg0, arg1, &sp8);
    temp_r28 = Script__PopString(arg0, arg1, &spC);
    value = Script__PopInt(arg0, arg1);
    Script__PushInt(arg0, arg1, PersistentData__AddValue(lbl_803DC368 + 0x12C, temp_r31, temp_r28, M2C_FIELD(M2C_FIELD(lbl_803DC3C0, void **, 0x238), s32 *, 4), value));
    if ((sp8 != 0) && (temp_r31 != NULL)) {
        fn_80184430(temp_r31);
    }
    if ((spC != 0) && (temp_r28 != NULL)) {
        fn_80184430(temp_r28);
    }
}

