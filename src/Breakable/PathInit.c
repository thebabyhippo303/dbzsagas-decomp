/* Breakable__PathInit @ 0x8003B140 (size: 0x1DC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void * Script__PopInt(void *, void *);
char * Script__PopString(void *, void *, int *);
void * fn_801842C4(unsigned int);
void * fn_80184348(int);
void fn_801843CC(void *);
void fn_80184430(char *);
void * fn_801FCDB8(void *);
void * fn_801FD128(void *, char *, int);
void * memcpy(void *, const void *, unsigned int);
void * memmove(void *, void *, unsigned int);
void * memset(void *, int, u32);
M2C_UNK fn_80254678(M2C_UNK *, s32);                /* extern */
void *sprintf(s8 *, M2C_UNK *, s8 *, s32);          /* extern */
extern M2C_UNK lbl_803115EC __attribute__((section(".data")));
extern f32 lbl_803A35BC __attribute__((section(".data")));
extern M2C_UNK lbl_803DD634;

void Breakable__PathInit(void *arg0, void *arg1) {
    void *sp44;
    s32 sp40;
    s8 sp8;
    s32 temp_r0;
    s32 temp_r27;
    s32 temp_r28;
    s32 temp_r29;
    s32 var_r22;
    s32 var_r25;
    s8 *temp_r24;
    u32 temp_r31;
    void *temp_r23;
    void *temp_r30;
    void *temp_r30_2;
    void *temp_r31_2;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_4;
    void *temp_r4;

    var_r25 = 0;
    sp40 = 0;
    temp_r23 = Script__PopInt(arg0, arg1);
    var_r22 = 0;
    temp_r24 = Script__PopString(arg0, arg1, &sp40);
    temp_r30 = fn_801842C4(0x18U);
    M2C_FIELD(temp_r30, void **, 0) = fn_80184348(0x20);
    M2C_FIELD(temp_r30, s32 *, 0xC) = 8;
    M2C_FIELD(temp_r30, s32 *, 4) = 0;
    M2C_FIELD(temp_r30, s32 *, 8) = 8;
    M2C_FIELD(temp_r30, s32 *, 0x10) = 0;
    M2C_FIELD(temp_r30, s32 *, 0x14) = 0;
    M2C_FIELD(temp_r23, void **, 0x540) = temp_r30;
    fn_80254678(&lbl_803DD634, (s32) lbl_803A35BC);
    do {
        temp_r3 = fn_801FD128(fn_801FCDB8(sprintf(&sp8, &lbl_803115EC, temp_r24, var_r22)), &sp8, -1);
        sp44 = temp_r3;
        if (temp_r3 != NULL) {
            temp_r30_2 = M2C_FIELD(temp_r23, void **, 0x540);
            temp_r28 = M2C_FIELD(temp_r30_2, s32 *, 4);
            if (temp_r28 == (s32) M2C_FIELD(temp_r30_2, s32 *, 8)) {
                temp_r31 = temp_r28 * 4;
                temp_r27 = (temp_r28 + M2C_FIELD(temp_r30_2, s32 *, 0xC)) * 4;
                temp_r3_2 = fn_80184348(temp_r27);
                if (temp_r3_2 != NULL) {
                    temp_r4 = M2C_FIELD(temp_r30_2, void **, 0);
                    if (temp_r4 != NULL) {
                        memcpy(temp_r3_2, temp_r4, temp_r31);
                        temp_r3_3 = M2C_FIELD(temp_r30_2, void **, 0);
                        if (temp_r3_3 != NULL) {
                            fn_801843CC(temp_r3_3);
                        }
                    }
                    M2C_FIELD(temp_r30_2, void **, 0) = temp_r3_2;
                    M2C_FIELD(temp_r30_2, s32 *, 8) = (s32) (M2C_FIELD(temp_r30_2, s32 *, 8) + M2C_FIELD(temp_r30_2, s32 *, 0xC));
                    if ((s32) M2C_FIELD(temp_r30_2, s32 *, 0x10) != 0) {
                        memset(temp_r3_2 + temp_r31, 0, temp_r27 - temp_r31);
                    }
                    goto block_9;
                }
            } else {
block_9:
                temp_r31_2 = M2C_FIELD(temp_r30_2, void **, 0);
                temp_r29 = temp_r28 * 4;
                temp_r3_4 = temp_r31_2 + temp_r29;
                temp_r0 = M2C_FIELD(temp_r30_2, s32 *, 4) - temp_r28;
                if (temp_r0 != 0) {
                    memmove(temp_r3_4 + 4, temp_r3_4, temp_r0 * 4);
                }
                M2C_FIELD(temp_r31_2, void **, temp_r29) = sp44;
                M2C_FIELD(temp_r30_2, s32 *, 4) = (s32) (M2C_FIELD(temp_r30_2, s32 *, 4) + 1);
            }
            var_r22 += 1;
        } else {
            var_r25 = 1;
        }
    } while (var_r25 == 0);
    if ((sp40 != 0) && (temp_r24 != NULL)) {
        fn_80184430(temp_r24);
    }
}

