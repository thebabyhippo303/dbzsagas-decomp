/* SaveMenu__BuildMemoryCardErrorDialog @ 0x80053544 (size: 0x418, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

int SaveGame__GetSlotBlockOffset(void *, int);
s32 SaveGame__ScanStorageSlots(void *);
void SaveMenu__LoadSharedResources(void);
void fn_802675F8(void *, const char *);
void fn_80267EE8(void *, const char *, int);
void fn_8026805C(void *);
void fn_80268398(void *, void *);
void fn_80268BA0(void *, int);
void fn_8026BF14(void *);
void fn_8026C5AC(void *, f32, f32);
M2C_UNK SaveMenu__ResetNavigationPromptColors(void *); /* extern */
M2C_UNK fn_8026762C(void *, f32, f32, f32, f32);    /* extern */
M2C_UNK fn_8026826C(void *, f32, f32, f32, f32);    /* extern */
M2C_UNK fn_802683E0(void *, f32, f32, f32);         /* extern */
M2C_UNK fn_80268718(void *, M2C_UNK);               /* extern */
M2C_UNK *fn_8026F9CC(M2C_UNK *, s32, s32);          /* extern */
extern s8 lbl_80319AD4 __attribute__((section(".data")));
extern s8 lbl_80319CE0 __attribute__((section(".data")));
extern M2C_UNK lbl_80319F18 __attribute__((section(".data")));
extern s8 lbl_80319F54 __attribute__((section(".data")));
extern M2C_UNK lbl_80319F5C __attribute__((section(".data")));
extern M2C_UNK lbl_80319FCC __attribute__((section(".data")));
extern M2C_UNK lbl_8031A004 __attribute__((section(".data")));
extern s8 lbl_8031A060 __attribute__((section(".data")));
extern M2C_UNK lbl_8031A074 __attribute__((section(".data")));
extern s8 lbl_8031A2DC __attribute__((section(".data")));
extern M2C_UNK lbl_8031A2F4 __attribute__((section(".data")));
extern M2C_UNK lbl_8031A3DC __attribute__((section(".data")));
extern f32 lbl_8031A498 __attribute__((section(".data")));
extern f32 lbl_8031A49C __attribute__((section(".data")));
extern f32 lbl_8031A4A0 __attribute__((section(".data")));
extern f32 lbl_8031A4A4 __attribute__((section(".data")));
extern f32 lbl_8031A4A8 __attribute__((section(".data")));
extern f32 lbl_8031A4AC;
extern f32 lbl_8031A4B0 __attribute__((section(".data")));
extern f32 lbl_8031A4B4 __attribute__((section(".data")));
extern void *lbl_803DC368;
extern s32 lbl_803DC40C;
extern void *lbl_803DCC60;

void SaveMenu__BuildMemoryCardErrorDialog(s32 arg0, s32 arg1) {
    M2C_UNK *var_r4;
    s32 *var_r9;
    s32 temp_r0;
    s32 temp_r24;
    s32 temp_r25;
    s32 temp_r28;
    s32 temp_r29;
    s32 temp_r30;
    s32 var_ctr;
    s32 var_r26;
    s32 var_r29;
    void *temp_r30_2;
    void *temp_r30_3;
    void *temp_r30_4;
    void *temp_r30_5;
    void *temp_r30_6;
    void *temp_r31;
    void *temp_r3;
    void *var_r3;

    var_r26 = 0;
    temp_r3 = M2C_FIELD(lbl_803DC368, void **, 0x5388);
    temp_r28 = arg0 + 0x10000;
    temp_r31 = arg0 + 0xD4C4;
    temp_r25 = SaveGame__GetSlotBlockOffset(temp_r3, M2C_FIELD(temp_r3, s32 *, 0x48));
    temp_r30 = SaveGame__GetSlotBlockOffset(M2C_FIELD(lbl_803DC368, void **, 0x5388), 0);
    temp_r29 = SaveGame__GetSlotBlockOffset(M2C_FIELD(lbl_803DC368, void **, 0x5388), 1);
    temp_r24 = temp_r30 + temp_r29 + SaveGame__GetSlotBlockOffset(M2C_FIELD(lbl_803DC368, void **, 0x5388), 2);
    SaveMenu__LoadSharedResources();
    M2C_FIELD(lbl_803DCC60, s32 *, 8) = 0;
    lbl_803DC40C = 0;
    fn_8026805C(temp_r31);
    fn_8026826C(temp_r31, lbl_8031A498, lbl_8031A49C, lbl_8031A498, lbl_8031A49C);
    fn_802675F8(temp_r31, &lbl_80319AD4);
    fn_8026762C(temp_r31, lbl_8031A4A0, lbl_8031A4A0, lbl_8031A4A0, lbl_8031A4A0);
    if (arg1 != 6) {
        if (arg1 <= 6) {
            if (arg1 != 3) {
                if (arg1 <= 3) {
                    goto block_9;
                }
                var_r29 = temp_r28;
                fn_802683E0(temp_r31, lbl_8031A4A4, lbl_8031A4A8, lbl_8031A4AC);
                SaveGame__ScanStorageSlots(M2C_FIELD(lbl_803DC368, void **, 0x5388));
                var_ctr = 3;
                var_r9 = M2C_FIELD(lbl_803DC368, void **, 0x5388) + 0x60;
                do {
                    temp_r0 = *var_r9;
                    var_r9 += 4;
                    if (temp_r0 != 0) {
                        var_r26 += 1;
                    }
                    var_ctr -= 1;
                } while (var_ctr != 0);
                if (var_r26 <= 2) {
                    temp_r30_2 = arg0 + 0xD4C4;
                    fn_80268398(temp_r30_2, fn_8026F9CC(&lbl_8031A2F4, temp_r25, temp_r24));
                    fn_80267EE8(temp_r30_2, &lbl_8031A2DC, 0x100);
                } else {
                    temp_r30_3 = arg0 + 0xD4C4;
                    fn_80268398(temp_r30_3, fn_8026F9CC(&lbl_8031A3DC, temp_r25, temp_r24));
                    fn_80267EE8(temp_r30_3, &lbl_8031A2DC, 0x100);
                }
                temp_r30_4 = arg0 + 0xD4C4;
                fn_80267EE8(temp_r30_4, &lbl_80319F54, 0x201);
                var_r3 = temp_r30_4;
            } else {
                var_r29 = temp_r28;
                fn_80268398(temp_r31, &lbl_8031A004);
                fn_80267EE8(temp_r31, &lbl_8031A060, 0x202);
                goto block_24;
            }
            goto block_25;
        }
        if (arg1 != 8) {
            if (arg1 >= 8) {
                if (arg1 != 9) {
                    if (arg1 != 0xA) {
block_9:
                        temp_r30_5 = arg0 + 0xD4C4;
                        var_r29 = arg0 + 0x10000;
                        fn_80268398(temp_r30_5, fn_8026F9CC(&lbl_80319F18, SaveGame__GetSlotBlockOffset(M2C_FIELD(lbl_803DC368, void **, 0x5388), 0), temp_r24));
                        fn_80267EE8(temp_r30_5, &lbl_8031A2DC, 0x100);
                        fn_80267EE8(temp_r30_5, &lbl_80319F54, 0x201);
                        var_r3 = temp_r30_5;
                    } else {
                        var_r4 = &lbl_80319FCC;
                        var_r29 = temp_r28;
                        goto block_23;
                    }
                } else {
                    var_r29 = temp_r28;
                    fn_80268398(temp_r31, &lbl_8031A004);
                    fn_80267EE8(temp_r31, &lbl_8031A060, 0x202);
                    goto block_24;
                }
                goto block_25;
            }
            fn_80268398(temp_r31, &lbl_80319F5C);
            var_r29 = temp_r28;
            fn_80267EE8(temp_r31, &lbl_80319CE0, 0x214);
            fn_80267EE8(temp_r31, &lbl_8031A2DC, 0x100);
            fn_80267EE8(temp_r31, &lbl_80319F54, 0x201);
            fn_80268718(temp_r31, 0x201);
        } else {
            var_r29 = temp_r28;
            var_r4 = fn_8026F9CC(&lbl_80319F18, temp_r25, temp_r24);
            goto block_23;
        }
    } else {
        var_r29 = temp_r28;
        fn_8026805C(temp_r31);
        var_r4 = &lbl_8031A074;
block_23:
        fn_80268398(temp_r31, var_r4);
block_24:
        fn_80267EE8(temp_r31, &lbl_8031A2DC, 0x100);
        fn_80267EE8(temp_r31, &lbl_80319F54, 0x201);
        var_r3 = temp_r31;
block_25:
        fn_80268718(var_r3, 0x201);
    }
    temp_r30_6 = var_r29 - 0x2B3C;
    fn_8026C5AC(var_r29 + 0x248, lbl_8031A4B0, lbl_8031A4B4);
    fn_80268BA0(temp_r30_6, 1);
    fn_8026BF14(temp_r30_6);
    SaveMenu__ResetNavigationPromptColors(temp_r30_6);
}
