/* Avatar__StopSwooshStreakImpl @ 0x80095A10 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct SwooshStreak SwooshStreak;

extern void SwooshStreak__Deactivate(SwooshStreak *streak, int mode);
extern void SwooshStreak__Destroy(SwooshStreak *streak);

void Avatar__StopSwooshStreakImpl(char *avatar) {
    SwooshStreak **streak;
    int zero;
    int count;

    zero = 0;
    streak = (SwooshStreak **)(avatar + 1264);
    count = 16;
    do {
        if (*streak != 0) {
            SwooshStreak__Deactivate(*streak, 0);
            SwooshStreak__Destroy(*streak);
            *streak = (SwooshStreak *)zero;
        }
        streak += 1;
        count -= 1;
    } while (count != 0);
}
