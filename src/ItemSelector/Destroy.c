/* ItemSelector__Destroy @ 0x80265D88 (size: 0xD0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

extern char lbl_8034B848[];
void Sphere__DestroyCore(void *, s32);
void SphereText__Destroy(void *, s32);
void MenuPanelBox__Destroy(char *, s32);
void EzNode__Destroy(void *, s32);

void ItemSelector__Destroy(char *self, s32 flags) {
    char *p1;
    char *p2;

    *(char **)(self + 0x10) = lbl_8034B848;
    Sphere__DestroyCore(self + 0x69BC, 2);
    p1 = self + 0x646C;
    SphereText__Destroy(self + 0x67BC, 2);
    p2 = self + 0x5F1C;
    Sphere__DestroyCore(self + 0x661C, 2);
    Sphere__DestroyCore(p1, 2);
    SphereText__Destroy(self + 0x626C, 2);
    Sphere__DestroyCore(self + 0x60CC, 2);
    Sphere__DestroyCore(p2, 2);
    Sphere__DestroyCore(self + 0x5D7C, 2);
    MenuPanelBox__Destroy(self + 0x2F98, 2);
    MenuPanelBox__Destroy(self + 0x1B4, 2);
    Sphere__DestroyCore(self + 0x14, 2);
    EzNode__Destroy(self, flags);
}
