/* PersistentData__GetLevel @ 0x80030060 (size: 0xEC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

int Game__FindLevelIdByName(void *, char *);
int PersistentData__GetValue(void *, void *, const char *, int);
char * Script__PopString(void *, void *, int *);
void Script__PushInt(void *, void *, int);
void fn_80184430(char *);
extern s32 lbl_803DC368;
extern void *lbl_803DC3C0;

void PersistentData__GetLevel(void *arg0, void *arg1) {
    s32 sp10;
    s32 spC;
    s32 sp8;
    char *name;
    char *key;
    char *levelName;
    int levelId;

    name = Script__PopString(arg0, arg1, &sp8);
    key = Script__PopString(arg0, arg1, &spC);
    levelName = Script__PopString(arg0, arg1, &sp10);
    levelId = Game__FindLevelIdByName(M2C_FIELD(lbl_803DC3C0, void **, 0x234), levelName);
    Script__PushInt(arg0, arg1, PersistentData__GetValue((void *)(lbl_803DC368 + 0x12C), name, key, levelId));
    if ((sp8 != 0) && (name != NULL)) {
        fn_80184430(name);
    }
    if ((spC != 0) && (key != NULL)) {
        fn_80184430(key);
    }
    if ((sp10 != 0) && (levelName != NULL)) {
        fn_80184430(levelName);
    }
}
