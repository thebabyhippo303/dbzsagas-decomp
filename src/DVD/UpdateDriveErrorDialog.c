/* DVD__UpdateDriveErrorDialog @ 0x800096D4 (size: 0x98, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 DVD__MapStatusToFileError(s32, s32);
char * DVD__GetErrorMessage(u32);
s32 DVDGetDriveStatus(void);
void fn_8026BF14(void *);
void fn_80270784(void *, char *);
M2C_UNK DVD__OpenDriveErrorDialog(s32);
M2C_UNK DVDCheckDisk(void);
M2C_UNK DVD__CloseDriveErrorDialog(s32);
void DVD__UpdateDriveErrorDialog(void *arg0) {
    s32 temp_r3;
    void *temp_r9;

    fn_8026BF14(arg0);
    temp_r3 = DVD__MapStatusToFileError(DVDGetDriveStatus(), 0);
    if (temp_r3 != 0) {
        fn_80270784(arg0 + 0xAE90, DVD__GetErrorMessage((u32) temp_r3));
        DVD__OpenDriveErrorDialog((s32) arg0);
        return;
    }
    temp_r9 = M2C_FIELD(arg0, void **, 0x19C);
    if ((M2C_FIELD(temp_r9, s32 (**)(void *), 0x3A4)(arg0 + M2C_FIELD(temp_r9, s16 *, 0x3A0)) != 0) && (DVDCheckDisk() != 0)) {
        DVD__CloseDriveErrorDialog((s32) arg0);
    }
}

