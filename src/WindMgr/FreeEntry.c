/* WindMgr__FreeEntry @ 0x8021A314 (size: 0x90, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct WindEntry {
    char pad[1];
    u8 flag;
    s16 f2;
    s32 f4;
    char pad2[76];
    void *m84;
    void *m88;
} WindEntry;
extern char lbl_803ADCBC[];
extern char lbl_803ADCB0[];
void MatrixPool__Free(void *);
void SList__Remove(void *, void *);
void SList__PushFront(void *, s32);

void WindMgr__FreeEntry(WindEntry *entry) {
    s32 zero;

    if (entry->flag == 8) {
        if (entry->m84 != NULL) {
            MatrixPool__Free(entry->m84);
            entry->m84 = NULL;
        }
        if (entry->m88 != NULL) {
            MatrixPool__Free(entry->m88);
            entry->m88 = NULL;
        }
    }
    zero = 0;
    entry->f4 = zero;
    entry->f2 = zero;
    SList__Remove(lbl_803ADCBC, entry);
    SList__PushFront(lbl_803ADCB0, (s32)entry);
}
