/* SoundDriver__GetNearestLevelScopeDistSq @ 0x80193A84 (size: 0x110, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

/* WIP 35.3% (cand b4b93cc1, ints-right + mtctr): SoundDriver @ 0x80193A84. Model: d[3]@sp8+q[3]@sp24 with pd/pq pointer reloads (LeafSystem idiom); rows are ptr-array (first at arg0+16, rest it=arg0+20+=4); delta=arg1[0..2]-row[1..3]; sq+sum; best in f1; do{}while(--n!=0) gives mtctr (counter still needs CTR/bdnz form). Walls: float file uniformly shifted (ours az:f10 vs f9, missing f8 ax-save copy + az f9->f11 copy in loop prelude); loop-end bdnz not yet (ours cmpwi). Next: find lever for f8-copy conflict (ax/az both wanting f11) + true CTR loop form. */
typedef int s32; typedef float f32;
f32 SoundDriver__GetNearestLevelScopeDistSq(void *arg0, f32 *arg1) {
    f32 d[3];
    f32 q[3];
    f32 *pd = d;
    f32 *pq = q;
    void *row;
    void *crow;
    s32 n;
    f32 az, ay, ax, cx, cy, cz, dx, dy, dz, sqx, t1, t2, best, s;
    row = *(void **)((char *)arg0 + 16);
    az = arg1[2];
    crow = (char *)row + 4;
    ay = arg1[1];
    cx = ((f32 *)row)[1];
    cz = ((f32 *)crow)[2];
    cy = ((f32 *)crow)[1];
    ax = arg1[0];
    dz = az - cz;
    n = *(s32 *)((char *)arg0 + 12);
    dy = ay - cy;
    dx = ax - cx;
    d[2] = dz;
    d[0] = dx;
    d[1] = dy;
    sqx = dx * dx;
    t1 = pd[1];
    t2 = pd[2];
    q[0] = sqx;
    q[1] = t1 * t1;
    q[2] = t2 * t2;
    best = sqx + pq[1] + pq[2];
    if (n > 1) {
        n = n - 1;
        arg0 = (char *)arg0 + 20;
        do {
            row = *(void **)arg0;
            arg0 = (char *)arg0 + 4;
            crow = (char *)row + 4;
            cx = ((f32 *)row)[1];
            cy = ((f32 *)crow)[1];
            cz = ((f32 *)crow)[2];
            dx = ax - cx;
            dy = ay - cy;
            d[0] = dx;
            dz = az - cz;
            d[1] = dy;
            d[2] = dz;
            sqx = dx * dx;
            t1 = pd[1];
            t2 = pd[2];
            q[0] = sqx;
            q[1] = t1 * t1;
            q[2] = t2 * t2;
            s = sqx + pq[1] + pq[2];
            if (!(s >= best)) {
                best = s;
            }
        } while (--n != 0);
    }
    return best;
}
