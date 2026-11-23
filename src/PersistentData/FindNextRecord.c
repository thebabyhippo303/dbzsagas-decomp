/* PersistentData__FindNextRecord @ 0x801266D8 (size: 0x12C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

int String__CompareNIgnoreCase(const char *, const char *, int);

typedef struct {
    char name[24];
    char scope[32];
    int level;
    int value;
} TallyRecord;

TallyRecord *PersistentData__FindNextRecord(void *data, char *name, const char *label, int index, int type, int flag, TallyRecord *prev) {
    int i;
    int n;
    char *rec;
    char *scope;

    if (prev == 0) {
        n = 0;
    } else {
        char *start = (char *)prev - 596;
        n = ((start - (char *)data) >> 6) + 1;
    }
    for (i = n; i < *(int *)((char *)data + 592); i++) {
        rec = (char *)data + 596 + (i << 6);
        scope = (char *)data + 620 + (i << 6);
        if ((flag & 4) != 0 && *(int *)(rec + 56) != index) {
            continue;
        }
        if ((flag & 8) != 0 && *(int *)(rec + 60) != type) {
            continue;
        }
        if ((flag & 2) != 0 && String__CompareNIgnoreCase(scope, label, 32) != 0) {
            continue;
        }
        if ((flag & 1) != 0 && String__CompareNIgnoreCase(rec, name, 24) != 0) {
            continue;
        }
        return (TallyRecord *)rec;
    }
    return 0;
}
