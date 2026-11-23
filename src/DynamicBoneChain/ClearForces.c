/* DynamicBoneChain__ClearForces @ 0x801FB56C (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef float f32;
typedef struct DynamicBoneChain DynamicBoneChain;
struct DynamicBoneChain { char pad0[8]; s32 count; char pad1[0x2c]; DynamicBoneChain *next; f32 *frames; };
extern f32 lbl_80344EC4 __attribute__((section(".data")));
void DynamicBoneChain__ClearForces(DynamicBoneChain *);
void DynamicBoneChain__ClearForces(DynamicBoneChain *self) {
 s32 i=0, offset; f32 value; f32 *frame;
 if (i < self->count) {
   value=lbl_80344EC4; offset=0;
   do {
     frame=(f32 *)(offset + (s32)self->frames);
     *(frame += 18)=value;
     offset += 108;
     frame[1]=value;
     frame[2]=value;
     i++;
   } while (i < self->count);
 }
 if (self->next) DynamicBoneChain__ClearForces(self->next);
}