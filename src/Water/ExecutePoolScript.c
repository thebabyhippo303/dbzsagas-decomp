/* Water__ExecutePoolScript @ 0x80295D20 (size: 0x98, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct {
    char pad[12];
    unsigned char b12;
    unsigned char b13;
    unsigned char b14;
    unsigned char b15;
    unsigned char b16;
    unsigned char b17;
} PoolArgs;

extern int lbl_803DCC10;
extern void Water__RegisterPoolVariables(char *a, PoolArgs *b);
extern void Water__JoinPath(char *a, char *b, char *c);
extern int CmdCon__SetContextScript(void *a, char *b, char *c);
extern int CmdCon__ExecuteFileInContext(int a, char *b);
extern int CmdCon__RemoveContext(void *a, char *b);

int Water__ExecutePoolScript(char *a, char *b, PoolArgs *c) {
    char buf[256];
    int result;
    Water__RegisterPoolVariables(b, c);
    Water__JoinPath(a, b, buf);
    CmdCon__SetContextScript((void *)lbl_803DCC10, b, buf);
    result = CmdCon__ExecuteFileInContext(lbl_803DCC10, b);
    CmdCon__RemoveContext((void *)lbl_803DCC10, b);
    c->b12 = c->b15 = 1;
    c->b13 = c->b17 = c->b16 = 0;
    return result;
}
