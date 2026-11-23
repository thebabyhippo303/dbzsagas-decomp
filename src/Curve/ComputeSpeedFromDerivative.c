/* Curve__ComputeSpeedFromDerivative @ 0x800DFE8C (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct CurveVt CurveVt;
typedef struct CurveObj {
    CurveVt *vt;
} CurveObj;

struct CurveVt {
    char pad0[24];
    short derivAdjust;
    short padDeriv;
    void (*deriv)(float *out, void *self);
};

float sqrtf(float);

float Curve__GetDerivativeMagnitude(void *self) {
    CurveObj *obj = self;
    float d[3];
    float sq[3];

    obj->vt->deriv(d, (char *)obj + obj->vt->derivAdjust);
    {
        float *dd = d;
        sq[0] = dd[0] * dd[0];
        sq[1] = dd[1] * dd[1];
        sq[2] = dd[2] * dd[2];
    }
    {
        volatile float *p = sq;
        return sqrtf(sq[0] + p[1] + p[2]);
    }
}
