/* DebugSession__VPrintf @ 0x802CC9AC (size: 0x80, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
#define NULL 0

typedef struct { void *f0; s32 f4; void **f8; } DebugSession;

void DebugSession__FormatV(void *, char *, const char *, void *);
void DebugWindow__WriteText(void *, char *, s32, s32);
int fputs(const char *, void *);
void Stdio__FlushFile(void *);

void DebugSession__VPrintf(DebugSession *self, const char *fmt, void *args) {
    char buf[256];

    DebugSession__FormatV(self, buf, fmt, args);
    if (self->f8 != NULL) {
        DebugWindow__WriteText(*self->f8, buf, 1, 7);
    }
    if (self->f0 != NULL) {
        fputs(buf, self->f0);
        if (self->f4 != 0) {
            Stdio__FlushFile(self->f0);
        }
    }
}
