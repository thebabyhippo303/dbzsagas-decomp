/* SurfaceType__Construct @ 0x801F8BA4 (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


extern M2C_UNK lbl_80344828 __attribute__((section(".data")));

typedef struct SurfaceType { s32 f0; M2C_UNK *vt; s32 f8; s32 fC; s32 f10; } SurfaceType;
SurfaceType *SurfaceType__Construct(SurfaceType *a){ a->vt=&lbl_80344828; a->f0=0; a->fC=0; a->f8=0; a->f10=7; return a; }
