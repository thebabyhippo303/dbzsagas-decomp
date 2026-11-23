/* Preload__LoadCachedBanks @ 0x8012E888 (size: 0x118, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef unsigned int u32;
typedef struct Slot { s32 id; char *name; } Slot;
void Debug__FormatMessage(char *, ...);
s32 Audio__LoadBank(void *, char *);
u32 Mem__NewArray(u32);
void Mem__DeleteArray(void *);
void *memcpy(void *, const void *, u32);
char *strcpy(char *, const char *);
int strlen(const char *);
extern char lbl_8032A850[] __attribute__((section(".data")));
extern char lbl_8032A87C[] __attribute__((section(".data")));
extern void *lbl_803DCC20;
extern s32 lbl_803DD170;
extern Slot *lbl_803DD174;
extern s32 lbl_803DD178;
extern Slot *lbl_803DD17C;

void Preload__LoadCachedBanks(void) {
    s32 i;
    for (i = 0; i < lbl_803DD178; i++) {
        char *name = lbl_803DD17C[i].name;
        s32 bank;
        s32 n;
        s32 p;
        Debug__FormatMessage(lbl_8032A850, name);
        bank = Audio__LoadBank(lbl_803DCC20, name);
        if (bank) {
            Debug__FormatMessage(lbl_8032A87C, name);
            n = (s32)Mem__NewArray((lbl_803DD170 + 1) * 8);
            memcpy((void *)n, lbl_803DD174, lbl_803DD170 * 8);
            p = lbl_803DD170 << 3;
            *(s32 *)(p + n) = bank;
            p = p + n;
            ((Slot *)p)->name = (char *)Mem__NewArray(strlen(name) + 1);
            strcpy(((Slot *)(n + lbl_803DD170 * 8))->name, name);
            if (lbl_803DD174 != 0) {
                Mem__DeleteArray(lbl_803DD174);
            }
            lbl_803DD174 = (Slot *)n;
            lbl_803DD170 = lbl_803DD170 + 1;
        }
    }
}
