/* VarInt__GetName @ 0x8018EF68 (size: 0x24, .text, ProDG 3.9.3 -O2) - MATCHED */
char *VarInt__GetName(void *self) {
    char *r;
    if (*(int *)((char *)self + 0x40) != 0) {
        r = "uint";
    } else {
        r = "int";
    }
    return r;
}
