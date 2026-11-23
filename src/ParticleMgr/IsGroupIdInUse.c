/* ParticleMgr__IsGroupIdInUse @ 0x8021DF74 (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: ParticleMgr__IsGroupIdInUse @ 0x8021DF74 (0x38). ProDG -O2. */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

extern void *lbl_803AD49C __attribute__((section(".data")));

s32 ParticleMgr__IsGroupIdInUse(s32 arg0) {
    void *head;

    head = lbl_803AD49C;
    if (head != NULL) {
        do {
            if (M2C_FIELD(head, u16 *, 0xB8) == arg0) {
                return 1;
            }
            head = M2C_FIELD(head, void **, 0xB4);
        } while (head != NULL);
    }
    return 0;
}
