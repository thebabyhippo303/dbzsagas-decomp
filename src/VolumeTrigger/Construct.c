/* VolumeTrigger__Construct @ 0x800FE114 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

extern char lbl_80394654[];
extern char lbl_80331DF0[];
extern char lbl_80331DD0[];
extern char lbl_80331E98[];
extern void Simple__ConstructBase(void *, void *);

void *VolumeTrigger__Construct(void *self) {
    Simple__ConstructBase(self, lbl_80394654);
    M2C_FIELD(self, void **, 408) = lbl_80331DF0;
    M2C_FIELD(self, void **, 436) = lbl_80331DD0;
    M2C_FIELD(self, void **, 52) = lbl_80331E98;
    return self;
}
