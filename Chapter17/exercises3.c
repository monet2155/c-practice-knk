/**
 * Write the following function:
 * int *create_array(int n, int initial_value);
 * The function should return a pointer to a dynamically allocated int array with n members,
 * each of which is initialized to initial_value.
 * The return value should be NULL if the array can't be allocated.
 */

#include <stdio.h>
#include <stdlib.h>

#define ARRAY_LENGTH (10)

int *create_array(int n, int initial_value);

int main(void)
{
    int *array;
    int initial_value;

    printf("Enter initial value: ");
    scanf("%d", &initial_value);

    array = create_array(ARRAY_LENGTH, initial_value);

    if (array == NULL)
    {
        printf("NULL POINTER");
        return 0;
    }

    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        printf("%d : %d\n", i, array[i]);
    }

    return 0;
}

int *create_array(int n, int initial_value)
{
    int *p = malloc(n * sizeof(int));

    if (p == NULL)
    {
        return NULL;
    }

    // for(; p < p + n; p++)
    // 위 문장을 쓰게되면 p 가 증가함에 따라 반복문이 무한으로 돌게됨..
    for (int i = 0; i < n; i++)
    {
        p[i] = initial_value;
    }
    return p;
}

/**
 * https://github.com/williamgherman/c-solutions/tree/master/17/exercises/03
 * int *create_array(int n, int initial_value) {
    int *a, *p;
    if ((a = (int *) malloc(n * sizeof(int)) == NULL) {
        printf("Error: malloc failed\n");
        return NULL;
    }
    for (p = a; p < a + n; p++)
        *p = initial_value;
    return a;
}
*/