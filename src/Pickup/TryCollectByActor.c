/* Pickup__TryCollectByActor @ 0x800F1F3C (size: 0x194, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void * Game__GetPlayerImpl(void *, int);
int Pickup__CheckCollectionEvent(void *, void *, void *, void *);
void Pickup__NotifyMissionProgress(void *);
M2C_UNK Pickup__OnCollected(void *, void *);        /* extern */
M2C_UNK fn_802B9E4C(void *, void *, s32);           /* extern */
extern f32 lbl_80324128 __attribute__((section(".data")));
extern f32 lbl_8032412C __attribute__((section(".data")));
extern M2C_UNK lbl_80394584 __attribute__((section(".data")));
extern M2C_UNK lbl_803945E4 __attribute__((section(".data")));
extern void *lbl_803DC3B4;
extern void *lbl_803DC3C0;

void Pickup__TryCollectByActor(void *arg0, void *arg1, s32 arg2) {
    f32 sp8;
    s32 temp_r0;
    s32 temp_r29;
    s32 var_r9;

    if (!(M2C_FIELD(arg0, f32 *, 0x648) > lbl_80324128) && ((s32) (M2C_FIELD(arg1, s32 *, 0) & M2C_FIELD(&lbl_80394584, s32 *, 4)) == (s32) M2C_FIELD(&lbl_80394584, s32 *, 0))) {
        var_r9 = 0;
        if (((s32) M2C_FIELD(arg0, s32 *, 0x90) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x94) <= 0)) {
            var_r9 = 1;
        }
        if ((var_r9 == 0) && !(M2C_FIELD(M2C_FIELD(arg0, void **, 0x84), u16 *, 2) & 1) && ((s32) M2C_FIELD(arg0, s32 *, 0x5F8) == 0) && ((temp_r0 = M2C_FIELD(arg0, s32 *, 0x630), ((temp_r0 == 0) != 0)) || (arg1 != temp_r0)) && (sp8 = lbl_80324128, M2C_FIELD(&sp8, f32 *, 4) = (f32) lbl_8032412C, M2C_FIELD(&sp8, f32 *, 8) = (f32) lbl_80324128, temp_r29 = Pickup__CheckCollectionEvent(arg0, arg1, arg0 + 0x38, &sp8) ^ 1, ((temp_r29 == 0) != 0)) && (fn_802B9E4C(arg0, arg1, arg2), Pickup__OnCollected(arg0, arg1), Pickup__NotifyMissionProgress(arg0), ((arg1 == NULL) == 0)) && ((s32) (M2C_FIELD(arg1, s32 *, 0) & M2C_FIELD(&lbl_803945E4, s32 *, 4)) == (s32) M2C_FIELD(&lbl_803945E4, s32 *, 0)) && ((s32) M2C_FIELD(arg1, s32 *, 0x7E4) != 0)) {
            if (arg1 == Game__GetPlayerImpl(lbl_803DC3C0, 0)) {
                M2C_FIELD(lbl_803DC3B4, s32 *, 0x8258) = temp_r29;
                return;
            }
            Game__GetPlayerImpl(lbl_803DC3C0, 1);
            M2C_FIELD(lbl_803DC3B4, s32 *, 0x8258) = 1;
        }
    }
}
