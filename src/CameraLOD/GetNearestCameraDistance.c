/* CameraLOD__GetNearestCameraDistance @ 0x80254064 (size: 0xFC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef float f32;
extern f32 lbl_80347F24 __attribute__((section(".data")));
f32 CameraLOD__GetNearestCameraDistance(void *arg0, f32 *arg1) {
    int n = *(int *)((char *)arg0 + 0x3C);
    f32 best = lbl_80347F24;
    if (n > 0) {
        void **it = (void **)((char *)arg0 + 0x40);
        f32 d[3];
        f32 q[3];
        f32 *pd = d;
        f32 *pq = q;
        void *cur;
        f32 ax, ay, az;
        f32 *m;
        f32 dx, dy, dz;
        f32 sq, t1, t2, s;
        int i;
        for (i = n; i != 0; --i) {
            cur = *it;
            it++;
            if (cur != 0) {
                ax = arg1[0];
                ay = arg1[1];
                az = arg1[2];
                m = (f32 *)cur;
                dx = (az * m[8] + (ax * m[0] + ay * m[4])) + m[12];
                dy = (az * m[9] + (ax * m[1] + ay * m[5])) + m[13];
                dz = (az * m[10] + (ax * m[2] + ay * m[6])) + m[14];
                d[0] = dx;
                d[1] = dy;
                d[2] = dz;
                sq = dx * dx;
                t1 = pd[1];
                t2 = pd[2];
                q[0] = sq;
                q[1] = t1 * t1;
                q[2] = t2 * t2;
                s = sq + pq[1] + pq[2];
                if (!(s >= best)) {
                    best = s;
                }
            }
        }
    }
    return best;
}
