/* Avatar__AdjustComboTimer @ 0x800992E4 (size: 0xF8, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__AdjustComboTimer @ 0x800992E4 (0xF8). ProDG -O2. */
typedef struct {
    char pad[0xC];
    int id;
} ComboInner;

typedef struct {
    char pad[0xCF0];
    int flag;
} ComboObj;

typedef struct {
    char pad[0x29C];
    float timer;
    float cap;
    char mid[0x2D0 - 0x2A4];
    int mode;
    char mid2[0x159C - 0x2D4];
    ComboObj *obj;
    char mid3[0x19D8 - 0x15A0];
    ComboInner *inner;
} ComboAvatar;

extern float lbl_8031FAB4 __attribute__((section(".rodata")));
extern float lbl_8031FAB8 __attribute__((section(".rodata")));
extern char lbl_8031FAAC[] __attribute__((section(".rodata")));
extern void *lbl_803DC594;
extern int CameraBag__IsCurrentNamed(void *bag, char *name);

void Avatar__AdjustComboTimer(ComboAvatar *avatar, float delta) {
    float zero;
    float cur;
    float cap;
    float scaled;
    int flag;
    ComboObj *obj;

    zero = lbl_8031FAB4;
    if (delta >= zero) {
        return;
    }
    if (CameraBag__IsCurrentNamed(lbl_803DC594, lbl_8031FAAC) != 0) {
        return;
    }
    if (avatar->inner->id == 34) {
        return;
    }
    avatar->timer += delta;
    if (avatar->timer >= zero) {
        goto loaded;
    }
    avatar->timer = zero;
loaded:
    cur = avatar->timer;
    cap = avatar->cap;
    if (avatar->mode == 0) {
        obj = avatar->obj;
        flag = 0;
        if (obj->flag != 0) {
            flag = 1;
        }
        if (flag != 0) {
            scaled = cap * lbl_8031FAB8;
            if (cur <= scaled) {
                goto clamp_cap;
            }
            avatar->timer = scaled;
            return;
        }
    }
clamp_cap:
    if (cur <= cap) {
        return;
    }
    avatar->timer = cap;
}
