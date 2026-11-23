/* Fade__IsFadeIn @ 0x80228D50 (size: 0x28, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Fade__IsFadingIn @ 0x80228D50 (0x28). ProDG -O2. */
typedef struct {
    char pad[4];
    int flags;
} FadeRecord;

extern FadeRecord *Fade__FindByIdOrDefault(int id);

int Fade__IsFadingIn(int id) {
    FadeRecord *record = Fade__FindByIdOrDefault(id);
    return (record->flags & 0x80) != 0;
}
