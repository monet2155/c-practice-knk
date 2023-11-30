/**
 * Modify the delete_from_list function
 * so that it uses only one pointer variable instead of two(cur and prev)
 */

#include <stdlib.h>

struct node
{
    int value;
    struct node *next;
};

// https://github.com/williamgherman/c-solutions/tree/master/17/exercises/06
// 첫번째 노드의 포인터에 포인터가 매개변수로 들어옴
struct node *delete_from_list(struct node **list, int n)
{
    // 첫번재 노드의 포인터(**list의 값이니)를 item에 넣어줌
    struct node *item = *list;
    while (item)
    {
        // (*item).value니 정상
        if (item->value == n)
        {
            // 노드의 포인터 (**list의 값이니)에 cur의 next를 넣어줌
            *list = item->next;
            free(item);
            break;
        }
        // 못찾았으면 첫번째 노드의 포인터의 포인터를 다음 노드의 포인터의 주소값으로 할당
        list = &item->next;
        // cur는 다음 노드의 포인터로 할당
        item = item->next;
    }

    // 정리하면, 이중포인터로 헷갈릴 뿐 매개변수로 포인터를 받고 원본을 수정하는 함수임
    // 사실상 *list를 return 해줄 필요는 없음 (실제로 반환값을 사용하고 있지 않음)
    // 노드를 가리키던 포인터가 다음 노드를 가리키게 함으로 삭제
    return *list;
}

// struct node *delete_from_list(struct node *list, int n)
// {
//     struct node *cur;

//     for (cur = list; cur != NULL && cur->value != n; cur = cur->next)
//     {
//     }

//     if (cur == NULL)
//     {
//         return list;
//     }

//     if ((cur - 1) == NULL)
//     {
//         list = list->next;
//     }
//     else
//     {
//         (cur - 1)->next = cur->next;
//     }

//     free(cur);
//     // list_count--;

//     return list;
// }