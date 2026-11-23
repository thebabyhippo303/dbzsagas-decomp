/* Voice__IsStopped @ 0x8019CC54 (size: 0x14, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
s32 Voice__IsStopped(void *arg0) {
    return (M2C_FIELD(arg0, s32 *, 0x20) ^ 3) == 0;
}
