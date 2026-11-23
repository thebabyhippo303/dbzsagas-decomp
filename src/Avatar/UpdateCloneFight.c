/* Avatar__UpdateCloneFight @ 0x8003E500 (size: 0x1C0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Actor__ToProtagonistCastImpl(void *);
int Avatar__GetAnimScriptVarInt(void *, void *, void *);
void Avatar__SetAnimScriptVarIntImpl(void *, char *, int, int);
s32 Enemy__CreateImpl(s8 *, void *, s32, s32, s8 *, s32, f32);
void * Script__PopInt(void *, void *);
s32 AI__UpdateCloneBattleAndCountClones(void *);
extern s8 lbl_80311B58 __attribute__((section(".data")));
extern s8 lbl_80311B64 __attribute__((section(".data")));
extern s8 lbl_80311B6C __attribute__((section(".data")));
extern f32 lbl_80311B74 __attribute__((section(".data")));
extern s32 lbl_803DC3D0;

typedef struct { f32 x, y, z; } Vec3;

void Avatar__UpdateCloneFight(void *arg0, void *arg1) {
    Vec3 pos;
    s32 count;
    s32 nclones;
    void *avatar;
    void *clone;
    void *vtab;

    avatar = Script__PopInt(arg0, arg1);
    clone = M2C_FIELD(avatar, void **, 0xB8C);
    if (Avatar__GetAnimScriptVarInt(avatar, &lbl_80311B58, (void *)1) == 0) {
        if (lbl_803DC3D0 == 0) {
            count = 4;
            do {
                pos = M2C_FIELD((char *)avatar + 0x38, Vec3 *, 0);
                Enemy__CreateImpl(&lbl_80311B64, &pos, 4, 10, &lbl_80311B6C, 0, lbl_80311B74);
                count -= 1;
            } while (count != 0);
            lbl_803DC3D0 = 1;
        }
        if (AI__UpdateCloneBattleAndCountClones(clone) == 4) {
            Avatar__SetAnimScriptVarIntImpl(avatar, &lbl_80311B58, 1, 1);
        }
    } else if (Avatar__GetAnimScriptVarInt(avatar, &lbl_80311B58, (void *)1) == 1) {
        nclones = AI__UpdateCloneBattleAndCountClones(clone);
        if (nclones == 0) {
            Avatar__SetAnimScriptVarIntImpl(avatar, &lbl_80311B58, 2, 1);
            M2C_FIELD(clone, s32 *, 0x49C) = nclones;
        }
    } else if (Avatar__GetAnimScriptVarInt(avatar, &lbl_80311B58, (void *)1) == 2) {
        Avatar__SetAnimScriptVarIntImpl(avatar, &lbl_80311B58, 3, 1);
        Actor__ToProtagonistCastImpl(avatar);
        M2C_FIELD(clone, s32 *, 0x49C) = 0;
    } else if (Avatar__GetAnimScriptVarInt(avatar, &lbl_80311B58, (void *)1) == 3) {
        Avatar__SetAnimScriptVarIntImpl(avatar, &lbl_80311B58, 4, 1);
        Actor__ToProtagonistCastImpl(avatar);
        vtab = M2C_FIELD(avatar, void **, 0x34);
        M2C_FIELD(vtab, M2C_UNK (**)(s32, M2C_UNK), 0x64)((s32)avatar + M2C_FIELD(vtab, s16 *, 0x60), 0);
        M2C_FIELD(clone, s32 *, 0x49C) = 0;
        lbl_803DC3D0 = 0;
    }
}
