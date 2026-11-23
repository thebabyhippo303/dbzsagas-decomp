/* DEMOSetGPHangMetric @ 0x80243314 (size: 0xB8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef unsigned char u8; typedef unsigned short u16; typedef unsigned int u32;
extern void GXSetGPMetric(u32 a, u32 b);
void DEMOSetGPHangMetric(u32 arg) {
    if (arg != 0) {
        volatile u8 *fifo;
        GXSetGPMetric(35, 22);
        fifo = (volatile u8 *)0xCC010000;
        *(volatile u8 *)(fifo - 32768) = 97;
        *(volatile u32 *)(fifo - 32768) = 0x2402C004u;
        *(volatile u8 *)(fifo - 32768) = 97;
        *(volatile u32 *)(fifo - 32768) = 0x23000020u;
        *(volatile u8 *)(fifo - 32768) = 16;
        *(volatile u16 *)(fifo - 32768) = 0;
        *(volatile u16 *)(fifo - 32768) = 4102;
        *(volatile u32 *)(fifo - 32768) = 0x84400u;
    } else {
        volatile u8 *fifo;
        fifo = (volatile u8 *)0xCC010000;
        *(volatile u8 *)(fifo - 32768) = 97;
        *(volatile u32 *)(fifo - 32768) = 0x24000000u;
        *(volatile u8 *)(fifo - 32768) = 97;
        *(volatile u32 *)(fifo - 32768) = 0x23000000u;
        *(volatile u8 *)(fifo - 32768) = 16;
        *(volatile u16 *)(fifo - 32768) = (u16)arg;
        *(volatile u16 *)(fifo - 32768) = 4102;
        *(volatile u32 *)(fifo - 32768) = arg;
    }
}
