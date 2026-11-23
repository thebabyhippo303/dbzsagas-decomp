/* StorageDevice__Construct @ 0x801D6534 (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

extern char lbl_803430E8 __attribute__((section(".data")));
typedef struct SD { int f0; int f4; int f8; void *vt; } SD;

SD *StorageDevice__Construct(SD *self) {
    self->vt = &lbl_803430E8;
    self->f8 = 0xBADBAD;
    self->f0 = 0;
    self->f4 = 0;
    return self;
}
