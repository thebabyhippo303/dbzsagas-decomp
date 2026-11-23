/* Avatar__AcquireAnchorActor @ 0x800A34A0 (size: 0x140, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
typedef float f32;
typedef struct Vec3 { f32 x, y, z; } Vec3;
typedef struct IVec { s32 x, y, z; } IVec;
void Avatar__SetAnchorActor(void *, void *);
void DisplayInfo__ShowEntry(void *, int, int, int, float);
void *Game__GetPlayerImpl(void *, int);
int Game__IsPendulumModeImpl(void *);
void *Avatar__FindAnchorTargetInCone(void *, void *, void *, f32, f32);
extern f32 lbl_80320204 __attribute__((section(".data")));
extern f32 lbl_80320208 __attribute__((section(".data")));
extern f32 lbl_8032020C __attribute__((section(".data")));
extern char *lbl_803DC368;
extern void *lbl_803DC3A0;
extern char *lbl_803DC3C0;

void Avatar__AcquireAnchorActor(void **self) {
    char *av;
    void *r;
    IVec pos;
    Vec3 dir;
    f32 *q;

    av = (char *)*self;
    if (*(short *)(*(char **)(*(char **)(av + 0x84) + 0xF0) + 0xA) != 0x900 && *(s32 *)(av + 0x2BC) == 0) {
        if (*(s32 *)(lbl_803DC3C0 + 0x1C50) != 0) {
            if (Game__GetPlayerImpl(lbl_803DC3C0, 0) == (void *)*self) {
                r = Game__GetPlayerImpl(lbl_803DC3C0, 1);
            } else {
                r = Game__GetPlayerImpl(lbl_803DC3C0, 0);
            }
        } else {
            pos = *(IVec *)(av + 0x38);
            q = (f32 *)(av + 0x44);
            {
                f32 tx = q[6];
                f32 ty = q[7];
                f32 tz = q[8];
                dir.x = tx;
                dir.y = ty;
                dir.z = tz;
            }
            r = Avatar__FindAnchorTargetInCone(av, &pos, &dir, lbl_80320204, lbl_80320208);
        }
        if (r != 0) {
            Avatar__SetAnchorActor(*self, r);
            if (*(s32 *)(*(char **)(lbl_803DC3C0 + 0x238) + 4) == 1 && Game__IsPendulumModeImpl(lbl_803DC368 + 0x17C) == 0) {
                DisplayInfo__ShowEntry(lbl_803DC3A0, 2, 4, 0, lbl_8032020C);
            }
        }
    }
}
