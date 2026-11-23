/* FileServer__CompleteRequest @ 0x8015DF28 (size: 0xD8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct Req { char pad[2]; short s2; char pad2[4]; int w8; } Req;
extern int lbl_8036FB50 __attribute__((section(".data")));
extern void (*lbl_8036FB54)(int) __attribute__((section(".data")));
extern int lbl_8039E5F4 __attribute__((section(".data")));
extern int lbl_8039E5F8 __attribute__((section(".data")));
extern Req lbl_8039E600 __attribute__((section(".data")));
int FileServer__WaitForCommandHandshake(void);
void FileServer__ReadTransfer(Req *, int);
void FileServer__WriteTransfer(Req *, int);

void FileServer__CompleteRequest(void) {
    Req *r = &lbl_8039E600;
    int h;
    if (lbl_8039E5F4 != 0) {
        do {
            h = FileServer__WaitForCommandHandshake();
        } while (h == 0);
        FileServer__ReadTransfer(r, h);
        r->s2 = 0;
        lbl_8039E5F8 = r->w8;
        FileServer__WriteTransfer(r, 8);
        lbl_8036FB50 = 0;
        if (lbl_8036FB54 != 0) {
            lbl_8036FB54(lbl_8039E5F8);
            lbl_8036FB54 = 0;
        }
    }
    lbl_8036FB54 = 0;
    *(int *)0xCC006828 = 8;
    *(int *)0xCC003000 = 0x1000;
    lbl_8036FB50 = 0;
}
