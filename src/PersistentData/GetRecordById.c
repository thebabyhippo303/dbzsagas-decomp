/* PersistentData__GetRecordById @ 0x80127738 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
typedef struct Rec { s32 id; s32 b; s32 state; char pad[24]; } Rec;
typedef struct RecList { Rec *recs; s32 count; } RecList;
Rec *PersistentData__GetRecordById(RecList *list, s32 id) {
    s32 result = 0;
    s32 i = 0;
    Rec *r;
    if (result < list->count) {
        r = list->recs;
        do {
            s32 rid = r->id;
            r++;
            if (rid == id) {
                result = i;
            }
            i++;
        } while (i < list->count);
    }
    return &list->recs[result];
}
