/* Game__PreloadLevelAssets @ 0x80022924 (size: 0x718, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void * Preload__LoadDblAsset(char *);
s32 Preload__InvokeCacheCallbackById(s32);
s32 Preload__CacheDendeAssetsAndScripts(void);
s32 Preload__CacheAirship1Scripts(void);
s32 Preload__CachePrototype5AssetsAndScripts(void);
extern s8 lbl_8031051C __attribute__((section(".data")));
extern s8 lbl_80310534 __attribute__((section(".data")));
extern s8 lbl_80310548 __attribute__((section(".data")));
extern s8 lbl_80310560 __attribute__((section(".data")));
extern s8 lbl_80310578 __attribute__((section(".data")));
extern s8 lbl_80310590 __attribute__((section(".data")));
extern s8 lbl_803105A8 __attribute__((section(".data")));
extern s8 lbl_803105C4 __attribute__((section(".data")));
extern s8 lbl_803105E0 __attribute__((section(".data")));
extern s8 lbl_803105F4 __attribute__((section(".data")));
extern s8 lbl_80310608 __attribute__((section(".data")));
extern s8 lbl_80310620 __attribute__((section(".data")));
extern s8 lbl_8031063C __attribute__((section(".data")));
extern s8 lbl_80310654 __attribute__((section(".data")));
extern s8 lbl_8031066C;

void Game__PreloadLevelAssets(void *arg0) {
    s32 var_r3;
    s32 var_r3_2;
    s32 var_r3_3;
    s32 var_r3_4;
    u32 var_r31;

    Preload__LoadDblAsset(&lbl_8031051C);
    Preload__LoadDblAsset(&lbl_80310534);
    if ((u32) (M2C_FIELD(M2C_FIELD(arg0, void **, 0x238), s32 *, 4) - 2) <= 0x13U) {
        Preload__LoadDblAsset(&lbl_80310548);
        Preload__LoadDblAsset(&lbl_80310560);
    }
    switch ((M2C_FIELD(M2C_FIELD(arg0, void **, 0x238), s32 *, 4))) {                              /* irregular */
    case 2:
        Preload__InvokeCacheCallbackById(0x1A);
        Preload__InvokeCacheCallbackById(0x2B);
        var_r3 = 0x36;
block_45:
        Preload__InvokeCacheCallbackById(var_r3);
        Preload__LoadDblAsset(&lbl_80310578);
        break;
    case 3:
        Preload__InvokeCacheCallbackById(0x1C);
        Preload__InvokeCacheCallbackById(0x2A);
        Preload__InvokeCacheCallbackById(0x2B);
        Preload__InvokeCacheCallbackById(0x2C);
        var_r3 = 0x2D;
        goto block_45;
    case 4:
        Preload__InvokeCacheCallbackById(5);
        break;
    case 5:
        Preload__InvokeCacheCallbackById(0x2E);
        Preload__InvokeCacheCallbackById(0x2F);
        Preload__InvokeCacheCallbackById(0x30);
        Preload__InvokeCacheCallbackById(0x1E);
        Preload__LoadDblAsset(&lbl_80310590);
block_54:
        Preload__LoadDblAsset(&lbl_803105A8);
        break;
    case 6:
        Preload__InvokeCacheCallbackById(0x2E);
        Preload__InvokeCacheCallbackById(0x2F);
        Preload__InvokeCacheCallbackById(0x31);
        Preload__InvokeCacheCallbackById(0x21);
        Preload__InvokeCacheCallbackById(0x1B);
        Preload__InvokeCacheCallbackById(0x1D);
        break;
    case 7:
        Preload__InvokeCacheCallbackById(3);
        Preload__InvokeCacheCallbackById(0x1B);
        break;
    case 8:
        Preload__InvokeCacheCallbackById(0x2E);
        Preload__InvokeCacheCallbackById(0x2F);
        Preload__InvokeCacheCallbackById(0x30);
        Preload__CacheDendeAssetsAndScripts();
        Preload__CacheAirship1Scripts();
        Preload__InvokeCacheCallbackById(0x11);
        var_r3_2 = 0x12;
block_53:
        Preload__InvokeCacheCallbackById(var_r3_2);
        goto block_54;
    case 9:
        Preload__InvokeCacheCallbackById(0x2E);
        Preload__InvokeCacheCallbackById(0x2F);
        Preload__InvokeCacheCallbackById(0x30);
        Preload__InvokeCacheCallbackById(0x31);
        Preload__CacheAirship1Scripts();
        Preload__InvokeCacheCallbackById(0x12);
        break;
    case 10:
        var_r3_2 = 0x13;
        goto block_53;
    case 11:
        Preload__InvokeCacheCallbackById(0x37);
        Preload__InvokeCacheCallbackById(0x24);
        break;
    case 12:
        Preload__InvokeCacheCallbackById(0x32);
        Preload__InvokeCacheCallbackById(0x33);
block_58:
        Preload__InvokeCacheCallbackById(0x25);
        Preload__InvokeCacheCallbackById(0x26);
        break;
    case 13:
        Preload__InvokeCacheCallbackById(0x32);
        Preload__InvokeCacheCallbackById(0x33);
        Preload__InvokeCacheCallbackById(0x34);
        Preload__CachePrototype5AssetsAndScripts();
        goto block_58;
    case 14:
        Preload__InvokeCacheCallbackById(0x32);
        Preload__InvokeCacheCallbackById(0x33);
        Preload__InvokeCacheCallbackById(0x34);
        Preload__CachePrototype5AssetsAndScripts();
        Preload__InvokeCacheCallbackById(0x27);
        Preload__InvokeCacheCallbackById(0x28);
        break;
    case 15:
        Preload__InvokeCacheCallbackById(0x32);
        Preload__InvokeCacheCallbackById(0x33);
        Preload__CachePrototype5AssetsAndScripts();
        Preload__InvokeCacheCallbackById(0x26);
        Preload__InvokeCacheCallbackById(0x27);
        Preload__InvokeCacheCallbackById(0x28);
        Preload__InvokeCacheCallbackById(2);
        Preload__LoadDblAsset(&lbl_803105C4);
        break;
    case 16:
        Preload__InvokeCacheCallbackById(0x25);
        break;
    case 17:
        Preload__LoadDblAsset(&lbl_803105E0);
block_79:
        Preload__InvokeCacheCallbackById(7);
        break;
    case 18:
        Preload__InvokeCacheCallbackById(0x2A);
        Preload__InvokeCacheCallbackById(0x2B);
        Preload__InvokeCacheCallbackById(0x2C);
        Preload__InvokeCacheCallbackById(0x2D);
        var_r3_3 = 0x1F;
block_66:
        Preload__InvokeCacheCallbackById(var_r3_3);
    case 21:
        Preload__InvokeCacheCallbackById(0x20);
        break;
    case 19:
        Preload__InvokeCacheCallbackById(4);
        break;
    case 20:
        var_r3_3 = 0x29;
        goto block_66;
    case 0:
        Preload__InvokeCacheCallbackById(0);
        break;
    case 1:
        Preload__InvokeCacheCallbackById(0x35);
        Preload__LoadDblAsset(&lbl_803105F4);
        Preload__LoadDblAsset(&lbl_80310608);
        Preload__LoadDblAsset(&lbl_80310620);
        Preload__LoadDblAsset(&lbl_8031063C);
        Preload__LoadDblAsset(&lbl_80310654);
        Preload__LoadDblAsset(&lbl_80310560);
        Preload__LoadDblAsset(&lbl_80310578);
        Preload__LoadDblAsset(&lbl_80310548);
        break;
    case 23:
        Preload__InvokeCacheCallbackById(0x27);
        Preload__InvokeCacheCallbackById(0x28);
        Preload__InvokeCacheCallbackById(0x1D);
        Preload__InvokeCacheCallbackById(0x11);
        Preload__InvokeCacheCallbackById(0x12);
        Preload__InvokeCacheCallbackById(0x13);
        Preload__InvokeCacheCallbackById(0x1B);
        Preload__InvokeCacheCallbackById(0x1C);
        Preload__InvokeCacheCallbackById(0x1A);
        var_r3_4 = 0x1E;
block_72:
        Preload__InvokeCacheCallbackById(var_r3_4);
        Preload__InvokeCacheCallbackById(0x2A);
        Preload__InvokeCacheCallbackById(0x2B);
        Preload__InvokeCacheCallbackById(0x2C);
        Preload__InvokeCacheCallbackById(0x2D);
        break;
    case 26:
        Preload__InvokeCacheCallbackById(0x2E);
        var_r3_4 = 0x2F;
        goto block_72;
    case 27:
        Preload__InvokeCacheCallbackById(0x2E);
        Preload__LoadDblAsset(&lbl_8031066C);
        Preload__InvokeCacheCallbackById(0x1C);
        var_r3_2 = 5;
block_75:
        Preload__InvokeCacheCallbackById(var_r3_2);
        Preload__InvokeCacheCallbackById(0x1A);
        Preload__InvokeCacheCallbackById(0x1E);
        Preload__InvokeCacheCallbackById(0x24);
        break;
    case 28:
        Preload__InvokeCacheCallbackById(0x25);
        Preload__InvokeCacheCallbackById(0x26);
        Preload__InvokeCacheCallbackById(0x27);
        Preload__InvokeCacheCallbackById(0x28);
        Preload__InvokeCacheCallbackById(0x21);
        Preload__InvokeCacheCallbackById(0x1D);
        Preload__InvokeCacheCallbackById(0x29);
        Preload__InvokeCacheCallbackById(0x1F);
        Preload__InvokeCacheCallbackById(0x20);
        Preload__InvokeCacheCallbackById(0x11);
        Preload__InvokeCacheCallbackById(0x12);
        Preload__InvokeCacheCallbackById(0x13);
        Preload__InvokeCacheCallbackById(0x1B);
        var_r3_2 = 0x1C;
        goto block_75;
    case 29:
        Preload__InvokeCacheCallbackById(0x2E);
        Preload__InvokeCacheCallbackById(0x2F);
        Preload__InvokeCacheCallbackById(0x30);
        Preload__InvokeCacheCallbackById(0x31);
        Preload__InvokeCacheCallbackById(0x32);
        Preload__InvokeCacheCallbackById(0x33);
        Preload__InvokeCacheCallbackById(0x2A);
        Preload__InvokeCacheCallbackById(0x2B);
        Preload__InvokeCacheCallbackById(0x2C);
        Preload__InvokeCacheCallbackById(0x2D);
        Preload__CachePrototype5AssetsAndScripts();
        break;
    case 30:
        Preload__InvokeCacheCallbackById(0x38);
        Preload__InvokeCacheCallbackById(0x39);
        Preload__InvokeCacheCallbackById(0x3A);
        Preload__InvokeCacheCallbackById(0x3B);
        break;
    case 31:
        Preload__InvokeCacheCallbackById(0x23);
        Preload__InvokeCacheCallbackById(0x22);
        Preload__InvokeCacheCallbackById(0);
        Preload__InvokeCacheCallbackById(1);
        Preload__InvokeCacheCallbackById(2);
        Preload__InvokeCacheCallbackById(3);
        Preload__InvokeCacheCallbackById(4);
        Preload__InvokeCacheCallbackById(0x3E);
        Preload__InvokeCacheCallbackById(0xF);
        Preload__InvokeCacheCallbackById(5);
        Preload__InvokeCacheCallbackById(0x10);
        Preload__InvokeCacheCallbackById(6);
        goto block_79;
    case 32:
        Preload__InvokeCacheCallbackById(8);
        Preload__InvokeCacheCallbackById(9);
        Preload__InvokeCacheCallbackById(0xA);
        Preload__InvokeCacheCallbackById(0xB);
        Preload__InvokeCacheCallbackById(0xC);
        Preload__InvokeCacheCallbackById(0xD);
        Preload__InvokeCacheCallbackById(0xE);
        Preload__InvokeCacheCallbackById(0x14);
        Preload__InvokeCacheCallbackById(0x15);
        Preload__InvokeCacheCallbackById(0x16);
        Preload__InvokeCacheCallbackById(0x17);
        Preload__InvokeCacheCallbackById(0x18);
        Preload__InvokeCacheCallbackById(0x19);
        break;
    }
    var_r31 = 0U;
    if ((u32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x238), u32 *, 0x10) <= 0U) {
        return;
    }
    var_r3_2 = 0;
    while (var_r31 < (u32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x238), u32 *, 0x10)) {
        var_r31 += 1;
        var_r3_2 += 4;
        Preload__InvokeCacheCallbackById((*(s32 *)(M2C_FIELD(arg0, void **, 0x238) + 8 + var_r3_2)));
    }
}
