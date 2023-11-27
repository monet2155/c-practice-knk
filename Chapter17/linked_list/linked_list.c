
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value;
    struct node *next;
};

struct node *add_to_list(struct node *list, int value);
struct node *read_numbers(void);
struct node *search_list(struct node *list, int n);
struct node *delete_from_list(struct node *list, int n);

int list_count = 0;

int main(void)
{
    struct node *first = NULL;

    first = read_numbers();

    delete_from_list(first, 20);

    for (; first != NULL; first = first->next)
    {
        printf("value: %d\n", first->value);
    }

    return 0;
}

struct node *add_to_list(struct node *first, int value)
{
    struct node *new_node;
    new_node = malloc(sizeof(struct node));

    if (new_node == NULL)
    {
        printf("Error: malloc failed in add_to_list\n");
        exit(EXIT_FAILURE);
    }

    new_node->value = value;
    new_node->next = first;

    return new_node;
}

struct node *read_numbers(void)
{
    struct node *first = NULL;
    int n;

    printf("Enter a series of integers (0 to terminate): ");
    for (;;)
    {
        scanf("%d", &n);
        if (n == 0)
        {
            return first;
        }

        first = add_to_list(first, n);
        list_count++;
    }
}

struct node *search_list(struct node *list, int n)
{
    for (; list != NULL; list = list->next)
    {
        if (list->value == n)
        {
            return list;
        }
    }
    return NULL;
}

struct node *delete_from_list(struct node *list, int n)
{
    struct node *cur;
    struct node *prev;

    for (cur = list, prev = NULL; cur != NULL && cur->value != n; prev = cur, cur = cur->next)
    {
    }

    if (cur == NULL)
    {
        return list;
    }

    if (prev == NULL)
    {
        list = list->next;
    }
    else
    {
        prev->next = cur->next;
    }

    free(cur);
    list_count--;

    return list;
}