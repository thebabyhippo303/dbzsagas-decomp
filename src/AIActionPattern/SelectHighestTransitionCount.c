/* AIActionPattern__SelectHighestTransitionCount @ 0x800730B4 (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef short s16;
typedef struct CountOwner { char pad[0x9C]; s32 count; } CountOwner;
typedef struct State { s16 *counts; s32 selected; char pad[4]; CountOwner *owner; } State;
s32 AIActionPattern__SelectHighestTransitionCount(State *self) {
    s32 i = 0;
    s32 highest = 0;
    s32 best = 14;
    for (; i < 15; i++) {
        s32 value = self->counts[self->owner->count * 15 + i];
        if (value > highest && i != self->selected) {
            best = i;
            highest = value;
            self->selected = best;
        }
    }
    return best;
}
