/* TextureMgr__UnloadAll @ 0x80246E40 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0

void TextureAnim__Destroy(void *);
void fn_80247FDC(void);
void fn_8024FC40(void *);
void fn_802472D4(void);
void TexBind__ReleaseAll(void *);
extern void *lbl_803B1D44 __attribute__((section(".data")));
extern char lbl_803B1C6C[] __attribute__((section(".data")));

void TextureMgr__UnloadAll(void *arg0) {
    void *node = lbl_803B1D44;

    if (node != NULL) {
        do {
            void *cur = node;
            node = *(void **)node;
            TextureAnim__Destroy(cur);
        } while (node != NULL);
    }
    fn_80247FDC();
    fn_8024FC40(lbl_803B1C6C);
    fn_802472D4();
    TexBind__ReleaseAll(arg0);
}
