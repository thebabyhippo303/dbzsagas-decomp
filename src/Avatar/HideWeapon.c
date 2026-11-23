/* Avatar__HideWeapon @ 0x80026844 (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__HideWeapon @ 0x80026844 (0x2C). ProDG -O2. */
void *fn_8023A310(void *a, void *b);
void fn_8009E0DC(void *p, int flag);

void Avatar__HideWeapon(void *a, void *b) {
    fn_8009E0DC((char *)fn_8023A310(a, b) + 0x15A0, 1);
}
