/* LeafSystem__IsClusterInRange @ 0x80288618 (size: 0x8C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0

s32 LeafSystem__IsClusterInRange(void *arg0, void *cluster, f32 *pos) {
    f32 d[3];
    f32 q[3];
    f32 *pd;
    f32 *pq;
    void *cur;
    char *crow;
    f32 ax, ay, az, cx, cy, cz, dx, dy, dz, sqx, t1, t2, lim, s;

    pd = d;
    pq = q;
    cur = *(void **)cluster;
    ax = pos[0];
    cx = *(f32 *)((char *)cur + 56);
    crow = (char *)cur + 56;
    ay = pos[1];
    dx = cx - ax;
    cy = *(f32 *)(crow + 4);
    cz = *(f32 *)(crow + 8);
    sqx = dx * dx;
    az = pos[2];
    dy = cy - ay;
    d[0] = dx;
    dz = cz - az;
    d[1] = dy;
    d[2] = dz;
    t1 = pd[1];
    t2 = pd[2];
    lim = *(f32 *)((char *)cluster + 76);
    q[0] = sqx;
    q[1] = t1 * t1;
    q[2] = t2 * t2;
    s = sqx + pq[1] + pq[2];
    return s < lim;
}
