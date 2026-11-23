/* AI__KillFrieza @ 0x80042CA4 (size: 0xBC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Avatar__SetHealthImpl(void *, float);
void MissionProgress__DisplayAll(int, void *);
extern f32 lbl_80311D58 __attribute__((section(".data")));
extern f32 lbl_80311D5C __attribute__((section(".data")));
extern M2C_UNK lbl_803945E4 __attribute__((section(".data")));
extern void *lbl_803DCCB8;

void AI__KillFrieza(void) {
    void *temp_r3;
    void *head;
    s32 a;
    s32 b;
    void *var_r31;

    var_r31 = M2C_FIELD(lbl_803DCCB8, void **, 0x2C);
    if (var_r31 != NULL) {
        do {
            temp_r3 = M2C_FIELD(var_r31, void **, 0);
            a = M2C_FIELD(&lbl_803945E4, s32 *, 0);
            b = M2C_FIELD(temp_r3, s32 *, 0) & M2C_FIELD(&lbl_803945E4, s32 *, 4);
            if ((b == a) && ((s32) M2C_FIELD(temp_r3, s32 *, 0x7E4) == 0)) {
                if ((s32) M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x19D8), s32 *, 0xC) == 0x11) {
                    Avatar__SetHealthImpl(temp_r3, lbl_80311D58);
                } else {
                    Avatar__SetHealthImpl(temp_r3, lbl_80311D5C);
                    MissionProgress__DisplayAll(0x65, (void *)0x2718);
                }
            }
            head = lbl_803DCCB8;
            if (var_r31 != NULL) {
                var_r31 = M2C_FIELD(var_r31, void **, 0x14);
            } else {
                var_r31 = M2C_FIELD(head, void **, 0x2C);
            }
        } while (var_r31 != NULL);
    }
}
