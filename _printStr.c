#include "main.h"
/**
 *_printStr - print string
 * @str: string to be print
 * Return: Nothing
 */
int _printStr(char *str)
{
    int i = 0;

    while (*str[i])
    {
        _printChar(*str[i]);
        i++;
    }

    return (i);
}
