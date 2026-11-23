/* DisplayInfo__RefreshEntries @ 0x8027350C (size: 0x78, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

/* Byte-matched: DisplayInfo__RefreshEntries @ 0x8027350C (0x78). ProDG -O2. */
typedef signed short s16;
typedef int s32;

typedef struct Vt Vt;
typedef struct Entry Entry;
typedef struct Obj Obj;

struct Vt {
    char pad[432];
    s16 adj;
    char pad2[2];
    void (*fn)(void *, s32);
};

struct Entry {
    char data[412];
    Vt *vt;
    char rest[84];
};

struct Obj {
    char pad[416];
    char *items;
    s32 count;
};

void DisplayInfo__RefreshEntries(Obj *obj, s32 arg) {
    s32 i = 0;
    s32 off;

    if (i < obj->count) {
        off = 0;
        do {
            char *base = obj->items;
            Entry *e;
            Vt *vt;
            i += 1;
            e = (Entry *)((unsigned int)off + (unsigned int)base);
            vt = e->vt;
            off += 500;
            vt->fn((char *)e + vt->adj, arg);
        } while (i < obj->count);
    }
}
