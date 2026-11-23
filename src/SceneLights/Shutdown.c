/* SceneLights__Shutdown @ 0x8021A5EC (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct { char pad[4]; void *f4; } SLSys;
extern SLSys lbl_803ACFCC __attribute__((section(".data")));
void SceneLights__Reset(s32);
void memFree(void *p);
void memset(void *, int, u32);

void SceneLights__Shutdown(void) {
    if (lbl_803ACFCC.f4 != NULL) {
        SceneLights__Reset(1);
        memFree(lbl_803ACFCC.f4);
        memset(&lbl_803ACFCC, 0, 0x90);
    }
}
