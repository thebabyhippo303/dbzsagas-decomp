/* Camera__SelectFrustumPositionFromReversedPair @ 0x800CE378 (size: 0x100, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0

typedef struct { f32 x, y, z; } Vec3;
void * Game__GetPlayerImpl(void *, s32);
s32 Game__GetConfiguredPlayerCount(void *);
void fn_800CDC44(Vec3 *, s32);
s32 Camera__IsPointInsideViewFrustum(Vec3 *);
extern void *lbl_803DC3C0;

Vec3 Camera__SelectFrustumPositionFromReversedPair(void *self, s32 c, Vec3 *A, s32 d, Vec3 *B) {
    s32 i;
    void *player;
    Vec3 p;

    for (i = 0; i < Game__GetConfiguredPlayerCount(lbl_803DC3C0); i++) {
        player = Game__GetPlayerImpl(lbl_803DC3C0, i);
        fn_800CDC44((Vec3 *)c, (s32)A);
        p = *(Vec3 *)((char *)player + 0x38);
        if (Camera__IsPointInsideViewFrustum(&p) != 0) {
            fn_800CDC44((Vec3 *)d, (s32)B);
            p = *(Vec3 *)((char *)player + 0x38);
            if (Camera__IsPointInsideViewFrustum(&p) != 1) {
                return *A;
            }
        }
    }
    return *B;
}
