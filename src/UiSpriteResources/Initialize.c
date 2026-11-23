/* UiSpriteResources__Initialize @ 0x8000E7A8 (size: 0xB0, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: UiSpriteResources__Initialize @ 0x8000E7A8 (0xB0). ProDG -O2. */
extern char lbl_8035FE44[] __attribute__((section(".data")));
extern char lbl_8035FE64[] __attribute__((section(".data")));
extern char lbl_8035FEA4[] __attribute__((section(".data")));
extern char lbl_8035FEC4[] __attribute__((section(".data")));
extern char lbl_8035FEEC[] __attribute__((section(".data")));
extern char lbl_8035FF14[] __attribute__((section(".data")));

void UiSpriteResources__LoadDatabases(void *);
void fn_8000B934(void *obj);
void InputSequence__ConfigurePattern(void *obj, char *pattern, int count);

void UiSpriteResources__Initialize(char *self) {
    char *hi;

    hi = self + 0x10000;
    UiSpriteResources__LoadDatabases(self);
    fn_8000B934(self + 0x8C);
    InputSequence__ConfigurePattern(hi + (-32408), lbl_8035FE64, 8);
    InputSequence__ConfigurePattern(hi + (-32368), lbl_8035FEA4, 8);
    InputSequence__ConfigurePattern(hi + (-32328), lbl_8035FE44, 8);
    InputSequence__ConfigurePattern(hi + (-32288), lbl_8035FEC4, 10);
    InputSequence__ConfigurePattern(hi + (-32248), lbl_8035FEEC, 10);
    InputSequence__ConfigurePattern(hi + (-32208), lbl_8035FF14, 15);
}
