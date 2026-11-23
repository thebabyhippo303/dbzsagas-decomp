/* HUD__UpdateSpecialMoveLabel @ 0x8010A700 (size: 0xEC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 Avatar__GetSpecialMoveImpl(void *);
void sprintf(char *, char *, ...);
extern char lbl_80325160[] __attribute__((section(".data")));
extern char *lbl_8036BB54[] __attribute__((section(".data")));
extern void *lbl_803DC3C0;

void HUD__UpdateSpecialMoveLabel(void *hud, void *group) {
    char buf[128];
    void *w1;
    void *vt1;
    void *w2;
    void *vt2;
    void *w3;
    void *vt3;
    void *w4;
    void *vt4;

    if (M2C_FIELD(group, void **, 0x4D4) != NULL) {
        sprintf(buf, lbl_80325160, lbl_8036BB54[Avatar__GetSpecialMoveImpl(M2C_FIELD(M2C_FIELD(group, void **, 0), void **, 0x159C))]);
        w1 = M2C_FIELD(group, void **, 0x4D4);
        vt1 = M2C_FIELD(w1, void **, 0x19C);
        M2C_FIELD(vt1, M2C_UNK (**)(void *, char *), 0x36C)((char *)w1 + M2C_FIELD(vt1, s16 *, 0x368), buf);
        if (M2C_FIELD(lbl_803DC3C0, s32 *, 0x1C64) == 0) {
            w2 = M2C_FIELD(group, void **, 0x4D4);
            vt2 = M2C_FIELD(w2, void **, 0x19C);
            M2C_FIELD(vt2, M2C_UNK (**)(void *), 0x1DC)((char *)w2 + M2C_FIELD(vt2, s16 *, 0x1D8));
        } else {
            w3 = M2C_FIELD(group, void **, 0x4D4);
            vt3 = M2C_FIELD(w3, void **, 0x19C);
            M2C_FIELD(vt3, M2C_UNK (**)(void *), 0x1CC)((char *)w3 + M2C_FIELD(vt3, s16 *, 0x1C8));
        }
        w4 = M2C_FIELD(group, void **, 0x4D4);
        vt4 = M2C_FIELD(w4, void **, 0x19C);
        M2C_FIELD(vt4, M2C_UNK (**)(void *), 0x3C)((char *)w4 + M2C_FIELD(vt4, s16 *, 0x38));
    }
}
