/* Protagonist__UpdateAttachedChildren @ 0x801F19E4 (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK; typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Protagonist__UpdateAttachmentSubtree(s32);
void Protagonist__UpdateAttachedChildren(void *arg0) {
    void *temp_r3;
    s32 temp_r3_2;

    temp_r3 = M2C_FIELD(arg0, void **, 0x188);
    if (temp_r3 != NULL) {
        temp_r3_2 = M2C_FIELD(temp_r3, s32 *, 0x28);
        if (temp_r3_2 != 0) {
            Protagonist__UpdateAttachmentSubtree(temp_r3_2);
        }
    }
}
