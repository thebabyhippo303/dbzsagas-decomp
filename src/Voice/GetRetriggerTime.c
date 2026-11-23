/* Voice__GetRetriggerTime @ 0x8019CBF4 (size: 0x1C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
s32 Voice__GetRetriggerTime(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x10) != 0) return M2C_FIELD(arg0, s32 *, 0x18);
    return -1;
}
