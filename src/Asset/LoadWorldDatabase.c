/* Asset__LoadWorldDatabase @ 0x8025222C (size: 0x160, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void * Database__GetArrayElement(void *, unsigned int);
void * Database__GetTypedObject(int, const char *, void *, int);
char * Path__JoinWithExtension(char *, char *, char *, char *);
void * dblLoad(const char *, void *, int);
char * strrchr(const char *, int);
M2C_UNK fn_80205E90(void *);                        /* extern */
M2C_UNK fn_80228738(void *);                        /* extern */
M2C_UNK fn_80247970();                              /* extern */
extern s8 lbl_80347D98 __attribute__((section(".data")));
extern s8 lbl_80347D9C __attribute__((section(".data")));

s32 Database__LoadMainDbl(void *arg0, s8 *arg1, s8 *arg2) {
    s8 sp8[0x100];
    s32 var_r3;
    s8 *temp_r31;
    s8 *var_r3_2;
    void *temp_r3;
    void *var_r3_3;
    void *var_r3_4;

    temp_r31 = arg0 + 0x14;
    Path__JoinWithExtension(temp_r31, arg1, arg2, NULL);
    var_r3_2 = strrchr(temp_r31, 0x5C);
    if (var_r3_2 == NULL) {
        var_r3_2 = temp_r31;
    }
    M2C_FIELD(var_r3_2, s8 *, 6) = 0;
    temp_r3 = dblLoad(Path__JoinWithExtension(&sp8, arg1, arg2, &lbl_80347D98), NULL, 0);
    M2C_FIELD(arg0, void **, 0x10) = temp_r3;
    if (temp_r3 == NULL) {
        return 0;
    }
    fn_80247970();
    fn_80228738(M2C_FIELD(arg0, void **, 0x10));
    fn_80205E90(M2C_FIELD(arg0, void **, 0x10));
    var_r3_3 = Database__GetTypedObject(0x22, &lbl_80347D9C, M2C_FIELD(arg0, void **, 0x10), 0);
    if ((var_r3_3 != NULL) || (var_r3_3 = Database__GetTypedObject(0x23, &lbl_80347D9C, M2C_FIELD(arg0, void **, 0x10), 0), ((var_r3_3 == NULL) == 0)) || (var_r3_3 = Database__GetTypedObject(0x28, &lbl_80347D9C, M2C_FIELD(arg0, void **, 0x10), 0), ((var_r3_3 == NULL) == 0))) {
        var_r3_4 = Database__GetArrayElement(var_r3_3, 0U);
    } else {
        var_r3_4 = Database__GetTypedObject(0x20, &lbl_80347D9C, M2C_FIELD(arg0, void **, 0x10), 0);
        if (var_r3_4 == NULL) {
            var_r3_4 = Database__GetTypedObject(0x21, &lbl_80347D9C, M2C_FIELD(arg0, void **, 0x10), 0);
        }
    }
    if (((s32) M2C_FIELD(var_r3_4, u8 *, 0) == 0x11) || (var_r3 = 0, (((M2C_FIELD(var_r3_4, u16 *, 2) & 0x20) == 0) == 0))) {
        var_r3 = 1;
    }
    return var_r3;
}
