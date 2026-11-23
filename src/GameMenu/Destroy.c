/* GameMenu__Destroy @ 0x802639C8 (size: 0x188, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

/* Byte-matched: GameMenu__Destroy @ 0x802639C8 (0x188). ProDG -O2. */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0

s32 GameMenu__UnloadDatabase(void *);
void UiAnimator__Destroy(void *, s32);
void Sphere__DestroyCore(void *, s32);
void BaseMenu__Destroy(void *, s32);
extern char lbl_8034C3C8[];
extern s32 lbl_803DCE64;

typedef struct VTA { char pad[8]; s16 adj; s16 pad2; void (*dtor)(void *, s32); } VTA;
typedef struct ObjA { char pad[412]; VTA *vt; } ObjA;
typedef struct ObjB { char pad[44]; VTA *vt; } ObjB;
#define DESTROY_A(o) ((o)->vt->dtor((char *)(o) + (o)->vt->adj, 3))
#define DESTROY_B(o) ((o)->vt->dtor((char *)(o) + (o)->vt->adj, 3))

void GameMenu__Destroy(void *arg0, s32 arg1) {
    char *self = (char *)arg0;
    char *a1; char *a2; char *a3; char *a4; char *a5; char *a6;
    ObjA *o1; ObjA *o2; ObjA *o3; ObjA *o4; ObjB *o5; ObjB *o6;
    s32 idx; s32 n;

    *(char **)(self + 0x10) = lbl_8034C3C8;
    GameMenu__UnloadDatabase(arg0);
    idx = 0; n = 18;
    do {
        a1 = self + 0x33C; o1 = *(ObjA **)(a1 + idx);
        if (o1 != NULL) { DESTROY_A(o1); }
        a2 = self + 0x264; o2 = *(ObjA **)(a2 + idx);
        if (o2 != NULL) { DESTROY_A(o2); }
        a3 = self + 0x2AC; o3 = *(ObjA **)(a3 + idx);
        if (o3 != NULL) { DESTROY_A(o3); }
        a4 = self + 0x2F4; o4 = *(ObjA **)(a4 + idx);
        if (o4 != NULL) { DESTROY_A(o4); }
        a5 = self + 0x3B4; o5 = *(ObjB **)(a5 + idx);
        if (o5 != NULL) { DESTROY_B(o5); }
        a6 = self + 0x3FC; o6 = *(ObjB **)(a6 + idx);
        if (o6 != NULL) { DESTROY_B(o6); }
        idx += 4; n -= 1;
    } while (n != 0);
    lbl_803DCE64 -= 0x45C;
    UiAnimator__Destroy(self + 0x384, 2);
    Sphere__DestroyCore(self + 0xC4, 2);
    BaseMenu__Destroy(arg0, arg1);
}
