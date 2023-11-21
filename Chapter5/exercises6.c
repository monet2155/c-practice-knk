// Is the following if statement legal?

/**
 * if (n==1-10)
 * printf("n is between 1 and 10\n");
 */

// Answer: Ilegal. Because equality operator's priority is lower than arithmetic operator.
// So n == (1-10)