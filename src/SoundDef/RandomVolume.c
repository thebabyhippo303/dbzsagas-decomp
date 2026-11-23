/* SoundDef__RandomVolume @ 0x80192808 (size: 0xCC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef int s32; typedef float f32;
#define M2C_FIELD(expr,type,offset) (*(type)((char *)(expr)+(offset)))
f32 Random__Float01(void);
extern f32 lbl_8033F3F0 __attribute__((section(".data")));
extern f32 lbl_8033F3F4 __attribute__((section(".data")));
extern f32 lbl_8033F3F8 __attribute__((section(".data")));

f32 SoundDef__RandomVolume(void *arg0) {
 f32 r; s32 lo,hi; f32 flo,value,minimum,maximum,result;
 r=Random__Float01(); lo=(s8)M2C_FIELD(arg0,u8 *,8); hi=(s8)M2C_FIELD(arg0,u8 *,9);
 flo=(f32)lo;
 value=(r*(f32)(hi-lo)+flo)*lbl_8033F3F0;
 minimum=lbl_8033F3F4; maximum=lbl_8033F3F8;
 if(!(value>=minimum)) result=minimum;
 else if(!(value<=maximum)) result=maximum;
 else result=value;
 return result;
}
