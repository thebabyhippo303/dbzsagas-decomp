/* AvatarCurve__Abort @ 0x800A14B4 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: AvatarCurve__Abort @ 0x800A14B4 (0x50). ProDG -O2. */
typedef float (*CurveFn)(void *self);

typedef struct {
    char pad[0x50];
    short adjust;
    CurveFn fn;
} CurveVtable;

extern float lbl_803DE51C;

void AvatarCurve__Abort(void *self) {
    void *obj = *(void **)((char *)self + 136);
    CurveVtable *vt = *(CurveVtable **)obj;
    float value = vt->fn((char *)obj + vt->adjust);
    *(float *)((char *)self + 144) = value + lbl_803DE51C;
}
