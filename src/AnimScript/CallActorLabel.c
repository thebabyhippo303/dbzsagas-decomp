/* AnimScript__CallActorLabel @ 0x802AC034 (size: 0xFC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Script__PushInt(void *, s32, s32);
void AnimScript__SetLabelAddress(void *, s32, s32);
s32 Script__PopInt(void *, s32);
void AnimScript__RunThread(void *, s32, s32);
void AnimScript__CallActorLabel(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_r24;
    s32 temp_r28;
    s32 temp_r30;
    s32 temp_r29;
    s32 temp_r3;
    void *temp_r9;
    void *temp_r9_2;

    temp_r9 = M2C_FIELD(arg0, void **, 0xFC);
    temp_r24 = M2C_FIELD(temp_r9, u8 *, 4) & 8;
    if (temp_r24 == 0) {
        temp_r30 = M2C_FIELD(temp_r9, s32 *, 0xC);
        temp_r29 = M2C_FIELD(temp_r9, s32 *, 0x10);
        temp_r28 = M2C_FIELD(temp_r9, s32 *, 0x14);
        Script__PushInt(arg0, 3, arg2);
        Script__PushInt(arg0, 3, arg3);
        Script__PushInt(arg0, 3, arg4);
        AnimScript__SetLabelAddress(arg0, 3, arg1);
        AnimScript__RunThread(arg0, 3, 1);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0xFC), s32 *, 0xC) = temp_r30;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0xFC), s32 *, 0x10) = temp_r29;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0xFC), s32 *, 0x14) = temp_r28;
        temp_r3 = Script__PopInt(arg0, 3);
        if (temp_r3 != -2) {
            if (temp_r3 != -1) {
                goto STB;
            }
            return;
        } else {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0xFC), s32 *, 0x10) = temp_r24;
            goto END;
        }
STB:
        temp_r9_2 = M2C_FIELD(arg0, void **, 0xFC);
        M2C_FIELD(temp_r9_2, s8 *, 9) = 0xFFFF;
        M2C_FIELD(temp_r9_2, s8 *, 8) = 0xFFFF;
        AnimScript__SetLabelAddress(arg0, 3, temp_r3);
END: ;
    }
}
