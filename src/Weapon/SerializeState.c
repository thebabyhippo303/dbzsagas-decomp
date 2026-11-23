/* Weapon__SerializeState @ 0x800DD240 (size: 0xD8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void * Game__GetPlayerImpl(void *, int);
void WeaponInventory__AddById(void *, int);
void * WeaponInventory__SelectById(void *, int);
int Weapon__GetStateSize(void *);
s32 fn_801A6040();                                  /* extern */
M2C_UNK fn_801F1290(void *, s32 **);                /* extern */
extern void *lbl_803DC3C0;

void Weapon__SerializeState(void *arg0, void *arg1, s32 arg2) {
    s32 *sp8;
    s32 *temp_r9;
    void *temp_r30;
    arg1 = (char *) arg1 + fn_801A6040();
    if (arg2 != 0) {
        M2C_FIELD(arg1, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 0x350);
        M2C_FIELD(arg1, s32 *, 4) = (s32) **M2C_FIELD(arg0, s32 ***, 0x354);
    } else {
        M2C_FIELD(arg0, s32 *, 0x350) = (s32) M2C_FIELD(arg1, s32 *, 0);
        if ((s32) M2C_FIELD(arg1, s32 *, 4) != -1) {
            temp_r30 = Game__GetPlayerImpl(lbl_803DC3C0, 0) + 0x15F0;
            WeaponInventory__AddById(temp_r30, M2C_FIELD(arg1, s32 *, 4));
            M2C_FIELD(arg0, s32 ***, 0x354) = WeaponInventory__SelectById(temp_r30, M2C_FIELD(arg1, s32 *, 4));
        }
        temp_r9 = *M2C_FIELD(arg0, s32 ***, 0x354);
        if (temp_r9 != NULL) {
            sp8 = M2C_FIELD(temp_r9, s32 **, 4);
        } else {
            sp8 = temp_r9;
        }
        M2C_FIELD(&sp8, s32 *, 4) = 0;
        fn_801F1290(arg0, &sp8);
    }
    Weapon__GetStateSize(arg0);
}
