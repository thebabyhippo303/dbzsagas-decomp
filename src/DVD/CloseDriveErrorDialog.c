/* DVD__CloseDriveErrorDialog @ 0x80009610 (size: 0xC4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void SimLoop__PauseSimulation(int, int, int, int);
void fn_80267318(void *, int, float);
M2C_UNK DisplayInfo__DeactivateOverlay(void *);     /* extern */
extern f32 lbl_80309D9C __attribute__((section(".data")));
extern void *lbl_803DC3A0;
extern s32 lbl_803DC3C0;

void DVD__CloseDriveErrorDialog(void *arg0) {
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;

    temp_r9 = M2C_FIELD(arg0, void **, 0x19C);
    if (M2C_FIELD(temp_r9, s32 (**)(void *), 0x3A4)(arg0 + M2C_FIELD(temp_r9, s16 *, 0x3A0)) != 0) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0xB568) == 0) {
            SimLoop__PauseSimulation(lbl_803DC3C0, 0, 0, 0);
            temp_r9_2 = M2C_FIELD(lbl_803DC3A0, void **, 0x19C);
            if (M2C_FIELD(temp_r9_2, s32 (**)(void *), 0x3A4)(lbl_803DC3A0 + M2C_FIELD(temp_r9_2, s16 *, 0x3A0)) != 0) {
                DisplayInfo__DeactivateOverlay(lbl_803DC3A0);
            }
        }
        fn_80267318(arg0, 0, lbl_80309D9C);
        temp_r9_3 = M2C_FIELD(arg0, void **, 0x19C);
        M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *), 0x1E4)(arg0 + M2C_FIELD(temp_r9_3, s16 *, 0x1E0));
    }
}
