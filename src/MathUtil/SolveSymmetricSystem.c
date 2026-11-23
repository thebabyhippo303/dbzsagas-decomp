/* MathUtil__SolveSymmetricSystem @ 0x8017E0F0 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: MathUtil__SolveSymmetricSystem @ 0x8017E0F0 (0x58). ProDG -O2. */
extern int MathUtil__FactorSymmetricMatrix(void *matrix, void *factor);
extern void MathUtil__SolveFactoredSystem(void *matrix, void *rhs, void *factor);

int MathUtil__SolveSymmetricSystem(void *matrix, void *rhs, void *factor) {
    if (MathUtil__FactorSymmetricMatrix(matrix, factor) == 0)
        return 0;
    MathUtil__SolveFactoredSystem(matrix, rhs, factor);
    return 1;
}
