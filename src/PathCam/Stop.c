/* PathCam__Stop @ 0x8002CDE8 (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

/* Byte-matched: PathCam__Stop @ 0x8002CDE8 (0x3C). ProDG -O2. */
extern void *lbl_803DC5B4;
extern char lbl_80311640[];
extern int CameraBag__IsCurrentNamed(void *bag, char *name);
extern void CameraBag__Pop(void *bag);

void PathCam__Stop(void) {
    if (CameraBag__IsCurrentNamed(lbl_803DC5B4, lbl_80311640))
        CameraBag__Pop(lbl_803DC5B4);
}
