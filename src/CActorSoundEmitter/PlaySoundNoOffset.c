/* CActorSoundEmitter__PlaySoundNoOffset @ 0x801DEBBC (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
extern f32 lbl_80343C4C __attribute__((section(".rodata")));

void CActorSoundEmitter__PlaySoundNoOffset(void *arg0, s32 arg1) {
    f32 v[3];
    f32 *vp = v;
    void *vt;

    vp[0] = lbl_80343C4C;
    vp[1] = lbl_80343C4C;
    vp[2] = lbl_80343C4C;
    vt = M2C_FIELD(arg0, void **, 12);
    M2C_FIELD(vt, M2C_UNK (**)(void *, s32, void *), 36)(arg0 + M2C_FIELD(vt, s16 *, 32), arg1, vp);
}
