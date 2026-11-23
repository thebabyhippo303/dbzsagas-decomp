/* Rope__ClearAccumulators @ 0x802C1D34 (size: 0x94, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
extern f32 lbl_80352964 __attribute__((section(".data")));
void Rope__PinEndLinks(void *);
void DynamicBoneChain__CollideWithBoxes(void *, s32, s32);
void DynamicBoneChain__CollideAllWithBoxes(void *, s32);
void DynamicBoneChain__ApplyResults(void *);

void Rope__ClearAccumulators(void *arg0, f32 farg0) {
    f32 temp_f0;
    f32 limit;
    void *temp_chain;
    void *temp_boxes;
    void *temp_r3;

    if (M2C_FIELD(arg0, s32 *, 0x5F4) == 4) {
        limit = lbl_80352964;
        temp_f0 = M2C_FIELD(arg0, f32 *, 0x60C) - farg0;
        M2C_FIELD(arg0, f32 *, 0x60C) = temp_f0;
        if (!(temp_f0 > limit)) {
            Rope__PinEndLinks(arg0);
        }
    }
    if (M2C_FIELD(arg0, s32 *, 0x644) != 3) {
        temp_chain = arg0 + 0x414;
        temp_boxes = arg0 + 0x590;
        DynamicBoneChain__CollideWithBoxes(temp_chain, (s32)temp_boxes, 0);
        temp_r3 = M2C_FIELD(temp_chain, void **, 0x38);
        if (temp_r3 != NULL) {
            DynamicBoneChain__CollideAllWithBoxes(temp_r3, (s32)temp_boxes);
        }
        DynamicBoneChain__ApplyResults(temp_chain);
    }
}
