/* Render__HideObject @ 0x8028189C (size: 0x20, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Render__HideObject @ 0x8028189C (0x20). ProDG -O2. */
int Render__HideObject(void *render, void *object) {
    if (object == 0)
        return 0;
    *(int *)((char *)object + 0xF4) = 1;
    return 1;
}
