/* MeshLOD__Initialize @ 0x80210FB8 (size: 0xA4, .text, ProDG 3.9.3 -O2) - MATCHED */
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0

void Mem__DeleteArray(void *);
u32 Mem__NewArray(u32);
void MeshLOD__LoadConfig(void *, s32);
void MeshLOD__Initialize(void *arg0, s32 arg1, s32 arg2) {
    s32 i;
    s32 off;
    s32 z;
    if (M2C_FIELD(arg0, void **, 8) != NULL) {
        Mem__DeleteArray(M2C_FIELD(arg0, void **, 8));
    }
    if (arg1 <= 0) {
        M2C_FIELD(arg0, s32 *, 4) = 0;
        M2C_FIELD(arg0, void **, 8) = NULL;
    }
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, void **, 8) = (void *)Mem__NewArray((u32)(arg1 * 4));
    i = 0;
    if (i < M2C_FIELD(arg0, s32 *, 4)) {
        z = 0;
        off = 0;
        do {
            i += 1;
            *(s32 *)(off + (s32)M2C_FIELD(arg0, void **, 8)) = z;
            off += 4;
        } while (i < M2C_FIELD(arg0, s32 *, 4));
    }
    MeshLOD__LoadConfig(arg0, arg2);
}
