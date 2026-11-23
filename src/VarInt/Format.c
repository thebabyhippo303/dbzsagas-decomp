/* VarInt__Format @ 0x8018CC80 (size: 0xF0, .text, ProDG 3.9.3 -O2) - MATCHED */
void VarInt__Format(void *self, int value, char *buf, int size) {
    int index;
    int end;
    unsigned base;
    unsigned digit;
    int n;

    if (buf == 0 || size <= 0) {
        return;
    }
    if (size == 1) {
        *buf = 0;
        return;
    }
    index = 0;
    if (*(int *)((char *)self + 0x40) == 0 && value < 0) {
        index = 1;
        *buf = 0x2D;
        value = -value;
    }
    base = 10;
    if (*(int *)((char *)self + 0x44) != 0) {
        if (index + 2 >= size) {
            *buf = 0;
            return;
        }
        buf[index] = 0x30;
        base = 16;
        index += 1;
        buf[index] = 0x78;
        index += 1;
    }
    index += 1;
    n = value;
    if ((unsigned)value >= base) {
        do {
            n = (int)((unsigned)n / base);
            index += 1;
        } while ((unsigned)n >= base);
    }
    if (size <= index) {
        *buf = 0;
        return;
    }
    buf[index] = 0;
    index -= 1;
    do {
        digit = (unsigned)value % base;
        if (digit <= 9) {
            buf[index] = (char)(digit + 0x30);
        } else {
            buf[index] = (char)(digit + 0x57);
        }
        index -= 1;
        value = (int)((unsigned)value / base);
    } while (value != 0);
}
