/* Script__TraceFeet @ 0x800B12DC (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
extern s32 Avatar__PopScriptInt(void *, void *);
void Script__TraceFeet(void *arg0, void *arg1) {
    *(s32 *)((char *)arg0 + 0x638) =
        Avatar__PopScriptInt(*(void **)arg0, arg1) != 0;
}
