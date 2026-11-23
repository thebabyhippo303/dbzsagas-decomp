/* Avatar__SetHiddenState @ 0x8008E040 (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
extern void fn_801DEA98(void);
extern void Avatar__SetHiddenStateFlag(void *avatar, int hidden);
extern void Render__HideObject(void *render, void *obj);
extern void Render__ShowObject(void *render, void *obj);
extern void *lbl_803DCE84;

void Avatar__SetHiddenState(void *avatar, int hidden) {
    void *obj;

    fn_801DEA98();
    Avatar__SetHiddenStateFlag(avatar, hidden);
    obj = *(void **)((char *)avatar + 0x19BC);
    if (obj == 0) {
        return;
    }
    if (hidden != 0) {
        Render__HideObject(lbl_803DCE84, obj);
        return;
    }
    Render__ShowObject(lbl_803DCE84, obj);
}
