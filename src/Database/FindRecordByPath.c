/* Database__FindRecordByPath @ 0x80204248 (size: 0x9C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0

void *Database__BeginLoadedIteration(s32 type);
void *Database__FindObjectByType(void *it, s32 flags, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
s32 Database__ComparePaths(char *path, void *obj);
void *Database__FindRegisteredRecord(void);
void *Database__NextLoaded(void);

s32 Database__FindRecordByPath(s32 arg0, char *arg1) {
    void *it;
    void *obj;

    it = Database__BeginLoadedIteration(arg0);
    if (it != NULL) {
loop1:
        obj = Database__FindObjectByType(it, 0xFFFD, 0, 0, 0, 0, 0, 0);
        if (obj != NULL) {
loop2:
            if (Database__ComparePaths(arg1, obj) == 0) {
                return (s32)it;
            }
            obj = Database__FindRegisteredRecord();
            if (obj != NULL) {
                goto loop2;
            }
        }
        it = Database__NextLoaded();
        if (it != NULL) {
            goto loop1;
        }
    }
    return 0;
}
