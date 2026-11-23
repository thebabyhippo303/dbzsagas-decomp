/* Runtime__ShiftLeft64 @ 0x80168348 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed int s32; typedef unsigned int u32; typedef signed long long s64;
typedef union { s64 value; struct { s32 high; u32 low; } words; } Pair;
s64 Runtime__ShiftLeft64(s64 value, s32 count) {
 Pair in,out; s32 n; u32 loPart, hiPart;
 in.value=value;
 if(count==0) return value;
 n=32-count;
 if(n<=0) {
   n=-n;
   out.words.low=0;
   out.words.high=in.words.low<<n;
 } else {
   out.words.low=in.words.low<<count;
   loPart=in.words.low>>n;
   hiPart=in.words.high<<count;
   out.words.high=hiPart|loPart;
 }
 return out.value;
}
