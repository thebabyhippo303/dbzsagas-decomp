/* FluffLoop__DispatchMemoryCardResult @ 0x80051DF4 (size: 0x2C8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Game__RequestLevelTransition(void *, s32, s32);
s32 fn_802676D4(void *);
extern void *lbl_803DC368;
extern void *lbl_803DC3C0;
extern s32 lbl_803DC404;

void FluffLoop__DispatchMemoryCardResult(s32 arg0, s32 arg1) {
    M2C_UNK (*var_r0)(void *);
    M2C_UNK (*var_r0_2)(void *);
    char *p_418;
    char *p_100;
    s16 var_r3;
    void *temp_r9;
    void *temp_r9_2;

    if (arg1 != NULL) {
        switch (arg0) {                             /* switch 1; irregular */
        case 0x128:                                 /* switch 1 */
            p_100 = (char *)lbl_803DC368 + 0x100;
            M2C_FIELD(p_100, s32 *, 0x8) = 2;
block_32:
            Game__RequestLevelTransition(lbl_803DC3C0, -1, 0);
            break;
        case 0x151:                                 /* switch 1 */
            lbl_803DC404 = 1;
            M2C_FIELD(p_100, s32 *, 0x8) = 2;
            goto block_32;
        case 0x208:                                 /* switch 1 */
            temp_r9 = M2C_FIELD(arg1, void **, 0x19C);
            var_r0 = M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x46C);
            var_r3 = M2C_FIELD(temp_r9, s16 *, 0x468);
block_48:
            var_r0(var_r3 + arg1);
            break;
        case 0x209:                                 /* switch 1 */
            temp_r9_2 = M2C_FIELD(arg1, void **, 0x19C);
            var_r0 = M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *), 0x474);
            var_r3 = M2C_FIELD(temp_r9_2, s16 *, 0x470);
            goto block_48;
        case 0x215:                                 /* switch 1 */
            temp_r9_2 = M2C_FIELD(arg1, void **, 0x19C);
            var_r3 = M2C_FIELD(temp_r9_2, s16 *, 0x478);
            var_r0 = M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *), 0x47C);
            goto block_48;
        case 0x216:                                 /* switch 1 */
            temp_r9_2 = M2C_FIELD(arg1, void **, 0x19C);
            var_r0 = M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *), 0x484);
            var_r3 = M2C_FIELD(temp_r9_2, s16 *, 0x480);
            goto block_48;
        case 0x217:                                 /* switch 1 */
            temp_r9_2 = M2C_FIELD(arg1, void **, 0x19C);
            var_r0 = M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *), 0x48C);
            var_r3 = M2C_FIELD(temp_r9_2, s16 *, 0x488);
            goto block_48;
        case 0x214:                                 /* switch 1 */
            temp_r9_2 = M2C_FIELD(arg1, void **, 0x19C);
            p_418 = (char *)temp_r9_2 + 0x418;
            var_r3 = M2C_FIELD(p_418, s16 *, 0x38);
            var_r0 = M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *), 0x454);
            goto block_48;
        case 0x206:                                 /* switch 1 */
            temp_r9_2 = M2C_FIELD(arg1, void **, 0x19C);
            var_r0 = M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *), 0x45C);
            var_r3 = M2C_FIELD(temp_r9_2, s16 *, 0x458);
            goto block_48;
        case 0x207:                                 /* switch 1 */
            temp_r9_2 = M2C_FIELD(arg1, void **, 0x19C);
            var_r0 = M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *), 0x464);
            var_r3 = M2C_FIELD(temp_r9_2, s16 *, 0x460);
            goto block_48;
        case 0x80000002:                            /* switch 1 */
            temp_r9_2 = M2C_FIELD(arg1, void **, 0x19C);
            var_r3 = M2C_FIELD(p_418, s16 *, 0x0);
            var_r0 = M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *), 0x41C);
            goto block_48;
        case 0x100:                                 /* switch 1 */
            temp_r9 = M2C_FIELD(arg1, void **, 0x19C);
            var_r0 = M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x424);
            p_418 = (char *)temp_r9 + 0x420;
            var_r3 = M2C_FIELD(p_418, s16 *, 0x0);
            goto block_48;
        case 0x201:                                 /* switch 1 */
            temp_r9 = M2C_FIELD(arg1, void **, 0x19C);
            var_r3 = M2C_FIELD(p_418, s16 *, 0x8);
            var_r0 = M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x42C);
            goto block_48;
        case 0x202:                                 /* switch 1 */
            temp_r9 = M2C_FIELD(arg1, void **, 0x19C);
            var_r3 = M2C_FIELD(p_418, s16 *, 0x10);
            var_r0 = M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x434);
            goto block_48;
        case 0x203:                                 /* switch 1 */
            temp_r9 = M2C_FIELD(arg1, void **, 0x19C);
            var_r3 = M2C_FIELD(p_418, s16 *, 0x18);
            var_r0 = M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x43C);
            goto block_48;
        case 0x204:                                 /* switch 1 */
            temp_r9 = M2C_FIELD(arg1, void **, 0x19C);
            var_r3 = M2C_FIELD(p_418, s16 *, 0x20);
            var_r0 = M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x444);
            goto block_48;
        case 0x223:                                 /* switch 1 */
            temp_r9 = M2C_FIELD(arg1, void **, 0x19C);
            var_r3 = M2C_FIELD(temp_r9, s16 *, 0x4A0);
            var_r0 = M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x4A4);
            goto block_48;
        case 0x205:                                 /* switch 1 */
            temp_r9 = M2C_FIELD(arg1, void **, 0x19C);
            M2C_FIELD(temp_r9, M2C_UNK (**)(void *, void *), 0x44C)(arg1 + M2C_FIELD(p_418, s16 *, 0x28), temp_r9);
            break;
        }
        if (0 != fn_802676D4(arg1 + 0x18834)) {
            switch (arg0) {                         /* switch 2; irregular */
            case 0x80000002:                        /* switch 2 */
                temp_r9 = M2C_FIELD(arg1, void **, 0x19C);
                var_r3 = M2C_FIELD(temp_r9, s16 *, 0x418);
                var_r0_2 = M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x41C);
                var_r0_2(arg1 + var_r3);
                return;
            default:                                /* switch 2 */
                temp_r9 = M2C_FIELD(arg1, void **, 0x19C);
                var_r3 = M2C_FIELD(temp_r9, s16 *, 0x490);
                var_r0_2 = M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x494);
                var_r0_2(var_r3 + arg1);
                return;
            case 0x213:                             /* switch 2 */
                temp_r9 = M2C_FIELD(arg1, void **, 0x19C);
                M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x494)(arg1 + M2C_FIELD(temp_r9, s16 *, 0x490));
                break;
            }
        }
    }
}
