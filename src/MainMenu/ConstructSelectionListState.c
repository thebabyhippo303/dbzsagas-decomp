/* MainMenu__ConstructSelectionListState @ 0x800127DC (size: 0x104, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

char * Mem__NewArray(s32);
void fn_8026B590(void *);
extern const f32 lbl_8030D920 __attribute__((section(".data")));
extern const f32 lbl_8030D924 __attribute__((section(".data")));
extern const f32 lbl_8030D928 __attribute__((section(".data")));
extern const f32 lbl_8030D92C __attribute__((section(".data")));
extern M2C_UNK lbl_8030E8F0 __attribute__((section(".data")));

void *MainMenu__ConstructSelectionListState(void *arg0) {
    void *temp_r27;
    void *temp_r28;
    void *temp_r9;

    temp_r28 = arg0 + 0x508;
    fn_8026B590(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x19C) = &lbl_8030E8F0;
    temp_r27 = arg0 + 0x520;
    fn_8026B590(arg0 + 0x1C8);
    fn_8026B590(0x368 + arg0);
    M2C_FIELD(arg0, s8 **, 0x508) = Mem__NewArray(0x120);
    M2C_FIELD(temp_r28, s32 *, 4) = 0;
    M2C_FIELD(temp_r28, s32 *, 8) = 8;
    M2C_FIELD(temp_r28, s32 *, 0xC) = 8;
    M2C_FIELD(temp_r28, s32 *, 0x10) = 0;
    M2C_FIELD(temp_r28, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s8 **, 0x520) = Mem__NewArray(0x20);
    M2C_FIELD(temp_r27, s32 *, 4) = 0;
    temp_r9 = arg0 + 0x538;
    M2C_FIELD(temp_r27, s32 *, 8) = 8;
    M2C_FIELD(temp_r27, s32 *, 0xC) = 8;
    M2C_FIELD(temp_r27, s32 *, 0x10) = 0;
    M2C_FIELD(temp_r27, s32 *, 0x14) = 0;
    M2C_FIELD(temp_r9, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x538) = 0;
    M2C_FIELD(temp_r9, s32 *, 8) = 1;
    M2C_FIELD(temp_r9, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x548) = 0;
    M2C_FIELD(arg0, s32 *, 0x1A0) = -1;
    M2C_FIELD(arg0, s32 *, 0x1B4) = 0;
    M2C_FIELD(arg0, u32 *, 0x1A4) = -1;
    M2C_FIELD(arg0, f32 *, 0x1AC) = (f32) lbl_8030D920;
    M2C_FIELD(arg0, f32 *, 0x1B0) = (f32) lbl_8030D924;
    M2C_FIELD(arg0, f32 *, 0x1BC) = (f32) lbl_8030D928;
    M2C_FIELD(arg0, f32 *, 0x1C0) = (f32) lbl_8030D928;
    M2C_FIELD(arg0, s32 *, 0x1C4) = 1;
    M2C_FIELD(arg0, s32 *, 0x54C) = 0;
    M2C_FIELD(arg0, f32 *, 0x550) = (f32) lbl_8030D92C;
    return arg0;
}
