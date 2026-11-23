/* TriggerBox__DeactivateImpl @ 0x800FD77C (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct {
    char pad_0[0x510];
    int field_510;
    char pad_514[0x30];
    int field_544;
    char pad_548[0x0C];
    int flags_554;
} TriggerBox;

extern float lbl_8032480C __attribute__((section(".data")));
extern void TriggerBox__DispatchEvents(TriggerBox *box, int event);
extern void Actor__MarkForDeath(TriggerBox *box, float delay);

void TriggerBox__DeactivateImpl(TriggerBox *box) {
    TriggerBox__DispatchEvents(box, 0);
    if ((box->flags_554 & 2) != 0 && box->field_544 == 0) {
        Actor__MarkForDeath(box, lbl_8032480C);
    }
    box->field_510 = 0;
}
