/* Dende__LevitateDragonBall @ 0x80040D04 (size: 0x200, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void * NamedPoint__FindByName(void *, char *, int);
void Pickup__DisableImpl(void *, float);
void Pickup__EnableImpl(void *);
float Script__PopFloat(void *, void *);
void * Script__PopInt(void *, void *);
void Script__PushFloat(void *, void *, float);
void Script__PushInt(void *, void *, int);
char * strcat(char *, const char *);
char * strcpy(char *, const char *);
extern s8 lbl_80311C28 __attribute__((section(".data")));
extern f32 lbl_80311C30 __attribute__((section(".data")));
extern f32 lbl_80311C38 __attribute__((section(".data")));
extern f32 lbl_80311C40 __attribute__((section(".data")));
extern f32 lbl_80311C44 __attribute__((section(".data")));
extern M2C_UNK lbl_803B1E84 __attribute__((section(".data")));

void Dende__LevitateDragonBall(void *arg0, void *arg1) {
    s8 sp28;
    f32 sp1C;
    f32 sp18;
    f64 sp8;
    f64  sp8_b;
    f32 temp_f1;
    s32 var_r24;
    s32 var_r26;
    void *temp_r31;
    void *temp_r3;
    void *var_r29;

    var_r24 = 0;
    temp_r31 = Script__PopInt(arg0, arg1);
    var_r26 = 1;
    temp_f1 = Script__PopFloat(arg0, arg1);
    sp8 = lbl_80311C30;
    M2C_FIELD(&sp8, f32 *, 4) = (f32) lbl_80311C30;
    M2C_FIELD(&sp8, f32 *, 8) = (f32) lbl_80311C30;
    M2C_ERROR(/* unknown instruction: cror cr0un, cr0eq, cr0gt */);
    if (0 == 0) {
        var_r29 = temp_r31 + 0x38;
        M2C_ERROR(/* unknown instruction: cror cr0un, cr0eq, cr0lt */);
        if (0 == 0) {
            M2C_ERROR(/* unknown instruction: cror cr0un, cr0eq, cr0gt */);
            if (0 == 0) {
                sp18 = M2C_FIELD(temp_r31, s32 *, 0x38);
                M2C_FIELD(&sp18, s32 *, 8) = (s32) M2C_FIELD(var_r29, u32 *, 8);
                M2C_FIELD(&sp18, f32 *, 4) = (f32) M2C_FIELD(var_r29, f32 *, 4);
                sp18 = ((lbl_80311C38 - (temp_f1 * lbl_80311C40)) * lbl_80311C44) + sp1C;
                sp1C = sp18;
                M2C_FIELD(var_r29, f32 *, 4) = sp18;
            }
        }
        var_r26 = 0;
    } else {
        M2C_ERROR(/* unknown instruction: cror cr0un, cr0eq, cr0gt */);
        if (0 == 0) {
            Pickup__DisableImpl(temp_r31, lbl_80311C30);
            goto block_10;
        }
        M2C_ERROR(/* unknown instruction: cror cr0un, cr0eq, cr0gt */);
        if (0 == 0) {
            var_r29 = temp_r31 + 0x38;
            var_r26 = 2;
            strcpy(&sp28, 0xD0 + M2C_FIELD(temp_r31, s32 *, 0x84));
            strcat(&sp28, &lbl_80311C28);
            temp_r3 = NamedPoint__FindByName(&lbl_803B1E84, &sp28, 0);
            M2C_FIELD(temp_r31, s32 *, 0x38) = (f32) M2C_FIELD(temp_r3, f32 *, 0);
            M2C_FIELD(var_r29, f32 *, 4) = M2C_FIELD(temp_r3, f32 *, 4);
            M2C_FIELD(var_r29, u32 *, 8) = (f32) M2C_FIELD(temp_r3, f32 *, 8);
            Pickup__EnableImpl(temp_r31);
        } else {
            var_r24 = 2;
block_10:
            var_r29 = temp_r31 + 0x38;
        }
    }
    sp8_b = M2C_FIELD(temp_r31, s32 *, 0x38);
    M2C_FIELD(&sp8_b, f32 *, 4) = (f32) M2C_FIELD(var_r29, f32 *, 4);
    M2C_FIELD(&sp8_b, f32 *, 8) = (f32) M2C_FIELD(var_r29, u32 *, 8);
    Script__PushInt(arg0, arg1, var_r26);
    Script__PushInt(arg0, arg1, var_r24);
    Script__PushFloat(arg0, arg1, M2C_FIELD(&sp8_b, f32 *, 4));
    Script__PushFloat(arg0, arg1, sp8_b);
    Script__PushFloat(arg0, arg1, M2C_FIELD(&sp8_b, f32 *, 8));
}
