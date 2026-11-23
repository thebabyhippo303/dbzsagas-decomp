/* FullScreenEffect__Init @ 0x800E197C (size: 0xAC, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: FullScreenEffect__Init @ 0x800E197C (0xAC). ProDG -O2. */
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

extern float lbl_80322E30 __attribute__((section(".data")));
extern char *strcpy(char *dst, const char *src);
extern void FullScreenEffect__InitializeDefaults(char *self);
extern void FullScreenEffect__InitializeParameters(char *self, char *arg1);
extern void FullScreenEffect__BuildRenderResources(void *self);

char *FullScreenEffect__Init(char *arg0, char *arg1, int arg2, float farg0, float farg1, float farg2) {
    float temp_f31;
    char *temp_r9;

    M2C_FIELD(arg0, int *, 0xA4) = arg2;
    if (arg2 & 1) {
        M2C_FIELD(arg0, float *, 0x90) = farg0;
        temp_r9 = arg0 + 0x90;
        M2C_FIELD(temp_r9, float *, 4) = farg1;
        M2C_FIELD(temp_r9, float *, 8) = farg2;
    }
    temp_f31 = lbl_80322E30;
    M2C_FIELD(arg0, int *, 0x84) = 0;
    M2C_FIELD(arg0, float *, 0x80) = temp_f31;
    M2C_FIELD(arg0, int *, 0x9C) = 1;
    strcpy(arg0, arg1);
    FullScreenEffect__InitializeDefaults(arg0);
    FullScreenEffect__InitializeParameters(arg0, arg1);
    M2C_FIELD(arg0, float *, 0xA8) = temp_f31;
    M2C_FIELD(arg0, float *, 0xAC) = M2C_FIELD(arg0, float *, 0x198);
    M2C_FIELD(arg0, float *, 0xB0) = M2C_FIELD(arg0, float *, 0x19C);
    FullScreenEffect__BuildRenderResources(arg0);
    return arg0;
}
