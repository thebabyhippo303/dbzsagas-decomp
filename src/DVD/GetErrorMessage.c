/* DVD__GetErrorMessage @ 0x800FF140 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: DVD__GetErrorMessage @ 0x800FF140 (0x58). ProDG -O2.
   13 disc cover, 14 and 15 insert disc, 16 read failure, else fatal. */
extern char lbl_803249A4[];
extern char lbl_803249FC[];
extern char lbl_80324A30[];
extern char lbl_80324AA0[];

char *DVD__GetErrorMessage(unsigned int code) {
    switch (code) {
    case 13:
        return lbl_803249A4;
    case 14:
    case 15:
        return lbl_803249FC;
    case 16:
        return lbl_80324A30;
    default:
        return lbl_80324AA0;
    }
}
