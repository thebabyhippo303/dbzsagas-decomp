/* BaseMenu__Destroy @ 0x80262B04 (size: 0x94, .text, ProDG 3.9.3 -O2) - MATCHED */
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0

extern char lbl_8034C5E0[];
void BaseMenu__DestroyChildren(void *self);
void EzString__Destroy(void *str, s32 mode);
void EzNode__Destroy(void *, s32);

void BaseMenu__Destroy(void *arg0, s32 arg1) {
    void *end;
    void *vt;

    M2C_FIELD(arg0, void **, 0x10) = (void *)lbl_8034C5E0;
    BaseMenu__DestroyChildren(arg0);
    end = (char *)arg0 + 0x78;
    EzString__Destroy(end, 2);
    if (((char *)arg0 + 0x18) != NULL && ((char *)arg0 + 0x18) != end) {
        do {
            end = (char *)end - 12;
            vt = M2C_FIELD(end, void **, 8);
            M2C_FIELD(vt, void (**)(void *, s32), 0xC)((char *)end + M2C_FIELD(vt, s16 *, 8), 0);
        } while (((char *)arg0 + 0x18) != end);
    }
    EzNode__Destroy(arg0, arg1);
}
