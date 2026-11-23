/* FluffLoop__ProcessPendingCallbacks @ 0x800520BC (size: 0xD4, .text, ProDG 3.9.3 -O2) - MATCHED */
extern char *lbl_803DC414;
extern int lbl_803DD4B0;
extern int lbl_80319A54[] __attribute__((section(".data")));

void fn_80184BB0(void);

void FluffLoop__ProcessPendingCallbacks(void) {
    char *obj;

    obj = lbl_803DC414;
    if (obj != 0) {
        do {
            if (*(int *)(obj + 0x49140) == lbl_803DD4B0) {
                short idx;
                int hi;
                void (*fn)(char *);
                short argh;
                int arg;

                idx = *(short *)(obj + 0x49146);
                if (idx == 0) {
                    *(int *)(obj + 0x49144) = lbl_80319A54[0];
                    *(int *)(obj + 0x49148) = lbl_80319A54[1];
                }
                idx = *(short *)(obj + 0x49146);
                if (idx >= 0) {
                    char *ent;
                    short off;

                    off = *(short *)(obj + 0x49148);
                    ent = (char *)*(int *)(obj + off) + (idx << 3);
                    hi = *(int *)(ent - 8);
                    fn = *(void (**)(char *))(ent - 4);
                } else {
                    fn = *(void (**)(char *))(obj + 0x49148);
                }
                argh = *(short *)(obj + 0x49144);
                if (idx >= 0) {
                    arg = (hi >> 16) + argh;
                } else {
                    arg = argh;
                }
                fn(obj + arg);
            }
            obj = *(char **)(obj + 0x49138);
        } while (obj != 0);
    }
    fn_80184BB0();
}
