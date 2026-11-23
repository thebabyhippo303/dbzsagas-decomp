/* SimLoop__CreateLevelEmitters @ 0x800212A4 (size: 0xBC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct Db { char pad[16]; unsigned short *arr; } Db;
typedef struct Elem { char pad[24]; unsigned short kind; char pad2[10]; char asset[1]; } Elem;
extern Db lbl_803B1E84 __attribute__((section(".bss")));
extern char lbl_8030FD90[] __attribute__((section(".data")));
void *Database__GetArrayElement(void *, unsigned int);
unsigned int Database__GetArrayFlags(const unsigned short *);
unsigned short *Database__GetTypedObject(int, const char *, void *, int);
void *Emitter__CreateFromAsset(void *, void *, void *, int, int, int, int, int, int);

void Game__SpawnWorldEmitters(void) {
    unsigned flags = Database__GetArrayFlags(lbl_803B1E84.arr);
    unsigned short *tbl = Database__GetTypedObject(144, lbl_8030FD90, lbl_803B1E84.arr, 0);
    if (tbl != 0) {
        int i = 0;
        for (; i < (int)*tbl; i++) {
            Elem *e = Database__GetArrayElement(tbl, i);
            if (e->kind == 0) {
                int neg = -1;
                Emitter__CreateFromAsset(e->asset, e, 0, 0, 0, 0, 1, flags, neg);
            }
        }
    }
}
