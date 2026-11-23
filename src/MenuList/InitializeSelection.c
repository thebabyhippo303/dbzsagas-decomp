/* MenuList__InitializeSelection @ 0x800142D4 (size: 0x24, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef struct {
    char pad[0x1A0];
    s32 initial;
    volatile s32 selected;
    volatile s32 secondary;
    char pad2[8];
    volatile s32 initialized;
} MenuList;
void MenuList__InitializeSelection(MenuList *self, s32 initial, s32 secondary) {
    s32 one = 1;
    if (self->initialized == 0) {
        self->initial = initial;
        self->initialized = one;
        self->secondary = secondary;
        self->selected = secondary;
    }
}
