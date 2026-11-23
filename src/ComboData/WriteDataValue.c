/* ComboData__WriteDataValue @ 0x80151138 (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct ComboData {
    void *out;
    char pad[40];
    int *values;
} ComboData;

extern int sprintf(char *dst, const char *fmt, ...);
extern int strlen(const char *s);
extern void fn_80255360(void *out, char *text, int length);

void ComboData__WriteDataValue(ComboData *self, int index) {
    char buf[32];

    sprintf(buf, "data %d", self->values[index]);
    fn_80255360(self->out, buf, strlen(buf));
}
