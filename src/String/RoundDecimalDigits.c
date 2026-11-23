/* String__RoundDecimalDigits @ 0x80163CB4 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: String__RoundDecimalDigits @ 0x80163CB4 (0x5C). ProDG -O2. */
int String__RoundDecimalDigits(char *s, int n) {
    if (n > 0) {
        n = n - 1;
        if ((signed char)s[n] > '4') {
            do {
                s[n] = '0';
                n = n - 1;
                if (n <= 0)
                    break;
            } while (s[n] == '9');
            if (s[n] == '9')
                return 0;
            s[n] = (char)(s[n] + 1);
        }
    }
    return 1;
}
