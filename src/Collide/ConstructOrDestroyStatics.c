/* Collide__ConstructOrDestroyStatics @ 0x801D3938 (size: 0xA4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef float f32;
extern f32 lbl_80342378 __attribute__((section(".data")));
extern f32 lbl_8034237C __attribute__((section(".data")));
extern f32 lbl_803A36B4[] __attribute__((section(".bss")));
extern volatile s8 lbl_803DD53A, lbl_803DD538, lbl_803DD539;
void Collide__ConstructOrDestroyStatics(int a, unsigned b) {
 f32 *p; f32 z,o;
 if (b != 0xFFFF || a == 0) return;
 z=lbl_80342378; o=lbl_8034237C; p=lbl_803A36B4;
 p[0]=z;
 p[1]=z; p[2]=z; *(p+=3)=o; lbl_803DD53A=-1;
 p[1]=z; p[2]=z; *(p+=3)=z; lbl_803DD538=-1;
 p[1]=o; p[2]=z; *(p+=3)=o; lbl_803DD539=-1;
 p[1]=o; p[2]=z; *(p+=3)=z;
 p[1]=z; p[2]=o; *(p+=3)=o;
 p[1]=z; p[2]=o; *(p+=3)=z;
 p[1]=o; p[2]=o; *(p+=3)=o;
 p[1]=o; p[2]=o;
}