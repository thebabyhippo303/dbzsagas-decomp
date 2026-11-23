/* Avatar__StopPrimaryAnimationIfId @ 0x80092E14 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
void *AnimationTable__GetById(void *, int);
void fn_802005AC(void *, s32);

void Avatar__StopPrimaryAnimationIfId(void *self, s32 id) {
    void *controller;
    void *animationState;
    void *table;
    s32 current;
    void *requested;
    if (id < 0) goto stop;
    controller = M2C_FIELD(self, void **, 0x84);
    table = M2C_FIELD(controller, void **, 0x168);
    animationState = (char *)controller + 0x108;
    requested = AnimationTable__GetById(table, id);
    current = M2C_FIELD(animationState, s32 *, 0xC);
    if (current != (s32)requested) return;
stop:
    fn_802005AC(M2C_FIELD(self, void **, 0x84), 0);
}
