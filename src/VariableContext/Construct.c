/* VariableContext__Construct @ 0x8018DD74 (size: 0xFC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef struct VL { void *data; s32 count; s32 cap; s32 f0C; s32 clear; s32 flag; } VL;
typedef struct VC {
    char name[32];
    s32 f32;
    s32 f36;
    VL *f40;
    s32 f44;
    VL *f48;
} VC;

char *strncpy(char *, char *, u32);
s32 Mem__New(s32);
char *Mem__NewArray(s32);

VC *VariableContext__Construct(VC *arg0, s8 *arg1, s32 arg2) {
    VL *list;
    VL *list2;
    VL *list3;
    s32 clear;
    s8 *p28;

    p28 = (s8 *)arg0 + 0x28;
    list = (VL *)Mem__New(0x18);
    clear = 0;
    list->data = (void *)Mem__NewArray(32);
    arg0->f40 = list;
    list->cap = 8;
    list->f0C = 8;
    list->clear = 0;
    list->flag = 0;
    list->count = 0;
    *(s32 *)(p28 + 4) = 1;
    strncpy((char *)arg0, (char *)arg1, 0x1FU);
    ((s8 *)arg0)[0x1F] = 0;
    arg0->f32 = arg2;
    arg0->f36 = 0;
    if (arg2 != 0) {
        s32 f0c = 0x80;
        void *arr;
        list2 = (VL *)Mem__New(0x18);
        arr = (void *)Mem__NewArray(32);
        list2->flag = 1;
        list2->data = arr;
        list2->cap = 8;
        list2->f0C = f0c;
        list2->count = 0;
        list2->clear = 0;
        arg0->f48 = list2;
    } else {
        list3 = (VL *)Mem__New(0x18);
        list3->flag = arg2;
        list3->f0C = 0x80;
        arg0->f48 = list3;
        list3->count = arg2;
        list3->cap = arg2;
        list3->clear = arg2;
        list3->data = (void *)arg2;
    }
    return arg0;
}
