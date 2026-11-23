/* Avatar__SetToFace @ 0x80026114 (size: 0x134, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__SetToFace @ 0x80026114 (0x134). ProDG -O2. */
extern float lbl_8031142C __attribute__((section(".data")));
extern float lbl_80311430 __attribute__((section(".data")));
extern float lbl_80311434 __attribute__((section(".data")));
extern float lbl_80311438 __attribute__((section(".data")));
extern float lbl_803DE500;
extern float lbl_803DE504;
extern char *Script__PopInt(void *script, void *context);
extern float atan2f(float y, float x);

void Avatar__SetToFace(void *script, void *context) {
    char *src = Script__PopInt(script, context);
    char *dst = Script__PopInt(script, context);
    if (src != 0 && dst != 0) {
        float dz = *(float *)(dst + 0x40) - *(float *)(src + 0x40);
        float dx = *(float *)(dst + 0x38) - *(float *)(src + 0x38);
        float a;
        if (dz == lbl_8031142C) {
            if (dx == lbl_8031142C)
                a = lbl_8031142C;
            else if (!(dx <= lbl_8031142C))
                a = lbl_803DE500 * lbl_80311430;
            else
                a = -lbl_803DE500 * lbl_80311430;
        } else {
            a = atan2f(dx, dz);
        }
        if (a > lbl_80311434 || !(a >= lbl_80311438))
            a = lbl_8031142C;
        if (!(a >= -lbl_803DE500)) {
            do {
                a += lbl_803DE504;
            } while (a < -lbl_803DE500);
        }
        {
            float pi = lbl_803DE500;
            if (!(a <= pi)) {
                do {
                    a -= lbl_803DE504;
                } while (a > pi);
            }
        }
        *(float *)(src + 0x75C) = a;
    }
}
