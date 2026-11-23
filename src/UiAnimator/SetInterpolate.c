/* UiAnimator__SetInterpolate @ 0x80260708 (size: 0x20, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef short s16; typedef unsigned short u16; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

#define M2C_FIELD(expr,type,offset) (*(type)((char *)(expr)+(offset)))
typedef unsigned char u8; typedef unsigned int u32; typedef int s32;
void UiAnimator__SetInterpolate(void *arg0,s32 arg1){ u32 b=M2C_FIELD(arg0,u8 *,16); b &= ~4u; M2C_FIELD(arg0,u8 *,16)=b; if(arg1) M2C_FIELD(arg0,u8 *,16)=b|4u; }