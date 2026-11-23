/* Audio__Resume @ 0x8018FF50 (size: 0xD8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void SoundGroup__ResumeVoices(void *);
void StreamQueue__SetPaused(s32, s32);

void Audio__Resume(void *arg0, s32 arg1) {
    s32 i;
    s32 idx;
    void *vec;
    void **elem;

    if (M2C_FIELD(arg0, s32 *, 0x184) != 0) {
        M2C_FIELD(arg0, s32 *, 0x184) = 0;
        i = 0;
        if (i < M2C_FIELD(M2C_FIELD(arg0, void **, 0x188), s32 *, 4)) {
            do {
                vec = M2C_FIELD(arg0, void **, 0x188);
                idx = i;
                if (i < 0) {
                    idx = M2C_FIELD(vec, s32 *, 4) - 1;
                }
                if (idx >= M2C_FIELD(vec, s32 *, 4) || M2C_FIELD(vec, s32 *, 4) == 0) {
                    elem = NULL;
                } else {
                    elem = M2C_FIELD(vec, void ***, 0) + idx;
                }
                i++;
                SoundGroup__ResumeVoices(*elem);
            } while (i < M2C_FIELD(M2C_FIELD(arg0, void **, 0x188), s32 *, 4));
        }
        StreamQueue__SetPaused((s32) (0xCC + arg0), 0);
        if (arg1 != 0) {
            StreamQueue__SetPaused((s32) arg0, 0);
        }
    }
}
