/* SaveMenu__ShowDeleteFailedDialog @ 0x8004F888 (size: 0x90, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef void (*SaveMenuCallback)(void *self);

extern char lbl_80319BA4[];
extern char lbl_80319BB4[];
extern char lbl_80319BF8[];

extern void fn_8026805C(void *dialog);
extern void fn_80268BA0(void *dialog, int enabled);
extern void fn_802675F8(void *dialog, const char *title);
extern void fn_80268398(void *dialog, void *description);
extern void fn_80267EE8(void *dialog, const char *button, int flags);

void SaveMenu__ShowDeleteFailedDialog(void *self) {
    char *vtable = *(char **)((char *)self + 0x19C);
    int adjustment = *(short *)(vtable + 0x3B0);
    SaveMenuCallback callback = *(SaveMenuCallback *)(vtable + 0x3B4);
    char *dialog;

    callback((char *)self + adjustment);

    dialog = (char *)self + 0xD4C4;
    fn_8026805C(dialog);
    fn_80268BA0(dialog, 1);
    fn_802675F8(dialog, lbl_80319BA4);
    fn_80268398(dialog, lbl_80319BB4);
    fn_80267EE8(dialog, lbl_80319BF8, 0x201);
}
