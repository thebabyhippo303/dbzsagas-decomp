/* TriggerBox__ProcessAABBOverlap @ 0x800FDA84 (size: 0xB0, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: TriggerBox__ProcessAABBOverlap @ 0x800FDA84 (0xB0). ProDG -O2. */
typedef float f32;
typedef short s16;

typedef struct TriggerBoxAABB {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
} TriggerBoxAABB;

typedef struct TriggerBoxShape {
    char pad[0x60];
    f32 minX;
    f32 unused64;
    f32 minY;
    f32 maxX;
    f32 unused70;
    f32 maxY;
} TriggerBoxShape;

extern void fn_801C2348(void *value, int mode);

void TriggerBox__ProcessAABBOverlap(char *self, TriggerBoxAABB *box) {
    TriggerBoxAABB bounds;
    TriggerBoxShape *shape;
    int hit;

    TriggerBoxAABB *b;

    shape = *(TriggerBoxShape **)(self + 0x84);
    b = &bounds;
    b->x = shape->minX;
    b->y = shape->minY;
    b->z = shape->maxX;
    b->w = shape->maxY;
    hit = 0;
    if (!(box->z < b->x) && !(box->x > b->z) && !(box->y > b->w)) {
        hit = box->w >= b->y;
    }
    if (hit != 0) {
        char *sub;
        char *vt;
        void *(*fn)(void *);

        vt = *(char **)(self + 0x198);
        sub = self + 0x198;
        fn = *(void *(**)(void *))(vt + 0x7C);
        fn_801C2348(fn(sub + *(s16 *)(vt + 0x78)), 4);
    }
}
