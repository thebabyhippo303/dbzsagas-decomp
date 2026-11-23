/* Exploder__GetState @ 0x800ED4FC (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;

#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))

s32 Exploder__GetState(void *arg0) {
    s32 value = M2C_FIELD(arg0, s32 *, 0x200);
    if (value != -1) {
        return value;
    }
    if (M2C_FIELD(arg0, s32 *, 0x258) != 0) {
        goto check_state;
    }
    return 0;
check_state:
    if (M2C_FIELD(arg0, s32 *, 0x710) == 0) {
        return 0;
    }
    {
        s32 state = 1;
        if (M2C_FIELD(arg0, s32 *, 0x3C0) == 0) {
            state = 0;
        }
        if (state != 0) {
            return 0;
        }
        return 5;
    }
}
