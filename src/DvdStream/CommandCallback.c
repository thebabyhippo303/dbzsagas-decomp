/* DvdStream__CommandCallback @ 0x801978EC (size: 0x24, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;

void DvdStream__CommandCallback(s32 result, void *block) {
    void *stream = *(void **)((char *)block + 44);
    *(s32 *)((char *)stream + 64) = 0;
    if (result != -3) {
        *(s32 *)((char *)stream + 68) = 1;
    }
    *(s32 *)((char *)stream + 76) = result;
}
