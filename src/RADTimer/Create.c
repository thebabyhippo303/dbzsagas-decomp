/* RADTimer__Create @ 0x802F7DE0 (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;

void *radmalloc(s32);
void *memset(void *, int, u32);

void *RADTimer__Create(s32 arg0) {
    void *p;

    p = radmalloc(64);
    if (p != NULL) {
        memset(p, 0, 64);
        M2C_FIELD(p, s32 *, 56) = 0;
        M2C_FIELD(p, s32 *, 4) = 1;
        M2C_FIELD(p, s32 *, 48) = 0;
        M2C_FIELD(p, s32 *, 0) = 0;
        M2C_FIELD(p, s32 *, 52) = 1;
        if (arg0 < 0) {
            arg0 = -arg0;
        }
        M2C_FIELD(p, s32 *, 60) = arg0;
    }
    return p;
}
