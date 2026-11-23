/* SoundDriver__FindSound @ 0x80194250 (size: 0xEC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 SoundBank__FindSound(s32, u8 *);
s32 SoundDriver__FindSound(void **arg0, u8 *arg1, s32 *arg2) {
    s32 ld_0;
    s32 ld_4;
    s32 i;
    s32 idx;
    s32 cnt;
    s32 bank;
    s32 result;
    s32 *p;
    void *arr;

    if ((arg1 != NULL) && (*arg1 != 0)) {
        i = 0;
        if (i < M2C_FIELD(*arg0, s32 *, 4)) {
            do {
                idx = i;
                arr = *arg0;
                if (i < 0) {
                    ld_4 = M2C_FIELD(arr, s32 *, 4);
                    idx = ld_4 - 1;
                }
                cnt = M2C_FIELD(arr, s32 *, 4);
                if ((idx >= cnt) || (cnt == 0)) {
                    p = NULL;
                } else {
                    ld_0 = M2C_FIELD(arr, s32 *, 0);
                    p = (s32 *)(ld_0 + idx * 4);
                }
                bank = *p;
                result = SoundBank__FindSound(bank, arg1);
                if (result != 0) {
                    if (arg2 != NULL) {
                        *arg2 = bank;
                    }
                    return result;
                }
                i++;
            } while (i < M2C_FIELD(*arg0, s32 *, 4));
        }
    }
    if (arg2 != NULL) {
        *arg2 = 0;
    }
    return 0;
}
