/* MenuInput__IsLeftTriggered @ 0x8004D3F8 (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: MenuInput__IsLeftTriggered @ 0x8004D3F8 (0x84). ProDG -O2.
   Same gate as the other directions. Left uses the pad words at +8 and +12. */
extern int MenuInput__IsEnabled(int index);
extern void *fn_801D6674(void *state, int index);
extern void *lbl_803DCC74;

typedef struct MenuPad {
    char pad[8];
    int held;
    int pressed;
} MenuPad;

int MenuInput__IsLeftTriggered(int index) {
    MenuPad *pad;
    int triggered;

    if (MenuInput__IsEnabled(index) == 0)
        goto fail;
    if (index < 0)
        index = 0;
    pad = fn_801D6674(lbl_803DCC74, index);
    if (pad == 0)
        goto fail;
    triggered = 0;
    if (pad->held == 0)
        triggered = pad->pressed == 1;
    if (triggered != 0)
        return 1;
fail:
    return 0;
}
