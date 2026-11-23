/* strrev @ 0x80163D10 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: strrev @ 0x80163D10 (0x4C). ProDG -O2. */
char *strrev(char *str) {
	int end;
	int start;
	unsigned char temp;

	for (end = 0; str[end] != '\0'; end++) {}
	start = 0;
	end--;
	if (start >= end)
		return str;
	do {
		temp = (unsigned char)str[start];
		str[start] = str[end];
		str[end] = (char)temp;
		end--;
		start++;
	} while (start < end);
	return str;
}
