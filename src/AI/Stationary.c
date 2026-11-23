/* AI__Stationary @ 0x80044174 (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
/* AI__Stationary @ 0x80044174 */
extern int Script__PopInt(void *script, void *context);
extern void AI__SetStationary(void *ai, int stationary);

typedef struct {
    char pad0[2020];
    int flag;
    char pad1[2956 - 2024];
    void *ai;
} StationaryHost;

void AI__Stationary(void *script, void *context) {
    StationaryHost *host;

    host = (StationaryHost *)Script__PopInt(script, context);
    if (host->flag == 0) {
        AI__SetStationary(host->ai, 1);
    }
}
