/* ConfirmationDialog__Destroy @ 0x80024AA0 (size: 0xC0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Sphere__DestroyCore(void *, s32);
void fn_802704BC(void *, int);
extern M2C_UNK lbl_803106B8 __attribute__((section(".data")));

void ConfirmationDialog__Destroy(void *arg0, s32 arg1) {
    void *temp_r9;
    void *var_r31;

    M2C_FIELD(arg0, M2C_UNK **, 0x19C) = &lbl_803106B8;
    if (arg0 + 0xABC != NULL) {
        var_r31 = arg0 + 0x11BC;
        if (arg0 + 0xABC != var_r31) {
            do {
                var_r31 -= 0x1C0;
                temp_r9 = M2C_FIELD(var_r31, void **, 0x19C);
                M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK), 0xC)(var_r31 + M2C_FIELD(temp_r9, s16 *, 8), 0);
            } while (arg0 + 0xABC != var_r31);
        }
    }
    Sphere__DestroyCore(arg0 + 0x91C, 2);
    Sphere__DestroyCore(arg0 + 0x77C, 2);
    fn_802704BC(arg0 + 0x588, 2);
    fn_802704BC(arg0 + 0x394, 2);
    fn_802704BC(arg0 + 0x1A0, 2);
    Sphere__DestroyCore(arg0, arg1);
}
