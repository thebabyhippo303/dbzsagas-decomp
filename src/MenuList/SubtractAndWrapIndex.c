/* MenuList__SubtractAndWrapIndex @ 0x800144E8 (size: 0x18, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
s32 MenuList__SubtractAndWrapIndex(char *self, s32 a, s32 b) {
    s32 d = a - b;

    if (d < 0) {
        d += *(s32 *)(self + 0x544);
    }
    return d;
}
