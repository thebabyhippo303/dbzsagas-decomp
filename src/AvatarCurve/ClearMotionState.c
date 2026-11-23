/* AvatarCurve__ClearMotionState @ 0x800A0A04 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef float f32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
extern f32 lbl_8032007C __attribute__((section(".data")));

void AvatarCurve__ClearMotionState(void *self) {
    f32 zero;
    void *curve;
    M2C_FIELD(self, s32 *, 0x88) = 0;
    M2C_FIELD(self, s32 *, 0x98) = 0;
    M2C_FIELD(self, s32 *, 0x9C) = 0;
    curve = M2C_FIELD(self, void **, 0);
    zero = lbl_8032007C;
    {
        f32 *base = (f32 *)((char *)curve + 0x68);
        base[0] = zero;
        base[1] = zero;
        base[2] = zero;
    }
    if (M2C_FIELD(M2C_FIELD(self, void **, 0), s32 *, 0x7E4) != 0) {
        M2C_FIELD(M2C_FIELD(self, void **, 0), s32 *, 0x67C) = 0;
    }
}
