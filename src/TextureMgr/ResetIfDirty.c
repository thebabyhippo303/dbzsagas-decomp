/* TextureMgr__ResetIfDirty @ 0x80248200 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
extern char lbl_803B1C6C[] __attribute__((section(".data")));
void TextureMgr__UnloadAll(void *);
void TextureMgr__Reset(void);

void TextureMgr__ResetIfDirty(void) {
    char *base = lbl_803B1C6C;

    if (M2C_FIELD(base, s32 *, 184) != 0) {
        TextureMgr__UnloadAll(NULL);
        TextureMgr__Reset();
        M2C_FIELD(base, s32 *, 184) = 0;
    }
}
