/* Minimap__TickControlVisibility @ 0x80117A78 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Minimap__TickControlVisibility @ 0x80117A78 (0x50). ProDG -O2. */
extern int lbl_803DC67C;
extern int lbl_803DC680;
extern void Minimap__UpdateControlVisibility(void);

void Minimap__TickControlVisibility(void) {
    int temp;

    do {
        temp = lbl_803DC67C + 1;
        lbl_803DC67C = temp;
        if (temp == 8) {
            lbl_803DC67C = 0;
        }
    } while ((lbl_803DC67C & lbl_803DC680) != lbl_803DC67C);
    Minimap__UpdateControlVisibility();
}
