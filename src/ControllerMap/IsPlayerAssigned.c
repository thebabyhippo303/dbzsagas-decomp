/* ControllerMap__IsPlayerAssigned @ 0x801D6750 (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef unsigned int u32;
#define M2C_FIELD(expr,type,offset) (*(type)((char *)(expr)+(offset)))
s32 ControllerMap__IsPlayerAssigned(void *arg0,u32 arg1) {
 if (arg1 < M2C_FIELD(arg0,u32 *,8)) {
   if (((s32 *)M2C_FIELD(arg0,s32 **,4))[arg1] != -1) return 1;
   else return 0;
 } else {
   return 0;
 }
}