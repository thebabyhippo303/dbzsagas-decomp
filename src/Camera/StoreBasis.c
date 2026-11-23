/* Camera__StoreBasis @ 0x802A7DEC (size: 0xC0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct Vec3 {
    float x;
    float y;
    float z;
} Vec3;

extern float lbl_80351230 __attribute__((section(".rodata")));
extern float lbl_80351234 __attribute__((section(".rodata")));
extern void fn_802A7D18(Vec3 *a, Vec3 *b, Vec3 *c, Vec3 *d, Vec3 *out);

void Camera__StoreBasis(Vec3 *a, Vec3 *b, Vec3 *c, Vec3 *d, float *m) {
    Vec3 tmp;
    float zero;
    float one;

    fn_802A7D18(a, b, c, d, &tmp);
    zero = lbl_80351230;
    one = lbl_80351234;
    m[0] = a->x;
    m[1] = b->x;
    m[2] = c->x;
    m[3] = zero;
    m[4] = a->y;
    m[5] = b->y;
    m[6] = c->y;
    m[7] = zero;
    m[8] = a->z;
    m[9] = b->z;
    m[10] = c->z;
    m[11] = zero;
    m[12] = tmp.x;
    m[13] = tmp.y;
    m[14] = tmp.z;
    m[15] = one;
}
