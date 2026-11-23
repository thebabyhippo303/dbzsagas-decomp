/* Curve__SolveArcLengthParameterByNewton @ 0x800E0368 (size: 0x118, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct VT {
    char pad0[64];
    short adjD;
    short padD;
    float (*deriv)(void *self, float t);
    short adjP;
    short padP;
    float (*pos)(void *self, float a, float t);
    short adjL;
    short padL;
    float (*length)(void *self);
} VT;

typedef struct Curve {
    VT *vt;
} Curve;

extern float lbl_80322C3C __attribute__((section(".data")));
extern float lbl_80322C40 __attribute__((section(".data")));
extern float lbl_80322C44 __attribute__((section(".data")));

float Curve__SolveArcLengthParameterByNewton(Curve *self, int iters, float target, float tol) {
    float total;
    float guess;
    float err;
    int i;
    if (target <= lbl_80322C3C) {
        return lbl_80322C3C;
    }
    total = self->vt->length((char *)self + self->vt->adjL);
    if (!(target < total)) {
        return lbl_80322C40;
    }
    guess = target / total;
    for (i = 0; i < iters;) {
        err = self->vt->pos((char *)self + self->vt->adjP, lbl_80322C3C, guess) - target;
        if (__builtin_fabsf(err) < tol) {
            return guess;
        }
        i++;
        guess -= err / self->vt->deriv((char *)self + self->vt->adjD, guess);
    }
    return lbl_80322C44;
}
