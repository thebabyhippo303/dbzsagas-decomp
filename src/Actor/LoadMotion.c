/* Actor__LoadMotion @ 0x802AC51C (size: 0x144, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

char *Script__PopString(void *, void *, s32 *);
int Script__PopInt(void *, void *);
void fn_802CE66C(void *);
char *strcpy(char *, const char *);
int strlen(const char *);
void fn_801DCB84(s32, char *, char *, u16, s32, s32);
void fn_801DCBE0(s32, char *, char *, char *, u16, s32, s32);
void fn_80251F64(char **, char *);
extern char lbl_80351D24[] __attribute__((section(".data")));
extern char *lbl_803B1E84 __attribute__((section(".data")));

void Actor__LoadMotion(void *self, void *ctx) {
    char saved[256];
    s32 own3;
    s32 own2;
    s32 own1;
    s32 id;
    char *str3;
    char *str2;
    char *str1;
    s32 model;

    id = Script__PopInt(self, ctx);
    str3 = Script__PopString(self, ctx, &own3);
    str2 = Script__PopString(self, ctx, &own2);
    str1 = Script__PopString(self, ctx, &own1);
    model = *(s32 *)((char *)self + 0xC8);
    strcpy(saved, lbl_803B1E84);
    fn_80251F64(&lbl_803B1E84, lbl_80351D24);
    if ((str1 != 0) && (strlen(str1) != 0)) {
        fn_801DCBE0(model, str1, str2, str3, (u16)id, 0, 0xFFFF);
    } else {
        fn_801DCB84(model, str2, str3, (u16)id, 0, 0xFFFF);
    }
    fn_80251F64(&lbl_803B1E84, saved);
    if (own3 != 0) {
        fn_802CE66C(str3);
    }
    if (own2 != 0) {
        fn_802CE66C(str2);
    }
    if (own1 != 0) {
        fn_802CE66C(str1);
    }
}
