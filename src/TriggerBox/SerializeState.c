/* TriggerBox__SerializeState @ 0x800FDFA8 (size: 0x16C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 TriggerBox__GetBaseStateSize(s32);
s32 TriggerBox__GetStateSize(void *);
M2C_UNK fn_80234A78(s32);
M2C_UNK fn_802B4FD4(s32, s32, s32);
typedef struct { u32 b31:1; u32 b30:1; u32 b29:1; u32 b28:1; u32 b27:1; u32 b26:1; u32 rest:26; } StateWord;
void TriggerBox__SerializeState(void *arg0, void *arg1, s32 arg2) {
    s32 temp_r3;
    u32 temp_r0;
    StateWord flags;
    void *temp_r9;

    if (arg2 != 0) {
        M2C_FIELD(arg1, f32 *, 0) = (f32) M2C_FIELD(arg0, f32 *, 0x50C);
        M2C_FIELD(arg1, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 0x52C);
        M2C_FIELD(arg1, f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 0x530);
        M2C_FIELD(arg1, s32 *, 0xC) = 0;
        M2C_FIELD(arg1, s32 *, 0x10) = (s32) M2C_FIELD(arg0, s32 *, 0x534);
        M2C_FIELD(arg1, s32 *, 0x14) = (s32) M2C_FIELD(arg0, s32 *, 0x550);
        temp_r0 = M2C_FIELD(arg1, u32 *, 0x18);
        *(u32 *)&flags = temp_r0;
        flags.b31 = M2C_FIELD(arg0, u32 *, 0x53C);
        temp_r0 = *(u32 *)&flags; M2C_FIELD(arg1, u32 *, 0x18) = temp_r0;
        flags.b30 = M2C_FIELD(arg0, u32 *, 0x540);
        temp_r0 = *(u32 *)&flags; M2C_FIELD(arg1, u32 *, 0x18) = temp_r0;
        flags.b29 = M2C_FIELD(arg0, u32 *, 0x544);
        temp_r0 = *(u32 *)&flags; M2C_FIELD(arg1, u32 *, 0x18) = temp_r0;
        flags.b28 = M2C_FIELD(arg0, u32 *, 0x548);
        temp_r0 = *(u32 *)&flags; M2C_FIELD(arg1, u32 *, 0x18) = temp_r0;
        flags.b27 = M2C_FIELD(arg0, u32 *, 0x54C);
        temp_r0 = *(u32 *)&flags; M2C_FIELD(arg1, u32 *, 0x18) = temp_r0;
        flags.b26 = M2C_FIELD(arg0, u32 *, 0x558);
        temp_r0 = *(u32 *)&flags; M2C_FIELD(arg1, u32 *, 0x18) = temp_r0;
        temp_r9 = M2C_FIELD(arg0, void **, 0x510);
        if (temp_r9 != NULL) {
            M2C_FIELD(arg1, s32 *, 0xC) = (s32) M2C_FIELD(temp_r9, s32 *, 0x10C);
        }
    } else {
        M2C_FIELD(arg0, f32 *, 0x50C) = (f32) M2C_FIELD(arg1, f32 *, 0);
        M2C_FIELD(arg0, f32 *, 0x52C) = (f32) M2C_FIELD(arg1, f32 *, 4);
        M2C_FIELD(arg0, f32 *, 0x530) = (f32) M2C_FIELD(arg1, f32 *, 8);
        M2C_FIELD(arg0, s32 *, 0x534) = (s32) M2C_FIELD(arg1, s32 *, 0x10);
        M2C_FIELD(arg0, s32 *, 0x550) = (s32) M2C_FIELD(arg1, s32 *, 0x14);
        M2C_FIELD(arg0, u32 *, 0x53C) = (u32) ((u32) M2C_FIELD(arg1, u32 *, 0x18) >> 0x1FU);
        M2C_FIELD(arg0, s32 *, 0x540) = (s32) (((u32) M2C_FIELD(arg1, u32 *, 0x18) >> 0x1EU) & 1);
        M2C_FIELD(arg0, s32 *, 0x544) = (s32) (((u32) M2C_FIELD(arg1, u32 *, 0x18) >> 0x1DU) & 1);
        M2C_FIELD(arg0, s32 *, 0x548) = (s32) (((u32) M2C_FIELD(arg1, u32 *, 0x18) >> 0x1CU) & 1);
        M2C_FIELD(arg0, s32 *, 0x54C) = (s32) (((u32) M2C_FIELD(arg1, u32 *, 0x18) >> 0x1BU) & 1);
        M2C_FIELD(arg0, s32 *, 0x558) = (s32) (((u32) M2C_FIELD(arg1, u32 *, 0x18) >> 0x1AU) & 1);
        temp_r3 = M2C_FIELD(arg1, s32 *, 0xC);
        if (temp_r3 != 0) {
            M2C_FIELD(arg0, void **, 0x510) = fn_80234A78(temp_r3);
        }
    }
    fn_802B4FD4((s32) arg0, (s32) (arg1 + TriggerBox__GetBaseStateSize((s32) arg0)), arg2);
    TriggerBox__GetStateSize(arg0);
}
