/* Boss__Activate @ 0x8003AEB8 (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Boss__Activate @ 0x8003AEB8 (0x2C). ProDG -O2. */
typedef struct {
    char pad[0x4ec];
    int flag;
} BossInner;

typedef struct {
    char pad[0xb8c];
    BossInner *inner;
} BossObj;

void *fn_8023A310(void *a, void *b);

void Boss__Activate(void *a, void *b) {
    BossObj *o = fn_8023A310(a, b);
    o->inner->flag = 1;
}
