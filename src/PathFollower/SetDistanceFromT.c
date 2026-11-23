/* PathFollower__SetDistanceFromT @ 0x802BDBB4 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
f32 Path__GetLength(void *);

void PathFollower__SetDistanceFromT(void *arg0, f32 arg1) {
    void *p = M2C_FIELD(arg0, void **, 4);

    if (p == NULL) {
        return;
    }
    M2C_FIELD(arg0, f32 *, 28) = arg1 * Path__GetLength(p);
}
