/* App__ShutdownRuntime @ 0x8017FE24 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched. ProDG -O2. */
typedef struct {
    char pad_0[8];
    void *field_8;
    int field_C;
    char pad_10[0x28];
    int signature_38;
} RuntimeState;

extern RuntimeState lbl_803729F4;
extern void fn_80185434(void);
extern void fn_801850A4(void);
extern void fn_801848A8(void);
extern void FileIO__ShutdownPools(void);
extern void fn_802CE66C(void *ptr);

void App__ShutdownRuntime(void) {
    RuntimeState *state = &lbl_803729F4;
    state->signature_38 = 0x12345678;
    fn_80185434();
    fn_801850A4();
    fn_801848A8();
    FileIO__ShutdownPools();
    if (state->field_8 != 0) {
        fn_802CE66C(state->field_8);
        state->field_8 = 0;
    }
    state->field_C = 0;
}
