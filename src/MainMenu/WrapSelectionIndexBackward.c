/* MainMenu__WrapSelectionIndexBackward @ 0x80011D10 (size: 0x18, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: MainMenu__WrapSelectionIndexBackward @ 0x80011D10 (0x18). ProDG -O2. */
int MainMenu__WrapSelectionIndexBackward(void *self, int index, int amount) {
    int result;

    result = index - amount;
    if (result < 0) {
        result += *(int *)((char *)self + 0xDB0);
    }
    return result;
}
