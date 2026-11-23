/* Database__AsyncLoadTask @ 0x80204864 (size: 0x80, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
void Task__Exit(void);
M2C_UNK DBFileMgr__PushFlags(void);
M2C_UNK DBFileMgr__SetFlags(s32);
M2C_UNK DBFileMgr__ClearFlags(s32);
M2C_UNK DBFileMgr__SetSourceBuffer(s32, s32);
M2C_UNK Database__LoadFromBuffer(s32, s32, s32, s32);
M2C_UNK DBFileMgr__PopFlags(void);
extern void **lbl_803DD4B0;
void Database__AsyncLoadTask(void) {
    void *temp_r30;
    s32 temp_r29;
    void (*cb)(s32, s32);
    temp_r30 = *lbl_803DD4B0;
    DBFileMgr__PushFlags();
    DBFileMgr__SetFlags(0x10);
    DBFileMgr__ClearFlags(2);
    DBFileMgr__SetSourceBuffer(M2C_FIELD(temp_r30, s32 *, 0x100), M2C_FIELD(temp_r30, s32 *, 0x104));
    temp_r29 = Database__LoadFromBuffer((s32) temp_r30, M2C_FIELD(temp_r30, s32 *, 0x10C), 0, 0);
    DBFileMgr__PopFlags();
    cb = M2C_FIELD(temp_r30, void (**)(s32, s32), 0x110);
    cb(M2C_FIELD(temp_r30, s32 *, 0x108), temp_r29);
    Task__Exit();
}
