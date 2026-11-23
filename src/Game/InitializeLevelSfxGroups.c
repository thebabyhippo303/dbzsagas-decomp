/* Game__InitializeLevelSfxGroups @ 0x800221FC (size: 0x9C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct { char pad[4]; int mode; } MissionInner;
typedef struct { char pad[0x238]; MissionInner *inner; } GameCfg;
extern char lbl_8035E640[];
extern char lbl_80310370[];
extern char lbl_803104D4[];
extern int lbl_803DCC20;
extern char *strcpy(char *dst, const char *src);
extern int String__CompareIgnoreCase(const char *a, const char *b);
extern int sprintf(char *dst, const char *fmt, ...);
extern int Sound__InitSfx3DAndEnv(char *name, int a, int b);
extern void Audio__PushLevelScope(int db, void *arg);
int Game__InitializeLevelSfxGroups(GameCfg *self) {
    char formatted[128];
    char levelName[128];
    int index;
    index = self->inner->mode;
    strcpy(levelName, *(char **)(lbl_8035E640 + (index << 5)));
    if (String__CompareIgnoreCase(levelName, lbl_80310370) != 0) {
        sprintf(formatted, lbl_803104D4, levelName);
    }
    Sound__InitSfx3DAndEnv(formatted, 25, 16);
    Audio__PushLevelScope(lbl_803DCC20, (char *)self + 7492);
    return 1;
}
