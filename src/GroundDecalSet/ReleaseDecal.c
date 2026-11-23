/* GroundDecalSet__ReleaseDecal @ 0x8028450C (size: 0xBC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 RenderInstance__Release(s32);
void SceneMgr__DetachInstance(void *, s32);
void GroundDecalSet__ReleaseDecal(void *arg0, void *arg1) {
    void *temp_r11;

    if (arg1 != NULL) {
        SceneMgr__DetachInstance(arg1, 0);
        RenderInstance__Release((s32) arg1);
        temp_r11 = arg0 + 0x34;
        if ((void *) M2C_FIELD(arg0, void **, 0x34) == arg1) {
            M2C_FIELD(arg0, void **, 0x34) = (void *) M2C_FIELD(arg1, void **, 0xF8);
        } else {
            M2C_FIELD(M2C_FIELD(arg1, void **, 0xF4), void **, 0xF8) = (void *) M2C_FIELD(arg1, void **, 0xF8);
        }
        if ((void *) M2C_FIELD(temp_r11, void **, 4) == arg1) {
            M2C_FIELD(temp_r11, void **, 4) = (void *) M2C_FIELD(arg1, void **, 0xF4);
        } else {
            M2C_FIELD(M2C_FIELD(arg1, void **, 0xF8), void **, 0xF4) = (void *) M2C_FIELD(arg1, void **, 0xF4);
        }
        M2C_FIELD(arg1, void **, 0xF4) = NULL;
        M2C_FIELD(arg1, void **, 0xF8) = NULL;
        M2C_FIELD(temp_r11, s32 *, 0xC) = (s32) (M2C_FIELD(temp_r11, s32 *, 0xC) - 1);
        if (arg1 != NULL) {
            M2C_FIELD(arg1, void **, 0) = (void *) M2C_FIELD(arg0, void **, 0x44);
            M2C_FIELD(arg0, void **, 0x44) = arg1;
        }
    }
}
