/* BinkAX__UploadDoneStart @ 0x802EBB08 (size: 0x80, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


M2C_UNK BinkAX__GetPlayPosition(s32);
M2C_UNK RADTimerRead(void);
M2C_UNK BinkAX__SetVoicesState(s32, s32);
void BinkAX__UploadDoneStart(void *arg0) {
    void *temp_r30;
    void *temp_r31;

    temp_r31 = M2C_FIELD(arg0, void **, 4);
    if (((s32) M2C_FIELD(temp_r31, s32 *, 0xFC) == 0) && ((s32) M2C_FIELD(temp_r31, s32 *, 0x60) != 0) && ((s32) M2C_FIELD(temp_r31, s32 *, 0xF8) != 0)) {
        temp_r30 = temp_r31 + 0x78;
        M2C_FIELD(temp_r31, s32 *, 0x10C) = BinkAX__GetPlayPosition((s32) temp_r30);
        M2C_FIELD(temp_r31, s32 *, 0x114) = RADTimerRead();
        M2C_FIELD(temp_r31, s32 *, 0xF8) = 2;
        BinkAX__SetVoicesState((s32) temp_r30, 1);
    }
    M2C_FIELD(temp_r31, s32 *, 0xC4) = 0;
}
