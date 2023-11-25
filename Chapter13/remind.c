// Prints a one-month reminder list

#include <stdio.h>
#include <string.h>

#define MAX_REMIND (50)
#define MSG_LEN (60)

int read_line(char str[], int n);

int main(void)
{
    char reminders[MAX_REMIND][MSG_LEN + 3];
    char day_str[3], msg_str[MSG_LEN + 1];

    int day, i, j;
    int num_remind = 0;

    for (;;)
    {
        if (num_remind == MAX_REMIND)
        {
            printf("-- No space left --\n");
            break;
        }

        printf("Enter day and reminder: ");
        scanf("%2d", &day);
        if (day == 0)
        {
            break;
        }

        // day를 day_str에 넣어준다
        sprintf(day_str, "%2d", day);
        read_line(msg_str, MSG_LEN);

        // i를 변경해주기 위한 반복문
        for (i = 0; i < num_remind; i++)
        {
            if (strcmp(day_str, reminders[i]) < 0)
            {
                break;
            }
        }
        // 변경된 i는 여기서 사용됨
        // 만약 위에서 break가 걸리지 않았다면 j > i 조건이 걸리지 않으면서, 아래 반복문이 실행되지 않음
        // 아래 반복문은 숫자가 높은 리마인더를 한칸씩 아래로 내리는 구문
        for (j = num_remind; j > i; j--)
        {
            strcpy(reminders[j], reminders[j - 1]);
        }

        strcpy(reminders[i], day_str);
        strcat(reminders[i], msg_str);

        num_remind++;
    }

    printf("\nDay Reminder\n");
    for (i = 0; i < num_remind; i++)
    {
        printf(" %s\n", reminders[i]);
    }

    return 0;
}

int read_line(char str[], int n)
{
    int ch;
    int i = 0;

    while ((ch = getchar()) != '\n')
    {
        if (i < n)
        {
            str[i++] = ch;
        }
    }

    str[i] = '\0';
    return i;
}