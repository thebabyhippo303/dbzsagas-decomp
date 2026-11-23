/* File__LoadToBuffer @ 0x80180210 (size: 0x100, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

int FileStream__GetSize(void *);
s32 FileStream__OpenThunk(char *, s32, s32, s32);
int FileStream__Read(void *, s32, void *);
int FileStream__TryClose(void *);
void * MemHeap__Alloc(unsigned int, unsigned int);
void Profiler__BeginSection(s32);
void Profiler__EndSection(s32);
void memFree(void *);
extern s32 lbl_803DCB90;

void *File__LoadToBuffer(s32 arg0, s32 *arg1, s32 *arg2) {
    s32 sp8;
    s32 sz;
    void *buf;

    Profiler__BeginSection(16);
    if ((arg0 = FileStream__OpenThunk(NULL, arg0, 0, 0)) == 0) {
        if (arg1 != NULL) {
            *arg1 = arg0;
        }
        goto Larg2;
    }
    if (arg1 == NULL) {
        arg1 = &sp8;
    }
    sz = FileStream__GetSize((void *)arg0);
    *arg1 = sz;
    if (sz <= 0) {
        goto Lfail;
    }
    if ((buf = MemHeap__Alloc(sz, 32)) == NULL) {
        FileStream__TryClose((void *)arg0);
        goto Lend;
    }
    if (FileStream__Read(buf, *arg1, (void *)arg0) == *arg1) {
        goto Lsucc;
    }
    memFree(buf);
    goto Lfail;
Lfail:
    FileStream__TryClose((void *)arg0);
Larg2:
    if (arg2 != NULL) {
        *arg2 = lbl_803DCB90;
    }
Lend:
    Profiler__EndSection(16);
    return NULL;
Lsucc:
    FileStream__TryClose((void *)arg0);
    Profiler__EndSection(16);
    return buf;
}
