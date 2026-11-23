/* Profiler__BeginSection @ 0x80185744 (size: 0xD4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

u32 Timer__GetMilliseconds(void);
void Profiler__AccumulateSection(s32);
extern s32 lbl_803A1B34[] __attribute__((section(".data")));
extern s32 lbl_803DCBC8;
extern u64 lbl_803DD4D8;
extern s32 lbl_803DD4F8;
extern s32 lbl_803DD4FC;

void Profiler__BeginSection(s32 arg0) {
    s32 temp_r30;
    s32 idx;
    s32 *cnt;
    u64 ts;
    void *temp_r10;
    void *temp_r11;

    if (lbl_803DCBC8 != 0) {
        if (arg0 != -1) {
            if ((s32) lbl_803DD4F8 != 0) {
                temp_r30 = arg0 * 0x228;
                Timer__GetMilliseconds();
                temp_r11 = temp_r30 + lbl_803DCBC8;
                if ((s32) M2C_FIELD(temp_r11, u32 *, 0x1D8) == 1) {
                    M2C_FIELD(temp_r11, u64 *, 0x1D0) = lbl_803DD4D8;
                    return;
                }
                if ((s32) lbl_803DD4FC > 0) {
                    Profiler__AccumulateSection(lbl_803A1B34[lbl_803DD4FC - 1]);
                }
                temp_r10 = temp_r30 + lbl_803DCBC8;
                cnt = &lbl_803DD4FC;
                ts = lbl_803DD4D8;
                idx = *cnt;
                lbl_803A1B34[idx] = arg0;
                idx += 1;
                *cnt = idx;
                M2C_FIELD(temp_r10, u64 *, 0x1D0) = ts;
            }
        }
    }
}
