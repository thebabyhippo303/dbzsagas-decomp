/* SecondaryModelSet__Update @ 0x80210C74 (size: 0xE0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 SecondaryModel__Update(s32, s32, f32);
extern s32 lbl_803AD7B0[] __attribute__((section(".data")));

void SecondaryModelSet__Update(void *arg0, f32 farg0) {
    s32 idx;
    s32 i;
    s32 off;
    s32 flag;
    char *ptr2;
    void *vt;
    void *obj;
    f32 dt = farg0;

    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    i = 0;
    if (i < M2C_FIELD(arg0, s32 *, 4)) {
        off = 0;
        do {
            flag = 0;
            idx = i * 176;
            if ((M2C_FIELD(arg0, s32 *, 0x10) != 0) || (SecondaryModel__Update(*(s32 *)((char *)(off + M2C_FIELD(arg0, s32 *, 0xC)) + 0x78), !(unsigned)(*(s32 *)(*(char **)((char *)(off + M2C_FIELD(arg0, s32 *, 0xC)) + 0x94) + 0xC) ^ lbl_803AD7B0[35]), dt) != 0)) {
                flag = 1;
            }
            i += 1;
            M2C_FIELD(arg0, s32 *, 0x10) = flag;
            off += 176;
            ptr2 = (char *)(idx + M2C_FIELD(arg0, s32 *, 0xC));
            vt = *(void **)(ptr2 + 0x78);
            obj = *(void **)vt;
            M2C_FIELD(obj, void (**)(void *, void *), 0x24)((char *)vt + *(s16 *)((char *)obj + 0x20), ptr2);
        } while (i < M2C_FIELD(arg0, s32 *, 4));
    }
}
