/* Database__CreateHandle @ 0x80205694 (size: 0xD0, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Database__CreateHandle @ 0x80205694 (0xD0). ProDG -O2. */

#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))

extern void *MemHeap__Alloc(unsigned int size, unsigned int align);
extern char *strncpy(char *dst, const char *src, unsigned int n);
extern char *strchr(const char *s, int c);
extern short fn_80217870(void);
extern short fn_8021DEE8(void);
extern int lbl_803ADC00 __attribute__((section(".data")));

void *Database__CreateHandle(char *arg0, int arg1) {
    char *name;
    char *slash;
    void *handle;

    handle = MemHeap__Alloc(0x114, 8);
    M2C_FIELD(handle, int *, 8) = 0;
    M2C_FIELD(handle, int *, 4) = arg1;
    if (arg1 != 0) {
        M2C_FIELD(handle, int *, 0xC) = lbl_803ADC00;
    } else {
        M2C_FIELD(handle, int *, 0xC) = arg1;
    }
    name = (char *)handle + 0x11;
    M2C_FIELD(handle, int *, 0x10) = M2C_FIELD(handle, int *, 0x10) & 0x1FFFFFFF;
    strncpy(name, arg0, 0x100);
    M2C_FIELD(handle, char *, 0x110) = 0;
    slash = strchr(name, '/');
    if (slash != 0) {
        do {
            *slash = '\\';
            slash = strchr(slash, '/');
        } while (slash != 0);
    }
    M2C_FIELD(handle, short *, 0) = fn_80217870();
    M2C_FIELD(handle, short *, 2) = fn_8021DEE8();
    return handle;
}
