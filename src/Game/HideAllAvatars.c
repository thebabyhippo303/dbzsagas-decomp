/* Game__HideAllAvatars @ 0x800456B0 (size: 0x94, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

extern s32 lbl_803945E4[2] __attribute__((section(".data")));
extern void *lbl_803DCCB8 __attribute__((section(".sdata")));

void Game__HideAllAvatars(void) {
    void *head;
    void *cur;
    void *actor;
    void *vtbl;
    void **link;

    head = lbl_803DCCB8;
    cur = M2C_FIELD(head, void **, 0x14);
    link = (void **)((char *)head + 0x14);
    while (cur != NULL) {
        actor = M2C_FIELD(cur, void **, 0);
        if ((M2C_FIELD(actor, s32 *, 0) & lbl_803945E4[1]) == lbl_803945E4[0]) {
            vtbl = M2C_FIELD(actor, void **, 0x34);
            M2C_FIELD(vtbl, void (**)(void *, s32), 0x64)((char *)actor + M2C_FIELD(vtbl, s16 *, 0x60), 1);
        }
        if (cur != NULL) {
            cur = M2C_FIELD(cur, void **, 0x14);
        } else {
            cur = *link;
        }
    }
}
