/* LevelAlo__LoadFile @ 0x802853EC (size: 0xBC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

char * strcat(char *, char *);
s32 EffectHandle__SelectTextureSet(void *);
char * strcpy(char *, const char *);
extern char lbl_8034F338[];
M2C_UNK File__OpenGlobal(s32, s32, s32);
M2C_UNK LevelAloEffect__Create(s32, s32, s32);
s32 LevelAlo__LoadFile(void *arg0, s8 *arg1, s32 arg2) {
    union { s8 value; unsigned char bytes[256]; } sp8;
    s16 temp_r5;
    s32 temp_r3;
    s32 var_r29;
    u32 var_r28;
    void *temp_r3_2;
    void *var_r31;

    strcpy(((s8 *)sp8.bytes), arg1);
    strcat(((s8 *)sp8.bytes), lbl_8034F338);
    temp_r3 = File__OpenGlobal((s32) ((s8 *)sp8.bytes), 0, 0);
    M2C_FIELD(arg0, s32 *, 0x10) = temp_r3;
    if (temp_r3 == 0) {
        return 0;
    }
    var_r28 = 0U;
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(temp_r3, s32 *, 4);
    var_r29 = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) (temp_r3 + 8);
    var_r31 = arg0 + 0x1C;
    EffectHandle__SelectTextureSet(M2C_FIELD(arg0, void **, 0xC));
    do {
        temp_r3_2 = var_r31;
        var_r28 += 1;
        var_r31 += 4;
        temp_r5 = M2C_FIELD((var_r29 + M2C_FIELD(arg0, s32 *, 0x14)), s16 *, 0x20);
        var_r29 += 0x24;
        LevelAloEffect__Create((s32) temp_r3_2, arg2, (s32) temp_r5);
    } while (var_r28 <= 9U);
    return 1;
}
