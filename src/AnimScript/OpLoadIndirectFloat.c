/* AnimScript__OpLoadIndirectFloat @ 0x80237448 (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef int s32; typedef float f32;
#define M2C_FIELD(e,t,o) (*(t)((char *)(e)+(o)))
typedef struct { char pad[240]; void *threads[1]; } AnimState;
s32 AnimScript__OpLoadIndirectFloat(AnimState *state,s32 idx,s32 *pc) {
 void *thread=state->threads[idx];
 s32 p;
 if(thread!=0 && (s32)M2C_FIELD(M2C_FIELD(thread,void **,0x1C),s32 *,0x38)!=0) *pc+=4;
 p=M2C_FIELD(thread,s32 **,48)[(s32)(s8)M2C_FIELD(thread,u8 *,8)];
 M2C_FIELD(thread,u8 **,52)[(s32)(s8)M2C_FIELD(thread,u8 *,8)]=2;
 *(f32 *)&M2C_FIELD(thread,s32 **,48)[(s32)(s8)M2C_FIELD(thread,u8 *,8)]=*(f32 *)p;
 return 0;
}