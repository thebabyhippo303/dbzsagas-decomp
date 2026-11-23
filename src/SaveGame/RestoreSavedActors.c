/* SaveGame__RestoreSavedActors @ 0x8014FDA4 (size: 0x508, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 PersistentData__GetGlobalImpl(void *, void *);
s32 SaveGame__HasLiveActorId(void *, s32);
void * Pickup__ConstructById(void *, s32, void *, s32);
void SaveGame__FormatActorDebugMessage(void *, char *, char *);
s32 Environment__GetEntityTypeName(s32);
void * Environment__CreateEntityFromType(char *);
void CActor__SetPositionAndOrientation(void *, void *, void *);
void Cast__AddProtagonist(s32, s32);
s32 Mem__New(s32);
float cosf(float);
void fn_802C2728(void *, int);
float sinf(float);
char * strcpy(char *, const char *);
M2C_UNK fn_802C6D00(s32, s32);
M2C_UNK Environment__RestoreEntityFromSavedRecord(s32, s32, s32);
M2C_UNK fn_802C2764(s32, s32);
M2C_UNK Environment__GetEntityTypeFlags(s32, s32);
M2C_UNK Missile__Construct(s32);
M2C_UNK fn_80204948(s32, s32);
M2C_UNK fn_80234054(s32, s32, s32, s32, s32);
M2C_UNK fn_802346CC(s32, s32, s32);
M2C_UNK fn_80234740(s32, s32, s32);
extern M2C_UNK lbl_803237AC __attribute__((section(".data")));
extern s8 lbl_8032C244 __attribute__((section(".data")));
extern s8 lbl_8032C258 __attribute__((section(".data")));
extern f32 lbl_8032C270 __attribute__((section(".data")));
extern f32 lbl_8032C274 __attribute__((section(".data")));
extern s32 lbl_803DC368;
extern s32 lbl_803DCCB8;

void SaveGame__RestoreSavedActors(void *arg0, s32 arg1) {
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    s8 sp28;
    f32 sp18;
    s32 sp8;                                        /* compiler-managed */
    f32 temp_f1;
    f32 temp_f29;
    f32 temp_f30;
    f32 temp_f31;
    s32 temp_cr0_eq;
    s32 temp_r0;
    s32 temp_r10;
    s32 temp_r3_2;
    s32 temp_r3_3;
    s32 temp_r5;
    s32 var_r0;
    s32 var_r26;
    s32 var_r28;
    s32 var_r31;
    s32 var_r6;
    s8 *temp_r3;
    u16 temp_r30;
    u32 var_r23;
    u32 var_r24;
    u32 var_r24_2;
    u8 temp_r20;
    void *temp_r30_2;
    void *temp_r30_3;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_4;
    void *temp_r9_5;
    void *temp_r9_6;
    void *var_r27;
    void *var_r29;

    temp_r9 = M2C_FIELD(arg0, void **, 0x20);
    temp_r10 = M2C_FIELD(arg0, s32 *, 0x18);
    var_r24 = 0U;
    var_r29 = temp_r10 + M2C_FIELD(temp_r9, s32 *, 0x28);
    var_r27 = temp_r10 + M2C_FIELD(temp_r9, s32 *, 0x24);
    temp_r20 = 1 << PersistentData__GetGlobalImpl(lbl_803DC368 + 0x12C, &lbl_803237AC);
    if ((u32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), u32 *, 0x2C) > 0U) {
        do {
            if ((SaveGame__HasLiveActorId(arg0, M2C_FIELD(var_r27, s32 *, 0xC)) == 0) && (M2C_FIELD(var_r27, u8 *, 0x28) & temp_r20) && (M2C_FIELD(var_r27, s32 *, 0xC) & arg1)) {
                sp8 = M2C_FIELD(var_r27, s32 *, 0);
                M2C_FIELD(&sp8, f32 *, 4) = (f32) M2C_FIELD(var_r27, f32 *, 4);
                M2C_FIELD(&sp8, f32 *, 8) = (f32) M2C_FIELD(var_r27, f32 *, 8);
                temp_r3 = Pickup__ConstructById(Mem__New(0x654), M2C_FIELD(var_r27, s32 *, 0x10), &sp8, M2C_FIELD(var_r27, s32 *, 0x24));
                temp_r9_2 = temp_r3 + 0x2CC;
                M2C_FIELD(temp_r3, s32 *, 0x618) = (s32) M2C_FIELD(var_r27, s32 *, 0x20);
                M2C_FIELD(temp_r3, s32 *, 0x10C) = (s32) M2C_FIELD(var_r27, s32 *, 0xC);
                if ((M2C_FIELD(temp_r3, f32 *, 0x2CC) == lbl_8032C270) && (M2C_FIELD(temp_r9_2, f32 *, 4) == lbl_8032C270) && (M2C_FIELD(temp_r9_2, f32 *, 8) == lbl_8032C270)) {
                    temp_r30 = M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x84), u16 *, 2);
                    fn_802C6D00((s32) temp_r3, (s32) (var_r27 + 0x14));
                    M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x84), u16 *, 2) = temp_r30;
                }
                SaveGame__FormatActorDebugMessage(arg0, &lbl_8032C244, temp_r3);
            }
            var_r24 += 1;
            var_r27 += 0x2C;
        } while (var_r24 < (u32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), u32 *, 0x2C));
    }
    var_r24_2 = 0U;
    if ((u32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), u32 *, 0x30) > 0U) {
        temp_f30 = lbl_8032C274;
        temp_f29 = lbl_8032C270;
        do {
            var_r26 = 0;
            var_r23 = var_r24_2 + 1;
            if ((SaveGame__HasLiveActorId(arg0, M2C_FIELD(var_r29, s32 *, 0)) == 0) && (M2C_FIELD(var_r29, s32 *, 0) & arg1) && (M2C_FIELD(var_r29, u8 *, 0x38) & temp_r20)) {
                temp_r0 = M2C_FIELD(var_r29, s32 *, 0x10);
                switch (temp_r0) {                  /* irregular */
                case 1:
                    break;
                default:
                    sp8 = temp_f30;
                    M2C_FIELD(&sp8, f32 *, 4) = temp_f30;
                    M2C_FIELD(&sp8, f32 *, 8) = temp_f30;
                    sp18 = sp8;
                    M2C_FIELD(&sp18, f32 *, 4) = (f32) M2C_FIELD(&sp8, f32 *, 4);
                    M2C_FIELD(&sp18, f32 *, 8) = (f32) M2C_FIELD(&sp8, f32 *, 8);
                    var_r26 = Pickup__ConstructById(Mem__New(0x654), M2C_FIELD(var_r29, s32 *, 0xC), &sp18, M2C_FIELD(var_r29, s32 *, 0x30));
                    M2C_FIELD(var_r26, s32 *, 0x618) = (s32) M2C_FIELD(var_r27, s32 *, 0x20);
                    M2C_FIELD(var_r26, s32 *, 0x10C) = (s32) M2C_FIELD(var_r29, s32 *, 0);
                    SaveGame__FormatActorDebugMessage(arg0, &lbl_8032C244, (s8 *) var_r26);
                    break;
                case 3:
                    if ((s32) M2C_FIELD(var_r29, u16 *, 0x34) != 0) {
                        var_r31 = Environment__RestoreEntityFromSavedRecord(M2C_FIELD(arg0, s32 *, 0x38), (s32) (var_r29 + 0x60), (s32) M2C_FIELD(var_r29, u16 *, 0x36));
                        M2C_FIELD(var_r31, s32 *, 0x10C) = (s32) M2C_FIELD(var_r29, s32 *, 0);
                        goto block_34;
                    }
                    sp28 = 0;
                    temp_r30_2 = var_r29 + 0x24;
                    var_r31 = Environment__CreateEntityFromType(Environment__GetEntityTypeName(M2C_FIELD(var_r29, s32 *, 0xC)));
                    M2C_FIELD(var_r31, f32 *, 0x38) = (f32) M2C_FIELD(var_r29, f32 *, 0x24);
                    M2C_FIELD(var_r31, f32 *, 0x40) = (f32) M2C_FIELD(temp_r30_2, f32 *, 8);
                    M2C_FIELD(var_r31, f32 *, 0x3c) = (f32) M2C_FIELD(temp_r30_2, f32 *, 4);
                    temp_f31 = sinf(temp_f30);
                    temp_f1 = cosf(temp_f30);
                    sp60 = temp_f31;
                    sp68 = temp_f1;
                    sp50 = -temp_f31;
                    sp48 = temp_f1;
                    sp4C = temp_f30;
                    sp54 = temp_f30;
                    sp58 = temp_f29;
                    sp5C = temp_f30;
                    sp64 = temp_f30;
                    CActor__SetPositionAndOrientation((void *) var_r31, temp_r30_2, &sp48);
                    if ((s32) M2C_FIELD(var_r29, u8 *, 0x39) != 0) {
                        strcpy(&sp28, var_r31 + 0x1C0);
                        temp_r30_3 = var_r29 + 0x39;
                        fn_802C2728((void *) var_r31, (s32) temp_r30_3);
                        fn_802C2764(var_r31, (s32) temp_r30_3);
                    }
                    var_r0 = M2C_FIELD(var_r29, s32 *, 0x30);
                    if (var_r0 < 0) {
                        var_r0 = -1;
                    }
                    M2C_FIELD(var_r31, s32 *, 0x410) = var_r0;
                    temp_r9_4 = M2C_FIELD(var_r31, void **, 0x34);
                    if (M2C_FIELD(temp_r9_4, s32 (**)(s32), 0x174)(var_r31 + M2C_FIELD(temp_r9_4, s16 *, 0x170)) == 0) {
                        if (var_r31 != 0) {
                            temp_r9_5 = M2C_FIELD(var_r31, void **, 0x34);
                            M2C_FIELD(temp_r9_5, M2C_UNK (**)(s32, M2C_UNK), 0x3C)(var_r31 + M2C_FIELD(temp_r9_5, s16 *, 0x38), 3);
                        }
                    } else {
                        if ((s32) (u8) sp28 != 0) {
                            strcpy(var_r31 + 0x1C0, &sp28);
                        }
                        var_r26 = var_r31;
                        M2C_FIELD(var_r31, s32 *, 0x10C) = (s32) M2C_FIELD(var_r29, s32 *, 0);
                        Environment__GetEntityTypeFlags((s32) &sp8, Environment__GetEntityTypeName(M2C_FIELD(var_r29, s32 *, 0xC)));
                        M2C_FIELD(var_r31, s32 *, 0x10) = (s32) (M2C_FIELD(var_r31, s32 *, 0x10) | sp8);
block_34:
                        SaveGame__FormatActorDebugMessage(arg0, &lbl_8032C258, (s8 *) var_r31);
                    }
                    break;
                case 2:
                    temp_r3_2 = Missile__Construct(Mem__New(0x4F8));
                    Cast__AddProtagonist(lbl_803DCCB8, temp_r3_2);
                    M2C_FIELD(temp_r3_2, s32 *, 0x8C) = 1;
                    M2C_FIELD(temp_r3_2, s32 *, 0x10C) = (s32) M2C_FIELD(var_r29, s32 *, 0);
                    break;
                }
                var_r23 = var_r24_2 + 1;
                if (var_r26 != 0) {
                    var_r31 = 3;
                    var_r28 = 0xC;
                    do {
                        temp_r3_3 = *(s32 *)(var_r28 + (var_r29 + 0x14));
                        if ((temp_r3_3 != 0) && ((s32) *(s32 *)(M2C_FIELD(var_r26, s32 *, 0x84) + 0xF0 + var_r28) == 0)) {
                            temp_r5 = fn_80204948(temp_r3_3, 0);
                            var_r6 = 0x26;
                            if (var_r31 == 3) {
                                var_r6 = 0x25;
                            }
                            temp_cr0_eq = fn_80234054(M2C_FIELD(var_r26, s32 *, 0x84), var_r31, temp_r5, var_r6, 1) == 0;
                            if (temp_cr0_eq == 0) {
                                if (temp_cr0_eq != 0) {
                                    temp_r9_6 = M2C_FIELD(M2C_FIELD(var_r26, s32 *, 0x84), void **, 0xFC);
                                    M2C_FIELD(temp_r9_6, u8 *, 4) = (u8) (M2C_FIELD(temp_r9_6, u8 *, 4) | 2);
                                    fn_802346CC(M2C_FIELD(var_r26, s32 *, 0x84), 3, 0);
                                    fn_80234740(M2C_FIELD(var_r26, s32 *, 0x84), 3, 1);
                                }
                            }
                        }
                        var_r28 -= 4;
                        var_r31 -= 1;
                    } while (var_r31 >= 0);
                }
            }
            var_r24_2 = var_r23;
            var_r29 += M2C_FIELD(var_r29, s32 *, 8) + 0x60;
        } while (var_r24_2 < (u32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), u32 *, 0x30));
    }
}
