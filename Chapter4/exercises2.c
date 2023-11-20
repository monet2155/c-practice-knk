// If i and j are positive integers, does (-i) / j always have the same value as -(i/j)? Justify you answer

// Answer:
// 2. [was #2] Not in C89. Suppose that i is 9 and j is 7.
// The value of (-i)/j could be either –1 or –2, depending on the implementation.
// On the other hand, the value of -(i/j) is always –1, regardless of the implementation.
// In C99, on the other hand, the value of (-i)/j must be equal to the value of -(i/j).