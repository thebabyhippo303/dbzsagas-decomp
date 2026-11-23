/* SoundGroup__ReleaseAllVoices @ 0x8019DBD4 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
extern void SoundGroup__ReleaseVoice(void *, s32);
void SoundGroup__ReleaseAllVoices(void *arg0) {
    s32 n = M2C_FIELD(arg0, s32 *, 0x48);

    while (n != 0) {
        SoundGroup__ReleaseVoice(arg0, n);
        n = M2C_FIELD(arg0, s32 *, 0x48);
    }
}
