/* Curve__FindParameterForArcLength @ 0x800E0C50 (size: 0x118, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct CurveVt CurveVt;

typedef struct Curve {
    CurveVt *vt;
} Curve;

struct CurveVt {
    char pad[0x40];
    short deriv_adjust;
    short pad_deriv;
    float (*deriv)(void *self, float parameter);
    short sample_adjust;
    short pad_sample;
    float (*sample)(void *self, float zero, float parameter);
    short length_adjust;
    short pad_length;
    float (*length)(void *self);
};

extern float lbl_80322CC8 __attribute__((section(".rodata")));
extern float lbl_80322CCC __attribute__((section(".rodata")));
extern float lbl_80322CD0 __attribute__((section(".rodata")));
float fabsf(float);

float Curve__FindParameterForArcLength(Curve *curve, int max_steps, float arc, float tolerance) {
    float total;
    float guess;
    float diff;
    int step;
    CurveVt *vt;

    if (arc <= lbl_80322CC8) {
        return lbl_80322CC8;
    }
    vt = curve->vt;
    total = vt->length((char *)curve + vt->length_adjust);
    if (!(arc < total)) {
        return lbl_80322CCC;
    }
    guess = arc / total;
    step = 0;
    while (step < max_steps) {
        vt = curve->vt;
        diff = vt->sample((char *)curve + vt->sample_adjust, lbl_80322CC8, guess) - arc;
        if (fabsf(diff) < tolerance) {
            return guess;
        }
        vt = curve->vt;
        step += 1;
        guess -= diff / vt->deriv((char *)curve + vt->deriv_adjust, guess);
    }
    return lbl_80322CD0;
}
