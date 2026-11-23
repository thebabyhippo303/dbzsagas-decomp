/* Environment__CreateEntityFromType @ 0x800EA3DC (size: 0x26C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void * Exploder__Construct(void *);
void * Fighter__Construct(char *);
void * Pickup__ConstructDefault(char *);
int String__CompareIgnoreCase(const char *, const char *);
void * TriggerBox__Construct(void *);
void * VolumeTrigger__Construct(void *);
void * fn_801842C4(unsigned int);
void fn_802C2728(void *, int);
void fn_802CB514(void *);
int strlen(const char *);
void *DbzBreakable__Construct();                    /* extern */
void *Device__Construct();                          /* extern */
void *Plant__Construct();                           /* extern */
void *SuspensionBridge__Construct();                /* extern */
M2C_UNK fn_80189B8C(s32, M2C_UNK *, s8 *);          /* extern */
void *fn_802B31C4();                                /* extern */
void *fn_802B52EC();                                /* extern */
void *fn_802C2344();                                /* extern */
M2C_UNK strncat(s8 *, s8 *, s32);                   /* extern */
extern M2C_UNK lbl_80323750 __attribute__((section(".data")));
extern M2C_UNK lbl_803237A4 __attribute__((section(".data")));
extern M2C_UNK lbl_8033B220;
extern s8 lbl_803914C4 __attribute__((section(".data")));
extern s32 lbl_803DCC10;
extern s32 lbl_803DD1A8;
extern s32 lbl_803DD1B4;

void *Environment__CreateEntityFromType(s8 *arg0) {
    s32 sp20;
    s32 sp10;
    s32 temp_r0;
    s32 temp_r7;
    s32 temp_r8;
    s32 temp_r9;
    s32 temp_r9_2;
    s32 var_r27;
    s32 var_r31;
    void *var_r29;
    char *var_r3;

    var_r29 = NULL;
    var_r31 = 0;
    var_r27 = 0;
loop_2:
    if (var_r27 >= 0x52) {
        fn_80189B8C(lbl_803DCC10, &lbl_80323750, arg0);
    } else if (String__CompareIgnoreCase(*(var_r31 + &lbl_8033B220), arg0) == 0) {
        M2C_FIELD(&lbl_803914C4, s32 *, 0) = (s32) M2C_FIELD(&lbl_803237A4, s32 *, 0);
        M2C_FIELD(&lbl_803914C4, u8 *, 4) = (u8) M2C_FIELD(&lbl_803237A4, u8 *, 4);
        strncat(&lbl_803914C4, arg0, 0xF - strlen(&lbl_803914C4));
        temp_r9 = *(&lbl_8033B220 + 8 + var_r31);
        switch (temp_r9) {                          /* irregular */
        case 0:
            fn_801842C4(0x414U);
            var_r3 = fn_802C2344();
block_37:
            var_r29 = var_r3;
            break;
        case 2:
            var_r3 = Fighter__Construct(fn_801842C4(0x79CU));
            goto block_37;
        case 1:
            fn_801842C4(0x508U);
            var_r3 = fn_802B31C4();
            goto block_37;
        case 3:
            fn_801842C4(0x5E8U);
            var_r3 = fn_802B52EC();
            goto block_37;
        case 4:
            var_r3 = Pickup__ConstructDefault(fn_801842C4(0x654U));
            goto block_37;
        case 5:
            fn_801842C4(0x464U);
            var_r3 = Plant__Construct();
            goto block_37;
        case 7:
            fn_801842C4(0x55CU);
            var_r3 = Device__Construct();
            goto block_37;
        case 8:
            var_r3 = TriggerBox__Construct(fn_801842C4(0x564U));
            goto block_37;
        case 9:
            var_r3 = Exploder__Construct(fn_801842C4(0x72CU));
            goto block_37;
        case 10:
            var_r3 = VolumeTrigger__Construct(fn_801842C4(0x488U));
            goto block_37;
        case 12:
            fn_801842C4(0x774U);
            var_r3 = SuspensionBridge__Construct();
            goto block_37;
        case 13:
            fn_801842C4(0x8E4U);
            var_r3 = DbzBreakable__Construct();
            goto block_37;
        }
    } else {
        var_r27 += 1;
        var_r31 += 0x14;
        goto loop_2;
    }
    if (NULL != var_r29) {
        temp_r7 = var_r27 * 0x14;
        fn_802C2728(var_r29, (s32) arg0);
        M2C_FIELD(var_r29, u32 *, 0x204) = (s32) *(&lbl_8033B220 + 4 + temp_r7);
        temp_r9_2 = lbl_803DD1B4 | lbl_803DD1A8;
        temp_r8 = *(&lbl_8033B220 + 0x10 + temp_r7);
        temp_r0 = temp_r8 & temp_r9_2;
        var_r31 = temp_r8;
        temp_r9 = temp_r9_2;
        sp20 = temp_r0;
        sp10 = temp_r0;
        M2C_FIELD(var_r29, s32 *, 0x384) = temp_r0;
        fn_802CB514(var_r29);
    }
    return var_r29;
}
