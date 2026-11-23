/* MessagePanel__SetDropShadow @ 0x80269F64 (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
void Sphere__SetDropShadow(void *, int, int, int, int);
void MessagePanel__SetDropShadow(void *self, int a, int b, int c, int d)
{
    Sphere__SetDropShadow((char *)self + 23916, a, b, c, d);
    Sphere__SetDropShadow((char *)self + 24848, a, b, c, d);
    Sphere__SetDropShadow((char *)self + 25264, a, b, c, d);
}
