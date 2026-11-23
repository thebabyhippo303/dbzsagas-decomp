/* Building__MarkAirlockDead @ 0x80118660 (size: 0x1C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;

typedef struct {
    s32 pad;
    s32 dead;
} AirlockEntry;

extern AirlockEntry lbl_8036BCCC[] __attribute__((section(".data")));

void Building__MarkAirlockDead(s32 arg0) {
    lbl_8036BCCC[arg0].dead = 1;
}
