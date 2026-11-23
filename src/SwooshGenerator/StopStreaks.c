/* SwooshGenerator__StopStreaks @ 0x80231344 (size: 0xAC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void SwooshStreak__Deactivate(u32, s32);
typedef struct { char pad[0x18]; s32 f18; char pad2[0x88]; s32 fA4; } LblStruct;
extern LblStruct lbl_803ADE7C __attribute__((section(".data")));

void SwooshGenerator__StopStreaks(void *arg0) {
    void *a = arg0;
    s32 i;
    s32 off;
    s32 ids;
    s32 tab;
    s32 id;
    s32 e;
    if (!(M2C_FIELD(a, s32 *, 8) & 0x10)) {
        M2C_FIELD(a, s32 *, 8) |= 0x10;
        i = 0;
        M2C_FIELD(a, s32 *, 0x14) = lbl_803ADE7C.fA4++;
        if (i < M2C_FIELD(a, s32 *, 0x38)) {
            off = 0;
            do {
                ids = M2C_FIELD(a, s32 *, 0x3C);
                tab = lbl_803ADE7C.f18;
                id = *(u16 *)(off + ids);
                e = tab + id * 0x98;
                if (M2C_FIELD(e, u16 *, 8) & 4) {
                    SwooshStreak__Deactivate(M2C_FIELD(e, u32 *, 0), 0);
                }
                i += 1;
                off += 4;
            } while (i < M2C_FIELD(a, s32 *, 0x38));
        }
    }
}
