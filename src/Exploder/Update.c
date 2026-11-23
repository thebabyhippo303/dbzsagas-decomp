/* Exploder__Update @ 0x800ED47C (size: 0x80, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Exploder__Update @ 0x800ED47C (0x80). ProDG -O2. */
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))

extern float lbl_80323AC0 __attribute__((section(".data")));

void fn_800EDBAC(void *self, float *vec);
void fn_802B4E0C(void *self, float value);

void Exploder__Update(void *self, float value) {
    float vec[3];
    float *v = vec;
    float zero = lbl_80323AC0;

    v[0] = zero;
    v[1] = zero;
    v[2] = zero;
    if (M2C_FIELD(self, int *, 1732) != 0) {
        if (!(M2C_FIELD(self, float *, 1744) > zero)) {
            fn_800EDBAC(self, vec);
        } else {
            M2C_FIELD(self, float *, 1744) = M2C_FIELD(self, float *, 1744) - value;
        }
    }
    fn_802B4E0C(self, value);
}
