/* TuningTable__FindByName @ 0x802541E4 (size: 0xA8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

/* Byte-matched: TuningTable__FindByName @ 0x802541E4 (0xA8). ProDG -O2. */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
#define NULL 0

int strcmp(const char *, const char *);

typedef struct Vt {
    char pad[32];
    s16 adjust;
    char pad2[2];
    s32 (*fn)(void *);
} Vt;

typedef struct Entry {
    char pad[24];
    Vt *vt;
    char *name;
    struct Entry *next;
} Entry;

typedef struct {
    Entry *head;
} Table;

void *TuningTable__FindByName(Table *table, const char *name, s32 kind) {
    Entry *entry;
    char *ename;
    Vt *vt;

    if (name != NULL && *name != 0) {
        entry = table->head;
        if (entry != NULL) {
        loop:
            ename = entry->name;
            if (ename != NULL && *ename != 0 && strcmp(name, ename) == 0) {
                vt = entry->vt;
                if (kind == vt->fn((char *)entry + vt->adjust)) {
                    return entry;
                }
            }
            entry = entry->next;
            if (entry == NULL) {
                goto out;
            }
            goto loop;
        }
    }
out:
    return NULL;
}
