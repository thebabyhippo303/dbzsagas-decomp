/* Pickup__GetHitResponseData @ 0x800F21F8 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Pickup__GetHitResponseData @ 0x800F21F8 (0x4C). ProDG -O2. */
typedef struct HitVec {
    float x;
    float y;
    float z;
} HitVec;

typedef struct PickupHit {
    int word;
    HitVec a;
    HitVec b;
    int enabled;
} PickupHit;

void Pickup__GetHitResponseData(PickupHit *self, int *word, HitVec *a, HitVec *b, int **enabled) {
    *word = self->word;
    *a = self->a;
    *b = self->b;
    *enabled = &self->enabled;
}
