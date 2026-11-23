/* CollPart__InsertRowOrColumn @ 0x8029F14C (size: 0xF8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK; typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

/* WIP 96.8% (cand f48ac2f1, 4B/3ins): CollPart @ 0x8029F14C. if(w)A(16,8)elseB(20,12); new=NewArray(r*c*2); dec rows/cols by w; for(i<rows){guard; src=(i*cols*2)+old(u32-cast for off+base add order); ctr=cols; dst=(i*full*2)+new; do{*dst++=*src++(u16,++stride)}while(dec!=0→bdnz)}; free-old-if; self[4]=new; ret 1. Walls: guard cmpwi-cr7/ble-cr7 vs CR0 (tried >0, <=0-goto, <1 — all CR7; the blt disp auto-converges). Next: find CR0 lever for the inner guard (while-form? ctr-tested guard?). */
typedef int s32; typedef unsigned short u16;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
u32 Mem__NewArray(u32);
void Mem__DeleteArray(void *);
void CollPart__AppendAxisLabel(s32, s32, s32, s32);
s32 CollPart__InsertRowOrColumn(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_r6;
    s32 var_r8;
    s32 var_r10;
    s32 var_ctr;
    u16 *var_r11;
    u16 *var_r9;
    u16 temp_r0;
    u32 temp_r30;
    void *temp_r3;
    if (arg2 != 0) {
        CollPart__AppendAxisLabel(arg0, arg1, arg0 + 16, arg0 + 8);
    } else {
        CollPart__AppendAxisLabel(arg0, arg1, arg0 + 20, arg0 + 12);
    }
    temp_r30 = Mem__NewArray(M2C_FIELD(arg0, s32 *, 8) * M2C_FIELD(arg0, s32 *, 12) * 2);
    var_r6 = M2C_FIELD(arg0, s32 *, 8);
    var_r8 = M2C_FIELD(arg0, s32 *, 12);
    if (arg2 != 0) {
        var_r6 -= 1;
    } else {
        var_r8 -= 1;
    }
    for (var_r10 = 0; var_r10 < var_r6; var_r10++) {
        if (var_r8 < 1) {
            goto nextiter;
        }
        var_r11 = (u16 *)((u32)(var_r10 * var_r8 * 2) + (u32)M2C_FIELD(arg0, void **, 4));
        var_ctr = var_r8;
        var_r9 = (u16 *)((u32)(var_r10 * M2C_FIELD(arg0, s32 *, 12) * 2) + (u32)(void *)temp_r30);
        do {
            temp_r0 = *var_r11;
            var_r11 += 1;
            *var_r9 = temp_r0;
            var_r9 += 1;
            var_ctr -= 1;
        } while (var_ctr != 0);
nextiter: ;
    }
    temp_r3 = M2C_FIELD(arg0, void **, 4);
    if (temp_r3 != NULL) {
        Mem__DeleteArray(temp_r3);
    }
    M2C_FIELD(arg0, void **, 4) = (void *)temp_r30;
    return 1;
}
