#include "main.h"
/**
 *_printStr - print string
 * @str: string to be print
 * Return: Nothing
 */
int _printStr(char *str)
{
    int len = 0;

    while (*str)
    {
        _printChar(str++);
        len++;
    }

    return (len);
}
