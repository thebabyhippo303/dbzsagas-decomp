/* TriggerBox__TryTriggerActor @ 0x800FDD5C (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: TriggerBox__TryTriggerActor @ 0x800FDD5C (0x84). ProDG -O2. */
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))

extern int lbl_80394584[] __attribute__((section(".data")));
extern int fn_8025C17C(void *a, void *b, void *c);
extern void TriggerBox__ProcessActorOverlap(void *self, void *actor, void *bounds);

void TriggerBox__TryTriggerActor(void *self, void *actor, void *arg2) {
    float a[4];
    float b[4];

    if (M2C_FIELD(self, int *, 1340) != 0) {
        if ((*(int *)actor & lbl_80394584[1]) == lbl_80394584[0]) {
            if (fn_8025C17C(arg2, a, b) != 0) {
                TriggerBox__ProcessActorOverlap(self, actor, b);
            }
        }
    }
}
