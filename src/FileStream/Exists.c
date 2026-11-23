/* FileStream__Exists @ 0x8017F05C (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

/* Byte-matched: FileStream__Exists @ 0x8017F05C (0x40). ProDG -O2. */
extern void *FileStream__Open(const char *path, int mode, int flags, int extra);
extern void FileStream__CloseSlot(void *stream);

int FileStream__Exists(const char *path, int mode) {
    void *stream = FileStream__Open(path, mode, 0, 0);

    if (stream == 0)
        return 0;
    FileStream__CloseSlot(stream);
    return 1;
}
