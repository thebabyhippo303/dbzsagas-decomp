/* WaterMesh__SetTransform @ 0x8027AFF0 (size: 0x32C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

M2C_UNK Matrix__InvertAffine(s32, s32);
extern f32 lbl_8034F190 __attribute__((section(".data")));

void WaterMesh__SetTransform(void *arg0, void *arg1) {
    void *inv2;
    f32 t8;
    f32 t12;
    f32 t16;
    u32 b8;
    u32 b12;
    u32 b16;
    u32 *pu;
    void *r9v;
    void *r11v;
    void *r10v;
    void *r8v;
    void *r7v;
    void *temp_r11;
    void *temp_r9;
    void *temp_r3;
    void *temp_r9_2;
    void *var_r7;
    void *temp_r11_2;
    f32 f13sel;
    s32 var_r8;
    void *var_r10;
    f32 temp_f8;
    f32 temp_f7;
    f32 temp_f0;
    f32 f0v2;
    f32 f13v2;
    f32 f12v2;
    f32 f11v2;
    f32 f11v3;
    f32 f0v3;
    f32 f13v3;
    f32 f12v3;

    temp_r11 = M2C_FIELD(arg0, void **, 0x8C);
    if (temp_r11 != NULL) {
        temp_r9 = (char *)temp_r11 + 0x10;
        inv2 = (char *)arg0 + 0x4C;
        M2C_FIELD(temp_r11, f32 *, 0x10) = M2C_FIELD(arg1, f32 *, 0);
        M2C_FIELD(temp_r9, f32 *, 4) = M2C_FIELD(arg1, f32 *, 4);
        M2C_FIELD(temp_r9, f32 *, 8) = M2C_FIELD(arg1, f32 *, 8);
        M2C_FIELD(temp_r9, f32 *, 0xC) = M2C_FIELD(arg1, f32 *, 0xC);
        M2C_FIELD(temp_r9, f32 *, 0x10) = M2C_FIELD(arg1, f32 *, 0x10);
        M2C_FIELD(temp_r9, f32 *, 0x14) = M2C_FIELD(arg1, f32 *, 0x14);
        M2C_FIELD(temp_r9, f32 *, 0x18) = M2C_FIELD(arg1, f32 *, 0x18);
        M2C_FIELD(temp_r9, f32 *, 0x1C) = M2C_FIELD(arg1, f32 *, 0x1C);
        M2C_FIELD(temp_r9, f32 *, 0x20) = M2C_FIELD(arg1, f32 *, 0x20);
        M2C_FIELD(temp_r9, f32 *, 0x24) = M2C_FIELD(arg1, f32 *, 0x24);
        M2C_FIELD(temp_r9, f32 *, 0x28) = M2C_FIELD(arg1, f32 *, 0x28);
        M2C_FIELD(temp_r9, f32 *, 0x2C) = M2C_FIELD(arg1, f32 *, 0x2C);
        M2C_FIELD(temp_r9, f32 *, 0x30) = M2C_FIELD(arg1, f32 *, 0x30);
        M2C_FIELD(temp_r9, f32 *, 0x34) = M2C_FIELD(arg1, f32 *, 0x34);
        M2C_FIELD(temp_r9, f32 *, 0x38) = M2C_FIELD(arg1, f32 *, 0x38);
        M2C_FIELD(temp_r9, f32 *, 0x3C) = M2C_FIELD(arg1, f32 *, 0x3C);
        Matrix__InvertAffine((s32)((char *)M2C_FIELD(arg0, void **, 0x8C) + 0x10), (s32)inv2);
        inv2 = M2C_FIELD(arg0, void **, 0x8C);
        if (M2C_FIELD(inv2, u8 *, 1) & 0x20) {
            temp_r3 = M2C_FIELD(inv2, void **, 0x78);
            temp_r9_2 = M2C_FIELD(temp_r3, void **, 0);
            M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *), 0x24)(temp_r3 + M2C_FIELD(temp_r9_2, s16 *, 0x20));
        } else {
            f13sel = lbl_8034F190;
            if (!(M2C_FIELD(inv2, u16 *, 2) & 4)) {
                var_r7 = M2C_FIELD(inv2, void **, 0x78);
            } else {
                temp_r11_2 = M2C_FIELD(inv2, void **, 0x78);
                if (!(f13sel >= M2C_FIELD(temp_r11_2, f32 *, 8))) {
                    var_r7 = M2C_FIELD(temp_r11_2, void **, 0);
                } else if (!(f13sel >= M2C_FIELD(temp_r11_2, f32 *, 0xC))) {
                    var_r7 = M2C_FIELD(temp_r11_2, void **, 4);
                } else {
                    var_r7 = M2C_FIELD(temp_r11_2, void **, 8);
                }
            }
            if (var_r7 != NULL) {
                r9v = (char *)inv2 + 0x10;
                r11v = (char *)var_r7 + 4;
                temp_f8 = M2C_FIELD(r11v, f32 *, 4);
                r10v = (char *)inv2 + 0x50;
                r8v = (char *)inv2 + 0x60;
                temp_f7 = M2C_FIELD(var_r7, f32 *, 4);
                temp_f0 = M2C_FIELD(r11v, f32 *, 8);
                r7v = (char *)inv2 + 0x6C;
                t8 = (temp_f0 * M2C_FIELD(r9v, f32 *, 0x20)) + ((temp_f7 * M2C_FIELD(inv2, f32 *, 0x10)) + (temp_f8 * M2C_FIELD(r9v, f32 *, 0x10)));
                t16 = (temp_f0 * M2C_FIELD(r9v, f32 *, 0x28)) + ((temp_f7 * M2C_FIELD(r9v, f32 *, 8)) + (temp_f8 * M2C_FIELD(r9v, f32 *, 0x18)));
                t12 = (temp_f0 * M2C_FIELD(r9v, f32 *, 0x24)) + ((temp_f7 * M2C_FIELD(r9v, f32 *, 4)) + (temp_f8 * M2C_FIELD(r9v, f32 *, 0x14)));
                b8 = *(u32 *)&t8;
                b12 = *(u32 *)&t12;
                b16 = *(u32 *)&t16;
                M2C_FIELD(inv2, u32 *, 0x50) = b8;
                M2C_FIELD(r10v, u32 *, 4) = b12;
                M2C_FIELD(r10v, u32 *, 8) = b16;
                f0v2 = M2C_FIELD(r10v, f32 *, 4);
                f13v2 = M2C_FIELD(inv2, f32 *, 0x5C);
                f12v2 = M2C_FIELD(inv2, f32 *, 0x50);
                f11v2 = M2C_FIELD(r10v, f32 *, 8);
                t12 = f0v2 - f13v2;
                t8 = f12v2 - f13v2;
                t16 = f11v2 - f13v2;
                b8 = *(u32 *)&t8;
                b12 = *(u32 *)&t12;
                b16 = *(u32 *)&t16;
                M2C_FIELD(inv2, u32 *, 0x60) = b8;
                M2C_FIELD(r8v, u32 *, 8) = b16;
                M2C_FIELD(r8v, u32 *, 4) = b12;
                f11v3 = M2C_FIELD(inv2, f32 *, 0x5C);
                f0v3 = M2C_FIELD(inv2, f32 *, 0x50);
                f13v3 = M2C_FIELD(r10v, f32 *, 8);
                f12v3 = M2C_FIELD(r10v, f32 *, 4);
                t8 = f0v3 + f11v3;
                t16 = f13v3 + f11v3;
                t12 = f12v3 + f11v3;
                b8 = *(u32 *)&t8;
                b12 = *(u32 *)&t12;
                b16 = *(u32 *)&t16;
                M2C_FIELD(inv2, u32 *, 0x6C) = b8;
                M2C_FIELD(r7v, u32 *, 8) = b16;
                M2C_FIELD(r7v, u32 *, 4) = b12;
            }
        }
        var_r8 = 0;
        if (var_r8 < M2C_FIELD(arg0, s32 *, 0x120)) {
            pu = (u32 *)&t8;
            var_r10 = (char *)arg0 + 0x16C;
            do {
                if (M2C_FIELD(var_r10, s32 *, -68) == 1) {
                    t16 = (M2C_FIELD(var_r10, f32 *, 8) * M2C_FIELD(arg1, f32 *, 0x28)) + ((M2C_FIELD(var_r10, f32 *, 0) * M2C_FIELD(arg1, f32 *, 0x20)) + (M2C_FIELD(var_r10, f32 *, 4) * M2C_FIELD(arg1, f32 *, 0x24)));
                    t8 = (M2C_FIELD(var_r10, f32 *, 8) * M2C_FIELD(arg1, f32 *, 8)) + ((M2C_FIELD(var_r10, f32 *, 0) * M2C_FIELD(arg1, f32 *, 0)) + (M2C_FIELD(var_r10, f32 *, 4) * M2C_FIELD(arg1, f32 *, 4)));
                    t12 = (M2C_FIELD(var_r10, f32 *, 8) * M2C_FIELD(arg1, f32 *, 0x18)) + ((M2C_FIELD(var_r10, f32 *, 0) * M2C_FIELD(arg1, f32 *, 0x10)) + (M2C_FIELD(var_r10, f32 *, 4) * M2C_FIELD(arg1, f32 *, 0x14)));
                    b8 = *(u32 *)&t8;
                    b12 = pu[1];
                    b16 = pu[2];
                    M2C_FIELD(var_r10, u32 *, 12) = b8;
                    M2C_FIELD(var_r10, u32 *, 16) = b12;
                    M2C_FIELD(var_r10, u32 *, 20) = b16;
                }
                var_r8 += 1;
                var_r10 = (char *)var_r10 + 0x60;
            } while (var_r8 < M2C_FIELD(arg0, s32 *, 0x120));
        }
    }
}
