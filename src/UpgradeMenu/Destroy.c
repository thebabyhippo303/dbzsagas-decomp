/* UpgradeMenu__Destroy @ 0x8001A9B8 (size: 0x1E0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef short s16; typedef int s32;
typedef struct VT { char pad[8]; s16 adj; s16 p; void (*fn)(void *, s32); } VT;
void Sphere__DestroyCore(void *, s32);
void fn_802704BC(void *, int);
void MainMenu__DestroySelectionListState(void *, s32);
extern char lbl_8030E220[] __attribute__((section(".data")));

void UpgradeMenu__Destroy(char *self, s32 arg1) {
    char *p;
    char *end;
    VT *vt;

    *(char **)(self + 0x19C) = lbl_8030E220;
    fn_802704BC(self + 15188, 2);
    fn_802704BC(self + 14688, 2);
    fn_802704BC(self + 14188, 2);
    fn_802704BC(self + 13688, 2);
    fn_802704BC(self + 13188, 2);
    fn_802704BC(self + 12688, 2);
    fn_802704BC(self + 12188, 2);
    fn_802704BC(self + 11688, 2);
    fn_802704BC(self + 11188, 2);
    fn_802704BC(self + 10688, 2);
    fn_802704BC(self + 10188, 2);
    fn_802704BC(self + 9688, 2);
    fn_802704BC(self + 9188, 2);
    fn_802704BC(self + 8688, 2);
    fn_802704BC(self + 8188, 2);
    fn_802704BC(self + 7688, 2);
    fn_802704BC(self + 7188, 2);
    Sphere__DestroyCore(self + 6772, 2);
    Sphere__DestroyCore(self + 6356, 2);
    Sphere__DestroyCore(self + 5940, 2);
    Sphere__DestroyCore(self + 5524, 2);
    Sphere__DestroyCore(self + 5108, 2);
    Sphere__DestroyCore(self + 4692, 2);
    Sphere__DestroyCore(self + 4276, 2);
    Sphere__DestroyCore(self + 3860, 2);
    Sphere__DestroyCore(self + 3444, 2);
    Sphere__DestroyCore(self + 3028, 2);
    Sphere__DestroyCore(self + 0xA34, 2);
    if (self + 0x6F4 != 0) {
        p = self + 0xA34;
        if (self + 0x6F4 != p) {
            do {
                p -= 0x1A0;
                vt = *(VT **)(p + 0x19C);
                vt->fn(p + vt->adj, 0);
            } while (self + 0x6F4 != p);
        }
    }
    MainMenu__DestroySelectionListState(self + 0x1A0, 2);
    Sphere__DestroyCore(self, arg1);
}
