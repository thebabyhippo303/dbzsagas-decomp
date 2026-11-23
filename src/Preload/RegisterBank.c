/* Preload__RegisterBank @ 0x8012E604 (size: 0x168, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

int String__CompareIgnoreCase(const char *, const char *);
void *Mem__NewArray(int);
void Mem__DeleteArray(void *);
void *memcpy(void *, const void *, unsigned int);
char *strcpy(char *, const char *);
int strlen(const char *);
void Debug__FormatMessage(const char *, ...);
extern const char lbl_8032A82C[] __attribute__((section(".data")));
extern void *lbl_803DC3A0;
extern s32 lbl_803DD158;
typedef struct { s32 id; char *name; } BankSlot;
extern BankSlot *lbl_803DD15C;

void Preload__RegisterBank(s8 *arg0) {
    s32 temp_r30;
    s32 temp_r9;
    s32 var_r0;
    s32 var_r10;
    s32 var_r28;
    s32 var_r29;
    s32 var_r31;
    BankSlot *temp_r3;

    if (arg0 == NULL) {
        var_r0 = 0;
    } else {
        var_r28 = 0;
        for (var_r31 = 0, var_r29 = 0; var_r31 < (s32) lbl_803DD158; var_r31++, var_r29 = temp_r30 + 8) {
            temp_r30 = var_r29;
            if (String__CompareIgnoreCase(arg0, M2C_FIELD((char *)lbl_803DD15C + var_r29, char **, 4)) == 0) {
                var_r28 = M2C_FIELD((char *)lbl_803DD15C + var_r29, s32 *, 0);
                break;
            }
        }
        var_r0 = var_r28;
    }
    if (var_r0 == 0) {
        var_r10 = 0;
        temp_r9 = M2C_FIELD(M2C_FIELD(lbl_803DC3A0, void **, 0x238), s32 *, 4);
        if (((u32) (temp_r9 - 0x1F) <= 1U) || (temp_r9 == 0x1C) || (temp_r9 == 0x1E) || (temp_r9 == 0x1D)) {
            var_r10 = 1;
        }
        if (var_r10 == 0) {
            var_r29 = 1;
            Debug__FormatMessage(lbl_8032A82C, arg0);
            temp_r3 = Mem__NewArray((lbl_803DD158 + 1) * 8);
            memcpy(temp_r3, lbl_803DD15C, lbl_803DD158 * 8);
            temp_r30 = lbl_803DD158 * 8;
            M2C_FIELD(temp_r3, s32 *, temp_r30) = var_r29;
            M2C_FIELD((char *)temp_r3 + temp_r30, void **, 4) = Mem__NewArray(strlen(arg0) + 1);
            strcpy(M2C_FIELD((char *)temp_r3 + lbl_803DD158 * 8, char **, 4), arg0);
            if (lbl_803DD15C != NULL) {
                Mem__DeleteArray(lbl_803DD15C);
            }
            lbl_803DD15C = temp_r3;
            lbl_803DD158 += 1;
        }
    }
}
