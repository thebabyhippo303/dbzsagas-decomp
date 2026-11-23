/* MemoryCard__CopyDiscFileToSaveInSlot @ 0x801D8018 (size: 0x248, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 MemoryCard__TranslateCardResult(void *, s32);
void * File__Open(char *, s32, s32);
u32 File__GetSize(void *);
s32 File__Read(void *, s32, s32);
void File__Release(void *);
void File__Destroy(void *, s32);
void * MemHeap__Alloc(unsigned int, unsigned int);
void memFree(void *);
void * memcpy(void *, const void *, unsigned int);
void * memset(void *, int, u32);
int strlen(const char *);
M2C_UNK fn_802DCA84(s32, s32, s32);
M2C_UNK fn_802DD73C(s32, s32, s32, s32);
M2C_UNK fn_802DCBA0(s32);
M2C_UNK fn_802DBD74(s32);
s32 MemoryCard__CopyDiscFileToSaveInSlot(void *arg0, s32 arg1, s8 *arg2) {
    s32 *var_r11_2;
    s32 temp_r0_2;
    s32  temp_r0_2_b;
    s32 temp_r3_2;
    s32 temp_r3_3;
    s32 temp_r3_6;
    s32 var_r11;
    s32 var_r8;
    u32 temp_r3_5;
    u32 var_r30;
    void *temp_r28;
    char *temp_r28_2;
    void *temp_r30;
    void *temp_r3_4;
    void *temp_r5;
    void *var_r27;
    void *var_r30_2;
    void *var_r9;

    M2C_FIELD(arg0, s32 *, 0x114) = 1;
    temp_r28 = arg0 + 0xF4;
    var_r30 = 0U;
    do {
        if (var_r30 < strlen(arg2)) {
            var_r27 = arg0 + 0xF4;
            *(s32 *)(temp_r28 + var_r30) = (u8) arg2[var_r30];
        } else {
            *(s32 *)(temp_r28 + var_r30) = 0x20;
            var_r27 = arg0 + 0xF4;
        }
        var_r30 += 1;
    } while ((s32) var_r30 <= 0x1F);
    temp_r5 = arg0 + 0x74;
    temp_r3_3 = fn_802DCA84(arg1, M2C_FIELD(arg0, s32 *, 0x64), (s32) temp_r5);
    if (temp_r3_3 != 0) {
        if (temp_r3_3 == -4) {
            *(s32 *)(arg0 + 0x6C + (arg1 * 4)) = 0;
            return 0;
        }
        temp_r3_2 = MemoryCard__TranslateCardResult(arg0, temp_r3_3);
        *(s32 *)(arg0 + 0x6C + (arg1 * 4)) = temp_r3_2;
        return temp_r3_2;
    }
    temp_r3_4 = File__Open(M2C_FIELD(arg0, s8 **, 0x60), 0, 0);
    temp_r3_5 = File__GetSize(temp_r3_4);
    temp_r3_6 = MemHeap__Alloc(temp_r3_5, 0x20U);
    File__Read(temp_r3_4, temp_r3_6, (s32) temp_r3_5);
    File__Release(temp_r3_4);
    if (temp_r3_4 != NULL) {
        File__Destroy(temp_r3_4, 3);
    }
    memset(M2C_FIELD(arg0, void **, 0x68), 0, 0x2000U);
    temp_r28_2 = M2C_FIELD(arg0, void **, 0x68);
    temp_r30 = temp_r28_2 + 0x20;
    M2C_FIELD(temp_r28_2, s32 *, 0xC) = 0xABBEABBE;
    M2C_FIELD(temp_r28_2, u32 *, 0x10) = (u32) ((u32) (temp_r3_5 + 3) >> 2U);
    memcpy(temp_r30, temp_r3_6 + 0x20, temp_r3_5 - 0x20);
    var_r30_2 = temp_r30 + 0x20;
    var_r9 = var_r27;
    var_r11 = 0x18;
    do {
        var_r11 -= 0x18;
        M2C_FIELD(var_r30_2, s32 *, 0) = (s32) M2C_FIELD(var_r9, u32 *, 0);
        M2C_FIELD(var_r30_2, s32 *, 4) = (s32) M2C_FIELD(var_r9, s32 *, 4);
        M2C_FIELD(var_r30_2, s32 *, 8) = (s32) M2C_FIELD(var_r9, s32 *, 8);
        M2C_FIELD(var_r30_2, s32 *, 0xC) = (s32) M2C_FIELD(var_r9, s32 *, 0xC);
        M2C_FIELD(var_r30_2, s32 *, 0x10) = (s32) M2C_FIELD(var_r9, s32 *, 0x10);
        M2C_FIELD(var_r30_2, s32 *, 0x14) = M2C_FIELD(var_r9, s32 *, 0x14);
        var_r9 += 0x18;
        var_r30_2 += 0x18;
    } while (var_r11 != 0);
    var_r8 = 0;
    var_r11_2 = temp_r28_2 + 0x20;
    temp_r3_5 = 0U;
    M2C_FIELD(var_r30_2, s32 *, 0) = (s32) M2C_FIELD(var_r9, s32 *, 0);
    M2C_FIELD(var_r30_2, s32 *, 4) = (s32) M2C_FIELD(var_r9, s32 *, 4);
    var_r30 = M2C_FIELD(temp_r28_2, u32 *, 0x10);
    if (var_r30 > 0U) {
        do {
            temp_r0_2 = *var_r11_2;
            temp_r3_5 += 1;
            var_r11_2 += 4;
            var_r8 ^= temp_r0_2;
        } while (temp_r3_5 < var_r30);
    }
    M2C_FIELD(temp_r28_2, s32 *, 8) = var_r8;
    temp_r3_3 = fn_802DD73C((s32) temp_r5, (s32) M2C_FIELD(arg0, void **, 0x68), 0x2000, 0);
    if (temp_r3_3 != 0) {
        fn_802DCBA0((s32) temp_r5);
        fn_802DBD74(arg1);
    }
    memFree((void *) temp_r3_6);
    temp_r0_2_b = MemoryCard__TranslateCardResult(arg0, temp_r3_3);
    *(s32 *)(arg0 + 0x6C + (arg1 * 4)) = temp_r0_2_b;
    return temp_r0_2_b;
}
