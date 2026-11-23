/* VI__ProgramTimingRegisters @ 0x801755C0 (size: 0x200, .text, MWCC GC/1.x (Dolphin SDK)) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


void *VI__GetTimingProfile(u32);                    /* extern */

void VI__ProgramTimingRegisters(u32 arg0) {
    u32 sp1C;
    u32 temp_r31;
    void *temp_r3;

    temp_r31 = arg0 >> 2U;
    *(u32 *)0x800000CC = temp_r31;
    temp_r3 = VI__GetTimingProfile(arg0);
    M2C_FIELD((void *)0xCC002000, s16 *, 2) = 2;
    sp1C = 0U;
    if (0U < 0x3E8U) {
loop_3:
        if (sp1C < 0x3E8U) {
            sp1C += 8;
            goto loop_3;
        }
    }
    M2C_FIELD((void *)0xCC002000, s16 *, 2) = 0;
    *(u16 *)0xCC002006 = M2C_FIELD(temp_r3, u16 *, 0x1A);
    *(u16 *)0xCC002004 = (M2C_FIELD(temp_r3, u8 *, 0x1E) & ~0xFF00) | ((M2C_FIELD(temp_r3, u8 *, 0x1D) << 8) & 0xFF00);
    *(u16 *)0xCC00200A = M2C_FIELD(temp_r3, u8 *, 0x1C) | (M2C_FIELD(temp_r3, u8 *, 0x1F) << 7);
    *(u16 *)0xCC002008 = (M2C_FIELD(temp_r3, u16 *, 0x20) * 2) & 0xFFFE;
    M2C_FIELD((u16 *)0xCC002000, u16 *, 0) = (u16) M2C_FIELD(temp_r3, u8 *, 0);
    *(u16 *)0xCC00200E = M2C_FIELD(temp_r3, u16 *, 4) + ((M2C_FIELD(temp_r3, u16 *, 2) * 2) - 2);
    *(u16 *)0xCC00200C = M2C_FIELD(temp_r3, u16 *, 8) + 2;
    *(u16 *)0xCC002012 = M2C_FIELD(temp_r3, u16 *, 6) + ((M2C_FIELD(temp_r3, u16 *, 2) * 2) - 2);
    *(u16 *)0xCC002010 = M2C_FIELD(temp_r3, u16 *, 0xA) + 2;
    *(u16 *)0xCC002016 = M2C_FIELD(temp_r3, u8 *, 0xC) | (M2C_FIELD(temp_r3, u16 *, 0x10) << 5);
    *(u16 *)0xCC002014 = M2C_FIELD(temp_r3, u8 *, 0xE) | (M2C_FIELD(temp_r3, u16 *, 0x14) << 5);
    *(u16 *)0xCC00201A = M2C_FIELD(temp_r3, u8 *, 0xD) | (M2C_FIELD(temp_r3, u16 *, 0x12) << 5);
    *(u16 *)0xCC002018 = M2C_FIELD(temp_r3, u8 *, 0xF) | (M2C_FIELD(temp_r3, u16 *, 0x16) << 5);
    *(u16 *)0xCC002048 = 0x2828;
    *(u16 *)0xCC002036 = 1;
    *(u16 *)0xCC002034 = 0x1001;
    *(u16 *)0xCC002032 = M2C_FIELD(temp_r3, u16 *, 0x1A) + 1;
    *(u16 *)0xCC002030 = (((s32) M2C_FIELD(temp_r3, u16 *, 0x18) / 2) + 1) | 0x1000;
    if (((s32) arg0 != 2) && ((s32) arg0 != 3) && ((s32) arg0 != 0x1A)) {
        M2C_FIELD((void *)0xCC002000, s16 *, 2) = (s16) (((arg0 & 2) * 4) | 1 | (temp_r31 << 8));
        M2C_FIELD(((u16 *)0xCC000000 + 0x2000), s16 *, 0x6C) = 0;
        return;
    }
    M2C_FIELD((void *)0xCC002000, s16 *, 2) = (s16) ((temp_r31 << 8) | 5);
    *(s16 *)0xCC00206C = 1;
}

