/* AnimeFaceZoomOut__OnDeactivate @ 0x800BA3F4 (size: 0xCC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void * Game__GetPlayerImpl(void *, s32);
s32 Game__GetConfiguredPlayerCount(void *);
void Camera__ActivatePlayerControls(s32);
extern void *lbl_803DC3C0;

void AnimeFaceZoomOut__OnDeactivate(void *arg0) {
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r9;
    s32 var_r31;
    void *temp_r3;
    void *temp_r9_2;

    temp_r0 = M2C_FIELD(M2C_FIELD(lbl_803DC3C0, void **, 0x238), s32 *, 4);
    temp_r9 = M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x40), void **, 0x19D8), s32 *, 0xC);
    if (temp_r0 == 6) {
        if (temp_r9 != 0x21) {
            goto block_2;
        }
        goto block_8;
    }
block_2:
    if (temp_r0 == 8) {
        if (temp_r9 != 0x11) {
            goto block_4;
        }
        goto block_8;
    }
block_4:
    if (temp_r0 == 0xD) {
        if (temp_r9 != 0x25) {
            goto block_6;
        }
        goto block_8;
    }
block_6:
    if (temp_r0 == 0xF) {
        if (temp_r9 == 0x27) {
block_8:
            var_r31 = 0;
            goto check_count;
        loop_body:
                temp_r4 = var_r31;
                var_r31 += 1;
                temp_r3 = Game__GetPlayerImpl(lbl_803DC3C0, temp_r4);
                temp_r9_2 = M2C_FIELD(temp_r3, void **, 0x34);
                M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, M2C_UNK), 0x64)(temp_r3 + M2C_FIELD(temp_r9_2, s16 *, 0x60), 0);
        check_count:
            if (var_r31 < Game__GetConfiguredPlayerCount(lbl_803DC3C0)) {
                goto loop_body;
            }
        }
    }
    Camera__ActivatePlayerControls((s32) arg0);
}
