/* Simple__UpdateEnabledState @ 0x802C7F60 (size: 0x9C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

typedef struct {
    unsigned int value;
    unsigned int mask;
} Mask;

s32 Protagonist__GetHomeParent(void *);
M2C_UNK Simple__ApplyStateFlags(s32);
extern Mask lbl_803945A4 __attribute__((section(".data")));

void Simple__UpdateEnabledState(void *arg0) {
    s32 temp_r3;

    temp_r3 = Protagonist__GetHomeParent(arg0);
    if (temp_r3 != 0) {
        if ((s32) ((*(u32 *)temp_r3 & lbl_803945A4.mask) != lbl_803945A4.value)) {
            if ((s32) M2C_FIELD(arg0, s32 *, 0x254) == 0) {
                M2C_FIELD(arg0, s32 *, 0x258) = 1;
                Simple__ApplyStateFlags((s32) arg0);
            }
        } else if (((s32) M2C_FIELD(temp_r3, s32 *, 0x258) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x254) == 0)) {
            M2C_FIELD(arg0, s32 *, 0x258) = 1;
            Simple__ApplyStateFlags((s32) arg0);
        }
    }
}
