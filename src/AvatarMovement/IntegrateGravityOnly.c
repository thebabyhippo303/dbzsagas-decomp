/* AvatarMovement__IntegrateGravityOnly @ 0x800A88D4 (size: 0xB8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

f32 AvatarConfig__GetGravity(void *);
extern f32 lbl_80320C14 __attribute__((section(".data")));
extern f32 lbl_80320C18 __attribute__((section(".data")));

void AvatarMovement__IntegrateGravityOnly(void *arg0, void *arg1, f32 farg0) {
    char *p_68;
    register char *p_614;
    f32 gravity;
    f32 zero;
    f32 dt;
    void *base;

    dt = farg0;
    gravity = AvatarConfig__GetGravity(*(void **)arg0 + 0x694);
    zero = lbl_80320C14;
    base = *(void **)arg0;
    p_68 = (char *)base + 0x68;
    M2C_FIELD(p_68, f32 *, 0x0) = zero;
    M2C_FIELD(p_68, f32 *, 0x4) = M2C_FIELD(base, f32 *, 0x7A4) + (-gravity * dt);
    M2C_FIELD(p_68, f32 *, 0x8) = zero;
    M2C_FIELD(arg1, f32 *, 4) = (((AvatarConfig__GetGravity(*(void **)arg0 + 0x694)) * (dt * lbl_80320C18)) + M2C_FIELD(*(void **)arg0, f32 *, 0x7A4)) * dt;
    M2C_FIELD(arg1, f32 *, 0) = zero;
    M2C_FIELD(arg1, f32 *, 8) = zero;
    p_614 = (char *)arg0 + 0x614;
    M2C_FIELD(p_614, f32 *, 0x0) = zero;
    M2C_FIELD(p_614, f32 *, 0x4) = zero;
    M2C_FIELD(p_614, f32 *, 0x8) = zero;
}
