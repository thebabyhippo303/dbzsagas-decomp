/* PlayerIndicator__HideImpl @ 0x8011EF1C (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched. ProDG -O2. */
typedef struct {
    char pad_0[0x60];
    short this_adjust;
    short pad_62;
    void (*set_hidden)(void *self, int hidden);
} PlayerIndicatorVTable;

typedef struct {
    char pad_0[0x34];
    PlayerIndicatorVTable *vtable;
} PlayerIndicator;

extern PlayerIndicator *lbl_803D8344;
extern PlayerIndicator *lbl_803D8348;
extern int lbl_803D834C;

void PlayerIndicator__HideImpl(void) {
    PlayerIndicator *first = lbl_803D8344;
    PlayerIndicator *second;

    lbl_803D834C = 0;
    if (first != 0)
        first->vtable->set_hidden((char *)first + first->vtable->this_adjust, 1);
    second = lbl_803D8348;
    if (second != 0)
        second->vtable->set_hidden((char *)second + second->vtable->this_adjust, 1);
}
