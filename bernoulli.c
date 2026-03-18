/**
 * @file bernoulli.c
 * @brief Implementation of the Bernoulli probability distribution.
 *
 * A Bernoulli distribution represents a single discrete experiment with exactly
 * two possible outcomes: success (probability p) and failure (probability 1 - p).
 * It forms the basis for more complex discrete distributions, such as Binomial.
 * Note: These functions assume valid inputs (0 <= p <= 1) and lack explicit bounds checking.
 *
 * X ~ Ber(p)
 */

#include "base.h"

/**
 * Expected value simply returns the probability of success, as 1*p + 0*(1-p) = p.
 */
double ber_get_esperanca(double p) {
    return p;
}

/**
 * Returns the probability of the mutually exclusive complement event (failure).
 */
double ber_get_complemento(double p) {
    return 1 - p;
}

/**
 * Variance measures the spread. It's highest (0.25) when outcomes are equally likely (p=0.5).
 */
double ber_get_variancia(double p) {
    return p*(1-p);
}


