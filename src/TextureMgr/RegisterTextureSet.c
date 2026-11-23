/* TextureMgr__RegisterTextureSet @ 0x80247500 (size: 0xC0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 TextureMgr__GetActiveDatabase(void);
void SList__PushFront(void *, s32);
u16 TextureSet__GetFrameBind(void *, s32);
M2C_UNK TextureSet__RelocatePointers(s32, s32);
M2C_UNK TexBind__AddFlags(s32, s32);
s32 TextureMgr__RegisterTextureSet(s32 arg0, void *arg1, s32 *arg2, s32 *arg3) {
    s32 var_r29;
    s32 var_r31;
    s32 temp_r3;
    s32 masked;

    var_r29 = 0;
    SList__PushFront(TextureMgr__GetActiveDatabase() + 0x38, arg0);
    var_r31 = arg0 + 0x18;
    if (var_r29 < (s32) M2C_FIELD(arg0, s32 *, 0xC)) {
        do {
            TextureSet__RelocatePointers(var_r31, arg0);
            var_r29 += 1;
            var_r31 += 0x48;
        } while (var_r29 < (s32) M2C_FIELD(arg0, s32 *, 0xC));
    }
    temp_r3 = TextureSet__GetFrameBind(TextureMgr__GetActiveDatabase(), M2C_FIELD(arg0, s32 *, 0x10));
    masked = temp_r3 & 0xFFFF;
    M2C_FIELD(arg0, u16 *, 0x10) = temp_r3;
    TexBind__AddFlags(masked, 0x10);
    M2C_FIELD(arg0, s32 *, 8) = 0xFFFF;
    M2C_FIELD(arg1, u16 *, 2) = (u16) (M2C_FIELD(arg1, u16 *, 2) & 0xFFFE);
    *arg2 = arg0;
    *arg3 = M2C_FIELD(arg1, s32 *, 4);
    return 1;
}
