/* ControllerMap__IsPortAssigned @ 0x801D6784 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef unsigned int u32;
typedef int s32;
#define FIELD(p, t, o) (*(t)((char *)(p) + (o)))
s32 ControllerMap__IsPortAssigned(void *arg0, u32 arg1) {
    u32 count = FIELD(arg0, u32 *, 8);
    s32 *values;
    u32 i;
    u32 limit;
    if (arg1 >= count) return 0;
    values = FIELD(arg0, s32 **, 4);
    limit = count;
    for (i = 0; i < limit; ++i) {
        if (values[i] == (s32)arg1) return 1;
    }
    return 0;
}
