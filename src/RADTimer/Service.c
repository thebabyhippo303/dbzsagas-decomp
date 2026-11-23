/* RADTimer__Service @ 0x802F7CC0 (size: 0xD0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

/* Byte-matched: RADTimer__Service @ 0x802F7CC0 (0xD0). ProDG -O2. */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef void *(*TimerCb)(void *, s32);
typedef void (*TimerCb2)(void *, s32);
void RADTimer__InsertTimer(void **, void *);
void RADTimer__Service(void *s) {
    void *head;
    void *pending;
    void *r;
    void *(*cb)(void *, s32);
    void (*cb2)(void *, s32);
    M2C_FIELD(s, s32 *, 52)++;
    if (M2C_FIELD(s, s32 *, 0) != 1) {
        return;
    }
    head = M2C_FIELD(s, void **, 48);
    pending = NULL;
    if (head != NULL) {
        do {
            if (M2C_FIELD(s, s32 *, 0) != 1) {
                return;
            }
            if (M2C_FIELD(head, s32 *, 12) == 1) {
                cb = (TimerCb)M2C_FIELD(head, void **, 20);
                r = cb(head, M2C_FIELD(s, s32 *, 52));
                M2C_FIELD(head, void **, 8) = r;
                if (r != NULL) {
                    RADTimer__InsertTimer(&pending, head);
                }
            }
            head = M2C_FIELD(head, void **, 0);
        } while (head != NULL);
    }
    head = pending;
    if (head == NULL) {
        return;
    }
    do {
        cb2 = (TimerCb2)M2C_FIELD(head, void **, 24);
        cb2(head, M2C_FIELD(s, s32 *, 52));
        head = M2C_FIELD(head, void **, 4);
    } while (head != NULL);
}
