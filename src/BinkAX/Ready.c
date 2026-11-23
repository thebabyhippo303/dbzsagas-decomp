/* BinkAX__Ready @ 0x802EBCA4 (size: 0x224, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 BinkAX__GetPlayPosition(void *);
void BinkAX__QueueUpload(void *);
u32 RADTimerRead(void);
void * memset(void *, int, u32);
s32 BinkAX__Ready(void *arg0) {
    s32 temp_r3;
    s32 var_r3;
    u32 temp_r0;
    u32 temp_r0_2;
    u32 temp_r0_3;
    u32 temp_r11;
    u32 temp_r30;
    u32 temp_r3_2;
    u32 temp_r3_3;
    u32 temp_r5;
    u32 temp_r9;
    u32 temp_r9_2;
    u32 var_r9;
    u32 var_r9_2;

    if ((*(volatile s32 *)((char *)arg0 + 0xFC) == 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x60) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0xC8) != 0) && (*(volatile s32 *)((char *)arg0 + 0xF8) != 1)) {
        if (*(volatile s32 *)((char *)arg0 + 0xF8) == 0) {
            return (u32) M2C_FIELD(arg0, u32 *, 0x100) < (u32) M2C_FIELD(arg0, u32 *, 0x104);
        }
        BinkAX__QueueUpload(arg0);
        temp_r3 = BinkAX__GetPlayPosition(arg0 + 0x78);
        M2C_FIELD(arg0, s32 *, 0x10C) = temp_r3;
        temp_r3_2 = RADTimerRead();
        if ((u32) (temp_r3_2 - M2C_FIELD(arg0, u32 *, 0x114)) >= (u32) M2C_FIELD(arg0, u32 *, 0x118)) {
            M2C_FIELD(arg0, u32 *, 0x114) = temp_r3_2;
            goto block_15;
        }
        temp_r9 = M2C_FIELD(arg0, u32 *, 0xF0);
        M2C_FIELD(arg0, u32 *, 0x114) = temp_r3_2;
        if ((u32) temp_r3 < temp_r9) {
            var_r9 = (temp_r3 + M2C_FIELD(arg0, u32 *, 0xDC)) - temp_r9;
        } else {
            var_r9 = temp_r3 - temp_r9;
        }
        if (var_r9 <= 0x3FFU) {
            var_r9_2 = 0;
        } else {
            var_r9_2 = (var_r9 - 0x400) & 0xFFFFFFFC;
        }
        if (var_r9_2 >= (u32) M2C_FIELD(arg0, u32 *, 0x110)) {
block_15:
            temp_r11 = M2C_FIELD(arg0, u32 *, 0xE0);
            M2C_FIELD(arg0, s32 *, 0x5C) = 1;
            temp_r3_3 = M2C_FIELD(arg0, u32 *, 0xDC);
            temp_r0 = (((u32) temp_r3 / temp_r11) + 1) * temp_r11;
            M2C_FIELD(arg0, u32 *, 0xF0) = temp_r0;
            if (temp_r0 >= temp_r3_3) {
                M2C_FIELD(arg0, u32 *, 0xF0) = (u32) (temp_r0 - temp_r3_3);
            }
            temp_r0_2 = M2C_FIELD(arg0, u32 *, 0xF0);
            temp_r5 = M2C_FIELD(arg0, u32 *, 0xE0);
            temp_r9_2 = M2C_FIELD(arg0, u32 *, 0xDC);
            temp_r30 = temp_r0_2 + temp_r5;
            M2C_FIELD(arg0, u32 *, 0xF4) = temp_r0_2;
            M2C_FIELD(arg0, u32 *, 0x100) = temp_r5;
            if (temp_r30 >= temp_r9_2) {
                memset(M2C_FIELD(arg0, void **, 0xE4) + temp_r0_2, 0, temp_r9_2 - temp_r0_2);
                memset(M2C_FIELD(arg0, void **, 0xE4), 0, temp_r30 - M2C_FIELD(arg0, u32 *, 0xDC));
                if ((s32) M2C_FIELD(arg0, s32 *, 0xCC) != 0) {
                    temp_r0_3 = M2C_FIELD(arg0, u32 *, 0xF0);
                    memset(M2C_FIELD(arg0, void **, 0xE8) + temp_r0_3, 0, M2C_FIELD(arg0, u32 *, 0xDC) - temp_r0_3);
                    memset(M2C_FIELD(arg0, void **, 0xE8), 0, temp_r30 - M2C_FIELD(arg0, u32 *, 0xDC));
                }
                M2C_FIELD(arg0, u32 *, 0xF0) = (u32) (temp_r30 - M2C_FIELD(arg0, u32 *, 0xDC));
            } else {
                memset(M2C_FIELD(arg0, void **, 0xE4) + temp_r0_2, 0, temp_r5);
                if ((s32) M2C_FIELD(arg0, s32 *, 0xCC) != 0) {
                    memset(M2C_FIELD(arg0, void **, 0xE8) + M2C_FIELD(arg0, u32 *, 0xF0), 0, M2C_FIELD(arg0, u32 *, 0xE0));
                }
                M2C_FIELD(arg0, u32 *, 0xF0) = temp_r30;
            }
            return 1;
        }
        if ((var_r9_2 < (u32) M2C_FIELD(arg0, u32 *, 0xE0)) || (var_r3 = 1, (((u32) M2C_FIELD(arg0, u32 *, 0x100) < (u32) M2C_FIELD(arg0, u32 *, 0x104)) == 0))) {
            goto block_27;
        }
        /* Duplicate return node #28. Try simplifying control flow for better match */
        return var_r3;
    }
block_27:
    var_r3 = 0;
    return var_r3;
}
