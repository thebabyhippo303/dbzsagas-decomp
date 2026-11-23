/* HUD__UpdateWeaponActionPrompt @ 0x8010B100 (size: 0x14C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef short s16;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

extern char lbl_8036BCF4[] __attribute__((section(".data")));

void HUD__UpdateWeaponActionPrompt(void *unused, void *arg1) {
    void *obj;
    void *w;
    void *vt;
    void *t4;
    void *t9;
    s32 state;
    s32 idx;
    s32 val;

    obj = M2C_FIELD(arg1, void **, 0);
    state = M2C_FIELD(obj, s32 *, 720);
    if (state == 1) {
        w = M2C_FIELD(arg1, void **, 704);
        if (w == NULL) {
            return;
        }
        idx = M2C_FIELD(M2C_FIELD(obj, void **, 6616), s32 *, 12);
        val = *(s32 *)(lbl_8036BCF4 + idx * 8);
        vt = M2C_FIELD(w, void **, 412);
        M2C_FIELD(vt, void (**)(void *, s32 *, s32, s32 *, s32), 116)((char *)w + M2C_FIELD(vt, s16 *, 112), val + 1, 0, 1, 1);
    } else if (state == 2) {
        w = M2C_FIELD(arg1, void **, 704);
        if (w == NULL) {
            return;
        }
        idx = M2C_FIELD(M2C_FIELD(obj, void **, 6616), s32 *, 12);
        val = *(s32 *)(lbl_8036BCF4 + idx * 8);
        vt = M2C_FIELD(w, void **, 412);
        M2C_FIELD(vt, void (**)(void *, s32 *, s32, s32 *, s32), 116)((char *)w + M2C_FIELD(vt, s16 *, 112), val + 2, 0, 1, 1);
    } else {
        w = M2C_FIELD(arg1, void **, 704);
        if (w == NULL) {
            return;
        }
        idx = M2C_FIELD(M2C_FIELD(obj, void **, 6616), s32 *, 12);
        val = *(s32 *)(lbl_8036BCF4 + idx * 8);
        vt = M2C_FIELD(w, void **, 412);
        M2C_FIELD(vt, void (**)(void *, s32 *, s32, s32 *, s32), 116)((char *)w + M2C_FIELD(vt, s16 *, 112), val, 0, 1, 1);
    }
    t4 = M2C_FIELD(arg1, void **, 704);
    if (t4 != NULL) {
        t9 = M2C_FIELD(t4, void **, 412);
        M2C_FIELD(t9, void (**)(void *), 60)((char *)t4 + M2C_FIELD(t9, s16 *, 56));
    }
}
