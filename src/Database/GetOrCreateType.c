/* Database__GetOrCreateType @ 0x80203C5C (size: 0xB8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct Type {
    struct Type *next;
    int id;
    short flags;
    short pad;
} Type;

extern Type *SList__PopFront(void *list);
extern void SList__PushFront(void *list, void *item);
extern void SList__Init(void *list, int arg);
extern void fn_8020394C(void);
extern void fn_802043B8(void *t, char *str);
extern char lbl_80345C00[] __attribute__((section(".data")));
extern int lbl_803ADB60 __attribute__((section(".data")));
extern Type *lbl_803ADB6C __attribute__((section(".data")));

Type *Database__GetOrCreateType(int id, short flags) {
    Type *t = lbl_803ADB6C;
    while (t != 0) {
        if (t->id == id) {
            break;
        }
        t = t->next;
    }
    if (t == 0) {
        t = SList__PopFront(&lbl_803ADB60);
        if (t == 0) {
            fn_8020394C();
            return 0;
        }
        SList__PushFront(&lbl_803ADB6C, t);
        t->id = id;
        t->flags = flags;
        t->pad = 0;
        SList__Init((char *)t + 12, 0);
        fn_802043B8(t, lbl_80345C00);
    }
    return t;
}
