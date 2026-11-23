/* Avatar__SpawnMovementSurfaceTrail @ 0x80099A0C (size: 0x124, .text, ProDG 3.9.3 -O2) - MATCHED */
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0

int Avatar__CreateEffectImpl(void *, char *, void *, float, int, int);
s32 fn_8023A97C(void *, int);
int fn_80254BB8(void *, const char *, int);
extern f32 lbl_8031FB40 __attribute__((section(".data")));
extern void *lbl_803DCCC0;
extern char lbl_8031FB0C[] __attribute__((section(".data")));
extern char lbl_8031FB18[] __attribute__((section(".data")));
extern char lbl_8031FB20[] __attribute__((section(".data")));
extern char lbl_8031FB2C[] __attribute__((section(".data")));
extern char lbl_8031FB34[] __attribute__((section(".data")));

void Avatar__SpawnMovementSurfaceTrail(void *arg0) {
    s32 out[2];
    u8 buf[72];
    char *p7b8;
    char *var_r29;
    void *temp_r3;
    void *temp_r9;
    void *temp_r11;
    void *temp_r9_2;
    s32 *bo;
    s16 r;
    s16 w;
    u8 b1;
    u8 b2;

    r = (s16)fn_8023A97C(M2C_FIELD(arg0, void **, 0x84), 0);
    w = M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x84), void **, 0xF4), s16 *, 0xA);
    if (r == 0x30C || w == 0x302) {
        p7b8 = (char *)arg0 + 0x7B8;
        temp_r3 = M2C_FIELD(p7b8, void **, 0);
        temp_r9 = M2C_FIELD(temp_r3, void **, 4);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *, s32 *), 0x14)((char *)temp_r3 + M2C_FIELD(temp_r9, s16 *, 0x10), (s32 *)out);
        if (out[0] == 0) {
            temp_r11 = M2C_FIELD(p7b8, void **, 4);
            bo = (s32 *)buf;
            bo[1] = out[0];
            temp_r9_2 = M2C_FIELD(temp_r11, void **, 4);
            M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, M2C_UNK *), 0x14)(temp_r11 + M2C_FIELD(temp_r9_2, s16 *, 0x10), (void *)bo);
            b1 = buf[34];
            var_r29 = lbl_8031FB0C;
            if (b1 == fn_80254BB8(lbl_803DCCC0, lbl_8031FB18, -1)) {
                var_r29 = lbl_8031FB20;
            } else {
                b2 = buf[34];
                if (b2 == fn_80254BB8(lbl_803DCCC0, lbl_8031FB2C, -1)) {
                    var_r29 = lbl_8031FB34;
                }
            }
            Avatar__CreateEffectImpl(arg0 + 0x684, var_r29, (void *)(buf + 8), lbl_8031FB40, 0, 0);
        }
    }
}
