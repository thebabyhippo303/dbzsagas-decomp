/* ItemSelector__SelectNext @ 0x802669D8 (size: 0xF4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void *ItemSelector__FindItemById(void *, s32);
void ItemSelector__SelectNext(void *arg0) {
    void *p;
    void *t;

    p = ItemSelector__FindItemById(arg0, M2C_FIELD(arg0, s32 *, 0x6B68));
    if (p == NULL) {
        return;
    }
    t = M2C_FIELD(p, void **, 16);
    p = M2C_FIELD(t, void *(**)(void *), 84)((char *)p + M2C_FIELD(t, s16 *, 80));
    goto lb8;
l3c:
    t = M2C_FIELD(p, void **, 16);
    if (M2C_FIELD(t, s32 (**)(void *), 92)((char *)p + M2C_FIELD(t, s16 *, 88)) == 0) {
        goto l7c;
    }
    t = M2C_FIELD(p, void **, 16);
    p = M2C_FIELD(t, void *(**)(void *), 84)((char *)p + M2C_FIELD(t, s16 *, 80));
    goto lb8;
l7c:
    t = M2C_FIELD(p, void **, 16);
    p = M2C_FIELD(t, void *(**)(void *), 92)((char *)p + M2C_FIELD(t, s16 *, 88));
    t = M2C_FIELD(p, void **, 16);
    if (M2C_FIELD(t, s32 (**)(void *), 84)((char *)p + M2C_FIELD(t, s16 *, 80)) != 0) {
        goto l7c;
    }
lb8:
    if (M2C_FIELD(p, s32 *, 0x3AC) == 0) {
        goto l3c;
    }
    t = M2C_FIELD(arg0, void **, 16);
    M2C_FIELD(t, void (**)(void *, s32), 332)((char *)arg0 + M2C_FIELD(t, s16 *, 328), M2C_FIELD(p, s32 *, 20));
}
