/* FileServer__SaveExceptionSpecialRegisters @ 0x8015BC70 (size: 0x214, .text, MWCC GC/1.x (FileServer/MetroTRK)) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


void FileServer__SaveExceptionSpecialRegisters(void) {
    M2C_FIELD(saved_reg_r31, s32 *, 0x348) = (s32) M2C_ERROR(/* unknown instruction: mfxer $r5 */);
    M2C_FIELD(saved_reg_r31, s32 *, 0x350) = (s32) M2C_ERROR(/* Read from unset register $ctr */);
    M2C_FIELD(saved_reg_r31, s32 *, 0x380) = (s32) M2C_ERROR(/* unknown instruction: mfspr $r5, 0x3f0 */);
    M2C_FIELD(saved_reg_r31, s32 *, 0x388) = (s32) M2C_ERROR(/* unknown instruction: mfspr $r5, 0x3f1 */);
    M2C_FIELD(saved_reg_r31, s32 *, 0x398) = (s32) M2C_ERROR(/* unknown instruction: mfibatu $r5, 0x0 */);
    M2C_FIELD(saved_reg_r31, s32 *, 0x3A0) = (s32) M2C_ERROR(/* unknown instruction: mfibatl $r5, 0x0 */);
    M2C_FIELD(saved_reg_r31, s32 *, 0x3A8) = (s32) M2C_ERROR(/* unknown instruction: mfibatu $r5, 0x1 */);
    M2C_FIELD(saved_reg_r31, s32 *, 0x3B0) = (s32) M2C_ERROR(/* unknown instruction: mfibatl $r5, 0x1 */);
    M2C_FIELD(saved_reg_r31, s32 *, 0x3B8) = (s32) M2C_ERROR(/* unknown instruction: mfibatu $r5, 0x2 */);
    M2C_FIELD(saved_reg_r31, s32 *, 0x3C0) = (s32) M2C_ERROR(/* unknown instruction: mfibatl $r5, 0x2 */);
    M2C_FIELD(saved_reg_r31, s32 *, 0x3C8) = (s32) M2C_ERROR(/* unknown instruction: mfibatu $r5, 0x3 */);
    M2C_FIELD(saved_reg_r31, s32 *, 0x3D0) = (s32) M2C_ERROR(/* unknown instruction: mfibatl $r5, 0x3 */);
    M2C_FIELD(saved_reg_r31, s32 *, 0x3D8) = (s32) M2C_ERROR(/* unknown instruction: mfdbatu $r5, 0x0 */);
    M2C_FIELD(saved_reg_r31, s32 *, 0x3E0) = (s32) M2C_ERROR(/* unknown instruction: mfdbatl $r5, 0x0 */);
    M2C_FIELD(saved_reg_r31, s32 *, 0x3E8) = (s32) M2C_ERROR(/* unknown instruction: mfdbatu $r5, 0x1 */);
    M2C_FIELD(saved_reg_r31, s32 *, 0x3F0) = (s32) M2C_ERROR(/* unknown instruction: mfdbatl $r5, 0x1 */);
    M2C_FIELD(saved_reg_r31, s32 *, 0x3F8) = (s32) M2C_ERROR(/* unknown instruction: mfdbatu $r5, 0x2 */);
    M2C_FIELD(saved_reg_r31, s32 *, 0x400) = (s32) M2C_ERROR(/* unknown instruction: mfdbatl $r5, 0x2 */);
    M2C_FIELD(saved_reg_r31, s32 *, 0x408) = (s32) M2C_ERROR(/* unknown instruction: mfdbatu $r5, 0x3 */);
    M2C_FIELD(saved_reg_r31, s32 *, 0x410) = (s32) M2C_ERROR(/* unknown instruction: mfdbatl $r5, 0x3 */);
    M2C_FIELD(saved_reg_r31, s32 *, 0x500) = (s32) M2C_ERROR(/* unknown instruction: mfsr $r5, 0x0 */);
    M2C_FIELD(saved_reg_r31, s32 *, 0x508) = (s32) M2C_ERROR(/* unknown instruction: mfsr $r5, 0x1 */);
    M2C_FIELD(saved_reg_r31, s32 *, 0x510) = (s32) M2C_ERROR(/* unknown instruction: mfsr $r5, 0x2 */);
    M2C_FIELD(saved_reg_r31, s32 *, 0x518) = (s32) M2C_ERROR(/* unknown instruction: mfsr $r5, 0x3 */);
    M2C_FIELD(saved_reg_r31, s32 *, 0x520) = (s32) M2C_ERROR(/* unknown instruction: mfsr $r5, 0x4 */);
    M2C_FIELD(saved_reg_r31, s32 *, 0x528) = (s32) M2C_ERROR(/* unknown instruction: mfsr $r5, 0x5 */);
    M2C_FIELD(saved_reg_r31, s32 *, 0x530) = (s32) M2C_ERROR(/* unknown instruction: mfsr $r5, 0x6 */);
    M2C_FIELD(saved_reg_r31, s32 *, 0x538) = (s32) M2C_ERROR(/* unknown instruction: mfsr $r5, 0x7 */);
    M2C_FIELD(saved_reg_r31, s32 *, 0x540) = (s32) M2C_ERROR(/* unknown instruction: mfsr $r5, 0x8 */);
    M2C_FIELD(saved_reg_r31, s32 *, 0x548) = (s32) M2C_ERROR(/* unknown instruction: mfsr $r5, 0x9 */);
    M2C_FIELD(saved_reg_r31, s32 *, 0x550) = (s32) M2C_ERROR(/* unknown instruction: mfsr $r5, 0xa */);
    M2C_FIELD(saved_reg_r31, s32 *, 0x558) = (s32) M2C_ERROR(/* unknown instruction: mfsr $r5, 0xb */);
    M2C_FIELD(saved_reg_r31, s32 *, 0x560) = (s32) M2C_ERROR(/* unknown instruction: mfsr $r5, 0xc */);
    M2C_FIELD(saved_reg_r31, s32 *, 0x568) = (s32) M2C_ERROR(/* unknown instruction: mfsr $r5, 0xd */);
    M2C_FIELD(saved_reg_r31, s32 *, 0x570) = (s32) M2C_ERROR(/* unknown instruction: mfsr $r5, 0xe */);
    M2C_FIELD(saved_reg_r31, s32 *, 0x578) = (s32) M2C_ERROR(/* unknown instruction: mfsr $r5, 0xf */);
    M2C_FIELD(saved_reg_r31, s32 *, 0x418) = (s32) M2C_ERROR(/* unknown instruction: mfspr $r5, 0x110 */);
    M2C_FIELD(saved_reg_r31, s32 *, 0x420) = (s32) M2C_ERROR(/* unknown instruction: mfspr $r5, 0x111 */);
    M2C_FIELD(saved_reg_r31, s32 *, 0x428) = (s32) M2C_ERROR(/* unknown instruction: mfspr $r5, 0x112 */);
    M2C_FIELD(saved_reg_r31, s32 *, 0x430) = (s32) M2C_ERROR(/* unknown instruction: mfspr $r5, 0x113 */);
    M2C_FIELD(saved_reg_r31, s32 *, 0x438) = (s32) M2C_ERROR(/* unknown instruction: mfdar $r5 */);
    M2C_FIELD(saved_reg_r31, s32 *, 0x440) = (s32) M2C_ERROR(/* unknown instruction: mfdsisr $r5 */);
    M2C_FIELD(saved_reg_r31, s32 *, 0x448) = (s32) M2C_ERROR(/* unknown instruction: mfspr $r5, 0x11a */);
    M2C_FIELD(saved_reg_r31, s32 *, 0x450) = (s32) M2C_ERROR(/* unknown instruction: mfspr $r5, 0x3f5 */);
    M2C_FIELD(saved_reg_r31, s32 *, 0x458) = (s32) M2C_ERROR(/* unknown instruction: mfspr $r5, 0x11c */);
    M2C_FIELD(saved_reg_r31, s32 *, 0x460) = (s32) M2C_ERROR(/* unknown instruction: mfspr $r5, 0x11d */);
    M2C_FIELD(saved_reg_r31, s32 *, 0x468) = (s32) M2C_ERROR(/* unknown instruction: mfspr $r5, 0x3f9 */);
    M2C_FIELD(saved_reg_r31, s32 *, 0x470) = (s32) M2C_ERROR(/* unknown instruction: mfspr $r5, 0x16 */);
    M2C_FIELD(saved_reg_r31, s32 *, 0x478) = (s32) M2C_ERROR(/* unknown instruction: mfspr $r5, 0x3f2 */);
    M2C_FIELD(saved_reg_r31, s32 *, 0x480) = (s32) M2C_ERROR(/* unknown instruction: mfspr $r5, 0x3b9 */);
    M2C_FIELD(saved_reg_r31, s32 *, 0x488) = (s32) M2C_ERROR(/* unknown instruction: mfspr $r5, 0x3ba */);
    M2C_FIELD(saved_reg_r31, s32 *, 0x490) = (s32) M2C_ERROR(/* unknown instruction: mfspr $r5, 0x3bd */);
    M2C_FIELD(saved_reg_r31, s32 *, 0x498) = (s32) M2C_ERROR(/* unknown instruction: mfspr $r5, 0x3be */);
    M2C_FIELD(saved_reg_r31, s32 *, 0x4A0) = (s32) M2C_ERROR(/* unknown instruction: mfspr $r5, 0x3bb */);
    M2C_FIELD(saved_reg_r31, s32 *, 0x4A8) = (s32) M2C_ERROR(/* unknown instruction: mfspr $r5, 0x3b8 */);
    M2C_FIELD(saved_reg_r31, s32 *, 0x4B0) = (s32) M2C_ERROR(/* unknown instruction: mfspr $r5, 0x3bc */);
    M2C_FIELD(saved_reg_r31, s32 *, 0x4B8) = (s32) M2C_ERROR(/* unknown instruction: mfspr $r5, 0x3fc */);
    M2C_FIELD(saved_reg_r31, s32 *, 0x4C0) = (s32) M2C_ERROR(/* unknown instruction: mfspr $r5, 0x3fd */);
    M2C_FIELD(saved_reg_r31, s32 *, 0x4C8) = (s32) M2C_ERROR(/* unknown instruction: mfspr $r5, 0x3fe */);
    M2C_FIELD(saved_reg_r31, s32 *, 0x4D0) = (s32) M2C_ERROR(/* unknown instruction: mficcr $r5 */);
    M2C_FIELD(saved_reg_r31, s32 *, 0x4D8) = (s32) M2C_ERROR(/* unknown instruction: mfspr $r5, 0x19 */);
    M2C_FIELD(saved_reg_r31, s32 *, 0x4E0) = (s32) M2C_ERROR(/* unknown instruction: mfpvr $r5 */);
    M2C_FIELD(saved_reg_r31, s32 *, 0x4F0) = (s32) M2C_ERROR(/* unknown instruction: mfspr $r5, 0x39b */);
    M2C_FIELD(saved_reg_r31, s32 *, 0x4E8) = (s32) M2C_ERROR(/* unknown instruction: mfspr $r5, 0x39a */);
    M2C_FIELD(saved_reg_r31, s32 *, 0x4F8) = (s32) M2C_ERROR(/* unknown instruction: mfspr $r5, 0x399 */);
    M2C_FIELD(saved_reg_r31, s32 *, 0x390) = (s32) M2C_ERROR(/* unknown instruction: mfspr $r5, 0x398 */);
}

