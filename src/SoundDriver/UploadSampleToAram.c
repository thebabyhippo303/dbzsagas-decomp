/* SoundDriver__UploadSampleToAram @ 0x80196014 (size: 0x10C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef unsigned int u32;

typedef struct {
    s32 mode;
    s32 rate;
} Fmt;

typedef struct {
    char pad0[0x64];
    s32 f64;
    char pad1[0x70 - 0x68];
    s32 aramPos;
} Driver;

typedef struct {
    char pad0[4];
    s32 length;
    char pad1[0x60 - 8];
    char data[1];
} Sample;

typedef struct {
    char pad[0x50];
    void *vt;
    s32 f54;
    s32 f58;
    s32 f5C;
    s32 f60;
} Stream;

void *Mem__New(u32);
void DCStoreRange(void *, u32);
void DCInvalidateRange(void *, u32);
void fn_802D233C(void *, volatile s32 *, s32, s32, void *, s32, u32, void *);
void fn_801926FC(Fmt *, Sample *);
void SoundStream__Construct(void *, s32, Sample *, s32, Fmt *);
extern char SoundDriver__OnAramTransferDone __attribute__((section(".data")));
extern char lbl_80340450 __attribute__((section(".data")));

Stream *SoundDriver__UploadSampleToAram(Driver *self, s32 unused, Sample *sample) {
    char job[32];
    volatile s32 done;
    Fmt fmt;
    u32 size;
    s32 pos;
    Stream *stream;
    s32 *p;

    size = ((((u32)sample->length + 1) >> 1) + 31) & 0xFFFFFFE0;
    DCStoreRange(sample->data, size);
    DCInvalidateRange(sample->data, size);
    pos = self->aramPos;
    self->aramPos = pos + size;
    done = 0;
    fn_802D233C(job, &done, 0, 0, sample->data, pos, size, &SoundDriver__OnAramTransferDone);
    fmt.mode = 7;
    fmt.rate = 22050;
    fn_801926FC(&fmt, sample);
    stream = Mem__New(100);
    SoundStream__Construct(stream, self->f64, sample, pos, &fmt);
    stream->vt = &lbl_80340450;
    p = &stream->f54;
    stream->f54 = 0;
    p[1] = 0;
    p[3] = 0;
    p[2] = 1;
    while (done == 0) {
    }
    return stream;
}
