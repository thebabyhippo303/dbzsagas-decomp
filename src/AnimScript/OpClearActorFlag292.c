/* AnimScript__OpClearActorFlag292 @ 0x80237168 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 AnimScript__OpClearActorFlag292(void *arg0, s32 arg1, s32 *arg2) {
    void *temp_r9;
    u32 base = (u32)arg0 + 0xF0;

    temp_r9 = *(void **)(base + (u32)(arg1 << 2));
    if ((temp_r9 != NULL) && ((s32) M2C_FIELD(M2C_FIELD(temp_r9, void **, 0x1C), s32 *, 0x38) != 0)) {
        *arg2 += 4;
    }
    M2C_FIELD(arg0, s32 *, 0x124) = (s32) (M2C_FIELD(arg0, s32 *, 0x124) & ~1);
    return 0;
}
