/* FluffLoop__StartCallbackTask @ 0x80051668 (size: 0xC4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void * Task__Create(s32, s32, s32, s32, s32, s32, s32);
extern M2C_UNK FluffLoop__ClearCallbacksForTarget __attribute__((section(".data")));
extern M2C_UNK FluffLoop__ProcessPendingCallbacks __attribute__((section(".data")));
extern M2C_UNK lbl_80319A54 __attribute__((section(".data")));

typedef struct { s32 a; u32 b; } Pair;
void FluffLoop__ScheduleMemoryCardCallbacks(void *arg0, void *arg1) {
    Pair p;
    void *temp_r9;
    char *base;

    p = *(Pair *)arg1;
    temp_r9 = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x414)(arg0 + M2C_FIELD(temp_r9, s16 *, 0x410));
    if (((s16) p.a == 0) && (((p.b >> 0x10U) == 0) || ((s32) p.b == 0))) {
        *(Pair *)((char *)arg0 + 0x49144) = *(Pair *)&lbl_80319A54;
    } else {
        *(Pair *)((char *)arg0 + 0x49144) = p;
    }
    base = (char *)arg0 + 0x50000;
    M2C_FIELD(base, void **, -0x6EC0) = Task__Create((s32) &FluffLoop__ProcessPendingCallbacks, (s32) &FluffLoop__ClearCallbacksForTarget, 0, 0, 0x10000, 0x10000, 3);
}
