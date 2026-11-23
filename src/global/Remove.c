/* Remove @ 0x80205764 (size: 0xE0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef unsigned short u16;

extern char lbl_80345CC8[] __attribute__((section(".data")));
extern void fn_8021CC80(u16 a, s32 b);
extern void fn_8021781C(u16 a);
extern void *Database__FindObjectByType(void *obj, s32 flags, void *b, s32 z0, u16 *out, s32 z2, void *d, s32 z3);
extern void fn_80205844(void *obj, u16 id);
extern void *fn_8020418C(void);
extern int printf(const char *fmt, ...);
extern void memFree(void *p);
extern void Database__UnloadType(void *obj);

s32 Remove(void *obj, s32 flag) {
    u16 id;
    void *found;
    void *block;

    if (obj == 0) {
        return 1;
    }
    if (*(s32 *)((char *)obj + 0x10) < 0 && flag == 0) {
        return 0;
    }
    fn_8021CC80(*(u16 *)((char *)obj + 2), 0);
    fn_8021781C(*(u16 *)obj);
    found = Database__FindObjectByType(obj, 0xFFFE, 0, 0, &id, 0, 0, 0);
    while (found != 0) {
        fn_80205844(found, id);
        found = fn_8020418C();
    }
    printf(lbl_80345CC8, (char *)obj + 17);
    block = *(void **)((char *)obj + 4);
    if (block != 0) {
        memFree(block);
        *(void **)((char *)obj + 4) = 0;
    }
    Database__UnloadType(obj);
    memFree(obj);
    return 1;
}
