/* TriggerBox__CacheInstances @ 0x80032B30 (size: 0x150, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Mem__DeleteArray(void *);
s32 Mem__New(s32);
char * Mem__NewArray(s32);
char * Script__PopString(void *, void *, int *);
void Script__PushInt(void *, void *, int);
void * fn_802ABF24(char *);
void * sprintf(s8 *, void *, s8 *, s32);
M2C_UNK CmdCon__PrintError(s32, M2C_UNK *, void *, s8 *); /* extern */
extern M2C_UNK lbl_803115EC __attribute__((section(".data")));
extern M2C_UNK lbl_8031181C __attribute__((section(".data")));
extern s32 lbl_803DC3F4 __attribute__((section(".data")));
extern s32 lbl_803DCC10;

void TriggerBox__CacheInstances(void *arg0, void *arg1) {
    s32 sp108;
    s8 sp8;
    s32 temp_r30;
    s32 var_r29;
    char *temp_r28;
    void *temp_r3;
    void *temp_r3_2;

    var_r29 = 0;
    temp_r28 = Script__PopString(arg0, arg1, &sp108);
loop_2:
    temp_r30 = var_r29 + 1;
    sprintf(&sp8, &lbl_803115EC, temp_r28, temp_r30);
    if (fn_802ABF24(&sp8) != NULL) {
        var_r29 = temp_r30;
        goto loop_2;
    }
    if (var_r29 == 0) {
        CmdCon__PrintError(lbl_803DCC10, &lbl_8031181C, arg0 + 0xD0, temp_r28);
    }
    temp_r3 = Mem__New(8);
    M2C_FIELD(temp_r3, s32 *, 0) = var_r29;
    temp_r30 = 0;
    M2C_FIELD(temp_r3, s8 **, 4) = Mem__NewArray(var_r29 * 4);
    lbl_803DC3F4 = lbl_803DC3F4 + 1 + var_r29;
    if ((s32) M2C_FIELD(temp_r3, s32 *, 0) > 0) {
        var_r29 = 0;
        while (temp_r30 < (s32) M2C_FIELD(temp_r3, s32 *, 0)) {
            temp_r30 += 1;
            sprintf(&sp8, &lbl_803115EC, temp_r28, temp_r30);
            temp_r3_2 = fn_802ABF24(&sp8);
            M2C_FIELD(temp_r3, s8 **, 4)[var_r29] = temp_r3_2;
            var_r29 += 4;
            M2C_FIELD(temp_r3_2, s32 *, 0x110) = (s32) (M2C_FIELD(temp_r3_2, s32 *, 0x110) | 0x20000);
        }
    }
    Script__PushInt(arg0, arg1, (s32) temp_r3);
    if ((sp108 != 0) && (temp_r28 != NULL)) {
        Mem__DeleteArray(temp_r28);
    }
}
