/* PathFollower__SetupBoundingMatePaths @ 0x802BF464 (size: 0xF0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void sprintf(char *, const char *, ...);
s32 PathManager__GetInstance(void);
void *PathManager__FindPath(s32, char *, s32);
void BezierPath__ComputeLengths(void *);
f32 Rand__RangeFloat(f32, f32, s32);
void PathFollower__BuildBoundedPath(void *);
s32 PropertyStream__ReadInt(void *, char *, char *);
extern char lbl_8035274C[] __attribute__((section(".data")));
extern char lbl_80352754[] __attribute__((section(".data")));
extern f32 lbl_80352770 __attribute__((section(".data")));
extern f32 lbl_80352774 __attribute__((section(".data")));
extern char lbl_8035275C[] __attribute__((section(".data")));
extern char lbl_803DD634[8] __attribute__((section(".sdata")));
extern M2C_UNK lbl_803BEFC0 __attribute__((section(".data")));

void PathFollower__SetupBoundingMatePaths(void *arg0) {
    char buf[104];
    void *o;
    void *p;

    o = M2C_FIELD(arg0, void **, 4);
    M2C_FIELD(arg0, void **, 0x10) = o;
    sprintf(buf, lbl_8035274C, M2C_FIELD(o, char **, 4));
    p = PathManager__FindPath(PathManager__GetInstance(), buf, -1);
    M2C_FIELD(arg0, void **, 0x14) = p;
    if (p == NULL) {
        sprintf(buf, lbl_80352754, M2C_FIELD(M2C_FIELD(arg0, void **, 4), char **, 4));
        p = PathManager__FindPath(PathManager__GetInstance(), buf, -1);
        M2C_FIELD(arg0, void **, 0x14) = p;
        if (p == NULL) {
            M2C_FIELD(arg0, void **, 0x10) = p;
            return;
        }
    }
    BezierPath__ComputeLengths(M2C_FIELD(arg0, void **, 0x10));
    BezierPath__ComputeLengths(M2C_FIELD(arg0, void **, 0x14));
    M2C_FIELD(arg0, f32 *, 0x18) = Rand__RangeFloat(lbl_80352770, lbl_80352774, (s32)&lbl_803DD634);
    PathFollower__BuildBoundedPath(arg0);
    PropertyStream__ReadInt(&lbl_803BEFC0, lbl_8035275C, lbl_8035275C);
}
