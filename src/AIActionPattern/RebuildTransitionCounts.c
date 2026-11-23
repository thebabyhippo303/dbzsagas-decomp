/* AIActionPattern__RebuildTransitionCounts @ 0x80072E04 (size: 0xBC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32; typedef unsigned short u16; typedef unsigned int u32;
void *memset(void *, int, unsigned long);
typedef struct Pat { u16 *counts; s32 pad[2]; s32 *seq; } Pat;
void AIActionPattern__RebuildTransitionCounts(Pat *self) {
    u16 local[225];
    s32 i;
    memset(self->counts, 0, 450);
    memset(local, 0, 450);
    for (i = 0; i < 39; i++) {
        self->counts[self->seq[i] * 15 + self->seq[i + 1]] += 1;
        local[self->seq[i + 1] + self->seq[i] * 15] += 1;
    }
}
