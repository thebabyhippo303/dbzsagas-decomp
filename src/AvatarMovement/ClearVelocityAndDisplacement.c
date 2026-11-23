/* AvatarMovement__ClearVelocityAndDisplacement @ 0x800A8A70 (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
extern float lbl_80320C24 __attribute__((section(".data")));

void AvatarMovement__ClearVelocityAndDisplacement(char *self, volatile float *out) {
    char *obj = *(char **)self;
    volatile float *motion = (volatile float *)(obj + 104);
    volatile float *clear = (volatile float *)(self + 1556);
    float zero = lbl_80320C24;

    motion[0] = zero;
    motion[2] = zero;
    motion[1] = zero;
    out[2] = zero;
    out[0] = zero;
    out[1] = zero;
    clear[0] = zero;
    clear[2] = zero;
    clear[1] = zero;
}
