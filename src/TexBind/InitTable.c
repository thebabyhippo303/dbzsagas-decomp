/* TexBind__InitTable @ 0x8024E458 (size: 0x98, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void * Mem__New(u32);
void MemHeap__TagAllocation(void *);
extern s32 lbl_803B1DA4[];
extern void *lbl_803DCDFC;
extern s32 lbl_803DD624;

void TexBind__InitTable(void) {
    s32 var_r11;
    s32 *var_r9_2;
    s32 var_ctr;
    s32 var_ctr_2;
    void *temp_r3;
    void *var_r9;

    temp_r3 = Mem__New(0xF4U);
    M2C_FIELD(temp_r3, s16 *, 0xF0) = 0;
    var_ctr = 0x1E;
    var_r9 = temp_r3;
    var_r11 = 1;
    do {
        M2C_FIELD(var_r9, s16 *, 0) = (s16)var_r11;
        M2C_FIELD(var_r9, s16 *, 2) = 0x64;
        var_r11 += 0x64;
        M2C_FIELD(var_r9, s32 *, 4) = 0;
        var_r9 += 8;
        var_ctr -= 1;
    } while (var_ctr != 0);
    lbl_803DCDFC = temp_r3;
    MemHeap__TagAllocation(temp_r3);
    var_ctr_2 = 8;
    var_r9_2 = lbl_803B1DA4;
    var_r9_2 += 7;
    do {
        *var_r9_2 = 0;
        var_r9_2 -= 1;
        var_ctr_2 -= 1;
    } while (var_ctr_2 != 0);
    lbl_803DD624 = 0;
}
