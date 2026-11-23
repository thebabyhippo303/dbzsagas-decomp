/* Profiler__Initialize @ 0x801851C0 (size: 0x98, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Profiler__InitTimingBars(void);
void * MemHeap__Alloc(unsigned int, unsigned int);
void * memset(void *, int, u32);
extern void *lbl_803DCBC8;
extern void *lbl_803DCBCC;
extern u32 lbl_803DCBD0;
extern s32 lbl_803DCBD8;
extern s32 lbl_803DCBDC;
extern s32 lbl_803DCBE0;
extern s32 lbl_803DCBE4;
extern s32 lbl_803DD4F4;
extern s32 lbl_803DD4F8;

void Profiler__Initialize(u32 arg0) {
    void *temp_r3;

    if (arg0 != 0) {
        if (arg0 <= 0x11U) {
            lbl_803DCBD0 = 0x12;
        } else {
            lbl_803DCBD0 = arg0;
        }
        temp_r3 = MemHeap__Alloc(lbl_803DCBD0 * 0x228, 8U);
        lbl_803DCBC8 = temp_r3;
        memset(temp_r3, 0, lbl_803DCBD0 * 0x228);
        lbl_803DCBCC = MemHeap__Alloc(lbl_803DCBD0 * 4, 8U);
        lbl_803DD4F4 = 0;
        lbl_803DD4F8 = 0;
        lbl_803DCBE4 = 0;
        lbl_803DCBD8 = 0;
        lbl_803DCBDC = 0;
        lbl_803DCBE0 = 0;
        Profiler__InitTimingBars();
    }
}
