/* Environment__CacheEntityTypeIndex @ 0x800EAF8C (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Environment__CacheEntityTypeIndex @ 0x800EAF8C (0x34). ProDG -O2. */
extern int Environment__GetEntityTypeIndex(const char *name);

int Environment__CacheEntityTypeIndex(void *self, char *entity) {
    int index;

    (void)self;
    index = Environment__GetEntityTypeIndex(entity + 448);
    *(int *)(entity + 516) = index;
    return index;
}
