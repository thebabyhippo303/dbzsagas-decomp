/* BaseMenu__FocusNext @ 0x802635D8 (size: 0xA4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0

void BaseMenu__FocusNext(void *arg0) {
    void *vt0;
    void *t;
    void *vt1;
    void *vt2;

    vt0 = M2C_FIELD(arg0, void **, 0x10);
    M2C_FIELD(vt0, M2C_UNK (**)(void *), 0x1BC)(arg0 + M2C_FIELD(vt0, s16 *, 0x1B8));
    t = M2C_FIELD(arg0, void **, 0x90);
    if (t == NULL) {
        return;
    }
    if (M2C_FIELD(t, s32 *, 8) != 0) {
        vt1 = M2C_FIELD(arg0, void **, 0x10);
        M2C_FIELD(vt1, M2C_UNK (**)(void *, s32), 0x1AC)(arg0 + M2C_FIELD(vt1, s16 *, 0x1A8), M2C_FIELD(t, s32 *, 8));
        return;
    }
    while (M2C_FIELD(M2C_FIELD(arg0, void **, 0x90), s32 *, 0xC) != 0) {
        vt2 = M2C_FIELD(arg0, void **, 0x10);
        M2C_FIELD(vt2, M2C_UNK (**)(void *, s32), 0x1AC)(arg0 + M2C_FIELD(vt2, s16 *, 0x1A8), M2C_FIELD(M2C_FIELD(arg0, void **, 0x90), s32 *, 0xC));
    }
}
