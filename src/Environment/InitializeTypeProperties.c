/* Environment__InitializeTypeProperties @ 0x800EB5CC (size: 0x80, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Environment__InitializeTypeProperties @ 0x800EB5CC (0x80). ProDG -O2. */
typedef struct {
    const char *name;
    void (*init)(void);
} EnvTypeInit;

extern EnvTypeInit lbl_8036AE80[];
extern int String__CompareIgnoreCase(const char *left, const char *right);

int Environment__InitializeTypeProperties(const char *name) {
    int cursor = (int)lbl_8036AE80;
    int end = cursor + 0x38;
    int found = 0;
    for (; cursor < end; cursor += 8) {
        if (String__CompareIgnoreCase(*(const char **)cursor, name) == 0) {
            found = cursor;
            break;
        }
    }
    if (found == 0)
        return 0;
    (*(void (**)(void))(found + 4))();
    return 1;
}
