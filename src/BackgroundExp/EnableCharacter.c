/* BackgroundExp__EnableCharacter @ 0x8003D980 (size: 0xC8, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: BackgroundExp__EnableCharacter @ 0x8003D980 (0xC8). ProDG -O2. */
extern void *Script__PopInt(void *script, void *context);
extern void Actor__ToNonProtagonistCastImpl(void *actor);
extern void AI__ResetToState13(void *ai);
extern int AvatarInventory__AddItem(int inventory, int item, int count, int flag);
extern void Avatar__SetAnimScriptVarIntImpl(void *avatar, char *name, int value, int flag);
extern int Avatar__StartAnimationImpl(void *avatar, unsigned short anim, int a, int b, int c, int d);
extern char lbl_80311B18[] __attribute__((section(".data")));
extern int lbl_803DC460 __attribute__((section(".sdata")));

void BackgroundExp__EnableCharacter(void *arg0, void *arg1) {
    void *actor;
    void *avatar;
    void *ai;

    actor = Script__PopInt(arg0, arg1);
    avatar = Script__PopInt(arg0, arg1);
    if (*(int *)((char *)avatar + 0x2D4) != 0) {
        Actor__ToNonProtagonistCastImpl(actor);
        ai = *(void **)((char *)avatar + 0xB8C);
        lbl_803DC460 = 1;
        AI__ResetToState13(ai);
    } else {
        AvatarInventory__AddItem(*(int *)((char *)avatar + 0x159C), 0x54, 0, 1);
        Avatar__SetAnimScriptVarIntImpl(avatar, lbl_80311B18, 1, 1);
        Avatar__StartAnimationImpl(avatar, 0x300, 1, 0, 1, 1);
    }
    if (*(int *)((char *)actor + 0x598) == 0) {
        *(int *)((char *)actor + 0x548) = 5;
    }
}
