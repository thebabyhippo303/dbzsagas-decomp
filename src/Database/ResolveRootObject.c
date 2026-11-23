/* Database__ResolveRootObject @ 0x80205BE0 (size: 0x12C, .text, ProDG 3.9.3 -O2) - MATCHED */
void *Database__GetArrayElement(void *, unsigned int);
void *Database__GetTypedObject(int, const char *, void *, int);

void Database__ResolveRootObject(void *out, void *db, const char *name) {
    void *obj;

    obj = Database__GetTypedObject(98, name, db, 0);
    if (obj != 0) {
        ((void **)out)[1] = Database__GetArrayElement(obj, 0);
        ((void **)out)[0] = 0;
        return;
    }
    obj = Database__GetTypedObject(33, name, db, 0);
    ((void **)out)[0] = obj;
    if (obj == 0) {
        obj = Database__GetTypedObject(32, name, db, 0);
        ((void **)out)[0] = obj;
        if (obj == 0) {
            obj = Database__GetTypedObject(39, name, db, 0);
            ((void **)out)[0] = obj;
            if (obj == 0) {
                obj = Database__GetTypedObject(34, name, db, 0);
                if (obj == 0) {
                    obj = Database__GetTypedObject(35, name, db, 0);
                    if (obj == 0) {
                        obj = Database__GetTypedObject(40, name, db, 0);
                        if (obj != 0) {
                            ((void **)out)[0] = Database__GetArrayElement(obj, 0);
                        }
                    } else {
                        ((void **)out)[0] = Database__GetArrayElement(obj, 0);
                    }
                } else {
                    ((void **)out)[0] = Database__GetArrayElement(obj, 0);
                }
            }
        }
    }
    ((void **)out)[1] = 0;
}
