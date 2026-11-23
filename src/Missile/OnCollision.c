/* Missile__OnCollision @ 0x800D4F64 (size: 0x1B0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct Vec3 {
    float x;
    float y;
    float z;
} Vec3;

extern int fn_80254BB8(void *db, const char *name, int def);
extern int fn_8025C17C(void *a, void *b, void *c);
extern void fn_8025DB0C(void *a, void *b, void *c, unsigned char *d, unsigned char *e);
extern void Missile__ResolveCollision(void *self, void *other, void *va, void *vb, void *hit);

extern char lbl_8031F860[];
extern char lbl_80320C40[];
extern unsigned int lbl_80394584[];
extern Vec3 lbl_803ACEF0;
extern void *lbl_803DCCB4;
extern void *lbl_803DCCC0;

void Missile__OnCollision(void *self, void *actor, void *hit) {
    struct {
        Vec3 pos;
        char gap0[4];
        Vec3 normal;
        char gap1[4];
        unsigned char tagA;
        unsigned char tagB;
        char gap2[6];
    } L;
    Vec3 neg;
    int id;

    if ((*(int *)((char *)*(void **)((char *)self + 0x364) + 0x58) & 0x400) != 0) {
        return;
    }
    if (fn_8025C17C(hit, &L.pos, &L.normal) == 0) {
        L.pos = *(Vec3 *)((char *)self + 0x38);
        L.normal = lbl_803ACEF0;
    }
    fn_8025DB0C(hit, &L.pos, &L.normal, &L.tagA, &L.tagB);
    id = fn_80254BB8(lbl_803DCCC0, lbl_8031F860, -1) & 0xFF;
    if (L.tagB == id) {
        return;
    }
    if (L.tagA == id) {
        return;
    }
    id = fn_80254BB8(lbl_803DCCC0, lbl_80320C40, -1) & 0xFF;
    if (L.tagB == id) {
        return;
    }
    if (L.tagA == id) {
        return;
    }
    if (self == *(void **)((char *)hit + 0x24)) {
        neg.x = -L.normal.x;
        neg.y = -L.normal.y;
        neg.z = -L.normal.z;
        *(int *)&L.normal.x = *(int *)&neg.x;
        *(int *)&L.normal.y = *(int *)&neg.y;
        *(int *)&L.normal.z = *(int *)&neg.z;
    }
    if ((*(unsigned int *)actor & lbl_80394584[1]) == lbl_80394584[0]) {
        Missile__ResolveCollision(self, *(void **)((char *)actor + 0x9C), &L.pos, &L.normal, hit);
    } else {
        Missile__ResolveCollision(self, lbl_803DCCB4, &L.pos, &L.normal, hit);
    }
}
