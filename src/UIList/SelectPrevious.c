/* UIList__SelectPrevious @ 0x801359EC (size: 0x128, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

extern float lbl_8032ABC8 __attribute__((section(".data")));
extern float lbl_8032ABCC __attribute__((section(".data")));
extern void fn_8026C508(void *widget, float x, float y);
extern void fn_8026C634(void *widget, float x, float y);

typedef struct {
    short adjust;
    short pad;
    void (*fn)(void *self, float *x, float *y);
} UIListMethXY;

typedef struct {
    short adjust;
    short pad;
    float (*fn)(void *self);
} UIListMethF;

void UIList__SelectPrevious(char *self) {
    int *hdr = (int *)(self + 832);
    int selected;
    char *widget;
    char *obj;
    char *obj_b_;
    char *obj_b;
    UIListMethXY *xy;
    UIListMethF *mf;
    float x;
    float y;
    float a;

    if (hdr[1] == 0) {
        return;
    }
    selected = *(int *)(self + 860) - 1;
    *(int *)(self + 860) = selected;
    if (selected < 0) {
        selected = hdr[1] - 1;
        *(int *)(self + 860) = selected;
    }
    widget = self + 416;
    obj = *(char **)(*(char **)((char *)(*(char ***)(self + 832)) + ((*(int *)(self + 860)) << 2)));
    xy = (UIListMethXY *)(*(char **)(obj + 0x19C) + 0xB0);
    xy->fn(obj + xy->adjust, &x, &y);
    fn_8026C508(widget, x - lbl_8032ABC8, y);

    obj_b = *(char **)(*(char **)((char *)(*(char ***)(self + 832)) + ((*(int *)(self + 860)) << 2)));
    mf = (UIListMethF *)(*(char **)(obj_b + 0x19C) + 0x3B0);
    a = mf->fn(obj_b + mf->adjust) + lbl_8032ABCC;

    obj_b_ = *(char **)(*(char **)((char *)(*(char ***)(self + 832)) + ((*(int *)(self + 860)) << 2)));
    mf = (UIListMethF *)(*(char **)(obj_b_ + 0x19C) + 0x3B8);
    fn_8026C634(widget, a, mf->fn(obj_b_ + mf->adjust));
}
