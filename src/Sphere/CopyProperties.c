/* Sphere__CopyProperties @ 0x8026B9F0 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Sphere__CopyData @ 0x8026B9F0 (0x60). ProDG -O2. */
void Sphere__CopyData(int *destination, const int *source) {
    int word;
    int remaining;

    if (source == 0) {
        return;
    }
    destination += 4;
    source += 4;
    remaining = 336;
loop:
    word = source[0];
    remaining -= 24;
    destination[0] = word;
    word = source[1];
    destination[1] = word;
    word = source[2];
    destination[2] = word;
    word = source[3];
    destination[3] = word;
    word = source[4];
    destination[4] = word;
    word = source[5];
    source += 6;
    destination[5] = word;
    destination += 6;
    if (remaining != 0) {
        goto loop;
    }
    *destination = *source;
}
