/* Water__AddInteractingActor @ 0x802770BC (size: 0xB8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void * Mem__New(u32);
void Water__RemoveInteractingActor(s32, s32);
void Water__AddInteractingActor(s32 arg0, s32 arg1, f32 farg0, f32 farg1) {
    void *temp_r0;
    void *temp_r10;
    void *temp_r3;

    if (arg1 != 0) {
        Water__RemoveInteractingActor(arg0, arg1);
        temp_r3 = Mem__New(0x14U);
        if (temp_r3 != NULL) {
            M2C_FIELD(temp_r3, s32 *, 0) = arg1;
            temp_r10 = arg0 + 0x14;
            M2C_FIELD(temp_r3, f32 *, 4) = farg0;
            M2C_FIELD(temp_r3, f32 *, 8) = farg1;
            temp_r0 = M2C_FIELD(arg0, void **, 0x14);
            if (temp_r0 == NULL) {
                M2C_FIELD(temp_r10, void **, 4) = temp_r3;
                M2C_FIELD(arg0, void **, 0x14) = temp_r3;
                M2C_FIELD(temp_r3, void **, 0x10) = temp_r0;
                M2C_FIELD(temp_r3, void **, 0xC) = temp_r0;
            } else {
                M2C_FIELD(temp_r3, void **, 0x10) = NULL;
                M2C_FIELD(temp_r3, void **, 0xC) = (void *) M2C_FIELD(temp_r10, void **, 4);
                M2C_FIELD(M2C_FIELD(temp_r10, void **, 4), void **, 0x10) = temp_r3;
                M2C_FIELD(temp_r10, void **, 4) = temp_r3;
            }
            M2C_FIELD(temp_r10, s32 *, 0xC) = (s32) (M2C_FIELD(temp_r10, s32 *, 0xC) + 1);
        }
    }
}
