/* ParticleMgr__KillLibraryEmitters @ 0x8021CBF8 (size: 0x88, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 ParticleMgr__FindLibraryIndex(s32);
s32 Emitter__Kill(u32);
extern void *lbl_803AD49C __attribute__((section(".data")));

void ParticleMgr__KillLibraryEmitters(s32 arg0) {
    s32 idx = -1;
    void *head;
    void *cur;

    if (arg0 != 0) {
        idx = ParticleMgr__FindLibraryIndex(arg0);
        if (idx == 0x14) {
            return;
        }
    }
    head = lbl_803AD49C;
    while (head != NULL) {
        cur = head;
        head = M2C_FIELD(cur, void **, 180);
        if ((arg0 == 0) || (M2C_FIELD(cur, s32 *, 8) == idx)) {
            Emitter__Kill(M2C_FIELD(cur, u32 *, 0));
        }
    }
}
