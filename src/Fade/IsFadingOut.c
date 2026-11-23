/* Fade__IsFadingOut @ 0x80228DB4 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Fade__IsFadingOut @ 0x80228DB4 (0x54). ProDG -O2. */
typedef struct FadeRec {
    char pad[4];
    int flags;
} FadeRec;

extern FadeRec *Fade__FindByIdOrDefault(int id);
extern int Fade__IsRecordActive(int id);

int Fade__IsFadingOut(int id) {
    FadeRec *rec = Fade__FindByIdOrDefault(id);
    int fading = 0;
    if ((rec->flags & 0x40) == 0 && Fade__IsRecordActive(id) != 0) {
        fading = 1;
    }
    return fading;
}
