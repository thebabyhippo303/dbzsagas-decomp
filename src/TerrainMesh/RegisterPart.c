/* TerrainMesh__RegisterPart @ 0x801D2D44 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


extern int lbl_803732BC[] __attribute__((section(".data")));
extern int lbl_803736BC[] __attribute__((section(".data")));

unsigned char TerrainMesh__RegisterPart(int arg0, int arg1) {
    int i;

    for (i = 0; i < 256; i++) {
        if (lbl_803732BC[i] == 0) {
            lbl_803732BC[i] = arg0;
            lbl_803736BC[i] = arg1;
            return i;
        }
    }
    return 0;
}
