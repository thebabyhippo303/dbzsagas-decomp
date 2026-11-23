/* AvaSurf__SaveTable @ 0x801524C4 (size: 0x25C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void AvaSurf__BuildVarFilePath(void *, char *);
void * File__Open(char *, s32, s32);
s32 File__Write(void *, void *, s32);
void File__Destroy(void *, s32);
s32 sprintf(s8 *, void *, ...);
int strlen(const char *);
extern M2C_UNK lbl_80332FB0 __attribute__((section(".data")));
extern M2C_UNK lbl_80332FC8 __attribute__((section(".data")));

s32 AvaSurf__SaveTable(void *arg0, s8 *arg1) {
    s8 msg[104];
    s32 len;
    s32 hdr;
    s32 i;
    s32 j;
    void *vt;
    void *f;

    if (M2C_FIELD(arg0, s32 *, 4) == 0) {
        vt = M2C_FIELD(arg0, void **, 0);
        sprintf(msg, &lbl_80332FB0, M2C_FIELD(vt, s8 *(**)(void *), 0x4C)(arg0 + M2C_FIELD(vt, s16 *, 0x48)));
        return 0;
    }
    AvaSurf__BuildVarFilePath(arg0, arg1);
    f = File__Open(M2C_FIELD(arg0, s8 **, 0x18), 1, 0);
    if (f == NULL) {
        sprintf(msg, &lbl_80332FC8, M2C_FIELD(arg0, s8 **, 0x18));
        return 0;
    }
    vt = M2C_FIELD(arg0, void **, 0);
    hdr = M2C_FIELD(vt, s32 (**)(void *), 0x54)(arg0 + M2C_FIELD(vt, s16 *, 0x50));
    File__Write(f, &hdr, 4);
    File__Write(f, arg0 + 8, 4);
    File__Write(f, arg0 + 0xC, 4);
    for (i = 0; i < M2C_FIELD(arg0, s32 *, 8); i++) {
        len = strlen((*(char ***)((char *)arg0 + 0x10))[i]) + 1;
        File__Write(f, &len, 4);
        File__Write(f, (*(char ***)((char *)arg0 + 0x10))[i], len);
    }
    for (i = 0; i < M2C_FIELD(arg0, s32 *, 0xC); i++) {
        len = strlen((*(char ***)((char *)arg0 + 0x14))[i]) + 1;
        File__Write(f, &len, 4);
        File__Write(f, (*(char ***)((char *)arg0 + 0x14))[i], len);
    }
    len = 0x28;
    File__Write(f, &len, 4);
    for (i = 0; i < M2C_FIELD(arg0, s32 *, 8); i++) {
        for (j = 0; j < M2C_FIELD(arg0, s32 *, 0xC); j++) {
            File__Write(f, (*(char **)((char *)arg0 + 4)) + (i * M2C_FIELD(arg0, s32 *, 0xC) + j) * 0x28, 0x28);
        }
    }
    if (f != NULL) {
        File__Destroy(f, 3);
    }
    return 1;
}
