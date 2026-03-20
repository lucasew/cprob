/**
 * @file binomial.c
 * @brief Implementation of the Binomial distribution probability functions.
 *
 * Provides concrete implementations for the mathematical operations relating to
 * the binomial distribution, relying on underlying combinations and Bernoulli
 * characteristics.
 *
 * X ~ Bin(n, p)
 */
#include <math.h>
#include "base.h"
#include "bernoulli.c"

/**
 * @brief Computes Expected Value E(X)
 */
double bin_get_esperanca(int n, double p) {
    return n*p;
}

/**
 * @brief Computes Variance V(X)
 *
 * The variance of a binomial distribution is directly related to the sum of the
 * variances of the underlying individual Bernoulli trials.
 */
double bin_get_variancia(int n, double p) {
    return n * ber_get_variancia(p);
}

/**
 * @brief Computes Probability P(X=x)
 *
 * Determines the probability of getting exactly 'x' successes in 'n' independent
 * Bernoulli trials by calculating the combinations of possible sequences and
 * weighting them by the individual success and failure probabilities.
 */
double bin_get_prob_at(int n, double p, int x) {
    return comb(n, x)*pow(p, x)*pow((1 - p), n - x);
}


