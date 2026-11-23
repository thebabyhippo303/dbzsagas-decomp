/* BaseMenu__FocusChild @ 0x802636CC (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef short s16;
void BaseMenu__FocusChild(void *self)
{
    void *a = *(void **)((char *)self + 144);
    void *b;
    void *v;
    if (a == 0) {
        return;
    }
    b = *(void **)((char *)a + 4);
    if (b == 0) {
        return;
    }
    v = *(void **)((char *)self + 16);
    ((void (*)(void *, void *))*(void **)((char *)v + 428))((char *)self + *(s16 *)((char *)v + 424), b);
}
