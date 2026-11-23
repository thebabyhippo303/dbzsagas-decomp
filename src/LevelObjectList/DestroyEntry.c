/* LevelObjectList__DestroyEntry @ 0x8028F300 (size: 0x94, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void ProcModel__Destroy(void *, s32);
void SwooshStreak__DestroyResource(void *, u32);
void SceneMgr__DetachInstance(void *, u32);
void Mem__Delete(void *);
void memFree(void *);
extern M2C_UNK lbl_80347118 __attribute__((section(".data")));
extern M2C_UNK lbl_803502D0 __attribute__((section(".data")));
extern M2C_UNK lbl_80350618 __attribute__((section(".data")));

void LevelObjectList__DestroyEntry(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &lbl_803502D0;
    ProcModel__Destroy(arg0 + 0x4C, 2);
    SwooshStreak__DestroyResource(arg0 + 0x48, 2U);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &lbl_80350618;
    SceneMgr__DetachInstance(M2C_FIELD(arg0, void **, 0x40), 0U);
    memFree(M2C_FIELD(arg0, void **, 0x40));
    memFree(M2C_FIELD(arg0, void **, 0x44));
    M2C_FIELD(arg0, M2C_UNK **, 0) = &lbl_80347118;
    if (arg1 & 1) {
        Mem__Delete(arg0);
    }
}
