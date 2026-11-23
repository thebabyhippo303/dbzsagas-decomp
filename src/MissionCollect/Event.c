/* MissionCollect__Event @ 0x8012A168 (size: 0xDC, .text, ProDG 3.9.3 -O2) - MATCHED */
extern void MissionProgress__Complete(void *mission);
extern void DisplayInfo__ShowEntry(void *display, int type, int text, int flags, float value);
extern void Debug__FormatMessage(const char *fmt, ...);
extern float lbl_80327A94 __attribute__((section(".data")));
extern char lbl_80327A40[] __attribute__((section(".data")));
extern char lbl_80327A6C[] __attribute__((section(".data")));
extern void *lbl_803DC3A0;

void MissionCollect__Event(void *mission, int event, int id) {
    int text;

    switch (event) {
    case 101:
        if (id == *(int *)((char *)mission + 4)) {
            MissionProgress__Complete(mission);
            text = *(int *)((char *)mission + 16);
            if (text != 0) {
                DisplayInfo__ShowEntry(lbl_803DC3A0, 4, text, 0, lbl_80327A94);
            }
            Debug__FormatMessage(lbl_80327A40, *(int *)mission);
        }
        break;
    case 102:
        if (id == *(int *)((char *)mission + 4)) {
            *(int *)((char *)mission + 12) = 1;
            if (*(int *)((char *)mission + 16) != 0) {
                DisplayInfo__ShowEntry(lbl_803DC3A0, 4, *(int *)((char *)mission + 20), 0, lbl_80327A94);
            }
            Debug__FormatMessage(lbl_80327A6C, *(int *)mission);
        }
        break;
    }
}
