
#include <stdio.h>
#include <stdlib.h>

/**
 * Suppose that the following declarations are in effect:
 */

struct point
{
    int x, y;
};
struct rectangle
{
    struct point upper_left, lower_right;
};

int main(void)
{
    struct rectangle *p;

    struct point *upper_left, *lower_right;

    p = malloc(sizeof(struct rectangle));

    if (p == NULL)
    {
        printf("NULL POINTER ON RECTANGLE\n");
        return 0;
    }

    lower_right = malloc(sizeof(struct point));
    upper_left = malloc(sizeof(struct point));

    if (lower_right == NULL || upper_left == NULL)
    {
        printf("NULL POINTER ON POINT\n");
        return 0;
    }

    lower_right->x = 20;
    lower_right->y = 15;

    upper_left->x = 10;
    upper_left->y = 25;

    p->upper_left = *upper_left;
    p->lower_right = *lower_right;

    printf("Rectangle's upper left is %d,%d\n", p->upper_left.x, p->upper_left.y);
    printf("Rectangle's lower right is %d,%d\n", p->lower_right.x, p->lower_right.y);

    return 0;
}

/**
 * Assume that we want p to point to a rectangle structure whose upper left corner is at (10,25)
 * and whose lower right corner is at (20, 15).
 * Write a series of statements that allocate such a structure and initialize it as indicated
 */

/**
 * https://github.com/williamgherman/c-solutions/tree/master/17/exercises/04
 * p = (struct rectangle *) malloc(sizeof(struct rectangle));
 * p->upper_left = {10, 25};
 * p->lower_right = {20, 15};
 */