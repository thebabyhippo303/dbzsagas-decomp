/* DBFileMgr__UnloadAll @ 0x80204458 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void * Database__BeginLoadedIteration(s32);
s32 Remove(void *, s32);
void * Database__NextLoaded(void);
M2C_UNK DBFileMgr__ClearFlags(s32);
M2C_UNK TevMaterialCache__Clear(s32);
extern s32 lbl_803DCDF4;

void DBFileMgr__UnloadAll(s32 arg0) {
    void *var_r3;

    var_r3 = Database__BeginLoadedIteration(0xC);
    if (var_r3 != NULL) {
        do {
            Remove(var_r3, arg0);
            var_r3 = Database__NextLoaded();
        } while (var_r3 != NULL);
    }
    DBFileMgr__ClearFlags(0x20);
    TevMaterialCache__Clear(lbl_803DCDF4);
}
