/* LeafSystem__CullClusterOutOfRange @ 0x8028934C (size: 0xD8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
typedef float f32;

void LeafSystem__DestroyCluster(void *, void *);
void LeafSystem__HideCluster(void *, void *);

void LeafSystem__CullClusterOutOfRange(void *arg0, void *arg1) {
    f32 d[3];
    f32 q[3];
    f32 *pd;
    f32 *pq;
    char *it;
    s32 i;
    s32 n;
    s32 t;
    void *cur;
    char *crow;
    f32 ax, ay, az, lim, cx, cz, cy, dx, dz, dy, sqx, t1, t2, s;

    n = *(s32 *)((char *)arg0 + 0x234);
    i = 0;
    if (i < n) {
        ax = ((f32 *)arg1)[0];
        pd = d;
        ay = ((f32 *)arg1)[1];
        pq = q;
        az = ((f32 *)arg1)[2];
        it = (char *)arg0 + 20;
        lim = ((f32 *)arg1)[3];
        do {
            cur = *(void **)it;
            it += 68;
            crow = (char *)cur + 56;
            cx = *(f32 *)((char *)cur + 56);
            cy = *(f32 *)(crow + 4);
            cz = *(f32 *)(crow + 8);
            dx = cx - ax;
            dz = cz - az;
            d[0] = dx;
            dy = cy - ay;
            d[2] = dz;
            d[1] = dy;
            sqx = dx * dx;
            t1 = pd[1];
            t2 = pd[2];
            q[0] = sqx;
            q[1] = t1 * t1;
            q[2] = t2 * t2;
            s = sqx + pq[1] + pq[2];
            if (s < lim)
                return;
            i += 1;
        } while (i < n);
    }
    t = ((s32 *)arg1)[5];
    if (t != 0) {
        LeafSystem__DestroyCluster(arg0, arg1);
        return;
    }
    ((s32 *)arg1)[6] = t;
    LeafSystem__HideCluster(arg0, arg1);
}
