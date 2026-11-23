/* PersistentData__CheckThresholdTriggers @ 0x80126804 (size: 0x11C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
typedef unsigned char u8;
typedef struct Ent {
    char *name;
    s32 a;
    char pad8;
    u8 f9;
    char padA[14];
    s32 b;
    char padC[8];
    char *voice;
} Ent;
typedef struct Arg { char pad[0x38]; s32 v38; s32 v3C; } Arg;
extern Ent lbl_8036CD80[] __attribute__((section(".data")));
extern char lbl_80327628[] __attribute__((section(".data")));
extern char lbl_8032764C[] __attribute__((section(".data")));
extern void *lbl_803DC3C0;
int String__CompareIgnoreCase(const char *, const char *);
int strcmp(const char *, const char *);
s32 PersistentData__TallyDataByNameImpl(void *, char *);
s32 Sound__PlayVoiceOverImpl(void *, char *, s32);

void PersistentData__CheckThresholdTriggers(void *arg0, Arg *arg1) {
    s32 i;
    s32 r;

    i = 0;
    if (arg1 != 0) {
        String__CompareIgnoreCase((char *)arg1, lbl_8032764C);
        while (strcmp(lbl_8036CD80[i].name, lbl_80327628) != 0) {
            if (String__CompareIgnoreCase(lbl_8036CD80[i].name, (char *)arg1) == 0) {
                if (lbl_8036CD80[i].a == -1) {
                    if (PersistentData__TallyDataByNameImpl(arg0, (char *)arg1) == lbl_8036CD80[i].b) {
                        Sound__PlayVoiceOverImpl(lbl_803DC3C0, lbl_8036CD80[i].voice, 2);
                        return;
                    }
                } else {
                    r = arg1->v38;
                    if (lbl_8036CD80[i].a == r || (r == -1 && (u8)(lbl_8036CD80[i].f9 - 1) <= 1)) {
                        if (arg1->v3C == lbl_8036CD80[i].b) {
                            if (lbl_8036CD80[i].voice != 0) {
                                Sound__PlayVoiceOverImpl(lbl_803DC3C0, lbl_8036CD80[i].voice, 2);
                            }
                        }
                        return;
                    }
                }
            }
            i++;
        }
    }
}
