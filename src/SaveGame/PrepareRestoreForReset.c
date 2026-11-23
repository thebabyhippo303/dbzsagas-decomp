/* SaveGame__PrepareRestoreForReset @ 0x8014FCC0 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void ActorList__DestroyExpired(void **);
void SaveGame__ClearWorkingState(void *);
int SaveGame__GetRecordIndexForLevel(void *, int);
extern s32 lbl_803946C8 __attribute__((section(".data")));
extern s32 lbl_803DCCB8;

void SaveGame__PrepareRestoreForReset(void *arg0) {
    SaveGame__ClearWorkingState(arg0);
    SaveGame__GetRecordIndexForLevel(arg0, lbl_803946C8);
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    SaveGame__ClearWorkingState(arg0);
    ActorList__DestroyExpired(lbl_803DCCB8 + 0x14);
}
