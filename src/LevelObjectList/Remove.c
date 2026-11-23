/* LevelObjectList__Remove @ 0x8028F228 (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
s32 LevelObjectList__Remove(void *arg0, void *arg1) {
 if (arg1 == NULL) return 0;
 if ((void **) M2C_FIELD(arg0, void ***, 0) == arg1)
   M2C_FIELD(arg0, void ***, 0) = (void **) M2C_FIELD(arg1, void ***, 4);
 else
   M2C_FIELD(M2C_FIELD(arg1, void **, 0), void ***, 4) = (void **) M2C_FIELD(arg1, void ***, 4);
 if ((void *) M2C_FIELD(arg0, void **, 4) == arg1)
   M2C_FIELD(arg0, void **, 4) = (void *) M2C_FIELD(arg1, void **, 0);
 else
   *M2C_FIELD(arg1, void ***, 4) = M2C_FIELD(arg1, void **, 0);
 M2C_FIELD(arg1, void **, 0) = NULL;
 M2C_FIELD(arg1, void ***, 4) = NULL;
 M2C_FIELD(arg0, s32 *, 0xC) = (s32)(M2C_FIELD(arg0,s32*,0xC)-1);
 return 1;
}