/**
 * The following function is supposed to insert a new node into its proper place in an ordered list,
 * returning a pointer to the first node in the modified list.
 * Unfortunately, the function doesn't work correctly in all cases.
 * Explain what's wrong with it and show how to fix it.
 * Assume that the node structure is the one defined in Section 17.5.
 */

#include <stdlib.h>

struct node
{
    int value;
    struct node *next;
};

// Modify to use pointer to pointer
struct node *insert_into_ordered_list(struct node *list, struct node *new_node)
{
    struct node *cur = list;
    struct node *prev = NULL;

    while (cur->value <= new_node->value)
    {
        prev = cur;
        cur = cur->next;
    }

    prev->next = new_node;
    new_node->next = cur;

    return list;
}
// And not handled when empty list or cur is null

/**
 * struct node *insert_into_ordered_list(struct node *list, struct node *new_node)
 * {
 *      struct node **pp = &list;
 *      while (list != NULL) {
 *          if (list->value >= new_node->value)
 *             break;
 *         pp = &list->next;
 *         list = list->next;
 *     }
 *     *pp = new_node;
 *     new_node = list;
 * }
 */