/* AI__AdvanceEruptionSequenceThunk @ 0x80058A3C (size: 0x20, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


M2C_UNK AI__AdvanceEruptionSequence();              /* extern */

void AI__AdvanceEruptionSequenceThunk(void) {
    AI__AdvanceEruptionSequence();
}
