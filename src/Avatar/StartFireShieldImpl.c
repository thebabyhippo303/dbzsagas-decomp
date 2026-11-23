/* Avatar__StartFireShieldImpl @ 0x80095638 (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
void fn_80095690(void *self, void *arg, void *effect_a, void *effect_b, void *effect_c);

void Avatar__StartFireShieldImpl(void *self, void *arg) {
    fn_80095690(
        self,
        arg,
        (char *)self + 0x2E4,
        (char *)self + 0x2E8,
        (char *)self + 0x368);
}
