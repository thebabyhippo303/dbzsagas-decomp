/* WorkerThread__Start @ 0x80306ABC (size: 0x8C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct {
    char pad[0x8318];
    char queue[0x30];
    int running;
} WorkerThread;

extern void WorkerThread__ThreadMain(void);
extern int OSInitThreadQueue(void *queue);
extern int OSCreateThread(void *thread, void *entry, void *arg, void *stack, unsigned int stackSize, int priority, int attrs);
extern void OSResumeThread(void *thread);

void WorkerThread__Start(WorkerThread *self, unsigned int priority) {
    void *thread;
    unsigned int prio;
    prio = priority;
    OSInitThreadQueue(self->queue);
    if (prio > 4) {
        prio = 0;
    }
    thread = (char *)self + 0x8000;
    if (OSCreateThread(thread, WorkerThread__ThreadMain, self, thread, 0x8000, (6 - prio) * 4, 1) != 0) {
        self->running = 1;
        OSResumeThread(thread);
    }
}
