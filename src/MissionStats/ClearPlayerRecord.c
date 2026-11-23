/* MissionStats__ClearPlayerRecord @ 0x80125B58 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct PlayerRecord {
    char pad[308];
    char a;
    char mid[11];
    char b;
} PlayerRecord;

extern void fn_801261FC(void *part);
extern void fn_8012621C(void *self);

void MissionStats__ClearPlayerRecord(PlayerRecord *self) {
    fn_801261FC(&self->a);
    fn_801261FC(&self->b);
    fn_8012621C(self);
}
