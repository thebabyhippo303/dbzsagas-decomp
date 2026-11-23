/* Table__Save @ 0x801A95F0 (size: 0x25C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void * File__Open(char *, s32, s32);
s32 File__Write(void *, void *, s32);
void File__Destroy(void *, s32);
int sprintf(char *, const char *, ...);
int strlen(const char *);
M2C_UNK Table__BuildVarPath(void *);
extern M2C_UNK lbl_80340E78 __attribute__((section(".data")));
extern M2C_UNK lbl_80340E90 __attribute__((section(".data")));

s32 Table__Save(void *arg0) {
    s8 buf[104];
    s32 len;
    s32 hdr;
    s32 i;
    s32 j;
    s8 *name;
    void *f;
    void *vt;

    if (M2C_FIELD(arg0, s32 *, 4) == 0) {
        vt = M2C_FIELD(arg0, void **, 0);
        name = M2C_FIELD(vt, s8 *(**)(void *), 0x4C)(arg0 + M2C_FIELD(vt, s16 *, 0x48));
        sprintf(buf, (char *)&lbl_80340E78, name);
        return 0;
    }
    Table__BuildVarPath(arg0);
    f = File__Open(M2C_FIELD(arg0, s8 **, 0x18), 1, 0);
    if (f == NULL) {
        sprintf(buf, (char *)&lbl_80340E90, M2C_FIELD(arg0, s8 **, 0x18));
        return 0;
    }
    vt = M2C_FIELD(arg0, void **, 0);
    hdr = M2C_FIELD(vt, s32 (**)(void *), 0x54)(arg0 + M2C_FIELD(vt, s16 *, 0x50));
    File__Write(f, &hdr, 4);
    File__Write(f, arg0 + 8, 4);
    File__Write(f, arg0 + 0xC, 4);
    i = 0;
    if (i < M2C_FIELD(arg0, s32 *, 8)) {
        j = 0;
        do {
            i += 1;
            len = strlen(*(char **)(j + M2C_FIELD(arg0, s32 *, 0x10))) + 1;
            File__Write(f, &len, 4);
            File__Write(f, *(void **)(j + M2C_FIELD(arg0, s32 *, 0x10)), len);
            j += 4;
        } while (i < M2C_FIELD(arg0, s32 *, 8));
    }
    i = 0;
    if (i < M2C_FIELD(arg0, s32 *, 0xC)) {
        j = 0;
        do {
            i += 1;
            len = strlen(*(char **)(j + M2C_FIELD(arg0, s32 *, 0x14))) + 1;
            File__Write(f, &len, 4);
            File__Write(f, *(void **)(j + M2C_FIELD(arg0, s32 *, 0x14)), len);
            j += 4;
        } while (i < M2C_FIELD(arg0, s32 *, 0xC));
    }
    len = 0xC;
    File__Write(f, &len, 4);
    for (i = 0; i < M2C_FIELD(arg0, s32 *, 8); i++) {
        for (j = 0; j < M2C_FIELD(arg0, s32 *, 0xC); j++) {
            File__Write(f, (char *)M2C_FIELD(arg0, s32 *, 4) + (i * M2C_FIELD(arg0, s32 *, 0xC) + j) * 0xC, 0xC);
        }
    }
    if (f != NULL) {
        File__Destroy(f, 3);
    }
    return 1;
}
