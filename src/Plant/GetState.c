/* Plant__GetState @ 0x800F4450 (size: 0x28, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
s32 Plant__GetState(void *arg0) {
    void *object = arg0;
    s32 state = M2C_FIELD(object, s32 *, 0x200);
    if (state != -1) return state;
    if (M2C_FIELD(object, s32 *, 0x258) == 0) return 0;
    return 1;
}
