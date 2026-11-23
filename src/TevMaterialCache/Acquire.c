/* TevMaterialCache__Acquire @ 0x8024C544 (size: 0x3B8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

u32 TevMaterialCache__Alloc(u32);
void *TevMaterial__Compile(void *, void *, s32, s32);
void MemHeap__TagAllocation(void);
void Mem__Delete(void *);

void *TevMaterialCache__Acquire(void *cache, void *args, s32 a, s32 b) {
    void *m;
    void *mat;
    void *node;
    void *p;
    void *q;
    void *pp;
    void *qq;
    void *gp;
    void *gq;
    void *head0;
    s32 wq;
    s32 wp;
    s32 count;
    s32 idx;
    s32 mm;
    u8 t;
    u8 t1;
    u8 t2;
    s32 tflag;
    s32 z;

    m = (void *) TevMaterialCache__Alloc(2840);
    z = 0;
    if (M2C_FIELD(cache, s32 *, 56) != 0) {
        z = b;
        m = TevMaterial__Compile(m, args, a, z);
    }
    mat = m;
    MemHeap__TagAllocation();
    node = M2C_FIELD(cache, void **, 0);
    if (node == 0) {
        goto insert;
    }
loop:
    mm = M2C_FIELD(mat, s32 *, 1032) & 0xFFFFFF00;
    if (mm == (M2C_FIELD(node, s32 *, 1032) & 0xFFFFFF00)) {
        goto body;
    }
reject:
    t = 0;
    goto check;
body:
    count = M2C_FIELD(node, u8 *, 1032);
    idx = 0;
    if (idx >= count) {
        goto reject;
    }
    p = (char *) mat + 1036;
    q = (char *) node + 1036;
entry:
    wq = M2C_FIELD(q, s32 *, 0);
    qq = q;
    wp = M2C_FIELD(p, s32 *, 0);
    pp = p;
    tflag = 0;
    t1 = 0;
    if (wq != wp) {
        goto reject;
    }
    if (M2C_FIELD(q, s32 *, 4) != M2C_FIELD(p, s32 *, 4)) {
        goto reject;
    }
    t1 = (M2C_FIELD(q, s32 *, 8) == M2C_FIELD(p, s32 *, 8));
    if (t1 == 0) {
        goto reject;
    }
    wq = M2C_FIELD(qq, s32 *, 12);
    gq = (char *) qq + 12;
    wp = M2C_FIELD(pp, s32 *, 12);
    gp = (char *) pp + 12;
    t2 = 0;
    if (wq != wp) {
        goto reject;
    }
    if (M2C_FIELD(gq, s32 *, 4) != M2C_FIELD(gp, s32 *, 4)) {
        goto reject;
    }
    if (M2C_FIELD(gq, s32 *, 8) != M2C_FIELD(gp, s32 *, 8)) {
        goto reject;
    }
    if (M2C_FIELD(gq, u8 *, 12) != M2C_FIELD(gp, u8 *, 12)) {
        goto reject;
    }
    t2 = (M2C_FIELD(gq, s32 *, 16) == M2C_FIELD(gp, s32 *, 16));
    if (t2 == 0) {
        goto reject;
    }
    wq = M2C_FIELD(qq, s32 *, 32);
    gq = (char *) qq + 32;
    wp = M2C_FIELD(pp, s32 *, 32);
    gp = (char *) pp + 32;
    t2 = 0;
    if (wq != wp) {
        goto reject;
    }
    if (M2C_FIELD(gq, s32 *, 4) != M2C_FIELD(gp, s32 *, 4)) {
        goto reject;
    }
    if (M2C_FIELD(gq, s32 *, 8) != M2C_FIELD(gp, s32 *, 8)) {
        goto reject;
    }
    t2 = (M2C_FIELD(gq, s32 *, 12) == M2C_FIELD(gp, s32 *, 12));
    if (t2 == 0) {
        goto reject;
    }
    wq = M2C_FIELD(qq, s32 *, 48);
    gq = (char *) qq + 48;
    wp = M2C_FIELD(pp, s32 *, 48);
    gp = (char *) pp + 48;
    t2 = 0;
    if (wq != wp) {
        goto reject;
    }
    if (M2C_FIELD(gq, s32 *, 4) != M2C_FIELD(gp, s32 *, 4)) {
        goto reject;
    }
    if (M2C_FIELD(gq, s32 *, 8) != M2C_FIELD(gp, s32 *, 8)) {
        goto reject;
    }
    if (M2C_FIELD(gq, u8 *, 12) != M2C_FIELD(gp, u8 *, 12)) {
        goto reject;
    }
    t2 = (M2C_FIELD(gq, s32 *, 16) == M2C_FIELD(gp, s32 *, 16));
    if (t2 == 0) {
        goto reject;
    }
    wq = M2C_FIELD(qq, s32 *, 68);
    gq = (char *) qq + 68;
    wp = M2C_FIELD(pp, s32 *, 68);
    gp = (char *) pp + 68;
    t2 = 0;
    if (wq != wp) {
        goto reject;
    }
    if (M2C_FIELD(gq, s32 *, 4) != M2C_FIELD(gp, s32 *, 4)) {
        goto reject;
    }
    if (M2C_FIELD(gq, s32 *, 8) != M2C_FIELD(gp, s32 *, 8)) {
        goto reject;
    }
    t2 = (M2C_FIELD(gq, s32 *, 12) == M2C_FIELD(gp, s32 *, 12));
    if (t2 == 0) {
        goto reject;
    }
    wq = M2C_FIELD(qq, s32 *, 84);
    gq = (char *) qq + 84;
    wp = M2C_FIELD(pp, s32 *, 84);
    gp = (char *) pp + 84;
    t2 = 0;
    if (wq != wp) {
        goto reject;
    }
    if (M2C_FIELD(gq, s32 *, 4) != M2C_FIELD(gp, s32 *, 4)) {
        goto reject;
    }
    if (M2C_FIELD(gq, s32 *, 8) != M2C_FIELD(gp, s32 *, 8)) {
        goto reject;
    }
    if (M2C_FIELD(gq, u8 *, 12) != M2C_FIELD(gp, u8 *, 12)) {
        goto reject;
    }
    t2 = (M2C_FIELD(gq, s32 *, 16) == M2C_FIELD(gp, s32 *, 16));
    if (t2 == 0) {
        goto reject;
    }
    wq = M2C_FIELD(qq, s32 *, 104);
    gq = (char *) pp + 104;
    wp = M2C_FIELD(pp, s32 *, 104);
    qq = (char *) qq + 104;
    t1 = 0;
    if (wq != wp) {
        goto reject;
    }
    t1 = (M2C_FIELD(qq, s32 *, 4) == M2C_FIELD(gq, s32 *, 4));
    if (t1 == 0) {
        goto reject;
    }
    tflag = 1;
    if (tflag == 0) {
        goto reject;
    }
    idx = idx + 1;
    p = (char *) p + 112;
    q = (char *) q + 112;
    if (idx < count) {
        goto entry;
    }
    t = (M2C_FIELD(node, s32 *, 2832) == M2C_FIELD(mat, s32 *, 2832));
check:
    if (t != 0) {
        Mem__Delete(mat);
        return node;
    }
    node = M2C_FIELD(node, void **, 1024);
    if (node != 0) {
        goto loop;
    }
insert:
    head0 = M2C_FIELD(cache, void **, 0);
    if (head0 != 0) {
        goto nonempty;
    }
    M2C_FIELD(cache, void **, 4) = mat;
    M2C_FIELD(cache, void **, 0) = mat;
    M2C_FIELD(mat, void **, 1028) = NULL;
    M2C_FIELD(mat, void **, 1024) = NULL;
    goto end;
nonempty:
    M2C_FIELD(mat, void **, 1024) = head0;
    M2C_FIELD(mat, void **, 1028) = NULL;
    M2C_FIELD(head0, void **, 1028) = mat;
    M2C_FIELD(cache, void **, 0) = mat;
end:
    M2C_FIELD(cache, s32 *, 12) = M2C_FIELD(cache, s32 *, 12) + 1;
    return mat;
}
