/* BinkClose @ 0x802EEC64 (size: 0x1B4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 BinkPause(void *, s32);
s32 RADTimer__RemoveCallbacks2(s32, s32, s32, s32, s32);
void radfree(void *);
void Bink__FreeScratchBuffer(void);
void * memset(void *, int, u32);
M2C_UNK Bink__FreeTrackBuffer(s32);
extern s32 lbl_8037C23C __attribute__((section(".data")));
extern s32 lbl_8037C240 __attribute__((section(".data")));

void BinkClose(void *arg0) {
    s32 temp_r3;
    s32 var_r30;
    s32 var_r3;
    s32 var_r5;
    u32 var_r29;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_4;
    void *temp_r9;

    if (arg0 != NULL) {
        BinkPause(arg0, 1);
        if (!(M2C_FIELD(arg0, s32 *, 0x20) & 0x08000000) && ((void *) M2C_FIELD(arg0, void **, 0x108) == NULL)) {
            var_r3 = lbl_8037C23C;
        } else {
            var_r3 = 0;
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0x2F8) != 0) {
            var_r5 = lbl_8037C240;
        } else {
            var_r5 = 0;
        }
        temp_r3 = RADTimer__RemoveCallbacks2(var_r3, (s32) (arg0 + 0x20C), var_r5, (s32) (arg0 + 0x34C), 1);
        switch (temp_r3) {                          /* irregular */
        case 1:
            lbl_8037C23C = 0;
            break;
        case 2:
            lbl_8037C240 = 0;
            break;
        case 3:
            lbl_8037C23C = 0;
            lbl_8037C240 = 0;
            break;
        }
        var_r29 = 0U;
        if (var_r29 < (u32) M2C_FIELD(arg0, s32 *, 0x2F8)) {
            var_r30 = 0;
            do {
                temp_r9 = var_r30 + M2C_FIELD(arg0, s32 *, 0x300);
                M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x1C)(temp_r9);
                Bink__FreeTrackBuffer(M2C_FIELD((var_r30 + M2C_FIELD(arg0, s32 *, 0x300)), s32 *, 0x3C));
                temp_r3_2 = M2C_FIELD((var_r30 + M2C_FIELD(arg0, s32 *, 0x300)), void **, 0x2C);
                if (temp_r3_2 != NULL) {
                    radfree(temp_r3_2);
                }
                var_r29 += 1;
                var_r30 += 0x178;
            } while (var_r29 < (u32) M2C_FIELD(arg0, s32 *, 0x2F8));
        }
        Bink__FreeScratchBuffer();
        temp_r3_3 = M2C_FIELD(arg0, void **, 0x108);
        if (temp_r3_3 != NULL) {
            if (!(M2C_FIELD(arg0, s32 *, 0x20) & 0x04000000)) {
                radfree(temp_r3_3);
            }
        } else {
            M2C_FIELD(arg0, M2C_UNK (**)(void *), 0x124)(arg0 + 0x110);
            radfree(M2C_FIELD(arg0, void **, 0x24C));
        }
        temp_r3_4 = M2C_FIELD(arg0, void **, 0xBC);
        if (temp_r3_4 != NULL) {
            radfree(temp_r3_4);
        }
        memset(arg0, 0, 0x38CU);
        radfree(arg0);
    }
}
