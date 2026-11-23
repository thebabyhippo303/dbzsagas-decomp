/* MemHeap__GetStats @ 0x80181558 (size: 0x80, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

unsigned int MemHeap__GetSize(void *);
s32 MemHeap__GetFreeSize(void **);                  /* extern */

void MemHeap__GetStats(void **arg0, s32 *arg1, s32 *arg2, s32 *arg3, s32 *arg4) {
    s32 var_r11;
    void *var_r9;

    var_r9 = *arg0;
    var_r11 = 0;
    if (var_r9 != NULL) {
        do {
            var_r9 = M2C_FIELD(var_r9, void **, 4);
            var_r11 += 1;
        } while (var_r9 != NULL);
    }
    *arg2 = var_r11;
    *arg1 = MemHeap__GetFreeSize(arg0);
    *arg4 = 0;
    *arg3 = MemHeap__GetSize(arg0) - *arg1;
}
