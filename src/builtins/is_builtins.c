/*
** EPITECH PROJECT, 2023
** minishell2
** File description:
** is_builtins
*/

#include "my.h"

int is_builtins(char **args)
{
    for (int i = 0; commands[i].name != NULL; i++) {
        if (my_strcmp(args[0], commands[i].name) == 0) {
            return 1;
        }
    }
    return 0;
}
