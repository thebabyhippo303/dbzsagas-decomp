/* MainMenu__PlayCharacterCarouselAnimationById @ 0x80010CAC (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct CarouselEntry { int id; int pad4; int pad8; char anim[20]; } CarouselEntry;
typedef struct CarouselList { CarouselEntry *items; int count; } CarouselList;
void Sound__Play2D(void *, int);

void MainMenu__PlayCharacterCarouselAnimationById(void *self, int id) {
    CarouselList *list = (CarouselList *)((char *)self + 0x22B4);
    int i;
    for (i = 0; i < list->count; i++) {
        CarouselEntry *e = &((CarouselList *)((char *)self + 0x22B4))->items[i];
        if (id == e->id) {
            Sound__Play2D(e->anim, 0);
        }
    }
}
