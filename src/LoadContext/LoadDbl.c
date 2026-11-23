/* LoadContext__LoadDbl @ 0x802521A0 (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Database__LoadAndRegisterDblFromContext @ 0x802521A0 (0x34). ProDG -O2. */
typedef struct {
    const char *base_path;
    char pad_004[8];
    const char *default_extension;
} DatabaseContext;

extern int fn_8025238C(const char *base_path, void *options,
                       const char *extension);

int Database__LoadAndRegisterDblFromContext(DatabaseContext *context,
                                            void *options,
                                            const char *extension) {
    const char *base_path = context->base_path;
    if (extension == 0)
        extension = context->default_extension;
    return fn_8025238C(base_path, options, extension);
}
