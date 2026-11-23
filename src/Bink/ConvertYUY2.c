/* Bink__ConvertYUY2 @ 0x802F6C48 (size: 0xB8, .text, ProDG 3.9.3 -O2) - MATCHED */
extern char lbl_8038A4E0[];
extern void Bink__ConvertScaledPlane(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, void *a14);

void Bink__ConvertYUY2(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l) {
    if ((a & 3) == 2) {
        b += 1;
        a &= ~3;
        if ((b & 1) != 0) {
            if ((f & 1) != 0) {
                f += 1;
            }
            b += 1;
        } else {
            if ((f & 1) != 0) {
                f += 1;
            }
        }
        h -= 1;
        if ((h & 1) != 0) {
            h -= 1;
        }
    }
    Bink__ConvertScaledPlane(a, b, c, d, e, f, g, h, i, j, k, l, 0, lbl_8038A4E0);
}
