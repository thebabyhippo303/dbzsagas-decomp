/* Music__QueueBattleImpl @ 0x80135018 (size: 0xD4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32; typedef unsigned int u32;
typedef struct Bag { s32 count; s32 *order; s32 pos; } Bag;
typedef struct Pl { s32 *tracks; s32 trackCount; char pad[0x18 - 8]; Bag *bag; } Pl;
typedef struct Music { char pad[0x20]; Pl pl; } Music;
void *Mem__New(u32);
void Rand__BuildRandomIndexOrder(Bag *);
void Music__QueueTrack(void *, s32);
void Music__QueueBattleImpl(Music *self) {
    Pl *pl = &self->pl;
    s32 n = pl->trackCount;
    s32 track;
    Bag *bag;
    if (n > 0) {
        if (pl->bag == 0 || pl->bag->count != n) {
            Bag *nb = Mem__New(12);
            nb->count = pl->trackCount;
            nb->pos = -1;
            nb->order = 0;
            Rand__BuildRandomIndexOrder(nb);
            pl->bag = nb;
        }
        bag = pl->bag;
        bag->pos = bag->pos + 1;
        if (bag->pos >= bag->count) {
            bag->pos = -1;
            Rand__BuildRandomIndexOrder(bag);
        }
        track = *(s32 *)((char *)pl->tracks + (bag->order[bag->pos] << 2));
    } else {
        track = 0;
    }
    Music__QueueTrack(self, track);
}
