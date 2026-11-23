/* Instance__GetMirroredBoneName @ 0x8023EC4C (size: 0xB4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

extern int strncmp(const char *left, const char *right, u32 n);

typedef struct {
    char pad[2];
    u16 count;
    char pad2[4];
    char *pairs;
} MirrorTable;

char *Instance__GetMirroredBoneName(char *name, MirrorTable *tbl) {
    MirrorTable *t;
    u32 i;
    s32 off;

    t = tbl;
    if (t != NULL) {
        i = 0;
        if (i < t->count) {
            off = 0;
            do {
                if (strncmp(name, t->pairs + off, 16) == 0) {
                    return t->pairs + off + 16;
                }
                if (strncmp(name, t->pairs + off + 16, 16) == 0) {
                    return t->pairs + off;
                }
                i++;
                off += 32;
            } while (i < t->count);
        }
    }
    return name;
}
