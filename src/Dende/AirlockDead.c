/* Dende__AirlockDead @ 0x80044AB0 (size: 0xC8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Script__SetIntVariable(void *, int, char *, int);
int String__CompareIgnoreCase(const char *, const char *);
void fn_8023A97C(void *, int);
extern s8 lbl_80311ED8 __attribute__((section(".data")));
extern s8 lbl_80311EE8 __attribute__((section(".data")));
extern M2C_UNK lbl_803946A4 __attribute__((section(".data")));
extern void *lbl_803DC3C0;
extern void *lbl_803DCC98;

void Dende__AirlockDead(void) {
    s32 __a;
    s32 __b;
    void *temp_r31;
    void *head;
    void *var_r30;

    if ((s32) M2C_FIELD(M2C_FIELD(lbl_803DC3C0, void **, 0x238), s32 *, 4) == 8) {
        var_r30 = M2C_FIELD(lbl_803DCC98, void **, 0x14);
        if (var_r30 != NULL) {
            do {
                temp_r31 = M2C_FIELD(var_r30, void **, 0);
                fn_8023A97C(M2C_FIELD(temp_r31, void **, 0x84), 0);
                __a = M2C_FIELD(&lbl_803946A4, s32 *, 0);
    __b = M2C_FIELD(temp_r31, s32 *, 0) & M2C_FIELD(&lbl_803946A4, s32 *, 4);
    if (__b == __a) {
                    if (String__CompareIgnoreCase(temp_r31 + 0x1C0, &lbl_80311ED8) == 0) {
                        Script__SetIntVariable(M2C_FIELD(temp_r31, void **, 0x84), 3, &lbl_80311EE8, 0);
                    }
                }
                head = lbl_803DCC98;
                if (var_r30 != NULL) {
                    var_r30 = M2C_FIELD(var_r30, void **, 0x14);
                } else {
                    var_r30 = M2C_FIELD(head, void **, 0x14);
                }
            } while (var_r30 != NULL);
        }
    }
}
