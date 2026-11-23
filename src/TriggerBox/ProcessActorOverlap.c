/* TriggerBox__ProcessActorOverlap @ 0x800FD4A8 (size: 0x2D4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s8 * CameraBag__Push(void *, s8 *);
void SimLoop__ActivateControls(void *, int);
void TriggerBox__DeactivateImpl(void *);
int TriggerBox__GetActorTypeFilter(void *);
s32 TriggerBox__GetEnterEventId(s8 *);
void * TriggerBox__GetEventDispatchData(char *);
void fn_80251650(void *, int, void *, void *, void *);
M2C_UNK fn_80189B8C(void *, M2C_UNK *, ...);        /* extern */
extern M2C_UNK lbl_803247D8 __attribute__((section(".data")));
extern s8 lbl_803247F8 __attribute__((section(".data")));
extern f32 lbl_80324800 __attribute__((section(".data")));
extern f32 lbl_80324804 __attribute__((section(".data")));
extern f32 lbl_80324808 __attribute__((section(".data")));
typedef struct { s32 a, b, c, d, value; char rest[12]; } TriggerRow;
extern TriggerRow lbl_8036B5BC[];
extern s32 lbl_803945A4[];
extern s32 lbl_803945E4[];
extern s32 lbl_80394624[];
extern M2C_UNK lbl_803B1DDC __attribute__((section(".data")));
extern s32 lbl_803DC3C0;
extern void *lbl_803DC5B4;
extern void *lbl_803DCBF0 __attribute__((section(".sdata")));

void TriggerBox__ProcessActorOverlap(s8 *arg0, void *arg1, void *arg2) {
    typedef struct { f32 x, y, z; } Vec3;
    Vec3 sp8;
    s32 temp_r11;
    s32 temp_r11_2;
    s32 temp_r28;
    s32 temp_r30;
    s32 temp_r30_2;
    s32 temp_r30_3;
    s32 temp_r7;
    s32 temp_r9_2;
    s32 var_r28;
    s8 *temp_r10;
    s8 *temp_r5;
    register void *temp_r9;

    temp_r11 = M2C_FIELD(arg0, s32 *, 0x560);
    if (temp_r11 != 0) {
        lbl_8036B5BC[M2C_FIELD(arg0, s32 *, 0x508)].value = temp_r11;
    }
    temp_r9 = (char *)lbl_8036B5BC;
    temp_r11_2 = M2C_FIELD(arg0, s32 *, 0x508) << 5;
    if (*(s32 *)((char *)temp_r9 + 4 + temp_r11_2) == 4) {
        temp_r9 = (char *)temp_r9 + 0x10;
        *(void **)((char *)temp_r9 + temp_r11_2) = arg1;
        fn_80189B8C(lbl_803DCBF0, &lbl_803247D8, temp_r9);
    }
    temp_r7 = M2C_FIELD(arg0, s32 *, 0x554);
    var_r28 = 0;
    if (temp_r7 & 0x80) {
        temp_r28 = (M2C_FIELD(arg1, s32 *, 0) & lbl_803945E4[1]) ^ lbl_803945E4[0];
        var_r28 = (temp_r28 == 0);
    }
    if ((temp_r7 & 0x100) && ((s32) (M2C_FIELD(arg1, s32 *, 0) & lbl_803945A4[1]) == (s32) lbl_803945A4[0]) && ((TriggerBox__GetActorTypeFilter(arg0) == -1) || (temp_r30 = M2C_FIELD(arg1, s32 *, 0x204), ((temp_r30 == TriggerBox__GetActorTypeFilter(arg0)) != 0)))) {
        var_r28 = 1;
    }
    if ((M2C_FIELD(arg0, s32 *, 0x554) & 0x4000) && ((s32) (M2C_FIELD(arg1, s32 *, 0) & lbl_80394624[1]) == (s32) lbl_80394624[0]) && ((TriggerBox__GetActorTypeFilter(arg0) == -1) || (temp_r30_2 = **M2C_FIELD(arg1, s32 ***, 0x354), ((temp_r30_2 == TriggerBox__GetActorTypeFilter(arg0)) != 0)))) {
        var_r28 = 1;
    }
    if ((var_r28 != 0) && ((temp_r9_2 = M2C_FIELD(arg0, s32 *, 0x554), (((temp_r9_2 & 1) == 0) != 0)) || ((s32) M2C_FIELD(arg0, s32 *, 0x540) == 0)) && (((s32) M2C_FIELD(arg0, s32 *, 0x558) == 0) || ((s32) M2C_FIELD(arg0, s32 *, 0x540) == 0)) && (!(temp_r9_2 & 4) || !(M2C_FIELD(arg2, f32 *, 4) > lbl_80324800)) && !(M2C_FIELD(arg0, f32 *, 0x50C) > lbl_80324804)) {
        M2C_FIELD(arg0, s32 *, 0x540) = 1;
        M2C_FIELD(arg0, void **, 0x510) = arg1;
        if ((s32) M2C_FIELD(arg0, s32 *, 0x544) != 0) {
            temp_r10 = CameraBag__Push(lbl_803DC5B4, &lbl_803247F8);
            sp8 = *(Vec3 *)((char *)arg0 + 0x514);
            *(Vec3 *)temp_r10 = sp8;
            sp8 = *(Vec3 *)((char *)arg0 + 0x520);
            *(Vec3 *)(temp_r10 + 0xC) = sp8;
            SimLoop__ActivateControls(lbl_803DC3C0, 0);
            M2C_FIELD(arg0, f32 *, 0x50C) = (f32) lbl_80324808;
            if (M2C_FIELD(arg0, s32 *, 0x554) & 0x20) {
                temp_r30_3 = TriggerBox__GetEnterEventId(arg0);
                fn_80251650(&lbl_803B1DDC, temp_r30_3, TriggerBox__GetEventDispatchData(arg0), arg0, arg1);
            }
        } else {
            TriggerBox__DeactivateImpl(arg0);
        }
    }
}
