// Modify the compare_parts function so that parts are sorted with their numbers in descending order.
#define NAME_LEN (25)

struct part
{
    int number;
    char name[NAME_LEN + 1];
    int on_hand;
    struct part *next;
};

int compare_parts(const void *p, const void *q)
{
    const struct part *p1 = p;
    const struct part *q1 = q;

    if (p1->number > q1->number)
    {
        return -1;
    }
    else if (p1->number == q1->number)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}