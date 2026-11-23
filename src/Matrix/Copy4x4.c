/* Matrix__Copy4x4 @ 0x80158644 (size: 0x88, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32;
typedef struct { f32 m[16]; } Mat4;

Mat4 *Matrix__Copy4x4(Mat4 *dst, Mat4 *src) {
    Mat4 *d = dst;
    d->m[0] = src->m[0];
    d->m[1] = src->m[1];
    d->m[2] = src->m[2];
    d->m[3] = src->m[3];
    d->m[4] = src->m[4];
    d->m[5] = src->m[5];
    d->m[6] = src->m[6];
    d->m[7] = src->m[7];
    d->m[8] = src->m[8];
    d->m[9] = src->m[9];
    d->m[10] = src->m[10];
    d->m[11] = src->m[11];
    d->m[12] = src->m[12];
    d->m[13] = src->m[13];
    d->m[14] = src->m[14];
    d->m[15] = src->m[15];
    return dst;
}
