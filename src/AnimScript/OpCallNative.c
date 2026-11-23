/* AnimScript__OpCallNative @ 0x80238F20 (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0

typedef struct { char pad[240]; void *threads[1]; } AnimState;
typedef void (*NativeFn)(void *, s32, void *);

s32 AnimScript__OpCallNative(AnimState *state, s32 idx, s32 *pc) {
    void *thread = state->threads[idx];
    s32 pci;
    s32 npc;
    s32 id;
    NativeFn *ftab;
    NativeFn fn;
    void **argtab;
    void *arg;

    if ((thread != NULL) && (M2C_FIELD(M2C_FIELD(thread, void **, 0x1C), s32 *, 0x38) != 0)) {
        *pc += 4;
    }
    pci = *pc;
    id = *(s32 *)pci;
    npc = pci + 4;
    *pc = npc;
    ftab = M2C_FIELD(thread, NativeFn **, 32);
    fn = ftab[id];
    if (fn == NULL) {
        return 0;
    }
    argtab = M2C_FIELD(thread, void ***, 36);
    arg = argtab[id];
    fn(state, idx, arg);
    return 0;
}
