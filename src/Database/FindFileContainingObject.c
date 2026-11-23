/* Database__FindFileContainingObject @ 0x80205D0C (size: 0xF0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct Key { int a; void *b; } Key;
extern char lbl_80345C10[] __attribute__((section(".data")));
void *Database__BeginLoadedIteration(int);
void *Database__NextLoaded(void);
void *Database__GetTypedObject(int, char *, void *, int);
void *Database__GetArrayElement(void *, unsigned);

void *Database__FindLoadedContainingObject(Key *key) {
    void *c = Database__BeginLoadedIteration(12);
    if (c != 0) {
        do {
            if (key->b != 0) {
                void *t = Database__GetTypedObject(98, lbl_80345C10, c, 0);
                if (t != 0) {
                    void *e = Database__GetArrayElement(t, 0);
                    if (key->b == e) {
                        return c;
                    }
                }
            } else {
                if (key->a == (int)Database__GetTypedObject(33, lbl_80345C10, c, 0) ||
                    key->a == (int)Database__GetTypedObject(32, lbl_80345C10, c, 0) ||
                    key->a == (int)Database__GetTypedObject(39, lbl_80345C10, c, 0)) {
                    return c;
                }
            }
            c = Database__NextLoaded();
        } while (c != 0);
    }
    return 0;
}
