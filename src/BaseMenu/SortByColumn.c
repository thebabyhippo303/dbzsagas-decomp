/* BaseMenu__SortByColumn @ 0x80263384 (size: 0x148, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
extern s32 fn_8026FCD8(void *, void *);

s32 BaseMenu__SortByColumn(void *arg0, s32 arg1) {
    void *vt0;
    void *t29;
    void *t31;
    void *b;
    void *c;
    void *vt1;

    vt0 = M2C_FIELD(arg0, void **, 0x10);
    t29 = M2C_FIELD(vt0, M2C_UNK (**)(void *, s32), 0x74)(arg0 + M2C_FIELD(vt0, s16 *, 0x70), 0);
    vt0 = M2C_FIELD(arg0, void **, 0x10);
    for (t31 = M2C_FIELD(vt0, M2C_UNK (**)(void *, s32), 0x74)(arg0 + M2C_FIELD(vt0, s16 *, 0x70), 1); (t29 != NULL) && (t31 != NULL);) {
        vt1 = M2C_FIELD(t29, void **, 0x10);
        b = M2C_FIELD(vt1, M2C_UNK (**)(void *, s32), 0x13C)(t29 + M2C_FIELD(vt1, s16 *, 0x138), arg1);
        vt1 = M2C_FIELD(t31, void **, 0x10);
        c = M2C_FIELD(vt1, M2C_UNK (**)(void *, s32), 0x13C)(t31 + M2C_FIELD(vt1, s16 *, 0x138), arg1);
        if (fn_8026FCD8(b, c) != 0) {
            vt1 = M2C_FIELD(t31, void **, 0x10);
            M2C_FIELD(vt1, M2C_UNK (**)(void *, void *), 0x3C)(t31 + M2C_FIELD(vt1, s16 *, 0x38), t29);
            vt1 = M2C_FIELD(t31, void **, 0x10);
            if (M2C_FIELD(vt1, M2C_UNK (**)(void *), 0x5C)(t31 + M2C_FIELD(vt1, s16 *, 0x58)) != 0) {
                vt1 = M2C_FIELD(t31, void **, 0x10);
                t29 = M2C_FIELD(vt1, M2C_UNK (**)(void *), 0x5C)(t31 + M2C_FIELD(vt1, s16 *, 0x58));
                continue;
            }
        } else {
            t29 = t31;
        }
        vt1 = M2C_FIELD(t29, void **, 0x10);
        t31 = M2C_FIELD(vt1, M2C_UNK (**)(void *), 0x54)(t29 + M2C_FIELD(vt1, s16 *, 0x50));
    }
}
