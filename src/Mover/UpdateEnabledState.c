/* Mover__UpdateEnabledState @ 0x802B6018 (size: 0xC4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Simple__UpdateEnabledState(void *);
void Simple__ApplyStateFlags(void *);
extern f32 lbl_8035205C __attribute__((section(".data")));

void Mover__UpdateEnabledState(void *arg0) {
    void *vt;
    s32 flag;

    if (M2C_FIELD(arg0, s32 *, 0x51C) != 0) {
        goto update;
    }
    vt = M2C_FIELD(arg0, void **, 0x34);
    flag = 0;
    if (M2C_FIELD(vt, s32 (**)(void *), 0x1BC)((void *)((char *)arg0 + M2C_FIELD(vt, s16 *, 0x1B8))) == 0) {
        flag = !M2C_FIELD(arg0, s32 *, 0x3C0);
    }
    if (flag == 0) {
        goto update;
    }
    if (M2C_FIELD(arg0, f32 *, 0x550) >= lbl_8035205C) {
        goto update;
    }
    if (M2C_FIELD(arg0, f32 *, 0x5A8) != lbl_8035205C) {
        goto update;
    }
    if (M2C_FIELD(arg0, s32 *, 0x4CC) != 0) {
        goto update;
    }
    if (M2C_FIELD(arg0, s32 *, 0x254) == 0) {
        M2C_FIELD(arg0, s32 *, 0x258) = 1;
        Simple__ApplyStateFlags(arg0);
    }
    goto done;
update:
    Simple__UpdateEnabledState(arg0);
done: ;
}
