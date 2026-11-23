/* PathFollower__AccelerateForward @ 0x802BFFF4 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0

void PathFollower__AccelerateForward(void *arg0) {
    void *vt = M2C_FIELD(arg0, void **, 180);

    M2C_FIELD(arg0, f32 *, 44) = M2C_FIELD(arg0, f32 *, 36);
    M2C_FIELD(arg0, f32 *, 48) = M2C_FIELD(vt, f32 (**)(void *), 148)(arg0 + M2C_FIELD(vt, s16 *, 144));
}
