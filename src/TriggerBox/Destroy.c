/* TriggerBox__Destroy @ 0x800FC1C4 (size: 0x78, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched. ProDG -O2. */
typedef struct {
    char pad_0[0x34];
    void *vtable_34;
    char pad_38[0x160];
    void *vtable_198;
    char pad_19C[0x18];
    void *vtable_1B4;
    char pad_1B8[0x310];
    void *vtable_4C8;
    char pad_4CC[0x90];
    void *allocation_55C;
} TriggerBox;

extern char lbl_80332770[];
extern char lbl_80332750[];
extern char lbl_80332680[];
extern char lbl_80332818[];
extern void memFree(void *allocation);
extern void Actor__Destroy(void *actor, int flags);

void TriggerBox__Destroy(TriggerBox *box, int flags) {
    void *allocation = box->allocation_55C;
    box->vtable_198 = lbl_80332770;
    box->vtable_1B4 = lbl_80332750;
    box->vtable_4C8 = lbl_80332680;
    box->vtable_34 = lbl_80332818;
    if (allocation != 0)
        memFree(allocation);
    Actor__Destroy(box, flags);
}
