/* ActorList__Destroy @ 0x801DEFC0 (size: 0xCC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Mem__Delete(void *);
extern char lbl_80344C78 __attribute__((section(".data")));

void ActorList__Destroy(void *arg0, s32 arg1) {
    void **node;
    void **head;
    void *actor;
    void *vt;
    void *vt2;
    s32 flag;

    M2C_FIELD(arg0, char **, 8) = &lbl_80344C78;
    if (M2C_FIELD(arg0, void ***, 0) != NULL) {
        do {
            node = M2C_FIELD(arg0, void ***, 4);
            head = M2C_FIELD(arg0, void ***, 0);
            vt = *node;
            actor = *head;
            M2C_FIELD(vt, void (**)(void *, void **), 0x14)((char *) node + M2C_FIELD(vt, s16 *, 0x10), head);
            flag = 0;
            if (M2C_FIELD(actor, s32 *, 0x8C) != 0) {
                flag = M2C_FIELD(actor, s32 *, 0x88) == 0;
            }
            if ((flag != 0) && (actor != NULL)) {
                vt2 = M2C_FIELD(actor, void **, 0x34);
                M2C_FIELD(vt2, void (**)(void *, s32), 0x3C)((char *) actor + M2C_FIELD(vt2, s16 *, 0x38), 3);
            }
        } while (M2C_FIELD(arg0, void ***, 0) != NULL);
    }
    if (arg1 & 1) {
        Mem__Delete(arg0);
    }
}
