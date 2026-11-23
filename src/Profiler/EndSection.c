/* Profiler__EndSection @ 0x80185818 (size: 0xAC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef unsigned long long u64;
typedef struct Sec { char pad[464]; u64 ts; int state; char pad2[552 - 476]; } Sec;
unsigned Timer__GetMilliseconds(void);
void Profiler__AccumulateSection(int);
extern int lbl_803A1B34[] __attribute__((section(".data")));
extern Sec *lbl_803DCBC8;
extern u64 lbl_803DD4D8;
extern int lbl_803DD4F8;
extern int lbl_803DD4FC;

void Profiler__EndSection(int sec) {
    if (lbl_803DCBC8 != 0 && sec != -1 && lbl_803DD4F8 != 0) {
        int cnt;
        Timer__GetMilliseconds();
        Profiler__AccumulateSection(sec);
        if (lbl_803DCBC8[sec].state != 1) {
            cnt = lbl_803DD4FC - 1;
            lbl_803DD4FC = cnt;
            if (cnt > 0) {
                lbl_803DCBC8[lbl_803A1B34[cnt - 1]].ts = lbl_803DD4D8;
            }
        }
    }
}
