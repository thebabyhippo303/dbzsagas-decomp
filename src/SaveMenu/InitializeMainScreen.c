/* SaveMenu__InitializeMainScreen @ 0x8005474C (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef unsigned int u32;
typedef signed short s16;
typedef int (*CountFn)(void *, int);
extern void SaveMenu__BuildMainScreenWidgets(void);
extern void *fn_801D672C(void *);
extern void *lbl_803DCC74 __attribute__((section(".sdata")));
void SaveMenu__InitializeMainScreen(void *self) {
    u32 index;
    char *obj;
    char *vtable;
    s16 adjust;
    CountFn fn;
    int count;
    index = 0;
    SaveMenu__BuildMainScreenWidgets();
    *(s32 *)((char *)self + 0x4914C) = 0;
loop:
    *(s32 *)((char *)fn_801D672C(lbl_803DCC74) + 0xE0) = 1;
    obj = (char *)lbl_803DCC74;
    vtable = *(char **)(obj + 16);
    adjust = *(s16 *)(vtable + 32);
    fn = *(CountFn *)(vtable + 36);
    count = fn(obj + adjust, index);
    index++;
    if (index < (u32)count) goto loop;
}
