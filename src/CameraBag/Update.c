/* CameraBag__Update @ 0x800BC3EC (size: 0x110, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct W3 { s32 a, b, c; } W3;
void * CameraBag__GetCurrent(void *);
int CameraBag__IsCurrentNamed(void *, char *);
void CameraBag__Pop(void *);
void ShotList__Update(void);
M2C_UNK CameraBag__UpdateViewMatrix(void *, s32 *, s32 *); /* extern */
extern s8 lbl_8031F7DC __attribute__((section(".data")));

void CameraBag__Update(void *arg0) {
    W3 sp8;
    W3 sp18;
    void *temp_r29;
    void *temp_r30;
    void *temp_r3;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;

    if ((s32) M2C_FIELD(arg0, s32 *, 0xC8) != 0) {
        CameraBag__Pop(arg0);
        M2C_FIELD(arg0, s32 *, 0xC8) = 0;
    }
    ShotList__Update();
    temp_r3 = CameraBag__GetCurrent(arg0);
    if (temp_r3 != NULL) {
        temp_r9 = M2C_FIELD(temp_r3, void **, 0x3C);
        temp_r30 = arg0 + 0xA0;
        temp_r29 = arg0 + 0xAC;
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x24)(temp_r3 + M2C_FIELD(temp_r9, s16 *, 0x20));
        temp_r9_2 = M2C_FIELD(temp_r3, void **, 0x3C);
        M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, void *, void *), 0x2C)(temp_r3 + M2C_FIELD(temp_r9_2, s16 *, 0x28), temp_r30, temp_r29);
        sp8 = *(W3 *) temp_r30;
        sp18 = *(W3 *) temp_r29;
        CameraBag__UpdateViewMatrix(arg0, (s32 *) &sp8, (s32 *) &sp18);
        if (CameraBag__IsCurrentNamed(arg0, &lbl_8031F7DC) != 0) {
            temp_r9_3 = M2C_FIELD(temp_r3, void **, 0x3C);
            M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *, f32), 0x6C)(temp_r3 + M2C_FIELD(temp_r9_3, s16 *, 0x68), M2C_FIELD(temp_r3, f32 *, 0x40));
        }
    }
}
