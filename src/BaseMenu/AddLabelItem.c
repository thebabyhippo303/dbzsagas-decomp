/* BaseMenu__AddLabelItem @ 0x80262D10 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
typedef void *(*Fn1)(void *obj, s32 a);
typedef void (*Fn2)(void *obj, s32 b);
typedef struct VTab { char pad[160]; s16 adj1; char p1[2]; Fn1 fn1; char p2[48]; s16 adj2; char p3[2]; Fn2 fn2; } VTab;
typedef struct BaseMenu { char pad[16]; VTab *v; } BaseMenu;
typedef struct LabelItem { char pad[16]; VTab *v; } LabelItem;
void *BaseMenu__AddLabelItem(BaseMenu *this, s32 a, s32 b) {
    LabelItem *item = (LabelItem *)this->v->fn1((char *)this + this->v->adj1, a);
    if (item != NULL)
        item->v->fn2((char *)item + item->v->adj2, b);
    return item;
}
