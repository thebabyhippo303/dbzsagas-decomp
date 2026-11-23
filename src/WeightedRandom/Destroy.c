/* WeightedRandom__Destroy @ 0x8007335C (size: 0x90, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef struct Entry { char pad[4]; void *data; } Entry;
typedef struct WeightedRandom { char pad0[4]; void *data; char pad1[4]; Entry *items[8]; } WeightedRandom;

void Mem__DeleteArray(void *);
void Mem__Delete(void *);

void WeightedRandom__Destroy(WeightedRandom *self, s32 flags) {
    s32 i;
    Entry *e;
    if (self->data != 0) {
        Mem__DeleteArray(self->data);
    }
    for (i = 0; i < 8; i++) {
        e = self->items[i];
        if (e != 0) {
            if (e->data != 0) {
                Mem__DeleteArray(e->data);
            }
            Mem__Delete(e);
            self->items[i] = 0;
        }
    }
    if (flags & 1) {
        Mem__Delete(self);
    }
}
