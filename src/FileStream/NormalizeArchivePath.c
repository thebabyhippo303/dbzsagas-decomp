/* FileStream__NormalizeArchivePath @ 0x8017F890 (size: 0xD8, .text, ProDG 3.9.3 -O2) - MATCHED */
int strlen(const char *text);
extern unsigned char lbl_8033C9D9[] __attribute__((section(".data")));

void FilePath__NormalizeLookupName(char *source, char *dest) {
    int length;
    int index;
    int character;

    if (*source == '.') {
        int second = source[1];
        if (second == '\\' || second == '/') {
            source += 2;
            goto copy;
        }
    }
    {
        int first = *source;
        if (first == '\\' || first == '/') {
            source += 1;
        }
    }
copy:
    length = strlen(source);
    index = 0;
    if (index < length) {
        do {
            character = source[index];
            if (character == '/') {
                dest[index] = '\\';
            } else {
                int mapped = character;
                if (*(lbl_8033C9D9 + character) & 2) {
                    mapped = character - 32;
                }
                dest[index] = (char)mapped;
            }
            index += 1;
        } while (index < length);
    }
    dest[index] = 0;
}
