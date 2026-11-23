/* Sphere__Register @ 0x8026C0B0 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


extern void *lbl_803DD918;
extern void *lbl_803DD91C;

void Sphere__Register(void *arg0) {
    s32 temp_r11;

    temp_r11 = M2C_FIELD(arg0, s32 *, 0x194);
    if (temp_r11 == 0) {
        if ((void *) lbl_803DD918 == NULL) {
            lbl_803DD918 = arg0;
        }
        if ((void *) lbl_803DD91C != NULL) {
            M2C_FIELD(lbl_803DD91C, void **, 0x18C) = arg0;
        }
        lbl_803DD91C = arg0;
        M2C_FIELD(arg0, s32 *, 0x18C) = temp_r11;
        M2C_FIELD(arg0, s32 *, 0x194) = 1;
    }
}
