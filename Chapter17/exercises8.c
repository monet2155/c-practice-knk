/**
 * Section 15.2 describes a file, stack.c, that provides functions for storing integers in a
 * stack. In that section, the stack was implemented as an array.
 * Modify stack.c so that a stack is now stored as a linked list.
 * Replace the contents and top vvariables by a single variable that points to the
 * first node in the list (the "top" of the stack).
 * Write the functions in stack.c so that they use this pointer. Remove the is_full function,
 * instead having push return either true (if memory was available to create a node) or false (if not).
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node
{
    int value;
    struct node *next;
};

void make_empty(void);
bool is_empty(void);
bool push(int value);
int pop(void);

struct node *top = NULL;

int main(void)
{

    int value;

    for (;;)
    {
        printf("Enter values (0 to terminate) : ");
        scanf("%d", &value);

        if (value == 0)
        {
            break;
        }

        push(value);
    }

    for (; !is_empty();)
    {
        printf("value is : %d\n", pop());
    }

    return 0;
}

void make_empty(void)
{
    struct node *temp;
    while (top != NULL)
    {
        temp = top;
        top = top->next;
        free(temp);
    }
}

bool is_empty(void)
{
    return top == NULL;
}
// 계속 안됐던 이유.. struct node *top을 받으면 주소가 아니라 포인터가 복사됨 (copy by value)
// 원하던 대로 하려면 이중 포인터 써야될듯
bool push(int value)
{
    struct node *new_node = malloc(sizeof(struct node));
    if (new_node == NULL)
    {
        printf("Error : memory allocation failed");
        return false;
    }

    new_node->value = value;

    new_node->next = top;
    top = new_node;

    return true;
}

int pop(void)
{
    int value;
    struct node *temp;

    if (is_empty())
    {
        printf("*** Stack underflow; program terminated. ***\n");
        exit(EXIT_FAILURE);
    }

    value = top->value;
    temp = top;

    top = top->next;

    free(temp);

    return value;
}