/* Floater__MovingToPos @ 0x802B0288 (size: 0x28, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched floater queries. ProDG -O2.
   Floater__MovingToPos     @ 0x802B0288 (0x28)  int @ inner+0x4D4
   Floater__ClearMoveToPos  @ 0x802B02B0 (0x28)
   Floater__IsFollowingPath @ 0x802B0514 (0x28)  int @ inner+0x4CC
*/
typedef struct {
    char pad[0x4cc];
    int following;
    char gap[4];
    int moving;
} FloatInner;

typedef struct {
    char pad[0xc8];
    FloatInner *inner;
} FloatObj;

void fn_8023A224(void *a, void *b, int c);
void fn_802B384C(void *p, int c);

void Floater__MovingToPos(FloatObj *self, void *ctx) {
    fn_8023A224(self, ctx, self->inner->moving);
}

void Floater__ClearMoveToPos(FloatObj *self) {
    fn_802B384C(self->inner, 0);
}

void Floater__IsFollowingPath(FloatObj *self, void *ctx) {
    fn_8023A224(self, ctx, self->inner->following);
}
