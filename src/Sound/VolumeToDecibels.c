/* Sound__VolumeToDecibels @ 0x8019F9A0 (size: 0xC4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32;
f32 powf(f32, f32);
f32 fn_802CDD9C(f32);
extern f32 lbl_8033FCB4 __attribute__((section(".data")));
extern f32 lbl_8033FCB8 __attribute__((section(".data")));
extern f32 lbl_8033FCBC __attribute__((section(".data")));
extern f32 lbl_8033FCC0 __attribute__((section(".data")));
extern f32 lbl_8033FCC4 __attribute__((section(".data")));

f32 Sound__VolumeToDecibels(f32 x) {
    f32 v;
    f32 d;
    f32 r;
    f32 lo = lbl_8033FCB4;
    f32 hi = lbl_8033FCB8;

    if (x < lo) {
        v = lo;
    } else {
        v = x;
        if (!(x <= hi)) {
            v = hi;
        }
    }
    lo = lbl_8033FCB4;
    if (!(v <= lo)) {
        d = fn_802CDD9C(powf(v, lbl_8033FCBC)) * lbl_8033FCC0;
        if (!(d >= lbl_8033FCC4)) {
            r = lbl_8033FCC4;
        } else {
            r = d;
            if (!(d <= lo)) {
                r = lo;
            }
        }
        return r;
    }
    return lbl_8033FCC4;
}
