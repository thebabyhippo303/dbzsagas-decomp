/* Script__BackgroundCharacterSendCommand @ 0x8003DA48 (size: 0x1BC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef unsigned char u8; typedef unsigned int u32; typedef double f64; typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef float f32; typedef int M2C_UNK;
typedef struct Mask { s32 value; s32 mask; } Mask;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
s32 Script__PopInt(void *, s32);
void Avatar__StopAnimationChannelIfId(void *, s32, s32);
s32 Avatar__StartAnimationImpl(char *, u16, s32, s32, s32, s32);
void AI__ResetToState13(void *);
s32 AvatarInventory__AddItem(void *, s32, s32, s32);
void Avatar__SetAnimScriptVarIntImpl(void *, char *, s32, s32);
void Sound__Play2D(s32, s32);
void Avatar__StopSecondaryAnimationIfId(void *, s32);
extern char lbl_80311B18[] __attribute__((section(".data")));
extern f32 lbl_80311B28 __attribute__((section(".data")));
extern s32 lbl_80312274[] __attribute__((section(".data")));
extern Mask lbl_803945E4 __attribute__((section(".data")));
extern void *lbl_803DC3C0;
extern s32 lbl_803DC460;
void Script__BackgroundCharacterSendCommand(void *arg0, s32 arg1) {
    s32 var_r30;
    s32 end;
    s32 temp_r31;
    s32 temp_r3;
    void *temp_r11;
    f32 fv;
    void *ai;
    temp_r31 = Script__PopInt(arg0, arg1);
    temp_r3 = Script__PopInt(arg0, arg1);
    if ((temp_r31 == 0) || ((M2C_FIELD(temp_r31, s32 *, 0) & lbl_803945E4.mask) == lbl_803945E4.value)) {
        switch (temp_r3) {
        case 0:
            if ((s32) M2C_FIELD(temp_r31, s32 *, 0x7E4) == 0) {
                fv = lbl_80311B28;
                temp_r11 = (char *)temp_r31 + 0xB04;
                M2C_FIELD(temp_r11, s32 *, 0x564) = 5;
                M2C_FIELD(temp_r11, f32 *, 0x568) = fv;
                Avatar__StopAnimationChannelIfId((void *) temp_r31, -1, 0);
                Avatar__StopSecondaryAnimationIfId((void *) temp_r31, -1);
            }
            Avatar__StartAnimationImpl((char *) temp_r31, 0x500, 1, 1, 0, 1);
            return;
        case 1:
            Avatar__StartAnimationImpl((char *) temp_r31, 0x600, 1, 0, 1, 1);
            return;
        case 2:
            if ((s32) M2C_FIELD(temp_r31, s32 *, 0x2D4) != 0) {
                ai = M2C_FIELD(temp_r31, void **, 0xB8C);
                lbl_803DC460 = 1;
                AI__ResetToState13(ai);
            } else {
                AvatarInventory__AddItem(M2C_FIELD(temp_r31, void **, 0x159C), 0x54, 0, 1);
                Avatar__SetAnimScriptVarIntImpl((void *) temp_r31, lbl_80311B18, 1, 1);
                Avatar__StartAnimationImpl((char *) temp_r31, 0x300, 1, 0, 1, 1);
            }
            M2C_FIELD(lbl_803DC3C0, s32 *, 0x20F4) = 0;
            return;
        case 3:
            var_r30 = (s32) lbl_80312274;
            end = var_r30 + 312;
            do {
                if (M2C_FIELD(M2C_FIELD(temp_r31, void **, 0x19D8), s32 *, 0xC) == *(s32 *) var_r30) {
                    Sound__Play2D(*(s32 *) (var_r30 + 4), 0);
                }
                var_r30 += 8;
            } while (var_r30 < end);
            break;
        }
    }
}
