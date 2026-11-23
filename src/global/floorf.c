/* floorf @ 0x8015FF44 (size: 0xC8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef unsigned int u32;
typedef float f32;

extern f32 lbl_803DC880 __attribute__((section(".sdata")));
extern f32 lbl_803DC884 __attribute__((section(".sdata")));

f32 floorf(f32 x) {
    s32 i0;
    s32 j0;
    u32 i;
    {
        union { f32 val; s32 bits; } gf_u;
        gf_u.val = x;
        i0 = gf_u.bits;
    }
    j0 = ((i0 >> 23) & 0xff) - 0x7f;
    if (j0 < 23) {
        if (j0 < 0) {
            if (x + lbl_803DC880 > lbl_803DC884) {
                if (i0 >= 0) {
                    i0 = 0;
                } else if ((i0 & 0x7fffffff) != 0) {
                    i0 = 0xbf800000;
                }
            }
        } else {
            i = 0x007fffff >> j0;
            if ((i0 & i) == 0) {
                return x;
            }
            if (x + lbl_803DC880 > lbl_803DC884) {
                if (i0 < 0) {
                    i0 += 0x00800000 >> j0;
                }
                i0 &= ~i;
            }
        }
    } else {
        if (j0 == 0x80) {
            return x + x;
        }
        return x;
    }
    {
        union { f32 val; s32 bits; } sf_u;
        sf_u.bits = i0;
        x = sf_u.val;
    }
    return x;
}
