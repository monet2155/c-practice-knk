
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value;
    struct node *next;
};

/**
 * Write the following function:
 */
int count_occurrences(struct node *list, int n);

/**
 * The list parameter points to a linked list;
 * the function should return the number of times that
 * n appears in this list. Assume that the node structure is the one defined in Section 17.5.
 */

int count_occurrences(struct node *list, int n)
{
    struct node *p = list;
    int sum = 0;

    for (; p != NULL; p = p->next)
    {
        if (p->value == n)
        {
            ++sum;
        }
    }

    return sum;
}

/**
 * https://github.com/williamgherman/c-solutions/tree/master/17/exercises/11
 * int count_occurrences(struct node *list, int n) {
 *  int sum = 0;
 *  while (list != NULL) {
 *     if (list->value == n)
 *         sum++;
 *     list = list->next;
 *  }
 *  return sum;
 * }
 */