/* Script__GetOwnerActor @ 0x802CC5D0 (size: 0x8, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Script__GetOwnerActor @ 0x802CC5D0 (0x8). ProDG -O2. */
typedef struct {
    char pad[0xC8];
    void *owner;
} ScriptContext;

void *Script__GetOwnerActor(ScriptContext *script) {
    return script->owner;
}
