/* Platform__InitializeAudio @ 0x801D6334 (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;

s32 Audio__InitializeDriver(void *, s32);

s32 Platform__InitializeAudio(char *self) {
    if (Audio__InitializeDriver(self + 0x500, 0) == 0) {
        return 0;
    }
    return 1;
}
