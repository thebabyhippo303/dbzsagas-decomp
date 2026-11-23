/* SaveGame__MarkActorsForDeath @ 0x8014FD18 (size: 0x8C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef int s32; typedef float f32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
void Actor__MarkForDeath(void *, float);
void SaveGame__FormatActorDebugMessage(void *, const char *, char *);
extern s8 lbl_8032C220 __attribute__((section(".data")));
extern f32 lbl_8032C240 __attribute__((section(".data")));
extern void *lbl_803DCCB8 __attribute__((section(".sdata")));
void SaveGame__MarkActorsForDeath(void *self) {
    void *cur;
    void *actor;
    void *head;

    cur = M2C_FIELD(lbl_803DCCB8, void **, 0x14);
    while (cur != NULL) {
        actor = M2C_FIELD(cur, void **, 0);
        if (!(M2C_FIELD(actor, s32 *, 0x10C) & 0x70000000)) {
            Actor__MarkForDeath(actor, lbl_8032C240);
            SaveGame__FormatActorDebugMessage(self, &lbl_8032C220, actor);
        }
        head = lbl_803DCCB8;
        if (cur != NULL) {
            cur = M2C_FIELD(cur, void **, 0x14);
        } else {
            cur = M2C_FIELD(head, void **, 0x14);
        }
    }
}
