/* Avatar__AIDestroy @ 0x8003B6AC (size: 0x120, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 Script__PopInt(void *, s32);
void AI__SetProne(void *, s32);
void Script__PushInt(void *, s32, s32);
s32 fn_8023A97C(void *, s32);
extern f32 lbl_80311A74 __attribute__((section(".data")));

void Avatar__AIDestroy(char *arg0, s32 arg1) {
    s16 temp_r3;
    s32 temp_r27;
    s32 temp_r30;
    s32 var_r26;
    s32 var_r31;
    void *temp_r31;

    temp_r30 = Script__PopInt(arg0, arg1);
    var_r26 = 1;
    var_r31 = Script__PopInt(arg0, arg1);
    temp_r27 = Script__PopInt(arg0, arg1);
    if (var_r31 != 0) {
        temp_r3 = fn_8023A97C(M2C_FIELD(temp_r30, void **, 0x84), 0);
        if ((s32) (temp_r3 & 0xFF00) == 0x300) {
            if ((temp_r3 & 0xFF) == 0x30C) {
                var_r31 = 0;
            }
        }
        if ((s32) M2C_FIELD(temp_r30, s32 *, 0x7E4) == 0) {
            M2C_FIELD(M2C_FIELD(temp_r30, void **, 0xB8C), s32 *, 0x4DC) = 1;
            goto block_6;
        }
    } else {
block_6:
        if ((s32) M2C_FIELD(temp_r30, s32 *, 0x7E4) == 0) {
            temp_r31 = M2C_FIELD(temp_r30, void **, 0xB8C);
            if (var_r31 != 0) {
                AI__SetProne(temp_r31, 1);
            } else {
                AI__SetProne(temp_r31, 0);
            }
            if (temp_r27 == 1) {
                M2C_FIELD(temp_r31, s32 *, 0x524) = temp_r27;
            } else {
                M2C_FIELD(temp_r31, s32 *, 0x524) = 0;
            }
        }
    }
    if (!((M2C_FIELD(temp_r30, f32 *, 0x288) / M2C_FIELD(temp_r30, f32 *, 0x28C)) > lbl_80311A74)) {
        var_r26 = 0;
    }
    Script__PushInt(arg0, arg1, var_r26);
}
