/* PersistentData__HasRecordStateOne @ 0x80127574 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
typedef struct Rec { s32 id; s32 b; s32 state; char pad[24]; } Rec;
typedef struct RecList { Rec *recs; s32 count; } RecList;

s32 PersistentData__HasRecordStateOne(RecList *list, s32 id) {
    s32 temp;
    s32 result;
    s32 ctr;
    Rec *r;

    temp = list->count;
    result = 0;
    if (result < temp) {
        ctr = temp;
        r = list->recs;
        do {
            if (id == r->id) {
                result = (r->state == 1);
            }
            r++;
            ctr -= 1;
        } while (ctr != 0);
    }
    return result;
}
