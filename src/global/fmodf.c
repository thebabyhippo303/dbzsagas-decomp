/* fmodf @ 0x8015EF3C (size: 0x1C8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int int32_t;
typedef unsigned int uint32_t;

typedef union {
    float f;
    int32_t i;
} FloatBits;

static const float Zero[] = {0.0f, -0.0f};

float fmodf(float x, float y) {
    int32_t n, hx, hy, hz, ix, iy, sx, i, ax, ay;
    FloatBits u;

    u.f = x;
    hx = u.i;
    u.f = y;
    hy = u.i;
    sx = hx & 0x80000000;
    ax = hx & 0x7fffffff;
    ay = hy & 0x7fffffff;

    if (ay == 0 || ax > 0x7f7fffff || ay > 0x7f800000) {
        return (x * y) / (x * y);
    }
    if (ax <= ay) {
        if (ax < ay) {
            return x;
        }
        return Zero[(uint32_t)sx >> 31];
    }

    if (ax > 0x007fffff) {
        ix = (ax >> 23) - 127;
    } else {
        for (ix = -126, i = (ax << 8); i > 0; i <<= 1) {
            ix -= 1;
        }
    }
    if (ay > 0x007fffff) {
        iy = (ay >> 23) - 127;
    } else {
        for (iy = -126, i = (ay << 8); i > 0; i <<= 1) {
            iy -= 1;
        }
    }

    if (ix >= -126) {
        hx = 0x00800000 | (0x007fffff & ax);
    } else {
        n = -126 - ix;
        hx = ax << n;
    }
    if (iy >= -126) {
        hy = 0x00800000 | (0x007fffff & ay);
    } else {
        n = -126 - iy;
        hy = ay << n;
    }

    n = ix - iy;
    while (n--) {
        hz = hx - hy;
        if (hz < 0) {
            hx = hx + hx;
        } else {
            if (hz == 0) {
                return Zero[(uint32_t)sx >> 31];
            }
            hx = hz + hz;
        }
    }
    hz = hx - hy;
    if (hz >= 0) {
        hx = hz;
    }

    if (hx == 0) {
        return Zero[(uint32_t)sx >> 31];
    }
    while (hx < 0x00800000) {
        hx += hx;
        iy -= 1;
    }
    if (iy >= -126) {
        hx = ((hx - 0x00800000) | ((iy + 127) << 23));
        u.i = hx | sx;
        x = u.f;
    } else {
        n = -126 - iy;
        hx >>= n;
        u.i = hx | sx;
        x = u.f;
    }
    return x;
}
