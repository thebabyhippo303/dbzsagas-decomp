/* FluffLoop__CheckMemoryCardForSave @ 0x800547C8 (size: 0x1FC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void MainMenu__ResetScreenWidgets(s32, f32);
void Task__WaitSeconds(f32);
s32 SaveGame__ScanStorageSlots(char *);
s32 SaveGame__GetSlotBlockOffset(void *, s32);
extern M2C_UNK lbl_803199C0 __attribute__((section(".data")));
extern M2C_UNK lbl_8031A670 __attribute__((section(".data")));
extern M2C_UNK lbl_8031A6E4 __attribute__((section(".data")));
extern f32 lbl_8031A6EC __attribute__((section(".data")));
extern f32 lbl_8031A6F0 __attribute__((section(".data")));
extern void *lbl_803DC368;
extern s32 lbl_803DC704;
extern void *lbl_803DCC60;
extern void *lbl_803DCC70;

void FluffLoop__CheckMemoryCardForSave(void *arg0) {
    u32 stk16;
    u32 stk20;
    s32 sp8;
    s32 spC;
    s32 temp_r0;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 var_ctr;
    s32 var_r31;
    s32 var_r4;
    s32 flag;
    u32 temp_r29;
    void *temp_r8;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_4;
    s32 *var_r9;

    flag = lbl_803DC704;
    M2C_FIELD(lbl_803DCC60, s32 *, 8) = 1;
    if (flag != 0) {
        MainMenu__ResetScreenWidgets(flag, lbl_8031A6EC);
    }
    temp_r9 = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(temp_r9, void (**)(void *, void *, void *), 0x3DC)(arg0 + M2C_FIELD(temp_r9, s16 *, 0x3D8), &lbl_803199C0, &lbl_8031A670);
    Task__WaitSeconds(lbl_8031A6F0);
    temp_r9_2 = M2C_FIELD(lbl_803DCC70, void **, 0xC);
    temp_r3 = M2C_FIELD(temp_r9_2, s32 (**)(void *, s32), 0x14)(lbl_803DCC70 + M2C_FIELD(temp_r9_2, s16 *, 0x10), 0);
    M2C_FIELD(lbl_803DCC60, s32 *, 8) = 0;
    if (temp_r3 == 0) {
        goto scan_path;
    }
    temp_r9 = M2C_FIELD(arg0, void **, 0x19C);
    var_r4 = temp_r3;
    goto block_16;
scan_path:
    M2C_FIELD(lbl_803DCC60, s32 *, 8) = 1;
    temp_r3_2 = SaveGame__ScanStorageSlots(M2C_FIELD(lbl_803DC368, void **, 0x5388));
    if (temp_r3_2 == 0) {
        goto check_loop;
    }
    if (temp_r3_2 == 2) {
        goto check_loop;
    }
    temp_r9 = M2C_FIELD(arg0, void **, 0x19C);
    var_r4 = temp_r3_2;
    goto block_16;
check_loop:
    temp_r9_3 = M2C_FIELD(lbl_803DCC70, void **, 0xC);
    var_r31 = 0;
    M2C_FIELD(temp_r9_3, void (**)(void *, s32), 0x14)(lbl_803DCC70 + M2C_FIELD(temp_r9_3, s16 *, 0x10), 0);
    var_ctr = 3;
    var_r9 = (s32 *)((char *)M2C_FIELD(lbl_803DC368, void **, 0x5388) + 0x60);
    do {
        temp_r0 = *var_r9++;
        if (temp_r0 != 0) {
            var_r31 += 1;
        }
        var_ctr -= 1;
    } while (var_ctr != 0);
    if (var_r31 == 3) {
        var_r31 = 1;
    }
    temp_r29 = var_r31 * SaveGame__GetSlotBlockOffset(M2C_FIELD(lbl_803DC368, void **, 0x5388), 0);
    temp_r9_4 = M2C_FIELD(lbl_803DCC70, void **, 0xC);
    M2C_FIELD(temp_r9_4, void (**)(void *, s32, u32 *, u32 *), 0xD4)(lbl_803DCC70 + M2C_FIELD(temp_r9_4, s16 *, 0xD0), 0, &stk16, &stk20);
    if ((stk16 < (u32)var_r31) || (stk20 < temp_r29)) {
        temp_r9 = M2C_FIELD(arg0, void **, 0x19C);
        var_r4 = 4;
block_16:
        M2C_FIELD(temp_r9, void (**)(void *, s32), 0x3B4)(arg0 + M2C_FIELD(temp_r9, s16 *, 0x3B0), var_r4);
        return;
    }
    temp_r8 = M2C_FIELD(arg0, void **, 0x19C);
    sp8 = M2C_FIELD(&lbl_8031A6E4, s32 *, 0);
    spC = M2C_FIELD(&lbl_8031A6E4, s32 *, 4);
    M2C_FIELD(temp_r8, void (**)(void *, void *), 0x40C)(arg0 + M2C_FIELD(temp_r8, s16 *, 0x408), &sp8);
}
