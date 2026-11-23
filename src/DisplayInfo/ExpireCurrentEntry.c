/* DisplayInfo__ExpireCurrentEntry @ 0x8000AA44 (size: 0xA8, .text, ProDG 3.9.3 -O2) - MATCHED */
unsigned int Timer__GetMilliseconds(void);
void Sound__Play2D(const char *, int);
void DisplayInfo__ClearCurrentEntry(void *);
extern float lbl_8030CA58 __attribute__((section(".data")));
extern float lbl_8030CA5C __attribute__((section(".data")));
extern float lbl_8030CA60 __attribute__((section(".data")));
static const char pool_pad[0xCA40] = {1};


void DisplayInfo__ExpireCurrentEntry(char *self) {
    float now = (float)Timer__GetMilliseconds() * lbl_8030CA58;
    float limit = *(float *)(self + 0x10000 - 20352) + lbl_8030CA5C + lbl_8030CA60;
    if (!(now <= limit)) {
        if (*(int *)(self + 0x10000 - 20344) == 0) {
            Sound__Play2D("slide_off", 0);
        }
        DisplayInfo__ClearCurrentEntry(self);
    }
}
