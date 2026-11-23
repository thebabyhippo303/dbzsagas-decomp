/* FileHandle__Open @ 0x80180310 (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

u32 FileHandle__AllocSlot(void);
s32 FileHandle__OpenPath(u32, s32, s32 *, s32);
extern s32 lbl_803DCB90;

u32 FileHandle__Open(s32 path, s32 *error, s32 flags) {
    u32 slot;

    slot = FileHandle__AllocSlot();
    if (slot == 0) {
        if (error != NULL) {
            *error = lbl_803DCB90;
        }
    } else if (FileHandle__OpenPath(slot, path, error, flags) != 0) {
        return slot;
    }
    return 0;
}
