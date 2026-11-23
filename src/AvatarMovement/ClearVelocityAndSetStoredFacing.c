/* AvatarMovement__ClearVelocityAndSetStoredFacing @ 0x800A7950 (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32;

#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))

extern f32 lbl_80320B6C __attribute__((section(".data")));

void AvatarMovement__ClearVelocityAndSetStoredFacing(void *arg0) {
    void *temp_r9;
    void *temp_r9_2;
    f32 zero;

    temp_r9 = *(void **)arg0;
    zero = lbl_80320B6C;
    *(volatile f32 *)((char *)temp_r9 + 0x74) = zero;
    temp_r9 = (char *)temp_r9 + 0x74;
    *(volatile f32 *)((char *)temp_r9 + 8) = zero;
    *(volatile f32 *)((char *)temp_r9 + 4) = zero;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), f32 *, 0x75C) = M2C_FIELD(arg0, f32 *, 0x55C);
}
