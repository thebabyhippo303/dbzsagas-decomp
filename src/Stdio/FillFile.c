/* Stdio__FillFile @ 0x80167900 (size: 0x174, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32; typedef double f64; typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Stdio__Initialize();
void Stdio__ConfigureBuffer(void *);
s32 Stdio__FlushFile(void *);
M2C_UNK Stdio__ApplyToAllFiles(s32, s32);
extern M2C_UNK fflush __attribute__((section(".data")));
extern s8 *lbl_803DC9E8;

s32 Stdio__FillFile(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r3_2;
    s32 temp_r3_3;
    s8 *temp_r3;
    s32 temp_r0_3;
    s32 flg;
    u16 temp_r9;

    if ((s8 *) M2C_FIELD(arg0, s8 **, 0x5C) == NULL) {
        M2C_FIELD(arg0, s8 **, 0x5C) = (s8 *) lbl_803DC9E8;
    }
    temp_r3 = M2C_FIELD(arg0, s8 **, 0x5C);
    if ((s32) M2C_FIELD(temp_r3, s32 *, 0x38) == 0) {
        Stdio__Initialize(temp_r3);
    }
    temp_r9 = M2C_FIELD(arg0, u16 *, 0xC);
    M2C_FIELD(arg0, s32 *, 4) = 0;
    if (!(temp_r9 & 0x20)) {
        if (!(temp_r9 & 4)) {
            if (temp_r9 & 0x10) {
                if (temp_r9 & 8) {
                    temp_r3_2 = Stdio__FlushFile(arg0);
                    if (temp_r3_2 == 0) {
                        flg = M2C_FIELD(arg0, u16 *, 0xC) & ~8;
                        M2C_FIELD(arg0, s32 *, 8) = temp_r3_2;
                        M2C_FIELD(arg0, s32 *, 0x18) = temp_r3_2;
                        M2C_FIELD(arg0, u16 *, 0xC) = flg;
                        goto block_10;
                    }
                    goto block_22;
                }
block_10:
                M2C_FIELD(arg0, u16 *, 0xC) |= 4;
                goto block_14;
            }
            goto block_22;
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0x30) != 0) {
            temp_r0 = M2C_FIELD(arg0, s32 *, 0x3C);
            M2C_FIELD(arg0, s32 *, 4) = temp_r0;
            if (temp_r0 != 0) {
                M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 0x38);
                return 0;
            }
        }
block_14:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x10) == 0) {
            Stdio__ConfigureBuffer(arg0);
        }
        if (M2C_FIELD(arg0, u16 *, 0xC) & 3) {
            Stdio__ApplyToAllFiles((s32) M2C_FIELD(arg0, s8 **, 0x5C), (s32) &fflush);
        }
        temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x10);
        M2C_FIELD(arg0, s32 *, 0) = temp_r0_2;
        temp_r3_3 = M2C_FIELD(arg0, s32 (**)(s32, s32, s32), 0x20)(M2C_FIELD(arg0, s32 *, 0x1C), temp_r0_2, M2C_FIELD(arg0, s32 *, 0x14));
        M2C_FIELD(arg0, s32 *, 4) = temp_r3_3;
        temp_r0_3 = M2C_FIELD(arg0, u16 *, 0xC) & ~0x2000;
        M2C_FIELD(arg0, u16 *, 0xC) = temp_r0_3;
        if (temp_r3_3 > 0) {
            goto ok;
        }
        if (temp_r3_3 == 0) {
            M2C_FIELD(arg0, u16 *, 0xC) = (u16) (temp_r0_3 | 0x20);
        } else {
            M2C_FIELD(arg0, s32 *, 4) = 0;
            M2C_FIELD(arg0, u16 *, 0xC) = (u16) (temp_r0_3 | 0x40);
        }
    }
block_22:
    return -1;
ok:
    return 0;
}
