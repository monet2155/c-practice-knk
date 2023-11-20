// The algorithm for computing the UPC check digit ends with the following steps:

// Subtract 1 from the total.
// Compute the remainder when the adjusted total is divided by 10
// Subtract the remainder from 9

// It's tempting to try to simplify the algorithm by using these steps instead:
// Compute the remainder when the total is divided by 10.
// Subtract the remainder from 10.

// Why doesn't this technique work?

// if total is 20, origin answer is 0
// new algorithm's answer is 0

// if total is 11, origin answer is -9
// new algorithm's answer is -9

// https://github.com/williamgherman/c-solutions/tree/master/04/exercises/07
// The second, "simplified" algorithm could produce a check digit of 10, which would not be valid.
// if total is 10, origin answer is -1
// new algorithm's answer is -10
// ====> check digit has only one digit