/* CmdCon__Contexts @ 0x8018BA18 (size: 0x128, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: CmdCon__Contexts @ 0x8018BA18 (0x128). ProDG -O2. */
extern int fn_80189A54(void *self, const char *format, ...);

extern char lbl_8033E830[];
extern char lbl_8033E83C[];
extern char lbl_8033E848[];
extern char lbl_8033E854[];
extern char lbl_8033E858[];

typedef struct {
    char **data;
    volatile int size;
} CmdConVec;

typedef struct {
    char pad[8];
    CmdConVec *volatile contexts;
    char pad2[4];
    char *active;
} CmdCon;

int CmdCon__Contexts(CmdCon *self) {
    int i;
    CmdConVec *vec;
    int index;
    int size;
    char **slot;
    char **slot2;
    char *name;
    char *other;

    fn_80189A54(self, lbl_8033E830);
    for (i = 0; i < self->contexts->size; i++) {
        index = i;
        vec = self->contexts;
        if (i < 0) {
            index = vec->size - 1;
        }
        size = vec->size;
        if (index >= size || size == 0) {
            slot = 0;
        } else {
            slot = &vec->data[index];
        }
        name = *slot;

        index = i;
        if (i < 0) {
            index = vec->size - 1;
        }
        size = vec->size;
        if (index >= size || size == 0) {
            slot2 = 0;
        } else {
            slot2 = &vec->data[index];
        }
        other = *slot2;
        fn_80189A54(self, lbl_8033E83C, name, other == self->active ? lbl_8033E848 : lbl_8033E854);
    }
    fn_80189A54(self, lbl_8033E858);
    return 1;
}
