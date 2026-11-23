/* FileServer__SendRequestPacket @ 0x8015DA44 (size: 0x8C, .text, MWCC GC/1.x (FileServer/MetroTRK)) - MATCHED */
typedef unsigned char u8;
typedef unsigned short u16;

typedef struct {
    u8 type;
    u8 pad1;
    u16 command;
    u8 pad4[4];
    u8 flag;
    u8 pad9[3];
    int arg0;
    int arg1;
    int arg2;
} RequestPacket;

extern int lbl_8039E5F4 __attribute__((section(".data")));
extern void FileServer__SendBufferLength(int);
extern void FileServer__WriteBuffer(void *, int);

void FileServer__SendRequestPacket(int a, int b, int c, int d) {
    RequestPacket pkt;
    int op = 16;
    u8 *bytes = (u8 *)&pkt;
    int count = 24;

    do {
        *bytes = 0;
        bytes += 1;
        count -= 1;
    } while (count != 0);

    pkt.type = 9;
    pkt.command = op << 8;
    if (lbl_8039E5F4 != 0) {
        pkt.flag = 9;
    } else {
        pkt.flag = 11;
    }
    pkt.arg0 = a;
    pkt.arg1 = d;
    pkt.arg2 = c;
    FileServer__SendBufferLength(24);
    FileServer__WriteBuffer(&pkt, 24);
}
