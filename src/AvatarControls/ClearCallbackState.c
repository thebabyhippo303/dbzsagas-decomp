/* AvatarControls__ClearCallbackState @ 0x8009A058 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;

void *AvatarControls__ClearCallbackState(void *state) {
    int i;
    for (i = 0; i < 14; i++) {
        int j = 1;
        do {
            *(s32 *)((char *)state + i * 8 + j * 4) = 0;
            j--;
        } while (j >= 0);
    }
    *(s32 *)((char *)state + 0x70) = 0;
    return state;
}
