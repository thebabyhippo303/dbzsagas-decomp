/* Instance__HideImpl @ 0x8020687C (size: 0x10, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Instance__HideImpl @ 0x8020687C (0x10). ProDG -O2. */
typedef unsigned char u8;
typedef unsigned short u16;

void Instance__HideImpl(void *arg0) {
    u16 *flags = (u16 *)((u8 *)arg0 + 2);
    *flags = *flags | 1;
}
