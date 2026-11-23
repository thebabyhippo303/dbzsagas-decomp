/* UiSpriteResources__FormatCounterWithThousandsSeparators @ 0x8000CE2C (size: 0xC4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct UiSpriteResources {
    char pad[420];
    char text[32];
} UiSpriteResources;

extern int sprintf(char *dst, const char *fmt, ...);
extern int strlen(const char *s);
extern void String__ReverseInPlace(UiSpriteResources *self, char *text);
extern char lbl_8030D4C0[] __attribute__((section(".data")));

void UiSpriteResources__FormatCounterWithThousandsSeparators(UiSpriteResources *self, int value) {
    char buf[24];
    int digitIndex = 0;
    int outIndex;
    int pos;

    sprintf(buf, lbl_8030D4C0, value);
    outIndex = 0;
    pos = (int)strlen(buf) - 1;
    if (pos >= 0) {
        do {
            if (digitIndex != 0 && digitIndex == (digitIndex / 3) * 3) {
                self->text[outIndex] = ',';
                outIndex += 1;
            }
            self->text[outIndex] = buf[pos];
            digitIndex += 1;
            pos -= 1;
            outIndex += 1;
        } while (pos >= 0);
    }
    self->text[outIndex] = 0;
    String__ReverseInPlace(self, self->text);
}
