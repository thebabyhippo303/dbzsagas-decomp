/* AnimScript__Op23Pop @ 0x802361D4 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32; typedef double f64; typedef int M2C_UNK; typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32;
#define M2C_FIELD(expr,type,offset) (*(type)((char *)(expr)+(offset)))
#define NULL 0
s32 AnimScript__Op23Pop(s32 arg0,s32 arg1,s32 *arg2) {
 s32 off=arg1*4;
 void **table=(void **)((char *)arg0+240);
 void *node=*(void **)((char *)table+off);
 if((node!=NULL)&&((s32)M2C_FIELD(M2C_FIELD(node,void**,0x1C),s32*,0x38)!=0)) *arg2+=4;
 M2C_FIELD(node,u8*,8)=(u8)(M2C_FIELD(node,u8*,8)-1);
 return 0;
}