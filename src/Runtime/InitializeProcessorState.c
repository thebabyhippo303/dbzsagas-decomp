/* Runtime__InitializeProcessorState @ 0x80003468 (size: 0x24, .init, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


M2C_UNK __OSCacheInit();                            /* extern */
M2C_UNK __OSFPRInit();                              /* extern */
M2C_UNK __OSPSInit();                               /* extern */

void Runtime__InitializeProcessorState(void) {
    M2C_ERROR(/* unknown instruction: mfmsr $r0 */);
    M2C_ERROR(/* unknown instruction: mtmsr $r0 */);
    __OSPSInit();
    __OSFPRInit();
    __OSCacheInit();
}
