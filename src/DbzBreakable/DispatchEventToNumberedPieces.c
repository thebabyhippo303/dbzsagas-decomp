/* DbzBreakable__DispatchEventToNumberedPieces @ 0x800EA0F4 (size: 0xE0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void fn_80251650(void *, int, int, void *, void *);
void * fn_802ABF24(char *);
M2C_UNK sprintf(s8 *, M2C_UNK *, s8 *, s32);        /* extern */
extern M2C_UNK lbl_80323618 __attribute__((section(".data")));
extern M2C_UNK lbl_803B1DDC __attribute__((section(".data")));

void DbzBreakable__DispatchEventToNumberedPieces(void *arg0) {
    s8 sp8;
    s32 var_r29;
    s32 var_r30;
    s8 *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;

    var_r29 = 0;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x79C) == 0) {
        temp_r3 = arg0 + 0x6FA;
        M2C_FIELD(arg0, s32 *, 0x79C) = 1;
        temp_r3_2 = fn_802ABF24(temp_r3);
        if (temp_r3_2 != NULL) {
            var_r29 = 1;
            fn_80251650(&lbl_803B1DDC, 0x2000C, 0, arg0, temp_r3_2);
        }
        var_r30 = 0;
        if (var_r29 == 0) {
            do {
                sprintf(&sp8, &lbl_80323618, temp_r3, var_r30);
                var_r30 += 1;
                temp_r3_3 = fn_802ABF24(&sp8);
                if (temp_r3_3 != NULL) {
                    fn_80251650(&lbl_803B1DDC, 0x2000C, 0, arg0, temp_r3_3);
                } else {
                    var_r29 = 1;
                }
            } while (var_r29 == 0);
        }
    }
}
