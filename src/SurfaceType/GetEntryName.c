/* SurfaceType__GetEntryName @ 0x801F9214 (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef struct {s32 count; s32 u; s32 v; s32 *entries;} Surface;
s32 SurfaceType__GetEntryName(Surface *p,s32 i){
 if(p->entries != 0) {
  if(i >= 0) {
   if(i < p->count) return p->entries[i*4];
  }
 }
 return 0;
}