/* DbzBreakable__HandleWeaponImpact @ 0x800E728C (size: 0x148, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef unsigned short u16; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef short s16; typedef float f32;
typedef struct V3 { f32 x, y, z; } V3;
void Sound__Play2D(s32, s32);
s32 WeaponInventory__GetSelectedId(void *);
void DbzBreakable__ProcessImpact(void *, void *);
s32 fn_8023A97C(void *, s32);
void DbzBreakable__ProcessImpactConsequences(void *);
extern f32 lbl_8032365C __attribute__((section(".data")));
extern f32 lbl_80323660 __attribute__((section(".data")));
extern f32 lbl_80323664 __attribute__((section(".data")));
extern s32 lbl_803945E4[] __attribute__((section(".data")));

s32 DbzBreakable__HandleWeaponImpact(char *self, char *other) {
    V3 unused;
    V3 v;
    s32 st;
    s32 id;
    if ((*(s32 *)other & lbl_803945E4[1]) == lbl_803945E4[0]) {
        if ((s16)fn_8023A97C(*(void **)(other + 0x84), 0) == 0x30C) {
            st = *(s32 *)(self + 0x544);
            {
                switch (st) {
                case 4:
                case 5:
                case 6:
                    if (*(s32 *)(self + 0x548) != 5) {
                        *(s32 *)(self + 0x548) = 5;
                        DbzBreakable__ProcessImpactConsequences(self);
                        Sound__Play2D((s32)(self + 0x632), 0);
                        *(f32 *)(other + 0x70C) = lbl_8032365C;
                    }
                    break;
                case 0:
                    if (*(s32 *)(self + 0x7AC) != 0) {
                        DbzBreakable__ProcessImpactConsequences(self);
                    }
                    break;
                }
            }
            *(f32 *)(self + 0x864) = lbl_80323660;
        } else {
            id = 0;
            if (*(s32 *)(other + 0x18F8) != 0) id = WeaponInventory__GetSelectedId(other + 0x15F0);
            if (id == 0x1B || id == 0x18 || id == 0x58 || *(s32 *)(other + 0x71C) == 3) {
                v.x = lbl_80323664;
                v.y = lbl_80323664;
                v.z = lbl_80323664;
                *(s32 *)(self + 0x53C) = 1;
                DbzBreakable__ProcessImpact(self, &v);
            }
        }
    }
    return 1;
}
