/* ButtonPromptBar__SetSlotScale @ 0x80262428 (size: 0x18, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef float f32;
void ButtonPromptBar__SetSlotScale(void *self,s32 idx,f32 x,f32 y) {
 s32 offset=idx*0x550;
 f32 *sx=(f32 *)((char *)self+0x6E4);
 f32 *sy=(f32 *)((char *)self+0x6E8);
 *(f32 *)(offset+(char *)sx)=x;
 *(f32 *)(offset+(char *)sy)=y;
}