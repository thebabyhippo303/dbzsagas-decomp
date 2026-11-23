/* EnableMetroTRKInterrupts @ 0x8015AC78 (size: 0x64, .text, MWCC GC/1.x (FileServer/MetroTRK)) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void FileServer__InstallDmaInterruptHandler(void);
void FileServer__InstallDsiExceptionHandler(void);
M2C_UNK OSReport(s32, s32, s32, s32, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32);
void EnableMetroTRKInterrupts(void) {
    s32 temp_ret;

    M2C_FIELD((void *)0x80395D80, s32 *, 0x6BC) = 0;
    temp_ret = M2C_FIELD((void *)0x80395D80, s32 (**)(M2C_UNK), 0x698)(0);
    OSReport(0x8036F988, temp_ret, M2C_ERROR(/* Read from unset register $r5 */), M2C_ERROR(/* Read from unset register $r6 */), M2C_ERROR(/* Read from unset register $r7 */), M2C_ERROR(/* Read from unset register $r8 */), M2C_ERROR(/* Read from unset register $r9 */), M2C_ERROR(/* Read from unset register $r10 */), M2C_BITWISE(f32, temp_ret), M2C_ERROR(/* Read from unset register $f2 */), M2C_ERROR(/* Read from unset register $f3 */), M2C_ERROR(/* Read from unset register $f4 */), M2C_ERROR(/* Read from unset register $f5 */), M2C_ERROR(/* Read from unset register $f6 */), M2C_ERROR(/* Read from unset register $f7 */), M2C_ERROR(/* Read from unset register $f8 */));
    if ((s32) M2C_FIELD((void *)0x80395D80, s32 *, 0x6CC) == 4) {
        FileServer__InstallDmaInterruptHandler();
        FileServer__InstallDsiExceptionHandler();
    }
}

