/* MainMenu__DestroyPauseScreen @ 0x80159AE4 (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct { char pad[0x19C]; void *vtable; } Dlg;
void Sphere__DestroyCore(void *, s32);
void SphereText__Destroy(void *, s32);
void MenuPanel__Destroy(char *, s32);
void PointerArray__Remove(void *, void *);
extern void *lbl_803DC650;
extern unsigned char lbl_8032F630[];
void MainMenu__DestroyPauseScreen(Dlg *arg0, s32 arg1) {
    Dlg *self = arg0;
    self->vtable = (void *)lbl_8032F630;
    {
        void *list = lbl_803DC650;
        PointerArray__Remove(list, self);
    }
    Sphere__DestroyCore((char *)self + 0xB084, 2);
    SphereText__Destroy((char *)self + 0xAE90, 2);
    MenuPanel__Destroy((char *)self, arg1);
}
