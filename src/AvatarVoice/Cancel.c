/* AvatarVoice__Cancel @ 0x80251068 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;

extern void *lbl_803DCC20;
void StreamQueue__Kill(void *);
void AvatarVoice__Stop(void *);
void AvatarVoice__Cancel(void *arg0, s32 arg1) {
    void *self = arg0;
    void *q;
    void *p;
    s32 kill;
    if (arg1 == 2) {
        q = lbl_803DCC20;
        kill = 1;
        p = (char *)q + 204;
        if (*(s32 *)((char *)p + 128) == 0) {
            kill = 0;
        }
        if (kill != 0) {
            StreamQueue__Kill(p);
        }
    }
    AvatarVoice__Stop(self);
}
