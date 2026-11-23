/* ButtonPromptBar__SetAllTextDropShadow @ 0x80262440 (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
void Sphere__SetDropShadow(void *, int, int, int, int);
void ButtonPromptBar__SetAllTextDropShadow(void *self, int a, int b, int c, int d)
{
    void *p = (char *)self + 1264;
    unsigned int i = 0;

    do {
        i += 1;
        Sphere__SetDropShadow(p, a, b, c, d);
        p = (char *)p + 1360;
    } while (i <= 11);
}
