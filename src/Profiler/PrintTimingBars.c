/* Profiler__PrintTimingBars @ 0x80185480 (size: 0x1FC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef struct Sec { int h1[15]; int h2[100]; char pad[476 - 60 - 400]; char name[552 - 476]; } Sec;
void Debug__FormatMessage(char *, ...);
void CmdCon__Print(void *, char *, ...);
void Profiler__EndSection(s32);
void Profiler__BeginSection(s32);
extern char lbl_8033DE38[] __attribute__((section(".data")));
extern char lbl_8033DE50[] __attribute__((section(".data")));
extern char lbl_8033DE68[] __attribute__((section(".data")));
extern char lbl_8033DE74[] __attribute__((section(".data")));
extern char *lbl_80372C04[] __attribute__((section(".data")));
extern Sec *lbl_803DCBC8;
extern s32 *lbl_803DCBCC;
extern s32 lbl_803DCBD4;
extern s32 lbl_803DCBD8;
extern s32 lbl_803DCBDC;
extern s32 lbl_803DCBE0;
extern s32 lbl_803DCBE4;
extern void *lbl_803DCC10;
extern s32 lbl_803DD4F4;
extern s32 lbl_803DD4F8;
extern s32 lbl_803DD4FC;

void Profiler__PrintTimingBars(void) {
    s32 i;
    s32 n;
    s32 k;
    s32 j;
    if (lbl_803DCBC8 != 0) {
        if (lbl_803DCBE4 != 0) {
            i = 0;
            Debug__FormatMessage(lbl_8033DE38);
            CmdCon__Print(lbl_803DCC10, lbl_8033DE50);
            for (; i < lbl_803DD4F4; i++) {
                Debug__FormatMessage(lbl_8033DE68, lbl_80372C04[i % 6], lbl_803DCBC8[lbl_803DCBCC[i]].name);
                CmdCon__Print(lbl_803DCC10, lbl_8033DE74, lbl_80372C04[i % 6], lbl_803DCBC8[lbl_803DCBCC[i]].name);
            }
            lbl_803DCBE4 = 0;
        }
        if (lbl_803DD4F8 != 0) {
            Profiler__EndSection(0);
            n = lbl_803DCBD4;
            if (n > 0) {
                char *dst = (char *) lbl_803DCBC8 + 60 + lbl_803DCBDC * 4;
                char *src = (char *) lbl_803DCBC8 + lbl_803DCBD8 * 4;
                for (i = n; i != 0; i--) {
                    *(s32 *) dst = *(s32 *) src;
                    src += 552;
                    dst += 552;
                }
            }
            lbl_803DCBDC++;
            if (lbl_803DCBDC > 99) {
                lbl_803DCBDC = 0;
                lbl_803DCBE0 = 1;
            }
        }
        lbl_803DD4F8 = 1;
        lbl_803DCBD8++;
        if (lbl_803DCBD8 > 14) {
            lbl_803DCBD8 = 0;
        }
        n = lbl_803DCBD4;
        if (n > 0) {
            char *p = (char *) lbl_803DCBC8 + lbl_803DCBD8 * 4;
            for (i = n; i != 0; i--) {
                *(s32 *) p = 0;
                p += 552;
            }
        }
        lbl_803DD4FC = 0;
        Profiler__BeginSection(0);
    }
}
