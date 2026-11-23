/* Curve__NormalizeTime @ 0x800E0FE4 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct CurveTimeVt {
    char pad[80];
    short adjust;
    short pad2;
    float (*fn)(void *self, float value);
} CurveTimeVt;

float Curve__NormalizeTime(void *self, float value) {
    CurveTimeVt *vt;

    vt = *(CurveTimeVt **)self;
    return value / vt->fn((char *)self + vt->adjust, value);
}
