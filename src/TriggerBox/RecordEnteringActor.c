/* TriggerBox__RecordEnteringActor @ 0x802C7EC4 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: TriggerBox__RecordEnteringActor @ 0x802C7EC4 (0x50). ProDG -O2. */
extern int lbl_803DCF28 __attribute__((section(".sdata")));
extern char lbl_803B1DDC[] __attribute__((section(".data")));
extern void fn_80251650(void *obj, int flag, int zero, void *actor, void *self);

void TriggerBox__RecordEnteringActor(void *self, void *actor) {
    if (*(void **)((char *)self + 884) == 0) {
        int flag = lbl_803DCF28;

        *(void **)((char *)self + 884) = actor;
        if (flag != 0)
            fn_80251650(lbl_803B1DDC, flag, 0, actor, self);
    }
}
