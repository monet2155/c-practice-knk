// Write a function that, when given a string as its argument, searches the following array of
// structures for a matching command name, then calls the function associated with that name.

#include <string.h>

#define COMMAND_LIST_LENGTH (30)

struct command
{
    char *name;
    void (*f)(void);
} command_list[COMMAND_LIST_LENGTH];

void call_command(char *command_name)
{
    int i;
    for (i = 0; i < COMMAND_LIST_LENGTH; i++)
    {
        if (strcmp(command_list[i].name, command_name))
        {
            (*command_list[i].f)();
            break;
        }
    }
}