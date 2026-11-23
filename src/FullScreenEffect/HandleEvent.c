/* FullScreenEffect__HandleEvent @ 0x800E29C8 (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef double f64; typedef int M2C_UNK;
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef int s32; typedef unsigned int u32; typedef float f32;
#define M2C_FIELD(e,t,o) (*(t)((char *)(e)+(o)))
void FullScreenEffect__DestroyResources(char *);
extern f32 lbl_80322E64 __attribute__((section(".data")));
extern f32 lbl_80322E68 __attribute__((section(".data")));
void FullScreenEffect__HandleEvent(s8*s,s32 e){if((u32)e>0x400FAU)return;{register u32 lower=0x400F9U;if((u32)e<lower)return;}if(M2C_FIELD(s,f32*,0x80)==lbl_80322E64)FullScreenEffect__DestroyResources((char*)s);M2C_FIELD(s,f32*,0x80)=lbl_80322E68;}