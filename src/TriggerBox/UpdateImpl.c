/* TriggerBox__UpdateImpl @ 0x800FDB34 (size: 0x1CC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Actor__MarkForDeath(void *, float);
void CameraBag__Pop(void *);
void SimLoop__ActivateControls(int, int);
void TriggerBox__DeactivateImpl(void *);
void TriggerBox__DispatchEvents(void *, int);
M2C_UNK TriggerBox__UpdateActorOverlaps(void *, s32, M2C_UNK); /* extern */
M2C_UNK TriggerBox__UpdatePlayerOverlap(void *, s32, M2C_UNK); /* extern */
M2C_UNK fn_802C9724();                              /* extern */
extern f32 lbl_8032481C __attribute__((section(".data")));
extern f32 lbl_803A35BC __attribute__((section(".data")));
extern s32 lbl_803DC3C0;
extern void *lbl_803DC5B4;

void TriggerBox__UpdateImpl(void *arg0) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f31;
    f32 temp_f31_2;
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r9;
    s32 var_r30;

    fn_802C9724();
    if ((s32) M2C_FIELD(arg0, s32 *, 0x258) != 0) {
        temp_f31 = lbl_8032481C;
        if (!(M2C_FIELD(arg0, f32 *, 0x530) <= temp_f31)) {
            temp_f0 = M2C_FIELD(arg0, f32 *, 0x530) - lbl_803A35BC;
            M2C_FIELD(arg0, f32 *, 0x530) = temp_f0;
            if (!(temp_f0 > temp_f31)) {
                M2C_FIELD(arg0, f32 *, 0x530) = temp_f31;
                CameraBag__Pop(lbl_803DC5B4);
                SimLoop__ActivateControls(lbl_803DC3C0, 1);
                if (M2C_FIELD(arg0, s32 *, 0x554) & 2) {
                    Actor__MarkForDeath(arg0, temp_f31);
                }
            }
        }
        temp_f31_2 = lbl_8032481C;
        if (!(M2C_FIELD(arg0, f32 *, 0x50C) <= temp_f31_2)) {
            temp_f0_2 = M2C_FIELD(arg0, f32 *, 0x50C) - lbl_803A35BC;
            M2C_FIELD(arg0, f32 *, 0x50C) = temp_f0_2;
            if (!(temp_f0_2 > temp_f31_2)) {
                TriggerBox__DeactivateImpl(arg0);
                M2C_FIELD(arg0, f32 *, 0x50C) = temp_f31_2;
                if ((s32) M2C_FIELD(arg0, s32 *, 0x544) != 0) {
                    M2C_FIELD(arg0, f32 *, 0x530) = (f32) M2C_FIELD(arg0, f32 *, 0x52C);
                }
            }
        }
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x554);
        if (temp_r0 & 0x40) {
            temp_r9 = temp_r0 & 0x20000;
            if (temp_r9 == 0) {
                M2C_FIELD(arg0, s32 *, 0x54C) = temp_r9;
                if (temp_r0 & 0x80) {
                    TriggerBox__UpdatePlayerOverlap(arg0, !M2C_FIELD(arg0, s32 *, 0x548), 1);
                }
                if (((s32) M2C_FIELD(arg0, s32 *, 0x54C) == 0) && (M2C_FIELD(arg0, s32 *, 0x554) & 0x100)) {
                    TriggerBox__UpdateActorOverlaps(arg0, !M2C_FIELD(arg0, s32 *, 0x548), 1);
                }
                if ((s32) M2C_FIELD(arg0, s32 *, 0x548) != 0) {
                    var_r30 = M2C_FIELD(arg0, s32 *, 0x54C);
                    goto block_24;
                }
            } else {
                if (temp_r0 & 0x80) {
                    TriggerBox__UpdatePlayerOverlap(arg0, 1, 0);
                }
                if (M2C_FIELD(arg0, s32 *, 0x554) & 0x100) {
                    TriggerBox__UpdateActorOverlaps(arg0, 1, 0);
                }
                if ((s32) M2C_FIELD(arg0, s32 *, 0x548) != 0) {
                    var_r30 = *M2C_FIELD(arg0, s32 **, 0x55C);
block_24:
                    if (var_r30 == 0) {
                        TriggerBox__DispatchEvents(arg0, 1);
                        M2C_FIELD(arg0, s32 *, 0x548) = var_r30;
                    }
                }
            }
        }
    }
}

