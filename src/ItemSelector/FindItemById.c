/* ItemSelector__FindItemById @ 0x80266B04 (size: 0x78, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void *ItemSelector__FindItemById(void *arg0, s32 id) {
    void *t;
    void *p;

    t = M2C_FIELD(arg0, void **, 16);
    p = M2C_FIELD(t, void *(**)(void *), 100)((char *)arg0 + M2C_FIELD(t, s16 *, 96));
    while (p != NULL) {
        if (id == M2C_FIELD(p, s32 *, 20)) {
            return p;
        }
        t = M2C_FIELD(p, void **, 16);
        p = M2C_FIELD(t, void *(**)(void *), 84)((char *)p + M2C_FIELD(t, s16 *, 80));
    }
    return 0;
}
