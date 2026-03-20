#ifndef _CPROB_DISCRETE_BIN
#define _CPROB_DISCRETE_BIN

/**
 * @file binomial.h
 * @brief Binomial distribution probability module.
 *
 * Provides functions for calculating the expected value, variance, and
 * probability mass function for a binomial distribution. This models the
 * number of successes in a sequence of n independent experiments, each asking
 * a yes/no question, and each with its own boolean-valued outcome.
 */

/**
 * @brief Calculates the expected value (mean) of a binomial distribution.
 *
 * @param n Total number of independent trials.
 * @param p Probability of success in each individual trial.
 * @return The expected number of successes.
 */
double bin_get_esperanca(int n, double p);

/**
 * @brief Calculates the variance of a binomial distribution.
 *
 * @param n Total number of independent trials.
 * @param p Probability of success in each individual trial.
 * @return The variance, quantifying the spread of the distribution.
 */
double bin_get_variancia(int n, double p);

/**
 * @brief Calculates the probability mass function (PMF) for exactly x successes.
 *
 * @param n Total number of independent trials.
 * @param p Probability of success in each individual trial.
 * @param x The specific number of successes to calculate the probability for.
 * @return The probability of getting exactly x successes in n trials.
 */
double bin_get_prob_at(int n, double p, int x);

#endif
