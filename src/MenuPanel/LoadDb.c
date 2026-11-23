/* MenuPanel__LoadDb @ 0x80267B34 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed short s16;
void *dblLoad(const char *, void *, int);
void MenuPanel__LoadDb(void *self, const char *path) {
    void *r9 = *(void **)((char *)self + 412);
    ((void (*)(void *))(*(void **)((char *)r9 + 948)))((char *)self + *(s16 *)((char *)r9 + 944));
    *(void **)((char *)self + 44676) = dblLoad(path, 0, 0);
}
