/* Sphere__SetTexture @ 0x8026C2E4 (size: 0x1D0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32; typedef double f64; typedef int M2C_UNK; typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
void * Database__GetTypedObject(void *, void *, void *, void *);
u16 TextureSet__GetFrameBind(void *, s32);
s32 TexBind__TestFlags(s32, s32);
u16 TexBind__GetHeight(s32);
u16 TexBind__GetWidth(s32);
extern char lbl_80349B90[] __attribute__((section(".data")));
void Sphere__SetTexture(void *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    void *temp_r3;
    s32 var_r31;
    void *temp_r3_2;
    var_r31 = arg2;
    if (arg1 != NULL) {
        if (M2C_FIELD(arg0, void **, 0x14) != arg1) {
            temp_r3 = Database__GetTypedObject((void *)130, lbl_80349B90, arg1, NULL);
            M2C_FIELD(arg0, void **, 0x10) = temp_r3;
            if (temp_r3 == NULL) {
                M2C_FIELD(arg0, void **, 0x10) = Database__GetTypedObject((void *)134, lbl_80349B90, arg1, NULL);
            }
        }
    }
    if ((u32)arg1 == 0) {
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
        M2C_FIELD(arg0, s32 *, 0x14) = 0;
        M2C_FIELD(arg0, s32 *, 0x18) = 0;
    }
    temp_r3_2 = M2C_FIELD(arg0, void **, 0x10);
    if (temp_r3_2 != NULL) {
        if (var_r31 != 0x12345678) {
            var_r31 = arg2 % M2C_FIELD(temp_r3_2, u32 *, 0x24);
        }
        if (M2C_FIELD(arg0, void **, 0x14) != arg1 || (s32) M2C_FIELD(arg0, s32 *, 0x18) != var_r31) {
            s16 wmax = 0;
            s16 hmax;
            u16 h1; u16 h2; u16 w1; u16 w2;
            s16 h; s16 w;
            M2C_FIELD(arg0, void **, 0x14) = arg1;
            M2C_FIELD(arg0, s32 *, 0x18) = var_r31, hmax = 0;
            M2C_FIELD(arg0, s32 *, 0x1C) = wmax;
            M2C_FIELD(arg0, s32 *, 0x20) = wmax;
            if (var_r31 == 0x12345678) {
                M2C_FIELD(arg0, s32 *, 0x1C) = 0x40;
                M2C_FIELD(arg0, s32 *, 0x20) = 0x40;
                return;
            }
            if ((s32) M2C_FIELD(temp_r3_2, s32 *, 0x28) == 0) {
                s32 bind = TextureSet__GetFrameBind(temp_r3_2, var_r31);
                if (TexBind__TestFlags(bind, 8) != 0) {
                    M2C_FIELD(arg0, s32 *, 0x1C) = TexBind__GetHeight(bind);
                    M2C_FIELD(arg0, s32 *, 0x20) = TexBind__GetWidth(bind);
                    return;
                }
                M2C_FIELD(arg0, s32 *, 0x1C) = TexBind__GetWidth(bind);
                M2C_FIELD(arg0, s32 *, 0x20) = TexBind__GetHeight(bind);
                return;
            }
            {
                char *entry = (var_r31 * 0x10) + M2C_FIELD(temp_r3_2, s32 *, 0x30);
                u16 n = M2C_FIELD(entry, u16 *, 0xE);
                if (wmax <= n) {
                    s32 ctr = n + 1;
                    do {
                        h1 = M2C_FIELD(entry, u16 *, 0xA);
                        h2 = M2C_FIELD(entry, u16 *, 4);
                        w1 = M2C_FIELD(entry, u16 *, 0xC);
                        w2 = M2C_FIELD(entry, u16 *, 6);
                        h = h1 + h2;
                        w = w1 + w2;
                        if (hmax < h) {
                            hmax = h;
                        }
                        if (wmax < w) {
                            wmax = w;
                        }
                        entry += 0x10;
                        ctr -= 1;
                    } while (ctr != 0);
                }
                M2C_FIELD(arg0, s32 *, 0x1C) = hmax;
                M2C_FIELD(arg0, s32 *, 0x20) = wmax;
            }
        }
    }
}
