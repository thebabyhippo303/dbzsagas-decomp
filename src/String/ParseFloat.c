/* String__ParseFloat @ 0x801622E0 (size: 0x24, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: String__ParseFloat @ 0x801622E0 (0x24). ProDG -O2. */
extern float strtof(const char *text, char **end);

float String__ParseFloat(const char *text) {
	return strtof(text, 0);
}
