/* TriggerBox__Construct @ 0x800FC13C (size: 0x88, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: TriggerBox__Construct @ 0x800FC13C (0x88). ProDG -O2. */
typedef struct {
    char pad_0[0x34];
    void *vtable_34;
    char pad_38[0x160];
    void *vtable_198;
    char pad_19C[0x18];
    void *vtable_1B4;
    char pad_1B8[0x310];
    void *vtable_4C8;
    char pad_4CC[0x44];
    int field_510;
    char pad_514[0x28];
    int field_53C;
    char pad_540[0x14];
    int field_554;
    int field_558;
    void *allocation_55C;
    int field_560;
} TriggerBox;

extern char lbl_80394674[] __attribute__((section(".data")));
extern char lbl_80332770[] __attribute__((section(".data")));
extern char lbl_80332750[] __attribute__((section(".data")));
extern char lbl_80332680[] __attribute__((section(".data")));
extern char lbl_80332818[] __attribute__((section(".data")));
extern void Actor__Construct(void *actor, char *vtable);

TriggerBox *TriggerBox__Construct(TriggerBox *box) {
    Actor__Construct(box, lbl_80394674);
    box->vtable_198 = lbl_80332770;
    box->vtable_1B4 = lbl_80332750;
    box->vtable_4C8 = lbl_80332680;
    box->vtable_34 = lbl_80332818;
    box->field_53C = 1;
    box->field_560 = 0;
    box->field_510 = 0;
    box->field_558 = 0;
    box->field_554 = 0;
    box->allocation_55C = 0;
    return box;
}
