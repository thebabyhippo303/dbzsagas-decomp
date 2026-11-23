/* fclose @ 0x802CDEC4 (size: 0xB8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK; typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0

s32 Stdio__FlushFile(void *);
extern void *lbl_803DC9E8;

#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))

s32 fclose(void *arg0) {
    void *file = arg0;
    s32 rc;
    u16 flags;
    s32 (*closeFn)(s32);

    if (file == NULL) {
        return 0;
    }
    if (M2C_FIELD(file, void **, 0x5C) == NULL) {
        M2C_FIELD(file, void **, 0x5C) = lbl_803DC9E8;
    }
    if (M2C_FIELD(M2C_FIELD(file, void **, 0x5C), s32 *, 0x38) == 0) {
        Stdio__Initialize(M2C_FIELD(file, void **, 0x5C));
    }
    flags = M2C_FIELD(file, u16 *, 0x0C);
    if (flags == 0) {
        return 0;
    }
    if ((flags & 8) != 0) {
        rc = Stdio__FlushFile(file);
    } else {
        rc = 0;
    }
    closeFn = M2C_FIELD(file, s32 (**)(s32), 0x2C);
    if (closeFn != NULL && closeFn(M2C_FIELD(file, s32 *, 0x1C)) < 0) {
        rc = -1;
    }
    M2C_FIELD(file, u16 *, 0x0C) = 0;
    return rc;
}
