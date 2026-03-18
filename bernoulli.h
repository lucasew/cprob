#ifndef _CPROB_BERNOULLI
#define _CPROB_BERNOULLI

/**
 * @brief Calculates the expected value (esperanca) of a Bernoulli distribution.
 *
 * For a Bernoulli random variable X ~ Ber(p), representing a single trial
 * with a boolean outcome, the expected value E(X) is simply the probability
 * of success p.
 *
 * @param p The probability of success in a single trial. Must be in [0, 1].
 * @return The expected value, which is identical to the input probability p.
 */
double ber_get_esperanca(double p);

/**
 * @brief Calculates the complement probability (failure) of a Bernoulli event.
 *
 * In a Bernoulli trial, there are only two outcomes: success (with probability p)
 * and failure. This function calculates the probability of failure, often
 * denoted as q or 1 - p.
 *
 * @param p The probability of success in a single trial. Must be in [0, 1].
 * @return The probability of failure, 1 - p.
 */
double ber_get_complemento(double p);

/**
 * @brief Calculates the variance of a Bernoulli distribution.
 *
 * The variance V(X) of a Bernoulli random variable X ~ Ber(p) represents
 * the spread of the possible outcomes. It is maximized when p = 0.5 (maximum
 * uncertainty) and is 0 when p = 0 or p = 1 (deterministic outcome).
 *
 * @param p The probability of success in a single trial. Must be in [0, 1].
 * @return The variance, calculated as p * (1 - p).
 */
double ber_get_variancia(double p);

#endif
