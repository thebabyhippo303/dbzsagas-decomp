/* CActor__TransformModelPointToWorld @ 0x801DCF2C (size: 0x88, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32;
#define FIELD(p, t, o) (*(t)((char *)(p) + (o)))
f32 *CActor__TransformModelPointToWorld(f32 *arg0, void *arg1, f32 *arg2) {
    register f32 *output = arg0;
    f32 *matrix = FIELD(arg1, f32 **, 0x84);
    f32 *m = matrix + 4;
    f32 x = arg2[0];
    f32 y = arg2[1];
    f32 z = arg2[2];
    f32 out0 = (z * m[8] + (x * matrix[4] + y * m[4])) + m[12];
    f32 out4 = (z * m[9] + (x * m[1] + y * m[5])) + m[13];
    f32 out8 = (z * m[10] + (x * m[2] + y * m[6])) + m[14];
    output[2] = out8;
    output[0] = out0;
    output[1] = out4;
    return arg0;
}
