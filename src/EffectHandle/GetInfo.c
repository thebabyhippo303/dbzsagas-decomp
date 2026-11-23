/* EffectHandle__GetInfo @ 0x8022F378 (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: EffectHandle__GetInfo @ 0x8022F378 (0x70). ProDG -O2. */
typedef int s32;
typedef unsigned int u32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

extern s32 lbl_803ADD8C __attribute__((section(".data")));

s32 EffectHandle__GetInfo(u32 arg0, s32 *arg1, s32 *arg2, s32 *arg3, s32 *arg4) {
    void *temp_r10;

    temp_r10 = lbl_803ADD8C + ((arg0 >> 0x10U) * 0x94);
    if ((s32) M2C_FIELD(temp_r10, s32 *, 0x18) != (s32) arg0) {
        return 0;
    }
    if (arg1 != NULL) {
        *arg1 = M2C_FIELD(temp_r10, s32 *, 8);
    }
    if (arg2 != NULL) {
        *arg2 = M2C_FIELD(temp_r10, s32 *, 0x58);
    }
    if (arg3 != NULL) {
        *arg3 = M2C_FIELD(temp_r10, s32 *, 0x7C);
    }
    if (arg4 != NULL) {
        *arg4 = M2C_FIELD(temp_r10, s32 *, 0x90);
    }
    return 1;
}
