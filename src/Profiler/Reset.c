/* Profiler__Reset @ 0x80185258 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Profiler__Reset @ 0x80185258 (0x50). ProDG -O2. */
typedef int s32; typedef unsigned int u32;
void Profiler__InitTimingBars(void);
void * memset(void *, int, u32);
extern void *lbl_803DCBC8;
extern s32 lbl_803DCBD0;
extern s32 lbl_803DCBD8;
extern s32 lbl_803DCBDC;
extern s32 lbl_803DCBE0;
extern s32 lbl_803DCBE4;
extern s32 lbl_803DD4F4;
extern s32 lbl_803DD4F8;
void Profiler__Reset(void) {
    memset(lbl_803DCBC8, 0, lbl_803DCBD0 * 0x228);
    lbl_803DD4F4 = 0;
    lbl_803DD4F8 = 0;
    lbl_803DCBE4 = 0;
    lbl_803DCBD8 = 0;
    lbl_803DCBDC = 0;
    lbl_803DCBE0 = 0;
    Profiler__InitTimingBars();
}
