/* DebugMenu__IncrementValue @ 0x8026508C (size: 0x114, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
extern f32 lbl_80349CA8 __attribute__((section(".data")));
extern f32 lbl_80349CAC __attribute__((section(".data")));
extern char lbl_80349C98[] __attribute__((section(".data")));
void *fn_802636CC(void *);
void *fn_802634CC(void *);
double String__ParseFloat(const char *);
char *String__FormatTemp(char *, ...);
void *DebugMenu__IncrementValue(void *arg0) {
    void *item;
    char *d;
    char *e;
    void *addr2;
    f32 f31;
    f32 f0;
    item = ((void *(*)(void *))*(void **)(*(char **)((char *)arg0 + 16) + 444))((char *)arg0 + *(s16 *)(*(char **)((char *)arg0 + 16) + 440));
    if (item == NULL) goto do6;
    if (*(void **)((char *)arg0 + 192) != NULL) goto dofloat;
do6:
    return fn_802636CC(arg0);
dofloat:
    f31 = *(f32 *)((char *)item + 1124);
    if (f31 == lbl_80349CA8) {
        f31 = (*(f32 *)((char *)item + 1120) - *(f32 *)((char *)item + 1116)) * lbl_80349CAC;
    }
    f0 = (f32)String__ParseFloat((const char *)((void *(*)(void *, s32))*(void **)(*(char **)((char *)item + 16) + 316))((char *)item + *(s16 *)(*(char **)((char *)item + 16) + 312), 1)) + f31;
    if (f0 <= *(f32 *)((char *)item + 1120)) goto keep;
    f0 = *(f32 *)((char *)item + 1120);
keep:
    d = *(char **)((char *)item + 16);
    addr2 = (char *)item + *(s16 *)(d + 664);
    e = d + 664;
    ((void (*)(void *, s32, char *))*(void **)(e + 4))(addr2, 1, String__FormatTemp(lbl_80349C98, f0));
    return fn_802634CC(arg0);
}
