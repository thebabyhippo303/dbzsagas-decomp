/* Game__PreloadSharedAssets @ 0x80007A14 (size: 0x200, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Database__FinalizeRegistration(void);
void Game__PreloadCharacterMdb(void *, s8 *);
void Game__PreloadCharacterSdb(void *, s8 *);
void * Game__PreloadDblResource(void *, s8 *);
void Game__PreloadTableResource(void *, const char *, void *, int);
s32 Sound__InitSfx2D(void *, s32);
void Database__SetPersistent(void *, s32);
u32 LoadContext__SetBasePath(void *, char *);
void *Asset__LoadDatabaseFile(s32, M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
void TexBind__OnSharedAssetsPreloaded(void);
extern s8 lbl_8030853C __attribute__((section(".data")));
extern M2C_UNK lbl_8030857C __attribute__((section(".data")));
extern M2C_UNK lbl_80308584 __attribute__((section(".data")));
extern M2C_UNK lbl_8030858C __attribute__((section(".data")));
extern s8 lbl_80308594 __attribute__((section(".data")));
extern s8 lbl_803085AC __attribute__((section(".data")));
extern s8 lbl_803085C4 __attribute__((section(".data")));
extern s8 lbl_803085DC __attribute__((section(".data")));
extern s8 lbl_803085F4 __attribute__((section(".data")));
extern s8 lbl_8030860C __attribute__((section(".data")));
extern s8 lbl_80308624 __attribute__((section(".data")));
extern s8 lbl_80308638 __attribute__((section(".data")));
extern s8 lbl_8030864C __attribute__((section(".data")));
extern s8 lbl_80308660 __attribute__((section(".data")));
extern s8 lbl_80308674 __attribute__((section(".data")));
extern s8 lbl_8030868C __attribute__((section(".data")));
extern s8 lbl_803086A0 __attribute__((section(".data")));
extern s8 lbl_803086B4 __attribute__((section(".data")));
extern s8 lbl_803086C8 __attribute__((section(".data")));
extern s8 lbl_803086DC __attribute__((section(".data")));
extern s8 lbl_803086F4 __attribute__((section(".data")));
extern s8 lbl_8030870C __attribute__((section(".data")));
extern s8 lbl_80308720 __attribute__((section(".data")));
extern s8 *lbl_803B1E84 __attribute__((section(".data")));
extern void *lbl_803DCDF4;

void Game__PreloadSharedAssets(void *arg0) {
    void *temp_r3;

    M2C_FIELD(lbl_803DCDF4, s32 *, 0x34) = 1;
    temp_r3 = Asset__LoadDatabaseFile(arg0 + 0x5384, &lbl_8030857C, &lbl_80308584, 1);
    if (NULL != temp_r3) {
        Database__SetPersistent(temp_r3, 1);
    }
    LoadContext__SetBasePath(&lbl_803B1E84, &lbl_8030853C);
    Sound__InitSfx2D(&lbl_8030858C, 4);
    Game__PreloadDblResource(arg0, &lbl_80308594);
    Game__PreloadCharacterMdb(arg0, &lbl_803085AC);
    Game__PreloadCharacterSdb(arg0, &lbl_803085C4);
    Game__PreloadCharacterSdb(arg0, &lbl_803085DC);
    Game__PreloadCharacterSdb(arg0, &lbl_803085F4);
    Game__PreloadDblResource(arg0, &lbl_8030860C);
    Game__PreloadDblResource(arg0, &lbl_80308624);
    Game__PreloadDblResource(arg0, &lbl_80308638);
    Game__PreloadDblResource(arg0, &lbl_8030864C);
    Game__PreloadDblResource(arg0, &lbl_80308660);
    Game__PreloadDblResource(arg0, &lbl_80308674);
    Game__PreloadDblResource(arg0, &lbl_8030868C);
    Game__PreloadTableResource(arg0, &lbl_803086A0, NULL, 0);
    Game__PreloadTableResource(arg0, &lbl_803086B4, NULL, 0);
    Game__PreloadTableResource(arg0, &lbl_803086C8, NULL, 0);
    Game__PreloadTableResource(arg0, &lbl_803086DC, NULL, 0);
    Game__PreloadTableResource(arg0, &lbl_803086F4, NULL, 0);
    Game__PreloadTableResource(arg0, &lbl_8030870C, NULL, 0);
    Game__PreloadTableResource(arg0, &lbl_80308720, NULL, 0);
    TexBind__OnSharedAssetsPreloaded();
    Database__FinalizeRegistration();
    M2C_FIELD(lbl_803DCDF4, s32 *, 0x34) = 0;
}
