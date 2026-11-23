/* SaveGame__SelectOrAddStorageFile @ 0x80150330 (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

int SaveGame__FindStorageFileIndex(char *, const char *, int *);
char * strcpy(char *, const char *);
void SaveGame__SelectOrAddStorageFile(s8 *arg0, s8 *arg1) {
    s32 sp8;

    if (SaveGame__FindStorageFileIndex(arg0, arg1, &sp8) == 0) {
        strcpy(arg0 + ((sp8 << 6) + 0xAC), arg1);
        M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(arg0, s32 *, 0x10) + 1);
    }
    M2C_FIELD(arg0, void **, 0x28) = (void *) (arg0 + ((sp8 << 6) + 0xAC));
}
