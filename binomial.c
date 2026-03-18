/* BINOMIAL
 *  X ~ Bin(n, p)
 */
#include <math.h>
#include "base.h"
#include "bernoulli.c"
// E(X)
double bin_get_esperanca(int n, double p) {
    return n*p;
}

// V(X)
double bin_get_variancia(int n, double p) {
    return n * ber_get_variancia(p);
}

// P(X=x)
double bin_get_prob_at(int n, double p, int x) {
    return comb(n, x)*pow(p, x)*pow((1 - p), n - x);
}


