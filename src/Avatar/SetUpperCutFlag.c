/* Avatar__SetUpperCutFlag @ 0x8003E6C0 (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
extern void *Script__PopInt(void *script, void *context);

typedef struct {
    char pad0[2020];
    int flag;
    char pad1[2956 - 2024];
    char *ptr;
} UpperCutHost;

typedef struct {
    char pad[1200];
    int value;
} UpperCutTarget;

void Avatar__SetUpperCutFlag(void *arg0, void *arg1) {
    UpperCutHost *host = (UpperCutHost *)Script__PopInt(arg0, arg1);
    if (host->flag == 0) {
        ((UpperCutTarget *)host->ptr)->value = 1;
    }
}
