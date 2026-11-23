/* UI__SetColorRGBA @ 0x8026C9E4 (size: 0x14, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: UI__SetColorRGBA @ 0x8026C9E4 (0x14). ProDG -O2. */
typedef struct {
    char pad_000[0x60];
    volatile float alpha;
    volatile float red;
    volatile float green;
    volatile float blue;
} UI;

void UI__SetColorRGBA(UI *self, float red, float green, float blue, float alpha) {
    self->blue = blue;
    self->alpha = alpha;
    self->red = red;
    self->green = green;
}
