/* ShatterPieces__SerializeState @ 0x800F0694 (size: 0xD4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0
s32 ShatterPieces__GetFixedStateSize(void *arg0);
s32 AnimScript__SaveState(void *arg0, void *arg1);
s32 AnimScript__GetPreRestoreEntryPoint(void *arg0, s32 arg1);
s32 AnimScript__CallActorLabelWithResult(void *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 AnimScript__RestoreState(void *arg0, void *arg1, s32 arg2);
s32 AnimScript__GetPostRestoreEntryPoint(void *arg0, s32 arg1);
s32 ShatterPieces__GetStateSize(void *arg0);
void ShatterPieces__SerializeState(void *arg0, void *arg1, s32 arg2) {
    void *a0 = arg0;
    s32 res;
    void *a1 = arg1;
    s32 e;
    if (arg2 != 0) {
        void *p30 = (char *)a0 + 28;
        *(s32 *)a1 = AnimScript__SaveState(p30, (char *)a1 + ShatterPieces__GetFixedStateSize(a0));
    } else {
        void *p30 = (char *)a0 + 28;
        res = -2;
        e = AnimScript__GetPreRestoreEntryPoint(p30, 3);
        if (e != -1) {
            res = AnimScript__CallActorLabelWithResult(p30, e, 0, 0);
        }
        if (res == -2) {
            AnimScript__RestoreState(p30, (char *)a1 + ShatterPieces__GetFixedStateSize(a0), *(s32 *)a1);
        }
        e = AnimScript__GetPostRestoreEntryPoint(p30, 3);
        if (e != -1) {
            AnimScript__CallActorLabelWithResult(p30, e, 0, 1);
        }
    }
    ShatterPieces__GetStateSize(a0);
}
