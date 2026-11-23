/* AvatarConfig__RegisterCollisionSettings @ 0x8009C1B0 (size: 0x3C8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

char * strcat(char *, char *);
s32 CmdCon__SetContextScript(void *, s32, s32);
void AvatarConfig__RegisterFloatSetting(void *, void *, f32, s32, s32, f32, f32);
void AvatarConfig__RegisterStringSetting(void *, char *, void *, char *, u32, s32);
void Script__RegisterBoundMethod(void *, void *, void *, s32);
char * Mem__NewArray(s32);
char * strcpy(char *, const char *);
int strlen(const char *);
M2C_UNK CmdCon__RemoveContext(s32, s32);
M2C_UNK VarToggle__Create(s32, s32, s32, s32, s32, s32);
extern s8 lbl_8031D820 __attribute__((section(".data")));
extern s8 lbl_8031FCB0 __attribute__((section(".data")));
extern M2C_UNK lbl_8031FCB4 __attribute__((section(".data")));
extern M2C_UNK lbl_8031FCC4 __attribute__((section(".data")));
extern M2C_UNK lbl_8031FCDC __attribute__((section(".data")));
extern M2C_UNK lbl_8031FCF0 __attribute__((section(".data")));
extern M2C_UNK lbl_8031FD04 __attribute__((section(".data")));
extern M2C_UNK lbl_8031FD14 __attribute__((section(".data")));
extern M2C_UNK lbl_8031FD28 __attribute__((section(".data")));
extern M2C_UNK lbl_8031FD3C __attribute__((section(".data")));
extern M2C_UNK lbl_8031FD4C __attribute__((section(".data")));
extern M2C_UNK lbl_8031FD5C __attribute__((section(".data")));
extern M2C_UNK lbl_8031FD6C __attribute__((section(".data")));
extern M2C_UNK lbl_8031FD7C __attribute__((section(".data")));
extern M2C_UNK lbl_8031FD90 __attribute__((section(".data")));
extern M2C_UNK lbl_8031FD98 __attribute__((section(".data")));
extern M2C_UNK lbl_8031FDA0 __attribute__((section(".data")));
extern M2C_UNK lbl_8031FDAC __attribute__((section(".data")));
typedef struct P8 { s32 a; s32 b; } P8;
extern P8 lbl_8031FDB8 __attribute__((section(".data")));
extern M2C_UNK lbl_8031FDC0 __attribute__((section(".data")));
extern f32 lbl_8031FDD0 __attribute__((section(".data")));
extern f32 lbl_8031FDD4 __attribute__((section(".data")));
extern f32 lbl_8031FDD8 __attribute__((section(".data")));
extern f32 lbl_8031FDDC __attribute__((section(".data")));
extern f32 lbl_8031FDE0 __attribute__((section(".data")));
extern f32 lbl_8031FDE4 __attribute__((section(".data")));
extern f32 lbl_8031FDE8 __attribute__((section(".data")));
extern f32 lbl_8031FDEC __attribute__((section(".data")));
extern f32 lbl_8031FDF0 __attribute__((section(".data")));
extern f32 lbl_8031FDF4 __attribute__((section(".data")));
extern f32 lbl_8031FDF8 __attribute__((section(".data")));
extern f32 lbl_8031FDFC __attribute__((section(".data")));
extern f32 lbl_8031FE00 __attribute__((section(".data")));
extern f32 lbl_8031FE04 __attribute__((section(".data")));
extern f32 lbl_8031FE08 __attribute__((section(".data")));
extern f32 lbl_8031FE0C __attribute__((section(".data")));
extern f32 lbl_8031FE10 __attribute__((section(".data")));
extern s32 lbl_803DCC10;

void Avatar__InitializeCollisionSettings(void *arg0, s8 *arg1, s8 *arg2, void *arg3) {
    f32 arg_load__;
    f32 arg_load_;
    f32 arg_load;
    union { s8 value; unsigned char bytes[128]; } sp8;
    register s8 *temp_r3;
    void *temp_r11;

    M2C_FIELD(arg0, s32 *, 4) = 0;
    if ((arg1 != NULL) && ((s32) *arg1 != 0)) {
        temp_r3 = Mem__NewArray(strlen(arg1) + 1);
        M2C_FIELD(arg0, s8 **, 0) = temp_r3;
        strcpy(temp_r3, arg1);
        if ((arg2 != NULL) && ((s32) *arg2 != 0)) {
            strcpy(((s8 *)sp8.bytes), arg2);
            strcat(((s8 *)sp8.bytes), &lbl_8031FCB0);
            strcat(((s8 *)sp8.bytes), M2C_FIELD(arg0, s8 **, 0));
        } else {
            strcpy(((s8 *)sp8.bytes), M2C_FIELD(arg0, s8 **, 0));
        }
        CmdCon__RemoveContext(lbl_803DCC10, (s32) M2C_FIELD(arg0, s8 **, 0));
        CmdCon__SetContextScript((void *) lbl_803DCC10, (s32) M2C_FIELD(arg0, s8 **, 0), (s32) ((s8 *)sp8.bytes));
        VarToggle__Create(lbl_803DCC10, (s32) M2C_FIELD(arg0, s8 **, 0), (s32) &lbl_8031FCB4, (s32) (arg0 + 4), -1, 0);
    }
    AvatarConfig__RegisterFloatSetting(arg0, arg0 + 8, lbl_8031FDD0, (s32) &lbl_8031FCC4, 1, lbl_8031FDD4, lbl_8031FDD8);
    AvatarConfig__RegisterFloatSetting(arg0, arg0 + 0xC, lbl_8031FDD0, (s32) &lbl_8031FCDC, 1, lbl_8031FDD4, lbl_8031FDD8);
    AvatarConfig__RegisterFloatSetting(arg0, arg0 + 0x10, lbl_8031FDDC, (s32) &lbl_8031FCF0, 1, lbl_8031FDE0, lbl_8031FDD4);
    AvatarConfig__RegisterFloatSetting(arg0, arg0 + 0x14, lbl_8031FDE4, (s32) &lbl_8031FD04, 1, lbl_8031FDE8, lbl_8031FDEC);
    AvatarConfig__RegisterFloatSetting(arg0, arg0 + 0x18, lbl_8031FDF0, (s32) &lbl_8031FD14, 1, lbl_8031FDF4, lbl_8031FDE8);
    AvatarConfig__RegisterFloatSetting(arg0, arg0 + 0x1C, lbl_8031FDF0, (s32) &lbl_8031FD28, 1, lbl_8031FDD4, lbl_8031FDD8);
    AvatarConfig__RegisterFloatSetting(arg0, 0x20 + arg0, lbl_8031FDF0, (s32) &lbl_8031FD3C, 1, lbl_8031FDD4, lbl_8031FDD8);
    AvatarConfig__RegisterFloatSetting(arg0, arg0 + 0x24, lbl_8031FDF8, (s32) &lbl_8031FD4C, 1, lbl_8031FDE0, lbl_8031FDD4);
    AvatarConfig__RegisterFloatSetting(arg0, arg0 + 0x28, lbl_8031FDFC, (s32) &lbl_8031FD5C, 1, lbl_8031FDE8, lbl_8031FDEC);
    AvatarConfig__RegisterFloatSetting(arg0, arg0 + 0x2C, lbl_8031FDD0, (s32) &lbl_8031FD6C, 1, lbl_8031FDF4, lbl_8031FDE8);
    AvatarConfig__RegisterStringSetting(arg0, arg0 + 0x5C, &lbl_8031FD7C, &lbl_8031D820, 0x14U, 1);
    arg_load = lbl_8031FE00;
    arg_load_ = lbl_8031FDD4;
    arg_load__ = lbl_8031FE04;
    M2C_FIELD(arg0, s32 *, 0x70) = -1;
    AvatarConfig__RegisterFloatSetting(arg0, arg0 + 0x7C, arg_load, (s32) &lbl_8031FD90, 1, arg_load_, arg_load__);
    AvatarConfig__RegisterFloatSetting(arg0, arg0 + 0x78, lbl_8031FE08, (s32) &lbl_8031FD98, 1, lbl_8031FDD4, lbl_8031FE0C);
    AvatarConfig__RegisterFloatSetting(arg0, arg0 + 0x80, lbl_8031FDE8, (s32) &lbl_8031FDA0, 1, lbl_8031FDD4, lbl_8031FDFC);
    AvatarConfig__RegisterFloatSetting(arg0, arg0 + 0x84, lbl_8031FDFC, (s32) &lbl_8031FDAC, 1, lbl_8031FDD0, lbl_8031FE10);
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) M2C_FIELD(arg0, f32 *, 0x1C);
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) M2C_FIELD(arg0, f32 *, 0x20);
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) M2C_FIELD(arg0, f32 *, 0x24);
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) M2C_FIELD(arg0, f32 *, 0x28);
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) M2C_FIELD(arg0, f32 *, 0x2C);
    M2C_FIELD(arg0, void **, 0x58) = arg3;
    if (arg3 != NULL) {
        temp_r11 = arg0 + 0x48;
        *(P8 *) ((char *) temp_r11 + 8) = lbl_8031FDB8;
        M2C_FIELD(temp_r11, void **, 4) = arg0;
        Script__RegisterBoundMethod(arg3, temp_r11, &lbl_8031FDC0, 0);
    }
}
