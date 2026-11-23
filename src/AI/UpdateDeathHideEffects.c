/* AI__UpdateDeathHideEffects @ 0x80069B50 (size: 0x1D0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 Actor__FindBoneIdByName(void *, const char *, s8 *);
void * CActor__GetBoneWorldPosition(void *, void *, s32);
int Avatar__CreateEffectImpl(void *, char *, void *, float, int, int);
extern s8 lbl_8031E9D0 __attribute__((section(".data")));
extern s8 lbl_8031EB0C __attribute__((section(".data")));
extern s8 lbl_8031EB18 __attribute__((section(".data")));
extern s8 lbl_8031EB20 __attribute__((section(".data")));
extern s8 lbl_8031E188 __attribute__((section(".data")));
extern s8 lbl_8031EB34 __attribute__((section(".data")));
extern f32 lbl_8031EB3C __attribute__((section(".data")));

typedef struct { f32 x, y, z; } Vec3;

void AI__UpdateDeathHideEffects(void *arg0) {
    struct {
        s8 headBone;
        char pad0[7];
        Vec3 pos;
        char pad1[4];
        s8 pelvisBone;
    } locals;
    s32 c8;

    if (M2C_FIELD(arg0, s32 *, 0xC8) == 5 && M2C_FIELD(arg0, s32 *, 0xCC) == 2) {
        if (M2C_FIELD(arg0, s32 *, 0x50C) == 2) {
            void *tmpA;
            void *tmpB;
            Actor__FindBoneIdByName(M2C_FIELD(arg0, void **, 0x390), &lbl_8031E9D0, &locals.headBone);
            CActor__GetBoneWorldPosition(&locals.pos, M2C_FIELD(arg0, void **, 0x390), (u8)locals.headBone);
            Avatar__CreateEffectImpl((char *)M2C_FIELD(arg0, void **, 0x390) + 0x684, &lbl_8031EB0C, &locals.pos, lbl_8031EB3C, 0, 0);
            tmpA = M2C_FIELD(M2C_FIELD(arg0, void **, 0x390), void **, 0xAC);
            tmpB = M2C_FIELD(tmpA, void **, 0xC);
            M2C_FIELD(tmpB, M2C_UNK (**)(void *, M2C_UNK), 0x4C)(tmpA + M2C_FIELD(tmpB, s16 *, 0x48), &lbl_8031EB18);
        }
    } else if (M2C_FIELD(arg0, s32 *, 0x50C) == 2) {
        Actor__FindBoneIdByName(M2C_FIELD(arg0, void **, 0x390), &lbl_8031E188, &locals.pelvisBone);
        CActor__GetBoneWorldPosition(&locals.pos, M2C_FIELD(arg0, void **, 0x390), (u8)locals.pelvisBone);
        c8 = M2C_FIELD(arg0, s32 *, 0xC8);
        if (c8 == 1) {
            if (M2C_FIELD(arg0, s32 *, 0xCC) == 3) {
                goto large;
            }
        }
        if (c8 != 2) {
            goto normal;
        }
        if (M2C_FIELD(arg0, s32 *, 0xCC) != 3) {
            goto normal;
        }
    large:
        Avatar__CreateEffectImpl((char *)M2C_FIELD(arg0, void **, 0x390) + 0x684, &lbl_8031EB20, &locals.pos, lbl_8031EB3C, 0, 0);
        goto fxdone;
    normal:
        Avatar__CreateEffectImpl((char *)M2C_FIELD(arg0, void **, 0x390) + 0x684, &lbl_8031EB0C, &locals.pos, lbl_8031EB3C, 0, 0);
    fxdone:
        M2C_FIELD(arg0, s32 *, 0x50C) = 0;
        if (M2C_FIELD(arg0, s32 *, 0xC8) == 0) {
            void *tmpA;
            void *tmpB;
            tmpA = M2C_FIELD(M2C_FIELD(arg0, void **, 0x390), void **, 0xAC);
            tmpB = M2C_FIELD(tmpA, void **, 0xC);
            M2C_FIELD(tmpB, M2C_UNK (**)(void *, M2C_UNK), 0x4C)(tmpA + M2C_FIELD(tmpB, s16 *, 0x48), &lbl_8031EB34);
        } else {
            void *tmpA;
            void *tmpB;
            tmpA = M2C_FIELD(M2C_FIELD(arg0, void **, 0x390), void **, 0xAC);
            tmpB = M2C_FIELD(tmpA, void **, 0xC);
            M2C_FIELD(tmpB, M2C_UNK (**)(void *, M2C_UNK), 0x4C)(tmpA + M2C_FIELD(tmpB, s16 *, 0x48), &lbl_8031EB18);
        }
    }
    M2C_FIELD(arg0, s32 *, 0x50C) = M2C_FIELD(arg0, s32 *, 0x50C) + 1;
}
