/* Profiler__ComputeSectionTime @ 0x801858FC (size: 0xBC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef unsigned int u32;
typedef float f32;

typedef struct { char pad[0xF8]; u32 busClock; } OSG;

extern f32 lbl_8033DE80 __attribute__((section(".data")));
extern f32 lbl_8033DE90 __attribute__((section(".data")));
extern f32 lbl_8033DE94 __attribute__((section(".data")));
extern int lbl_803DCBC8;
extern int lbl_803DCBD8;

/* Keep the int-to-float constant pool at the same low 16 bits as the DOL. */
static const char pool_pad[0xDE88] = {1};

f32 Profiler__ComputeSectionTime(int arg0) {
    int *p;
    int ctr;
    int i;
    u32 sum;

    if (lbl_803DCBC8 == 0) {
        return lbl_8033DE80;
    }
    sum = 0;
    i = 0;
    p = (int *)(lbl_803DCBC8 + arg0 * 0x228);
    for (ctr = 0; ctr < 15; ctr += 1) {
        if (i != lbl_803DCBD8) {
            sum += *p;
        }
        p += 1;
        i += 1;
    }
    return ((f32)sum * lbl_8033DE90) / ((f32)((*(OSG *)0x80000000).busClock >> 2U) * lbl_8033DE94);
}
