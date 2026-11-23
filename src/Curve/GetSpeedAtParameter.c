/* Curve__GetSpeedAtParameter @ 0x800E11A4 (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct CurveVt CurveVt;
typedef struct CurveObj {
    CurveVt *vt;
} CurveObj;

struct CurveVt {
    char pad0[64];
    short speedAdjust;
    short padSpeed;
    float (*speed)(void *self);
    char pad1[16];
    short prepAdjust;
    short padPrep;
    void (*prep)(void *self, int mode, float value, float scale);
};

typedef struct CurveSample {
    int index;
    CurveObj *obj;
    float value;
} CurveSample;

extern float lbl_80322D10 __attribute__((section(".data")));
extern void fn_800E1028(CurveSample *out, void *curve, float parameter);

float Curve__GetSpeedAtParameter(void *curve, float parameter) {
    CurveSample sample;

    fn_800E1028(&sample, curve, parameter);
    sample.obj->vt->prep((char *)sample.obj + sample.obj->vt->prepAdjust, 32, sample.value, lbl_80322D10);
    return sample.obj->vt->speed((char *)sample.obj + sample.obj->vt->speedAdjust);
}
