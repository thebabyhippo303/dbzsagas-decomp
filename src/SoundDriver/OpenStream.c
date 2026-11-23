/* SoundDriver__OpenStream @ 0x80195EC4 (size: 0x150, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 Path__BuildWithExtension(char *, char *, char *, char *);
void *DvdStream__Construct(void *, char *, s32);
void *Mem__New(s32);
void *AxStream__Construct(void *, char *, char *, s32);

typedef char *(*StrFn)(void *);

void *SoundDriver__OpenStream(void *arg0, char *arg1, s32 arg2, s32 arg3, s32 arg4) {
    char path[256];
    char *ext;
    char *vt;
    char *stream;
    s32 tmp;
    char *made;

    if (arg4 != 0) {
        vt = M2C_FIELD(arg0, char **, 0x60);
        tmp = (s32) M2C_FIELD(vt, StrFn *, 0x12C)((char *) arg0 + M2C_FIELD(vt, s16 *, 0x128));
        vt = M2C_FIELD(arg0, char **, 0x60);
        ext = M2C_FIELD(vt, StrFn *, 0x114)((char *) arg0 + M2C_FIELD(vt, s16 *, 0x110));
        Path__BuildWithExtension(path, (char *) tmp, arg1, ext);
        made = AxStream__Construct(Mem__New(0x1DC), arg1, path, arg3);
        M2C_FIELD(arg0, char **, 0x384) = made;
        stream = made;
        M2C_FIELD(stream, void **, 0x2C) = arg0;
    } else {
        vt = M2C_FIELD(arg0, char **, 0x60);
        tmp = (s32) M2C_FIELD(vt, StrFn *, 0x12C)((char *) arg0 + M2C_FIELD(vt, s16 *, 0x128));
        vt = M2C_FIELD(arg0, char **, 0x60);
        ext = M2C_FIELD(vt, StrFn *, 0x11C)((char *) arg0 + M2C_FIELD(vt, s16 *, 0x118));
        Path__BuildWithExtension(path, (char *) tmp, arg1, ext);
        stream = DvdStream__Construct(Mem__New(0x58), path, arg3);
    }
    tmp = M2C_FIELD(stream, s32 *, 0x20);
    if (tmp == 0) {
        if (stream != NULL) {
            vt = M2C_FIELD(stream, char **, 0x28);
            M2C_FIELD(vt, void (**)(void *, s32), 0xC)(stream + M2C_FIELD(vt, s16 *, 8), 3);
        }
        if (arg4 != 0) {
            M2C_FIELD(arg0, s32 *, 0x384) = tmp;
        }
        return NULL;
    }
    return stream;
}
