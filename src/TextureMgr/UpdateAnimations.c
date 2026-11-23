/* TextureMgr__UpdateAnimations @ 0x80246EF0 (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0

void TextureAnim__Update(s32, s32);
extern f32 lbl_80347860 __attribute__((section(".data")));
extern f32 lbl_803A35BC __attribute__((section(".data")));
extern s32 lbl_803B1D44 __attribute__((section(".data")));

void TextureMgr__UpdateAnimations(void) {
    s16 v;
    s32 head;

    head = lbl_803B1D44;
    v = (s16)(lbl_803A35BC * lbl_80347860);
    if (head != 0) {
        do {
            TextureAnim__Update(head, (s32)v);
            head = *(s32 *)head;
        } while (head != 0);
    }
}
