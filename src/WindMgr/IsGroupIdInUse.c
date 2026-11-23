/* WindMgr__IsGroupIdInUse @ 0x802178FC (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

/* Byte-matched: WindMgr__IsGroupIdInUse @ 0x802178FC (0x38). ProDG -O2. */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

extern void *lbl_803ADCBC __attribute__((section(".data")));

s32 WindMgr__IsGroupIdInUse(s32 arg0) {
    void *head;

    head = lbl_803ADCBC;
    if (head != NULL) {
        do {
            if (M2C_FIELD(head, u16 *, 8) == arg0) {
                return 1;
            }
            head = M2C_FIELD(head, void **, 0x84);
        } while (head != NULL);
    }
    return 0;
}
