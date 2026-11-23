/* StreamQueue__Volume @ 0x80194914 (size: 0x98, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef float f32;

extern void Debug__FormatMessage(char *, ...);
extern void StreamQueue__ApplyVolume(void *);
extern char lbl_8033F560[] __attribute__((section(".data")));
extern f32 lbl_8033F590 __attribute__((section(".data")));
extern f32 lbl_8033F594 __attribute__((section(".data")));

typedef struct {
    char pad0[0x48];
    f32 volume;
} StreamQueue;

s32 StreamQueue__Volume(StreamQueue *self, f32 value) {
    f32 maximum = lbl_8033F594;
    f32 minimum = lbl_8033F590;
    f32 volume;

    if (!(value >= minimum)) {
        volume = minimum;
    } else {
        volume = (!(value <= maximum)) ? maximum : value;
    }
    if (self->volume != volume) {
        Debug__FormatMessage(lbl_8033F560, (double)volume);
        self->volume = volume;
        StreamQueue__ApplyVolume(self);
    }
    return 1;
}
