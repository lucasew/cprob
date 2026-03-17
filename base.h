#ifndef _CPROB_BASIC
#define _CPROB_BASIC

/**
 * @brief Calculates the factorial of a given integer n (n!).
 *
 * This function recursively computes the product of all positive integers
 * less than or equal to n.
 *
 * @param n The integer to calculate the factorial for. Must be >= 0.
 * @return The factorial of n as a long integer.
 *         Returns 1 if n is 0.
 *         Note: Factorial grows extremely fast. Ensure n is small enough
 *         (e.g., n <= 20 for 64-bit long) to avoid integer overflow.
 */
long int fat(int n);

/**
 * @brief Calculates the combination (binomial coefficient) of n choose p (C_n,p).
 *
 * This calculates the number of ways to choose p elements from a set of n elements,
 * without regard to the order of selection. The formula used is n! / (p! * (n-p)!).
 *
 * @param n The total number of items in the set.
 * @param p The number of items to choose from the set.
 * @return The number of combinations.
 *         Note: Due to the reliance on the `fat` function, this calculation is highly
 *         susceptible to integer overflow for relatively small values of n.
 */
int comb(int n, int p);

#endif
