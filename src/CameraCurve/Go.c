/* CameraCurve__Go @ 0x8002CE98 (size: 0xB4, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: CameraCurve__Go @ 0x8002CE98 (0xB4). ProDG -O2. */
#define NULL 0

extern char lbl_80311648[] __attribute__((section(".data")));
extern void *lbl_803DC5B4 __attribute__((section(".sdata")));

extern void *CameraBag__SetTop(void *bag, char *name);
extern float Script__PopFloat(void *script, void *context);
extern char *Script__PopString(void *script, void *context, int *owned);
extern void fn_80184430(char *text);
extern int CCameraCurve__Initialize(void *self, char *a, char *b, float c);

void CameraCurve__Go(void *arg0, void *arg1) {
    int sp8;
    float temp_f31;
    char *temp_r28;
    char *temp_r31;

    temp_r31 = Script__PopString(arg0, arg1, &sp8);
    temp_r28 = Script__PopString(arg0, arg1, &sp8);
    temp_f31 = Script__PopFloat(arg0, arg1);
    CCameraCurve__Initialize(CameraBag__SetTop(lbl_803DC5B4, lbl_80311648), temp_r31, temp_r28, temp_f31);
    if (sp8 != 0) {
        if (temp_r28 != NULL) {
            fn_80184430(temp_r28);
        }
        if (temp_r31 != NULL) {
            fn_80184430(temp_r31);
        }
    }
}
