/* Audio__SetMasterDialogVolume @ 0x801905B0 (size: 0x90, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32;
extern f32 Audio__GetMasterDialogVolume(void *);
void Debug__FormatMessage(char *, ...);
void StreamQueue__Volume(void *, f32);
extern char lbl_8033F2DC[] __attribute__((section(".data")));
extern f32 lbl_8033F310 __attribute__((section(".data")));
extern f32 lbl_8033F314 __attribute__((section(".data")));

void Audio__SetMasterDialogVolume(void *self, f32 value) {
    f32 old;
    f32 volume;
    f32 minimum;
    f32 maximum;
    void *queue;
    if (value != Audio__GetMasterDialogVolume(self)) {
        old = Audio__GetMasterDialogVolume(self);
        Debug__FormatMessage(lbl_8033F2DC, old, value);
    }
    minimum = lbl_8033F310;
    queue = (char *)self + 0xCC;
    maximum = lbl_8033F314;
    if (!(value < minimum)) {
        if (!(value <= maximum)) {
            volume = maximum;
        } else {
            volume = value;
        }
    } else {
        volume = minimum;
    }
    StreamQueue__Volume(queue, volume);
}
