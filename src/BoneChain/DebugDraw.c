/* BoneChain__DebugDraw @ 0x801E2768 (size: 0x5BC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void DebugDraw__BoxTransformed(void *, void *, void *, s32);
void DebugDraw__Line(s32, s32, s32);
void DebugDraw__Point(s32, s32, f32);
M2C_UNK Bone__EnsureWorldTransform(s32);
M2C_UNK Matrix__Copy4x4(s32, s32);
extern f32 lbl_80344018 __attribute__((section(".data")));
extern f32 lbl_8034401C __attribute__((section(".data")));
extern f32 lbl_80344020 __attribute__((section(".data")));

void BoneChain__DebugDraw(void *arg0, s32 arg1) {
    s32 sp14C;
    M2C_UNK spC8;
    f32 spC4;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    M2C_UNK sp8;
    f32 sp48;
    M2C_UNK *var_r10_2;
    M2C_UNK *var_r11_2;
    f32 *var_r10;
    f32 *var_r11;
    f32 temp_f24;
    f32 temp_f25;
    s32 temp_r11;
    s32 temp_r29;
    s32 var_r30;
    s32 var_r31;
    s32 var_r9;
    void *temp_r30;
    void *temp_r3;
    void *temp_r9_3;

    sp14C = M2C_ERROR(/* unknown instruction: mfcr $r12 */);
    var_r30 = 1;
    var_r31 = arg1;
    if ((s32) M2C_FIELD(arg0, s32 *, 8) > 1) {
        temp_f25 = lbl_80344018;
        temp_f24 = lbl_8034401C;
        do {
            temp_r11 = var_r30 * 0x34;
            temp_r3 = *(void * *)(temp_r11 + M2C_FIELD(arg0, s32 *, 0xC));
            temp_r30 = M2C_FIELD(temp_r3, void **, 0xD8);
            temp_r29 = var_r31 / 7;
            temp_r29 = var_r31 - ((temp_r29 * 8) - temp_r29);
            temp_r3 = Bone__EnsureWorldTransform((s32) temp_r3);
            var_r10 = &sp48;
            var_r11 = &sp88;
            var_r9 = 0x30;
            sp88 = (M2C_FIELD(temp_r30, u32 *, 8) * M2C_FIELD(temp_r3, f32 *, 0x20)) + ((M2C_FIELD(temp_r30, f32 *, 0) * M2C_FIELD(temp_r3, f32 *, 0)) + (M2C_FIELD(temp_r30, f32 *, 4) * M2C_FIELD(temp_r3, f32 *, 0x10)));
            sp8C = (M2C_FIELD(temp_r30, u32 *, 8) * M2C_FIELD(temp_r3, f32 *, 0x24)) + ((M2C_FIELD(temp_r30, f32 *, 0) * M2C_FIELD(temp_r3, f32 *, 4)) + (M2C_FIELD(temp_r30, f32 *, 4) * M2C_FIELD(temp_r3, f32 *, 0x14)));
            sp94 = temp_f25;
            sp90 = (M2C_FIELD(temp_r30, u32 *, 8) * M2C_FIELD(temp_r3, f32 *, 0x28)) + ((M2C_FIELD(temp_r30, f32 *, 0) * M2C_FIELD(temp_r3, f32 *, 8)) + (M2C_FIELD(temp_r30, f32 *, 4) * M2C_FIELD(temp_r3, f32 *, 0x18)));
            sp98 = (M2C_FIELD(temp_r30, f32 *, 0x18) * M2C_FIELD(temp_r3, f32 *, 0x20)) + ((M2C_FIELD(temp_r30, f32 *, 0x10) * M2C_FIELD(temp_r3, f32 *, 0)) + (M2C_FIELD(temp_r30, f32 *, 0x14) * M2C_FIELD(temp_r3, f32 *, 0x10)));
            sp9C = (M2C_FIELD(temp_r30, f32 *, 0x18) * M2C_FIELD(temp_r3, f32 *, 0x24)) + ((M2C_FIELD(temp_r30, f32 *, 0x10) * M2C_FIELD(temp_r3, f32 *, 4)) + (M2C_FIELD(temp_r30, f32 *, 0x14) * M2C_FIELD(temp_r3, f32 *, 0x14)));
            spA4 = temp_f25;
            spA4 = (M2C_FIELD(temp_r30, f32 *, 0x18) * M2C_FIELD(temp_r3, f32 *, 0x28)) + ((M2C_FIELD(temp_r30, f32 *, 0x10) * M2C_FIELD(temp_r3, f32 *, 8)) + (M2C_FIELD(temp_r30, f32 *, 0x14) * M2C_FIELD(temp_r3, f32 *, 0x18)));
            spA8 = (M2C_FIELD(temp_r30, f32 *, 0x28) * M2C_FIELD(temp_r3, f32 *, 0x20)) + ((M2C_FIELD(temp_r30, f32 *, 0x20) * M2C_FIELD(temp_r3, f32 *, 0)) + (M2C_FIELD(temp_r30, f32 *, 0x24) * M2C_FIELD(temp_r3, f32 *, 0x10)));
            spAC = (M2C_FIELD(temp_r30, f32 *, 0x28) * M2C_FIELD(temp_r3, f32 *, 0x24)) + ((M2C_FIELD(temp_r30, f32 *, 0x20) * M2C_FIELD(temp_r3, f32 *, 4)) + (M2C_FIELD(temp_r30, f32 *, 0x24) * M2C_FIELD(temp_r3, f32 *, 0x14)));
            spB4 = temp_f25;
            spB4 = (M2C_FIELD(temp_r30, f32 *, 0x28) * M2C_FIELD(temp_r3, f32 *, 0x28)) + ((M2C_FIELD(temp_r30, f32 *, 0x20) * M2C_FIELD(temp_r3, f32 *, 8)) + (M2C_FIELD(temp_r30, f32 *, 0x24) * M2C_FIELD(temp_r3, f32 *, 0x18)));
            spB8 = (M2C_FIELD(temp_r30, f32 *, 0x38) * M2C_FIELD(temp_r3, f32 *, 0x20)) + ((M2C_FIELD(temp_r30, f32 *, 0x30) * M2C_FIELD(temp_r3, f32 *, 0)) + (M2C_FIELD(temp_r30, f32 *, 0x34) * M2C_FIELD(temp_r3, f32 *, 0x10))) + M2C_FIELD(temp_r3, f32 *, 0x30);
            spBC = (M2C_FIELD(temp_r30, f32 *, 0x38) * M2C_FIELD(temp_r3, f32 *, 0x24)) + ((M2C_FIELD(temp_r30, f32 *, 0x30) * M2C_FIELD(temp_r3, f32 *, 4)) + (M2C_FIELD(temp_r30, f32 *, 0x34) * M2C_FIELD(temp_r3, f32 *, 0x14))) + M2C_FIELD(temp_r3, f32 *, 0x34);
            spC4 = temp_f24;
            spC4 = (M2C_FIELD(temp_r30, f32 *, 0x38) * M2C_FIELD(temp_r3, f32 *, 0x28)) + ((M2C_FIELD(temp_r30, f32 *, 0x30) * M2C_FIELD(temp_r3, f32 *, 8)) + (M2C_FIELD(temp_r30, f32 *, 0x34) * M2C_FIELD(temp_r3, f32 *, 0x18))) + M2C_FIELD(temp_r3, f32 *, 0x38);
loop_3:
            var_r9 -= 0x18;
            M2C_FIELD(var_r10, f32 *, 0) = M2C_FIELD(var_r11, f32 *, 0);
            M2C_FIELD(var_r10, s32 *, 4) = (s32) M2C_FIELD(var_r11, s32 *, 4);
            M2C_FIELD(var_r10, s32 *, 8) = (s32) M2C_FIELD(var_r11, s32 *, 8);
            M2C_FIELD(var_r10, s32 *, 0xC) = (s32) M2C_FIELD(var_r11, s32 *, 0xC);
            M2C_FIELD(var_r10, s32 *, 0x10) = (s32) M2C_FIELD(var_r11, s32 *, 0x10);
            sp14C = M2C_FIELD(var_r11, s32 *, 0x14);
            var_r11 += 0x18;
            M2C_FIELD(var_r10, s32 *, 0x14) = sp14C;
            var_r10 += 0x18;
            if (var_r9 != 0) {
                goto loop_3;
            }
            temp_r3 = M2C_FIELD(arg0, void **, 0x10);
            M2C_FIELD(var_r10, f32 *, 0) = M2C_FIELD(var_r11, f32 *, 0);
            M2C_FIELD(var_r10, s32 *, 4) = (s32) M2C_FIELD(var_r11, s32 *, 4);
            M2C_FIELD(var_r10, s32 *, 8) = (s32) M2C_FIELD(var_r11, s32 *, 8);
            M2C_FIELD(var_r10, s32 *, 0xC) = (s32) M2C_FIELD(var_r11, s32 *, 0xC);
            sp9C = M2C_FIELD(temp_r3, f32 *, 0x10);
            sp98 = M2C_FIELD(temp_r3, f32 *, 0x14);
            spAC = M2C_FIELD(temp_r3, f32 *, 0x18);
            spA8 = M2C_FIELD(temp_r3, f32 *, 0);
            spA4 = M2C_FIELD(temp_r3, f32 *, 4);
            spB4 = M2C_FIELD(temp_r3, f32 *, 8);
            spC4 = M2C_FIELD(temp_r3, f32 *, 0x20);
            spB8 = M2C_FIELD(temp_r3, f32 *, 0x24);
            sp88 = (M2C_FIELD(&sp48, f32 *, 0x8) * spC4) + ((sp48 * spA8) + (M2C_FIELD(&sp48, f32 *, 0x4) * sp9C));
            spBC = M2C_FIELD(temp_r3, f32 *, 0x28);
            sp8C = (M2C_FIELD(&sp48, f32 *, 0x8) * spB8) + ((sp48 * spA4) + (M2C_FIELD(&sp48, f32 *, 0x4) * sp98));
            sp8C = (M2C_FIELD(&sp48, f32 *, 0x8) * spBC) + ((sp48 * spB4) + (M2C_FIELD(&sp48, f32 *, 0x4) * spAC));
            sp8C = temp_f25;
            sp8C = (M2C_FIELD(&sp48, f32 *, 0x18) * spC4) + ((M2C_FIELD(&sp48, f32 *, 0x10) * spA8) + (M2C_FIELD(&sp48, f32 *, 0x14) * sp9C));
            sp8C = (M2C_FIELD(&sp48, f32 *, 0x18) * spB8) + ((M2C_FIELD(&sp48, f32 *, 0x10) * spA4) + (M2C_FIELD(&sp48, f32 *, 0x14) * sp98));
            sp8C = (M2C_FIELD(&sp48, f32 *, 0x18) * spBC) + ((M2C_FIELD(&sp48, f32 *, 0x10) * spB4) + (M2C_FIELD(&sp48, f32 *, 0x14) * spAC));
            sp8C = temp_f25;
            sp94 = temp_f25;
            sp94 = temp_f24;
            sp90 = (M2C_FIELD(&sp48, f32 *, 0x28) * spBC) + ((M2C_FIELD(&sp48, f32 *, 0x20) * spB4) + (M2C_FIELD(&sp48, f32 *, 0x24) * spAC));
            sp8C = (M2C_FIELD(&sp48, f32 *, 0x28) * spC4) + ((M2C_FIELD(&sp48, f32 *, 0x20) * spA8) + (M2C_FIELD(&sp48, f32 *, 0x24) * sp9C));
            sp8C = (M2C_FIELD(&sp48, f32 *, 0x28) * spB8) + ((M2C_FIELD(&sp48, f32 *, 0x20) * spA4) + (M2C_FIELD(&sp48, f32 *, 0x24) * sp98));
            sp8C = (M2C_FIELD(&sp48, f32 *, 0x38) * spC4) + ((M2C_FIELD(&sp48, f32 *, 0x30) * spA8) + (M2C_FIELD(&sp48, f32 *, 0x34) * sp9C)) + M2C_FIELD(temp_r3, f32 *, 0x30);
            sp8C = (M2C_FIELD(&sp48, f32 *, 0x38) * spB8) + ((M2C_FIELD(&sp48, f32 *, 0x30) * spA4) + (M2C_FIELD(&sp48, f32 *, 0x34) * sp98)) + M2C_FIELD(temp_r3, f32 *, 0x34);
            sp48 = (M2C_FIELD(&sp48, f32 *, 0x38) * spBC) + ((M2C_FIELD(&sp48, f32 *, 0x30) * spB4) + (M2C_FIELD(&sp48, f32 *, 0x34) * spAC)) + M2C_FIELD(temp_r3, f32 *, 0x38);
            Matrix__Copy4x4((s32) &spC8, (s32) &sp88);
            var_r11_2 = &sp8;
            var_r10_2 = &spC8;
            var_r9 = 0x30;
loop_5:
            var_r9 -= 0x18;
            M2C_FIELD(var_r11_2, s32 *, 0) = (s32) M2C_FIELD(var_r10_2, s32 *, 0);
            M2C_FIELD(var_r11_2, s32 *, 4) = (s32) M2C_FIELD(var_r10_2, s32 *, 4);
            M2C_FIELD(var_r11_2, s32 *, 8) = (s32) M2C_FIELD(var_r10_2, s32 *, 8);
            M2C_FIELD(var_r11_2, s32 *, 0xC) = (s32) M2C_FIELD(var_r10_2, s32 *, 0xC);
            M2C_FIELD(var_r11_2, s32 *, 0x10) = (s32) M2C_FIELD(var_r10_2, s32 *, 0x10);
            sp14C = M2C_FIELD(var_r10_2, s32 *, 0x14);
            var_r10_2 += 0x18;
            M2C_FIELD(var_r11_2, s32 *, 0x14) = sp14C;
            var_r11_2 += 0x18;
            if (var_r9 != 0) {
                goto loop_5;
            }
            M2C_FIELD(var_r11_2, s32 *, 0) = (s32) M2C_FIELD(var_r10_2, s32 *, 0);
            temp_r3 = temp_r11 + M2C_FIELD(arg0, s32 *, 0xC);
            M2C_FIELD(var_r11_2, s32 *, 4) = (s32) M2C_FIELD(var_r10_2, s32 *, 4);
            M2C_FIELD(var_r11_2, s32 *, 8) = (s32) M2C_FIELD(var_r10_2, s32 *, 8);
            M2C_FIELD(var_r11_2, s32 *, 0xC) = (s32) M2C_FIELD(var_r10_2, s32 *, 0xC);
            temp_r9_3 = temp_r3 - 0xC;
            M2C_FIELD(&sp8, f32 *, 0x30) = (f32) M2C_FIELD(temp_r3, f32 *, -0xC);
            M2C_FIELD(&sp8, f32 *, 0x34) = (f32) M2C_FIELD(temp_r9_3, f32 *, 4);
            M2C_FIELD(&sp8, f32 *, 0x38) = (f32) M2C_FIELD(temp_r9_3, f32 *, 8);
            DebugDraw__BoxTransformed(temp_r30 + 0xD0, temp_r30 + 0xDC, &sp8, temp_r29);
            if (M2C_ERROR(/* Read from unset register $cr0_eq */)) {
                var_r9 = M2C_FIELD(arg0, s32 *, 0xC);
                sp14C = temp_r11 - 0x34;
                DebugDraw__Line(var_r9 + sp14C + 0x28, var_r9 + temp_r11 + 0x28, temp_r29);
                DebugDraw__Point(M2C_FIELD(arg0, s32 *, 0xC) + sp14C + 0x28, temp_r29, lbl_80344020);
                DebugDraw__Point(M2C_FIELD(arg0, s32 *, 0xC) + temp_r11 + 0x28, temp_r29, lbl_80344020);
            }
            var_r30 += 1;
            var_r31 += 1;
        } while (var_r30 < (s32) M2C_FIELD(arg0, s32 *, 8));
    }
}
