// Is the following if statement legal?

/**
 * if (n >= 1 <= 10)
 * printf("n is between 1 and 10\n")
 */

// If so, what does it do when n is equal to 0?

// Answer: Ilegal. n >= 1 is always return 1 or 0.
// So can't not recognize n is less than 10. And always execute statement