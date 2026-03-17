#include "base.h"

/**
 * Computes factorial via simple recursion.
 * Note: Lacks overflow bounds checks. Use caution with inputs > 20.
 */
long int fat(int n) {
    return n == 0 ? 1: n * fat(n - 1);
}

/**
 * Computes combinations strictly through the n!/(p!(n-p)!) formula.
 * The strict mathematical translation makes it simple, but heavily
 * sensitive to the factorial overflow limitation.
 */
int comb(int n, int p) {
    return fat(n)/(fat(p)*fat(n-p));
}
