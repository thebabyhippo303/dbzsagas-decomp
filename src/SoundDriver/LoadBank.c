/* SoundDriver__LoadBank @ 0x80193518 (size: 0x78, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Dba__BuildPath(char *, char *, char *);
void * Database__GetTypedObject(void *, void *, void *, void *);
void * dblLoad(const char *, void *, int);
extern char lbl_8033F454[] __attribute__((section(".data")));

void SoundDriver__LoadBank(void *arg0, s8 *arg1) {
    char sp8[124];
    char *vt = M2C_FIELD(arg0, char **, 0x60);
    char *(*fn)(void *) = M2C_FIELD(vt, char *(**)(void *), 0x124);

    Dba__BuildPath(arg1, fn((char *)arg0 + M2C_FIELD(vt, s16 *, 0x120)), sp8);
    Database__GetTypedObject((void *)0x302, lbl_8033F454, dblLoad(sp8, NULL, 0), NULL);
}
