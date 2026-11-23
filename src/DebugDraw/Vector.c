/* DebugDraw__Vector @ 0x80186D88 (size: 0x8C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32;
extern void DebugDraw__Line(void *, f32 *, void *);
extern void DebugDraw__Point(f32 *, void *, f32);
extern f32 lbl_8033DF88 __attribute__((section(".data")));
void DebugDraw__Vector(f32 *arg0, f32 *arg1, void *arg2, f32 scale) {
    f32 sp[7];
    f32 x = arg1[0] * scale;
    f32 y = arg1[1] * scale;
    f32 z = arg1[2] * scale;
    sp[0] = arg0[0] + x;
    sp[1] = arg0[1] + y;
    sp[2] = arg0[2] + z;
    sp[4] = x;
    sp[5] = y;
    sp[6] = z;
    DebugDraw__Line(arg0, sp, arg2);
    DebugDraw__Point(sp, arg2, lbl_8033DF88);
}
