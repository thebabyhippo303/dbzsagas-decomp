/* Platform__HandleReset @ 0x801D6E2C (size: 0x100, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void OSResetSystem(int, int, int);
void VIFlush(void);
void VISetBlack(int);
M2C_UNK OSSuspendThread(s32);
M2C_UNK fn_802E262C(void);
M2C_UNK VIWaitForRetrace(void);
M2C_UNK ControllerMap__GetController(s32, s32);
extern void *lbl_803DCC74;

void Platform__HandleReset(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r3;
    u32 var_r31;
    void *temp_r9;
    void *temp_r9_3;
    void *temp_r9_4;

    OSSuspendThread(M2C_FIELD(arg0, s32 *, 0x328));
    fn_802E262C();
    VISetBlack(1);
    VIFlush();
    VIWaitForRetrace();
    if ((void *) lbl_803DCC74 != NULL) {
        temp_r9 = M2C_FIELD(lbl_803DCC74, void **, 0x10);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x14)(lbl_803DCC74 + M2C_FIELD(temp_r9, s16 *, 0x10));
        for (var_r31 = 0U; var_r31 < ({ void *t = M2C_FIELD(lbl_803DCC74, void **, 0x10); M2C_FIELD(t, u32 (**)(void *), 0x24)(lbl_803DCC74 + M2C_FIELD(t, s16 *, 0x20)); }); var_r31 += 1) {
            temp_r3 = ControllerMap__GetController((s32) lbl_803DCC74, (s32) var_r31);
            if (temp_r3 != 0) {
                temp_r9_3 = M2C_FIELD(temp_r3, void **, 0x1F8);
                M2C_FIELD(temp_r9_3, M2C_UNK (**)(s32, M2C_UNK), 0x44)(temp_r3 + M2C_FIELD(temp_r9_3, s16 *, 0x40), 1);
            }
        }
        temp_r9_4 = M2C_FIELD(lbl_803DCC74, void **, 0x10);
        M2C_FIELD(temp_r9_4, M2C_UNK (**)(void *), 0x1C)(lbl_803DCC74 + M2C_FIELD(temp_r9_4, s16 *, 0x18));
    }
    VIWaitForRetrace();
    OSResetSystem(arg1, arg2, arg3);
}
