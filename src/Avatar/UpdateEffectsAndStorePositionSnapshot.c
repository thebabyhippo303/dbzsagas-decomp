/* Avatar__UpdateEffectsAndStorePositionSnapshot @ 0x8008EC08 (size: 0x120, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef unsigned short u16; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef short s16; typedef float f32;
void Avatar__UpdateEmitterPair(void *);
void Avatar__SpawnMovementSurfaceTrail(void *);
void DistortList__UpdateAndRemoveExpired(void *);
extern f32 lbl_8031F7F4 __attribute__((section(".data")));
extern void *lbl_803DC3C0;
void Avatar__UpdateEffectsAndStorePositionSnapshot(char *self) {
    volatile s32 sp8[4];
    s32 out[2];
    s32 flag; char *o; char *vt; char *p; char *q; f32 fv; volatile s32 *t;
    if (*(s32 *)(*(char **)((char *)lbl_803DC3C0 + 0x238) + 4) != 0) {
        o = *(char **)(self + 0x7E0);
        vt = *(char **)(o + 4);
        (*(void (**)(void *))(vt + 0x5C))(o + *(s16 *)(vt + 0x58));
        DistortList__UpdateAndRemoveExpired(self + 0x1B90);
        Avatar__UpdateEmitterPair(self);
        *(s32 *)(self + 0x674) = 1;
        Avatar__SpawnMovementSurfaceTrail(self);
        o = *(char **)(self + 0x7B8);
        vt = *(char **)(o + 4);
        (*(void (**)(void *, void *))(vt + 0x14))(o + *(s16 *)(vt + 0x10), out);
        if (out[0] != 0) {
            flag = 0;
            if (!(*(f32 *)(self + 0x288) > lbl_8031F7F4) && *(s32 *)(self + 0x90) != 0) flag = 1;
            if (flag == 0) {
                p = self + 0x38; q = self + 0x19C0;
                t = sp8; fv = *(f32 *)(self + 0x75C); sp8[0] = *(s32 *)p; t[2] = *(s32 *)(p+8); t[1] = *(s32 *)(p+4);
                *(s32 *)q = sp8[0]; *(s32 *)(q+4) = sp8[1]; *(s32 *)(q+8) = sp8[2];
                *(f32 *)(self + 0x19CC) = fv; *(s32 *)(self + 0x19D0) = 1;
            }
        }
    }
}
