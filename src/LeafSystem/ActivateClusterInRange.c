/* LeafSystem__ActivateClusterInRange @ 0x80289278 (size: 0xD4, .text, ProDG 3.9.3 -O2) - MATCHED */
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0

void LeafSystem__ActivateCluster(void *, void *);

s32 LeafSystem__ActivateClusterInRange(void *arg0, void *arg1) {
    f32 d[3];
    f32 q[3];
    f32 *pd;
    f32 *pq;
    char *it;
    s32 i;
    void *cur;
    char *crow;
    f32 ax, cx, dx, sqx, ay, cz, cy, dy, dz, az, t1, t2, lim, s;

    i = 0;
    if (i < *(s32 *)((char *)arg0 + 0x234)) {
        pd = d;
        pq = q;
        it = (char *)arg0 + 20;
        do {
            cur = *(void **)it;
            it += 68;
            ax = ((f32 *)arg1)[0];
            cx = *(f32 *)((char *)cur + 56);
            crow = (char *)cur + 56;
            ay = ((f32 *)arg1)[1];
            dx = cx - ax;
            cy = *(f32 *)(crow + 4);
            cz = *(f32 *)(crow + 8);
            sqx = dx * dx;
            az = ((f32 *)arg1)[2];
            dy = cy - ay;
            d[0] = dx;
            dz = cz - az;
            d[1] = dy;
            d[2] = dz;
            t1 = pd[1];
            t2 = pd[2];
            lim = ((f32 *)arg1)[3];
            q[0] = sqx;
            q[1] = t1 * t1;
            q[2] = t2 * t2;
            s = sqx + pq[1] + pq[2];
            if (!(s >= lim)) {
                LeafSystem__ActivateCluster(arg0, arg1);
                return 1;
            }
            i += 1;
        } while (i < *(s32 *)((char *)arg0 + 0x234));
    }
    return 0;
}
