/* Game__SwitchLoopMode @ 0x800074C0 (size: 0x290, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Engine__ResetSystems(void);
void * Mem__New(u32);
void * MenuLoop__Construct(void *, s32, s32);
void * FluffLoop__Construct(void *, s32, s32);
void * FmvQueue__Construct(void *);
void Font__LoadDefault(void *);
void FmvQueue__Destroy(void *, s32);
void Font__UnloadDefault(void);
void Font__UnloadLevel(void);
void Game__InitializeNewGameState(void *, s32);
void SaveGame__SelectLevelRecord(void *, s32);
s32 PersistentData__SetGlobalImpl(void *, void *, s32);
M2C_UNK SimLoop__Construct(s32, s32, s32);
extern char lbl_803084D4[];
extern char lbl_80308524[];
extern char lbl_803946C4[];
extern char lbl_803946C8[];
extern void *lbl_803DC368;
extern void *lbl_803DC3C0;

void Game__SwitchLoopMode(void *arg0, s32 arg1) {
    s32 temp_r0;
    void **temp_r0_2;
    void **temp_r11;
    void *temp_r30;
    void *temp_r30_2;
    void **temp_r3;
    void **var_r3;
    void *temp_r9;

    temp_r11 = M2C_FIELD(arg0, void ***, 0xE4);
    if (temp_r11 != NULL) {
        temp_r9 = *temp_r11;
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK), 0xC)((char *)temp_r11 + M2C_FIELD(temp_r9, s16 *, 8), 3);
    }
    M2C_FIELD(arg0, void ***, 0xE4) = NULL;
    Engine__ResetSystems();
    switch (arg1) {                                 /* switch 1; irregular */
    case 1:                                         /* switch 1 */
        var_r3 = MenuLoop__Construct(Mem__New(0xBDCU), (s32) arg0, (s32) (arg0 + 0xE8));
        goto store;
    case 2:                                         /* switch 1 */
        var_r3 = FluffLoop__Construct(Mem__New(0x49164U), (s32) arg0, (s32) (arg0 + 0xE8));
        goto store;
    case 4:                                         /* switch 1 */
        arg1 = (s32)(arg0 + 0xE8);
        temp_r30 = (void *)arg1;
        temp_r30_2 = FmvQueue__Construct(Mem__New(0x18U));
        Font__LoadDefault(lbl_803084D4);
        if (temp_r30_2 != NULL) {
            FmvQueue__Destroy(temp_r30_2, 3);
        }
        Font__UnloadDefault();
        Font__UnloadLevel();
        temp_r0 = M2C_FIELD(temp_r30, s32 *, 0x20);
        switch (temp_r0) {                          /* switch 2; irregular */
        case 3:                                     /* switch 2 */
            M2C_FIELD(arg0, void ***, 0xE4) = SimLoop__Construct(Mem__New(0x2170U), (s32) arg0, (s32) temp_r30);
            M2C_FIELD(M2C_FIELD(lbl_803DC3C0, void **, 0x238), s32 *, 0x1C) = 1;
            M2C_FIELD(lbl_803946C4, s32 *, 4) = 0;
            break;
        case 2:                                     /* switch 2 */
            temp_r3 = SimLoop__Construct(Mem__New(0x2170U), (s32) arg0, (s32) temp_r30);
            M2C_FIELD(arg0, void ***, 0xE4) = temp_r3;
            Game__InitializeNewGameState(temp_r3, 0);
            break;
        case 5:                                     /* switch 2 */
            M2C_FIELD(arg0, void ***, 0xE4) = SimLoop__Construct(Mem__New(0x2170U), (s32) arg0, (s32) temp_r30);
            SaveGame__SelectLevelRecord(M2C_FIELD(lbl_803DC368, void **, 0x5388), 1);
            M2C_FIELD(lbl_803946C8, s32 *, 0) = 1;
            PersistentData__SetGlobalImpl(lbl_803DC368 + 0x12C, lbl_80308524, 1);
            break;
        case 6:                                     /* switch 2 */
            M2C_FIELD(arg0, void ***, 0xE4) = SimLoop__Construct(Mem__New(0x2170U), (s32) arg0, (s32) temp_r30);
            SaveGame__SelectLevelRecord(M2C_FIELD(lbl_803DC368, void **, 0x5388), 1);
block_29:
            M2C_FIELD(lbl_803946C8, s32 *, 0) = 1;
            break;
        case 4:                                      /* switch 2 */
        default:                                    /* switch 2 */
            M2C_FIELD(arg0, void ***, 0xE4) = SimLoop__Construct(Mem__New(0x2170U), (s32) arg0, (s32) temp_r30);
            break;
        case 8:                                     /* switch 2 */
            M2C_FIELD(arg0, void ***, 0xE4) = SimLoop__Construct(Mem__New(0x2170U), (s32) arg0, (s32) temp_r30);
            goto block_29;
        }
        M2C_FIELD(temp_r30, s32 *, 0x20) = 0;
        break;
    case 3:                                         /* switch 1 */
        var_r3 = SimLoop__Construct(Mem__New(0x2170U), (s32) arg0, (s32) (arg0 + 0xE8));
store:
        M2C_FIELD(arg0, void ***, 0xE4) = var_r3;
        break;
    }
    temp_r0_2 = M2C_FIELD(arg0, void ***, 0xE4);
    if (temp_r0_2 != NULL) {
        M2C_FIELD(arg0, void ***, 4) = temp_r0_2;
    }
}
