/* SecondaryModelSet__Destroy @ 0x8021096C (size: 0xDC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Mem__Delete(void *);
void Mem__DeleteArray(void *);
void SceneMgr__DetachInstance(void *, s32);
void fn_8020374C(void *);
void fn_8020689C(void *);

void SecondaryModelSet__Destroy(void *arg0, s32 arg1) {
    s32 i = 0;
    s32 off;
    void *obj;
    void *vt;
    if (i < M2C_FIELD(arg0, s32 *, 4)) {
        off = 0;
        do {
            SceneMgr__DetachInstance(M2C_FIELD(arg0, char **, 0xC) + off, 0);
            fn_8020374C((void *)(off + M2C_FIELD(arg0, s32 *, 0xC)));
            fn_8020689C((void *)(off + M2C_FIELD(arg0, s32 *, 0xC)));
            Mem__Delete(M2C_FIELD((void *)(off + M2C_FIELD(arg0, s32 *, 0xC)), void **, 0x94));
            obj = M2C_FIELD((void *)(off + M2C_FIELD(arg0, s32 *, 0xC)), void **, 0x78);
            if (obj != NULL) {
                vt = M2C_FIELD(obj, void **, 0);
                M2C_FIELD(vt, void (**)(void *, s32), 0xC)((char *)obj + M2C_FIELD(vt, s16 *, 8), 3);
            }
            i += 1;
            off += 176;
        } while (i < M2C_FIELD(arg0, s32 *, 4));
    }
    if (M2C_FIELD(arg0, void **, 0xC) != NULL) {
        Mem__DeleteArray(M2C_FIELD(arg0, void **, 0xC));
    }
    if (arg1 & 1) {
        Mem__Delete(arg0);
    }
}