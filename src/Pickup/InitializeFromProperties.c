/* Pickup__InitializeFromProperties @ 0x800F0DA8 (size: 0x804, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Pickup__SetTypeByName(void *, char *);
s32 Pickup__FindIdByName(void *, char *);
void Pickup__CreateEmitter(void *, void *);
f32 Rand__RangeFloat(f32, f32, s32);
void Pickup__SetStationaryImpl(void *, s32);
void Pickup__UpdateSpin(void *);
void * Database__GetReferencedObject(void *, s32);
void Instance__Billboard3dImpl(void *);
void * Game__GetPlayerImpl(void *, s32);
s32 Game__GetConfiguredPlayerCount(void *);
void Simple__SetYRotVel(void *, float);
void fn_80251360(void *, void *, unsigned int);
void fn_802B2FB4(void *);
void fn_802B2FB8(void *, char *);
int fn_802B2FBC(void *, char *, int);
char * fn_802B3010(void *, char *, int);
s32 fn_802B5540(s32);
void fn_802C57FC(void *, f32);
void fn_802C5910(void *, f32);
float sinf(float);
M2C_UNK fn_802C8150(s32, s32, s32);
M2C_UNK fn_802C5A28(s32, f32);
M2C_UNK fn_802C86D0(s32, s32, s32);
M2C_UNK fn_802CB700(s32, f32, f32);
M2C_UNK fn_802CB7DC(s32, f32);
M2C_UNK fn_8022AD50(s32, s32);
extern M2C_UNK lbl_803232B0 __attribute__((section(".data")));
extern M2C_UNK lbl_80323D0C __attribute__((section(".data")));
extern s8 lbl_80324058 __attribute__((section(".data")));
extern s8 lbl_80324064 __attribute__((section(".data")));
extern M2C_UNK lbl_80324070 __attribute__((section(".data")));
extern s8 lbl_80324078 __attribute__((section(".data")));
extern s8 lbl_80324084 __attribute__((section(".data")));
extern M2C_UNK lbl_80324098 __attribute__((section(".data")));
extern s8 lbl_803240A4 __attribute__((section(".data")));
extern M2C_UNK lbl_803240B4 __attribute__((section(".data")));
extern M2C_UNK lbl_803240BC __attribute__((section(".data")));
extern f32 lbl_803240C4 __attribute__((section(".data")));
extern f32 lbl_803240C8 __attribute__((section(".data")));
extern f32 lbl_803240CC __attribute__((section(".data")));
extern f32 lbl_803240D0 __attribute__((section(".data")));
extern f32 lbl_803240D4 __attribute__((section(".data")));
extern f32 lbl_803240D8 __attribute__((section(".data")));
extern f32 lbl_803240E8 __attribute__((section(".data")));
extern f32 lbl_8036B238 __attribute__((section(".data")));
extern M2C_UNK lbl_803B1DDC __attribute__((section(".data")));
extern M2C_UNK lbl_803BEFC0 __attribute__((section(".data")));
extern void *lbl_803DC3C0;
extern s32 lbl_803DD19C;
extern s32 lbl_803DD1A0;
extern s32 lbl_803DD1CC;
extern M2C_UNK lbl_803DD634;
extern f32 lbl_803DE500;
extern f32 lbl_803DE504;

typedef struct { f32 v0, v1, v2; } mt_vec3_f32;
s32 Pickup__InitializeFromProperties(s32 arg0) {
    mt_vec3_f32 sp20;
    f32 tmp_8;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    mt_vec3_f32 sp30;
    mt_vec3_f32 sp68;
    s32 sp18;
    s32 sp10;
    s32 sp8;                                        /* compiler-managed */
    M2C_UNK *temp_r10;
    M2C_UNK *temp_r4;
    M2C_UNK *temp_r9_3;
    M2C_UNK *var_r9;
    f32 *var_r29_2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_5;
    f32 temp_f10;
    f32 temp_f11;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f13;
    f32 temp_f13_2;
    f32 temp_f13_3;
    f32 temp_f13_4;
    f32 temp_f1;
    f32 temp_f26;
    f32 temp_f28;
    f32 temp_f30;
    f32 temp_f30_2;
    f32 temp_f31;
    f32 temp_f31_2;
    f32 temp_f9;
    f32 var_f29;
    s32 *var_r11;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r11;
    s32 temp_r9;
    s32 var_ctr;
    s32 var_r0;
    s32 var_r10;
    s32 var_r11_2;
    s32 var_r30_2;
    s32 var_r30_3;
    s8 *temp_r3_2;
    s8 *var_r30;
    s8 *var_r3;
    u32 temp_r3;
    u8 *temp_r4_2;
    void *temp_r10_2;
    void *temp_r3_3;
    void *temp_r3_4;
    void *temp_r7;
    void *temp_r8;
    void *temp_r9_2;
    void *temp_r9_4;
    void *var_r28;
    void *var_r29;
    void *var_r6;
    void *var_r8;

    var_r30 = NULL;
    if (fn_802B5540(arg0) == 0) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0x138) = (s32) lbl_803DD1CC;
    M2C_FIELD(arg0, f32 *, 0x650) = (f32) lbl_803240C4;
    M2C_FIELD(arg0, s32 *, 0x61C) = 0;
    M2C_FIELD(arg0, s32 *, 0x620) = 0;
    M2C_FIELD(arg0, f32 *, 0x624) = (f32) lbl_803240C4;
    temp_r9 = lbl_803DD19C | lbl_803DD1CC;
    temp_r11 = M2C_FIELD(arg0, s32 *, 0x10) | temp_r9;
    M2C_FIELD(arg0, s32 *, 0x10) = temp_r11;
    sp10 = temp_r9;
    M2C_FIELD(arg0, s32 *, 0x618) = -1;
    temp_r0 = ~(lbl_803DD1A0 | lbl_803DD1A0);
    M2C_FIELD(arg0, s32 *, 0x5F8) = 0;
    sp18 = temp_r0;
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) (temp_r11 & temp_r0);
    sp8 = temp_r0;
    M2C_FIELD(arg0, s32 *, 0x5FC) = 0;
    M2C_FIELD(arg0, s32 *, 0x518) = 0;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x5EC) == 0) {
        fn_802B2FB4(&lbl_803BEFC0);
        fn_802B2FB8(&lbl_803BEFC0, &lbl_80324058);
        var_r3 = fn_802B3010(&lbl_803BEFC0, &lbl_80324064, (s32) &lbl_80324070);
        if (var_r3 == NULL) {
            var_r3 = arg0 + 0x1C0;
        }
        Pickup__SetTypeByName((void *) arg0, var_r3);
        temp_r3 = fn_802B2FBC(&lbl_803BEFC0, &lbl_80324078, (s32) &lbl_803232B0);
        if (temp_r3 <= 0x1FU) {
            M2C_FIELD(arg0, s32 *, 0x618) = (s32) (1 << temp_r3);
        }
        temp_r3_2 = fn_802B3010(&lbl_803BEFC0, &lbl_80324084, (s32) &lbl_80324098);
        if (temp_r3_2 != NULL) {
            M2C_FIELD(arg0, s32 *, 0x618) = Pickup__FindIdByName((void *) arg0, temp_r3_2);
        }
        var_r30 = fn_802B3010(&lbl_803BEFC0, &lbl_803240A4, (s32) &lbl_803240B4);
    }
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x5F0);
    if (temp_r0_2 != -1) {
        var_r0 = temp_r0_2 * 0x4C;
        var_r29 = arg0 + 0x38;
        var_r8 = arg0 + 0x608;
        var_r6 = arg0 + 0x4DC;
        var_r28 = arg0 + 0x39C;
        goto block_20;
    }
    var_r10 = 0;
    var_r11 = &lbl_80323D0C + 4;
    M2C_FIELD(arg0, M2C_UNK **, 0x5F4) = NULL;
    var_r29 = arg0 + 0x38;
    var_r8 = arg0 + 0x608;
    var_r6 = arg0 + 0x4DC;
    var_r28 = arg0 + 0x39C;
    if ((s32) *var_r11 != 0) {
        var_r9 = &lbl_80323D0C;
loop_14:
        if ((s32) *var_r11 == (s32) M2C_FIELD(arg0, s32 *, 0x5EC)) {
            M2C_FIELD(arg0, M2C_UNK **, 0x5F4) = var_r9;
        }
        var_r11 += 0x4C;
        var_r9 += 0x4C;
        var_r10 += 1;
        if ((M2C_UNK *) M2C_FIELD(arg0, M2C_UNK **, 0x5F4) == NULL) {
            if ((s32) *var_r11 == 0) {
                goto block_18;
            }
            goto loop_14;
        }
    } else {
block_18:
        if ((M2C_UNK *) M2C_FIELD(arg0, M2C_UNK **, 0x5F4) == NULL) {
            var_r0 = var_r10 * 0x4C;
block_20:
            M2C_FIELD(arg0, M2C_UNK **, 0x5F4) = (M2C_UNK *) (var_r0 + &lbl_80323D0C);
        }
    }
    M2C_FIELD(arg0, s32 *, 0x608) = (f32) M2C_FIELD(arg0, f32 *, 0x38);
    M2C_FIELD(var_r8, f32 *, 8) = (f32) M2C_FIELD(var_r29, f32 *, 8);
    M2C_FIELD(var_r8, f32 *, 4) = (f32) M2C_FIELD(var_r29, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0x4DC) = (f32) M2C_FIELD(arg0, f32 *, 0x38);
    M2C_FIELD(var_r6, f32 *, 8) = (f32) M2C_FIELD(var_r29, f32 *, 8);
    M2C_FIELD(var_r6, f32 *, 4) = (f32) M2C_FIELD(var_r29, f32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x604) = 0;
    if (M2C_FIELD(M2C_FIELD(arg0, M2C_UNK **, 0x5F4), s32 *, 8) & 2) {
        if ((var_r30 != NULL) && ((s32) (u8) *var_r30 != 0)) {
            Pickup__CreateEmitter((void *) arg0, var_r30);
        } else {
            Pickup__CreateEmitter((void *) arg0, M2C_FIELD(M2C_FIELD(arg0, M2C_UNK **, 0x5F4), void **, 0xC));
        }
    }
    temp_f1 = M2C_FIELD(M2C_FIELD(arg0, M2C_UNK **, 0x5F4), f32 *, 0x20) * lbl_803240C8;
    Simple__SetYRotVel((void *) arg0, M2C_FIELD(M2C_FIELD(arg0, M2C_UNK **, 0x5F4), f32 *, 0x20) + Rand__RangeFloat(-temp_f1, temp_f1, (s32) &lbl_803DD634));
    if (!(__builtin_fabsf(M2C_FIELD(M2C_FIELD(arg0, M2C_UNK **, 0x5F4), f32 *, 0x20)) < lbl_803240CC)) {
        M2C_FIELD(arg0, s32 *, 0x3F8) = 3;
    }
    fn_802C8150(arg0, (s32) &lbl_803240BC, 0);
    Pickup__SetStationaryImpl((void *) arg0, ((u32) (M2C_FIELD(M2C_FIELD(arg0, M2C_UNK **, 0x5F4), s32 *, 8) ^ 0x40) >> 6U) & 1);
    temp_r10 = M2C_FIELD(arg0, M2C_UNK **, 0x5F4);
    temp_f31 = lbl_803240C4;
    M2C_FIELD(arg0, s32 *, 0x614) = 0;
    M2C_FIELD(arg0, f32 *, 0x5AC) = (f32) M2C_FIELD(temp_r10, f32 *, 0x2C);
    M2C_FIELD(arg0, f32 *, 0x648) = (f32) lbl_803240D0;
    M2C_FIELD(arg0, f32 *, 0x628) = temp_f31;
    M2C_FIELD(arg0, f32 *, 0x64C) = temp_f31;
    if (M2C_FIELD(temp_r10, s32 *, 8) & 0x2000) {
        M2C_FIELD(arg0, f32 *, 0x628) = (f32) (M2C_FIELD(arg0, f32 *, 0x628) + Rand__RangeFloat(temp_f31, lbl_803240D4, (s32) &lbl_803DD634));
        Pickup__UpdateSpin((void *) arg0);
    }
    fn_802C57FC((void *) arg0, M2C_FIELD(M2C_FIELD(arg0, M2C_UNK **, 0x5F4), f32 *, 0x3C) * (2.0f * M2C_FIELD(arg0, f32 *, 0x39C)));
    fn_802C5910((void *) arg0, M2C_FIELD(M2C_FIELD(arg0, M2C_UNK **, 0x5F4), f32 *, 0x40) * (2.0f * M2C_FIELD(var_r28, f32 *, 4)));
    fn_802C5A28(arg0, M2C_FIELD(M2C_FIELD(arg0, M2C_UNK **, 0x5F4), f32 *, 0x44) * (2.0f * M2C_FIELD(var_r28, f32 *, 8)));
    if (M2C_FIELD(M2C_FIELD(arg0, M2C_UNK **, 0x5F4), s32 *, 8) & 0x1000) {
        temp_f0 = M2C_FIELD(Database__GetReferencedObject(M2C_FIELD(arg0, void **, 0x84), 0), f32 *, 0x18);
        sp8 = temp_f31;
        M2C_FIELD(&sp8, f32 *, 8) = temp_f31;
        M2C_FIELD(&sp8, f32 *, 4) = (f32) -temp_f0;
        fn_802C86D0(arg0, (s32) &sp8, 0);
        temp_f13 = M2C_FIELD(arg0, f32 *, 0x2CC);
        temp_r9_2 = arg0 + 0x2CC;
        sp44 = temp_f31;
        temp_r8 = arg0 + 0x290;
        sp40 = temp_f13;
        temp_r10_2 = arg0 + 0x44;
        sp48 = temp_f31;
        temp_r7 = arg0 + 0x284;
        sp4C = temp_f31;
        temp_f9 = M2C_FIELD(temp_r9_2, f32 *, 4);
        sp54 = temp_f31;
        temp_f0_2 = sp8 * temp_f13;
        sp50 = temp_f9;
        sp58 = temp_f31;
        sp5C = temp_f31;
        temp_f13_2 = M2C_FIELD(temp_r9_2, f32 *, 8);
        sp60 = temp_f13_2;
        temp_f11 = M2C_FIELD(&sp8, f32 *, 8) * temp_f13_2;
        sp30.v0 = temp_f0_2;
        temp_f12 = M2C_FIELD(&sp8, f32 *, 4) * temp_f9;
        sp30.v2 = temp_f11;
        sp30.v1 = temp_f12;
        sp68.v0 = M2C_FIELD(arg0, f32 *, 0x290) + temp_f0_2;
        sp68.v1 = M2C_FIELD(temp_r8, f32 *, 4) + temp_f12;
        tmp_8 = M2C_FIELD(temp_r8, f32 *, 8);
        sp68.v2 = tmp_8 + temp_f11;
        *(mt_vec3_f32 *)((char *)arg0 + 0x290) = sp68;
        sp20 = sp68;
        temp_f13_3 = M2C_FIELD(temp_r8, f32 *, 4);
        temp_f10 = M2C_FIELD(arg0, f32 *, 0x290);
        temp_f0_3 = tmp_8;
        temp_f12_2 = (temp_f0_3 * M2C_FIELD(temp_r10_2, f32 *, 0x20)) + ((temp_f10 * M2C_FIELD(temp_r10_2, f32 *, 8)) + (temp_f13_3 * M2C_FIELD(temp_r10_2, f32 *, 0x14)));
        temp_f13_4 = (temp_f0_3 * M2C_FIELD(temp_r10_2, f32 *, 0x18)) + ((temp_f10 * M2C_FIELD(arg0, f32 *, 0x44)) + (temp_f13_3 * M2C_FIELD(temp_r10_2, f32 *, 0xC)));
        sp30.v2 = temp_f12_2;
        sp50 = (temp_f0_3 * M2C_FIELD(temp_r10_2, f32 *, 0x1C)) + ((temp_f10 * M2C_FIELD(temp_r10_2, f32 *, 4)) + (temp_f13_3 * M2C_FIELD(temp_r10_2, f32 *, 0x10)));
        sp30.v0 = temp_f13_4;
        sp30.v1 = sp50;
        sp20.v0 = temp_f13_4 + M2C_FIELD(arg0, f32 *, 0x38);
        sp20.v2 = temp_f12_2 + M2C_FIELD(var_r29, f32 *, 8);
        sp20.v1 = sp50 + M2C_FIELD(var_r29, f32 *, 4);
        *(mt_vec3_f32 *)((char *)arg0 + 0x284) = sp20;
    }
    temp_r9_3 = M2C_FIELD(arg0, M2C_UNK **, 0x5F4);
    if (M2C_FIELD(temp_r9_3, s32 *, 8) & 0x4000) {
        fn_802CB700(arg0, M2C_FIELD(temp_r9_3, f32 *, 0x30), M2C_FIELD(temp_r9_3, f32 *, 0x34));
        fn_802CB7DC(arg0, M2C_FIELD(M2C_FIELD(arg0, M2C_UNK **, 0x5F4), f32 *, 0x38));
    }
    M2C_FIELD(arg0, f32 *, 0x62C) = temp_f31;
    if (lbl_8036B238 == lbl_803240D8) {
        temp_f26 = -lbl_803DE500;
        var_f29 = temp_f31;
        var_r29_2 = &lbl_8036B238;
        var_r30_2 = 0;
        temp_f28 = lbl_803DE504 * lbl_803240E8;
        do {
            temp_f31_2 = ((f32) (f64) var_r30_2 * temp_f28) + temp_f26;
            temp_f30 = sinf(temp_f31_2);
            temp_f30_2 = temp_f30 + sinf(2.0f * temp_f31_2);
            temp_f0_5 = __builtin_fabsf(temp_f30_2);
            *var_r29_2 = temp_f30_2;
            var_r29_2 += 4;
            if (!(temp_f0_5 <= var_f29)) {
                var_f29 = temp_f0_5;
            }
            var_r30_2 += 1;
        } while (var_r30_2 <= 0xC7);
        var_ctr = 0xC8;
        var_r11_2 = 0;
        do {
            *(s32 *)(var_r11_2 + &lbl_8036B238) = *(s32 *)(var_r11_2 + &lbl_8036B238) / var_f29;
            var_r11_2 += 4;
            var_ctr -= 1;
        } while (var_ctr != 0);
    }
    if (M2C_FIELD(M2C_FIELD(arg0, M2C_UNK **, 0x5F4), s32 *, 8) & 0x48) {
        fn_8022AD50((s32) M2C_FIELD(arg0, void **, 0x84), 0);
    }
    temp_r0_3 = (u16) M2C_FIELD(M2C_FIELD(arg0, M2C_UNK **, 0x5F4), s32 *, 8) & 1;
    M2C_FIELD(arg0, s32 *, 0x61C) = temp_r0_3;
    if (temp_r0_3 != 0) {
        fn_80251360(&lbl_803B1DDC, arg0 + 0x19C, 0x20000U);
    }
    temp_r4 = M2C_FIELD(arg0, M2C_UNK **, 0x5F4);
    if (temp_r4 != NULL) {
        temp_r4_2 = M2C_FIELD(temp_r4, u8 **, 0x14);
        if ((temp_r4_2 != NULL) && ((s32) *temp_r4_2 != 0)) {
            temp_r3_3 = M2C_FIELD(arg0, void **, 0xAC);
            temp_r9_4 = M2C_FIELD(temp_r3_3, void **, 0xC);
            M2C_FIELD(temp_r9_4, M2C_UNK (**)(void *), 0x14)(temp_r3_3 + M2C_FIELD(temp_r9_4, s16 *, 0x10));
        }
    }
    if (M2C_FIELD(M2C_FIELD(arg0, M2C_UNK **, 0x5F4), s32 *, 8) & 0x400000) {
        Instance__Billboard3dImpl(M2C_FIELD(arg0, void **, 0x84));
    }
    var_r30_3 = 0;
loop_67:
    if (var_r30_3 < Game__GetConfiguredPlayerCount(lbl_803DC3C0)) {
        temp_r3_4 = Game__GetPlayerImpl(lbl_803DC3C0, var_r30_3);
        temp_r0_4 = M2C_FIELD(arg0, s32 *, 0x5EC);
        switch (temp_r0_4) {                        /* irregular */
        case 11:
            M2C_FIELD(temp_r3_4, s32 *, 0x1B38) = (s32) (M2C_FIELD(temp_r3_4, s32 *, 0x1B38) + 1);
            break;
        case 1:
            M2C_FIELD(temp_r3_4, s32 *, 0x1B3C) = (s32) (M2C_FIELD(temp_r3_4, s32 *, 0x1B3C) + 1);
            break;
        case 13:
            M2C_FIELD(temp_r3_4, s32 *, 0x1B40) = (s32) (M2C_FIELD(temp_r3_4, s32 *, 0x1B40) + 1);
            break;
        case 14:
            M2C_FIELD(temp_r3_4, s32 *, 0x1B44) = (s32) (M2C_FIELD(temp_r3_4, s32 *, 0x1B44) + 1);
            break;
        }
        var_r30_3 += 1;
        goto loop_67;
    }
    return 1;
}
