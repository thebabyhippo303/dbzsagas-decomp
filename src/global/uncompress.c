/* uncompress @ 0x8025BF18 (size: 0xAC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr,type,offset) (*(type)((char*)(expr)+(offset)))
#define NULL 0
typedef unsigned long uLong;
typedef unsigned int uInt;
typedef struct z_stream_s {
    u8 *next_in;
    uInt avail_in;
    uLong total_in;
    u8 *next_out;
    uInt avail_out;
    uLong total_out;
    char *msg;
    void *state;
    void *zalloc;
    void *zfree;
    void *opaque;
    s32 data_type;
    uLong adler;
    uLong reserved;
} z_stream;
s32 inflateInit_(void *, char *, s32);
s32 inflate(void *, s32);
s32 inflateEnd(void *);
extern char lbl_80347FB8[];
s32 uncompress(s32 dest, s32 *destLen, s32 source, s32 sourceLen) {
    z_stream stream;
    s32 err;
    stream.next_in = (u8 *)source;
    stream.avail_in = sourceLen;
    stream.next_out = (u8 *)dest;
    stream.avail_out = *destLen;
    stream.zalloc = 0;
    stream.zfree = 0;
    err = inflateInit_(&stream, lbl_80347FB8, 56);
    if (err != 0)
        return err;
    err = inflate(&stream, 4);
    if (err != 1) {
        inflateEnd(&stream);
        return err == 0 ? -5 : err;
    }
    *destLen = stream.total_out;
    err = inflateEnd(&stream);
    return err;
}
