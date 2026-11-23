/* Minimap__UpdateControlVisibility @ 0x8011856C (size: 0xF4, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Minimap__UpdateControlVisibility @ 0x8011856C (0xF4). ProDG -O2. */
typedef void (*MinimapSlotFn)(void *self);

extern int lbl_803DC67C;
extern char *lbl_803DC670;
extern char *lbl_803DC674;
extern char *lbl_803DC678;

void Minimap__UpdateControlVisibility(void) {
    if (lbl_803DC67C & 2) {
        char *self = lbl_803DC670;
        char *vtable = *(char **)(self + 412);
        int adjustment = *(short *)(vtable + 456);
        MinimapSlotFn show = *(MinimapSlotFn *)(vtable + 460);
        show(self + adjustment);
    } else {
        char *self = lbl_803DC670;
        char *vtable = *(char **)(self + 412);
        int adjustment = *(short *)(vtable + 472);
        MinimapSlotFn show = *(MinimapSlotFn *)(vtable + 476);
        show(self + adjustment);
    }
    if (lbl_803DC67C & 4) {
        char *self = lbl_803DC674;
        char *vtable = *(char **)(self + 412);
        int adjustment = *(short *)(vtable + 456);
        MinimapSlotFn show = *(MinimapSlotFn *)(vtable + 460);
        show(self + adjustment);
    } else {
        char *self = lbl_803DC674;
        char *vtable = *(char **)(self + 412);
        int adjustment = *(short *)(vtable + 472);
        MinimapSlotFn show = *(MinimapSlotFn *)(vtable + 476);
        show(self + adjustment);
    }
    if (lbl_803DC67C & 1) {
        char *self = lbl_803DC678;
        char *vtable = *(char **)(self + 412);
        int adjustment = *(short *)(vtable + 456);
        MinimapSlotFn show = *(MinimapSlotFn *)(vtable + 460);
        show(self + adjustment);
    } else {
        char *self = lbl_803DC678;
        char *vtable = *(char **)(self + 412);
        int adjustment = *(short *)(vtable + 472);
        MinimapSlotFn show = *(MinimapSlotFn *)(vtable + 476);
        show(self + adjustment);
    }
}
