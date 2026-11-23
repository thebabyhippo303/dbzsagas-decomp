/* Emitter__ResetEmissionState @ 0x80222F24 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct { s32 a0; s32 a4; s32 a8; } Trio;
extern float lbl_803467E4 __attribute__((section(".data")));
extern float lbl_803467E8 __attribute__((section(".data")));
void Emitter__ResetEmissionState(void *e) {
    if (!(M2C_FIELD(e, float *, 104) >= lbl_803467E4)) {
        M2C_FIELD(e, float *, 104) = lbl_803467E8;
    }
    *(Trio *)((char *)e + 44) = *(Trio *)M2C_FIELD(e, void **, 16);
    *(Trio *)((char *)e + 56) = *(Trio *)M2C_FIELD(e, void **, 16);
}
