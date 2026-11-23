/* UI__CreateWidget @ 0x800FF32C (size: 0x158, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef short s16;
typedef float f32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))

extern void fn_801842C4(s32 size);
extern void *fn_80270450(void);
extern f32 lbl_80325124 __attribute__((section(".data")));
extern f32 lbl_80325128 __attribute__((section(".data")));
extern f32 lbl_8032512C __attribute__((section(".data")));

void *UI__CreateWidget(f32 a, f32 b, f32 c) {
    void *obj;

    fn_801842C4(500);
    obj = fn_80270450();
    M2C_FIELD(M2C_FIELD(obj, void **, 412), void (**)(void *, s32, s32, s32, s32), 276)((char *)obj + M2C_FIELD(M2C_FIELD(obj, void **, 412), s16 *, 272), 255, 255, 255, 255);
    M2C_FIELD(M2C_FIELD(obj, void **, 412), void (**)(void *, f32, f32), 204)((char *)obj + M2C_FIELD(M2C_FIELD(obj, void **, 412), s16 *, 200), c, c);
    M2C_FIELD(M2C_FIELD(obj, void **, 412), void (**)(void *, f32, f32), 236)((char *)obj + M2C_FIELD(M2C_FIELD(obj, void **, 412), s16 *, 232), lbl_80325124, lbl_80325128);
    M2C_FIELD(M2C_FIELD(obj, void **, 412), void (**)(void *, f32), 1068)((char *)obj + M2C_FIELD(M2C_FIELD(obj, void **, 412), s16 *, 1064), lbl_8032512C);
    M2C_FIELD(M2C_FIELD(obj, void **, 412), void (**)(void *, f32, f32), 172)((char *)obj + M2C_FIELD(M2C_FIELD(obj, void **, 412), s16 *, 168), a, b);
    M2C_FIELD(M2C_FIELD(obj, void **, 412), void (**)(void *, f32), 1052)((char *)obj + M2C_FIELD(M2C_FIELD(obj, void **, 412), s16 *, 1048), lbl_80325124);
    M2C_FIELD(M2C_FIELD(obj, void **, 412), void (**)(void *), 508)((char *)obj + M2C_FIELD(M2C_FIELD(obj, void **, 412), s16 *, 504));
    M2C_FIELD(M2C_FIELD(obj, void **, 412), void (**)(void *), 468)((char *)obj + M2C_FIELD(M2C_FIELD(obj, void **, 412), s16 *, 464));
    return obj;
}
