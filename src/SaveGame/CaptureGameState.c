/* SaveGame__CaptureGameState @ 0x8014EDE8 (size: 0x1CC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 PersistentData__GetPendulumUnlocked(s32);
void SaveGame__CopySharedDataToRecords(void *, void *);
void SaveGame__CompressActiveRecord(void *, s32);
M2C_UNK fn_80228B54();
extern volatile s32 lbl_803946C4[] __attribute__((section(".data")));
extern M2C_UNK lbl_803A35A0 __attribute__((section(".data")));
extern s32 lbl_803AD8DC __attribute__((section(".data")));
extern s32 lbl_803DC368;
extern void **lbl_803DC3C0;
extern void *lbl_803DCC70;

static inline s32 KeepPendulumResult(s32 value, void **base) { *base = lbl_803DCC70; return value; }

void SaveGame__CaptureGameState(void *arg0) {
    union { M2C_UNK value; unsigned char bytes[32]; } sp8;
    s32 temp_r10;
    s32 temp_r9;
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r9_2;
    void *temp_r9_3;
    void *base;
    void *object;
    void *node;
    s32 size;
    s16 adjust;
    void (*dispatch)(void *, void *, s32);

    fn_80228B54();
    base = lbl_803DC3C0;
    object = M2C_FIELD(arg0, void **, 0x20);
    node = *(void **)base;
    size = M2C_FIELD(object, s32 *, 0x20);
    dispatch = M2C_FIELD(node, void (**)(void *, void *, s32), 0x34);
    adjust = M2C_FIELD(node, s16 *, 0x30);
    dispatch((char *)base + adjust, M2C_FIELD(arg0, s32 *, 0x18) + size, 1);
    fn_80228B54();
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), s32 *, 0x3C) = lbl_803946C4[1];
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), s32 *, 0x40) = (s32) lbl_803AD8DC;
    fn_80228B54();
    temp_r10 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), s32 *, 0x38);
    temp_r9 = M2C_FIELD(arg0, s32 *, 0x18);
    *(s32 *)(temp_r9 + temp_r10) = M2C_FIELD(&lbl_803A35A0, s32 *, 0);
    temp_r9_2 = temp_r9 + temp_r10;
    M2C_FIELD(temp_r9_2, s32 *, 4) = (s32) M2C_FIELD(&lbl_803A35A0, s32 *, 4);
    M2C_FIELD(temp_r9_2, s32 *, 8) = (s32) M2C_FIELD(&lbl_803A35A0, s32 *, 8);
    M2C_FIELD(temp_r9_2, s32 *, 0xC) = (s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0xC);
    M2C_FIELD(temp_r9_2, u32 *, 0x10) = (s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x10);
    M2C_FIELD(temp_r9_2, s32 *, 0x14) = (s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x14);
    M2C_FIELD(temp_r9_2, s32 *, 0x18) = (s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x18);
    M2C_FIELD(temp_r9_2, f32 *, 0x1C) = (f32) M2C_FIELD(&lbl_803A35A0, f32 *, 0x1C);
    M2C_FIELD(temp_r9_2, f32 *, 0x20) = (f32) M2C_FIELD(&lbl_803A35A0, f32 *, 0x20);
    M2C_FIELD(temp_r9_2, f32 *, 0x24) = (f32) M2C_FIELD(&lbl_803A35A0, f32 *, 0x24);
    M2C_FIELD(temp_r9_2, f32 *, 0x28) = (f32) M2C_FIELD(&lbl_803A35A0, f32 *, 0x28);
    M2C_FIELD(temp_r9_2, f32 *, 0x2C) = (f32) M2C_FIELD(&lbl_803A35A0, f32 *, 0x2C);
    M2C_FIELD(temp_r9_2, f32 *, 0x30) = (f32) M2C_FIELD(&lbl_803A35A0, f32 *, 0x30);
    M2C_FIELD(temp_r9_2, f32 *, 0x34) = (f32) M2C_FIELD(&lbl_803A35A0, f32 *, 0x34);
    M2C_FIELD(temp_r9_2, f32 *, 0x38) = (f32) M2C_FIELD(&lbl_803A35A0, f32 *, 0x38);
    M2C_FIELD(temp_r9_2, s32 *, 0x3C) = (s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x40);
    ((struct { u32 flag : 1; } *)(temp_r9_2 + 0x40))->flag = M2C_FIELD(&lbl_803A35A0, u32 *, 0x44);
    fn_80228B54();
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), s32 *, 0x5C) = KeepPendulumResult(PersistentData__GetPendulumUnlocked(lbl_803DC368 + 0x17C), &temp_r11);
    temp_r9_3 = M2C_FIELD(temp_r11, void **, 0xC);
    M2C_FIELD(temp_r9_3, M2C_UNK (**)(M2C_UNK *, void *), 0x94)(((M2C_UNK *)sp8.bytes), (char *)temp_r11 + M2C_FIELD(temp_r9_3, s16 *, 0x90));
    SaveGame__CopySharedDataToRecords(arg0, ((M2C_UNK *)sp8.bytes));
    temp_r11_2 = lbl_803DC368 + 0xE8;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), s32 *, 0x98) = (s32) M2C_FIELD(temp_r11_2, s32 *, 0x30);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), s32 *, 0x9C) = (s32) M2C_FIELD(temp_r11_2, s32 *, 0x34);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), f32 *, 0x64) = (f32) M2C_FIELD(temp_r11_2, f32 *, 0x28);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), f32 *, 0x68) = (f32) M2C_FIELD(temp_r11_2, f32 *, 0x24);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), f32 *, 0x6C) = (f32) M2C_FIELD(temp_r11_2, f32 *, 0x2C);
    fn_80228B54();
    SaveGame__CompressActiveRecord(arg0, lbl_803946C4[1]);
    fn_80228B54();
}
