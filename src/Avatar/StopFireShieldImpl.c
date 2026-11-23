/* Avatar__StopFireShieldImpl @ 0x800954D0 (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__StopFireShieldImpl @ 0x800954D0 (0x2C). ProDG -O2. */
void fn_80095528(void *self, void *arg, void *effect_a, void *effect_b, void *effect_c);

void Avatar__StopFireShieldImpl(void *self, void *arg) {
    fn_80095528(
        self,
        arg,
        (char *)self + 0x2E4,
        (char *)self + 0x2E8,
        (char *)self + 0x368);
}
