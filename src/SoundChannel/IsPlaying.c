/* SoundChannel__IsPlaying @ 0x80196C0C (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef unsigned short u16;
typedef int s32;
#define FIELD(p, t, o) (*(t)((char *)(p) + (o)))
s32 SoundChannel__IsPlaying(void *arg0) {
    void *temp_r9;
    temp_r9 = FIELD(FIELD(arg0, void **, 0x1C), void **, 8);
    if (temp_r9 == 0) return 0;
    if (FIELD(arg0, s32 *, 0x10) != 0) goto playing;
    if (FIELD(temp_r9, u16 *, 0x146) == 0) return 0;
playing:
    return 1;
}
