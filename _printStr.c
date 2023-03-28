#include "main.h"
/**
 * _printStr - Write a string to stdout
 * @str: The string to write
 *
 * Return: The number of characters written
 */
int _printStr(char *str)
{
    int i;

    if (str == NULL)
        return (0);

    for (i = 0; str[i] != '\0'; i++)
    {
        _printChar(str[i]);
    }

    return (i);
}
