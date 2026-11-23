/* TriggerBox__DestroyInstances @ 0x80032C80 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct { int count; void *data; } TBInst;
TBInst *Script__PopInt(void *, void *);
void Mem__Delete(void *);
void Mem__DeleteArray(void *);
extern int lbl_803DC3F4 __attribute__((section(".sdata")));

void TriggerBox__DestroyInstances(void *arg0, void *arg1) {
    int c;
    TBInst *inst = Script__PopInt(arg0, arg1);
    if (inst != 0) {
        if (inst->data != 0) {
            Mem__DeleteArray(inst->data);
        }
        c = lbl_803DC3F4;
        c -= 1;
        c -= inst->count;
        lbl_803DC3F4 = c;
        Mem__Delete(inst);
    }
}
