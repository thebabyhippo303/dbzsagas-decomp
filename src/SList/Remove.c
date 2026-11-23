/* SList__Remove @ 0x80184530 (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })
typedef int s32;
void SList__Remove(void *arg0, void *arg1) {
 register s32 var_r0; register s32 temp_r11; s32 temp_r9;
 var_r0=*(s32 *)arg0;
 if((void *)var_r0==arg1) {
   *(s32 *)arg0=*(s32 *)((char *)arg1+*(s32 *)((char *)arg0+4));
   if(*(void **)((char *)arg0+8)==arg1) *(s32 *)((char *)arg0+8)=0;
 } else {
   temp_r11=var_r0;
   var_r0=*(s32 *)(temp_r11+*(s32 *)((char *)arg0+4));
   while((void *)var_r0!=arg1 && var_r0!=0) {
      temp_r11=var_r0;
      var_r0=*(s32 *)(temp_r11+*(s32 *)((char *)arg0+4));
   }
   if((void *)var_r0!=arg1) return;
   if(*(void **)((char *)arg0+8)==arg1) *(s32 *)((char *)arg0+8)=temp_r11;
   temp_r9=*(s32 *)((char *)arg0+4);
   *(s32 *)(temp_r11+temp_r9)=*(s32 *)((char *)arg1+temp_r9);
 }
}