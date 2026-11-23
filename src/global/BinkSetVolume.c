/* BinkSetVolume @ 0x802EF164 (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
typedef void (*TrackFn)(void *tr, s32 vol);
typedef struct Track { char pad[12]; TrackFn fn; char rest[360]; } Track;
typedef struct Bink { char pad[760]; s32 f760; char p[4]; Track *tracks; } Bink;
extern s32 Bink__FindTrackIndex(Bink *b);
void BinkSetVolume(Bink *bink, s32 unk, s32 volume) {
    s32 idx;
    s32 off;
    Track *tr;
    if (bink == NULL)
        return;
    if (bink->f760 == 0)
        return;
    idx = Bink__FindTrackIndex(bink);
    if (idx == -1)
        return;
    off = idx * 376;
    tr = (Track *)(off + (s32)bink->tracks);
    if (tr->fn == NULL)
        return;
    tr->fn(tr, volume);
}
