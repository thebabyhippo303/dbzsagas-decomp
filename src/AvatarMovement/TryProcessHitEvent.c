/* AvatarMovement__TryProcessHitEvent @ 0x800B09B4 (size: 0x15C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32;

extern f32 lbl_80320F34 __attribute__((section(".data")));
extern int lbl_803945E4[] __attribute__((section(".data")));
extern void *lbl_803DC3C0 __attribute__((section(".sdata")));

int fn_801F3730(void *obj);
void AvatarMovement__ProcessHitEvent(void *self, void *other, int a, int b, int c, int d, int e, f32 x, f32 y);

void AvatarMovement__TryProcessHitEvent(void *self, void *other, int a, int b, int c, int d, int e, f32 x, f32 y) {
    void *obj;
    int flag;
    void *table;
    int mode;
    int kind;

    obj = *(void **)self;
    flag = 0;
    if (!(*(f32 *)((char *)obj + 0x288) > lbl_80320F34) && (*(int *)((char *)obj + 0x90) != 0)) {
        flag = 1;
    }
    if (flag != 0) {
        return;
    }
    obj = *(void **)self;
    table = *(void **)((char *)*(void **)((char *)obj + 0x84) + 0xF0);
    if (*(short *)((char *)table + 10) == 0) {
        return;
    }
    if (other != 0 && (*(int *)other & lbl_803945E4[1]) == lbl_803945E4[0] &&
        *(int *)((char *)other + 0x7E4) == *(int *)((char *)obj + 0x7E4) &&
        *(int *)((char *)self + 0x6D0) == 0) {
        return;
    }
    mode = *(int *)((char *)*(void **)((char *)lbl_803DC3C0 + 0x238) + 4);
    if (mode == 21) {
        kind = *(int *)((char *)*(void **)((char *)obj + 0x19D8) + 0xC);
        if (kind == 32 && fn_801F3730(obj) == 0) {
            return;
        }
    } else if (mode == 20) {
        kind = *(int *)((char *)*(void **)((char *)obj + 0x19D8) + 0xC);
        if (kind == 41 && fn_801F3730(obj) == 0) {
            return;
        }
    }
    AvatarMovement__ProcessHitEvent(self, other, a, b, c, d, e, x, y);
}
