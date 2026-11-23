/* SecondaryModelSet__AddModel @ 0x80210A48 (size: 0xFC, .text, ProDG 3.9.3 -O2) - MATCHED */
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0

void *Mem__New(u32);
void Mem__Delete(void *);
void *SecondaryModel__Construct(void *, s32, void *, s32, s32);
s32 RenderInstance__Init(void *, void *, void *, s32);
void SceneMgr__AttachInstance(void *, s32, void *);

s32 SecondaryModelSet__AddModel(void *arg0, s32 arg1, s32 arg2) {
    void *model;
    void *inst;
    void *vtable;
    s16 off;
    void (*dtor)(void *, s32);
    s32 ret = 0;
    s32 idx;
    char *base;

    if (M2C_FIELD(arg0, s32 *, 4) < M2C_FIELD(arg0, s32 *, 8)) {
        model = SecondaryModel__Construct(Mem__New(80), arg1, M2C_FIELD(arg0, void **, 0), 0, 0);
        inst = Mem__New(64);
        if (RenderInstance__Init(model, M2C_FIELD(arg0, s32 *, 4) * 176 + M2C_FIELD(arg0, char **, 0xC), inst, 1) == 0) {
            Mem__Delete(inst);
            if (model != NULL) {
                vtable = *(void **)model;
                off = *(s16 *)((char *)vtable + 8);
                dtor = *(void (**)(void *, s32))((char *)vtable + 12);
                dtor((char *)model + off, 3);
            }
            return 0;
        }
        idx = M2C_FIELD(arg0, s32 *, 4) * 176;
        base = M2C_FIELD(arg0, char **, 0xC);
        M2C_FIELD(inst, s32 *, 0x18) = arg2;
        SceneMgr__AttachInstance(base + idx, 0, NULL);
        ret = 1;
        M2C_FIELD(arg0, s32 *, 4) += 1;
    }
    return ret;
}
