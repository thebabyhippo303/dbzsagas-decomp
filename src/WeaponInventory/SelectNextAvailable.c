/* WeaponInventory__SelectNextAvailable @ 0x800DF15C (size: 0x78, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed int s32; typedef unsigned int u32; typedef struct { u32 pad; void *slots[92]; s32 current; } WeaponInventory;
void *WeaponInventory__SelectNextAvailable(WeaponInventory *self) {
 u32 temp_r10,temp_r0,temp_r9,var_r0,var_r11,var_r9;
 void **temp_r8; void **temp_r7; void *temp_r9_2;
 var_r0=1; temp_r9=self->current+1; if(temp_r9<=91) var_r0=temp_r9;
 temp_r8=self->slots; var_r11=var_r0; temp_r7=temp_r8;
 for(;;) {
  temp_r10=var_r11*4;
  temp_r9_2=self->slots[var_r11];
  if(temp_r9_2 && *(s32 *)((char *)temp_r9_2+4)) { self->current=var_r11; return *(void **)((char *)temp_r8+temp_r10); }
  temp_r0=var_r11+1; var_r9=1; if(temp_r0<=91) var_r9=temp_r0; var_r11=var_r9;
  if(var_r11==(u32)self->current) return 0;
 }
}