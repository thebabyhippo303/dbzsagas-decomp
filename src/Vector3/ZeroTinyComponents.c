/* Vector3__ZeroTinyComponents @ 0x800C7A24 (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Vector3__ZeroTinyComponents @ 0x800C7A24 (0x6C). ProDG -O2. */
typedef float f32;

extern f32 fabsf(f32 x);
extern f32 lbl_80321A0C __attribute__((section(".data")));
extern f32 lbl_80321A10 __attribute__((section(".data")));

void Vector3__ZeroTinyComponents(f32 *arg0) {
    f32 tiny = lbl_80321A0C;

    if (!(fabsf(arg0[0]) >= tiny)) {
        arg0[0] = lbl_80321A10;
    }
    if (!(fabsf(arg0[1]) >= tiny)) {
        arg0[1] = lbl_80321A10;
    }
    if (!(fabsf(arg0[2]) >= tiny)) {
        arg0[2] = lbl_80321A10;
    }
}
