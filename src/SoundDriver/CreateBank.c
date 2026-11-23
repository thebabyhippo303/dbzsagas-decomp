/* SoundDriver__CreateBank @ 0x8019402C (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;

void *Mem__New(s32);
void *SoundBank__Construct(void *, s32);

void *SoundDriver__CreateBank(s32 arg0) {
    return SoundBank__Construct(Mem__New(0x10), arg0);
}
